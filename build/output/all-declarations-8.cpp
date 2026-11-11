#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                          const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                          GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                          const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                          const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
                                                                          GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GGS_string temp_14 ;
  const GalgasBool test_15 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_15) {
    temp_14 = GGS_string ("EBAutoLayoutManagedDocument") ;
  }else if (GalgasBool::boolFalse == test_15) {
    const GGS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GGS_string var_s_11947 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 329))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12618 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 346)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 346)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12618, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 347)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12618, var_s_11947, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 348)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_12805 (temp_19.readProperty_mConfiguratorMap ()) ;
  while (enumerator_12805.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_12857 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12805.current_lkey (HERE).readProperty_string (), enumerator_12805.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 354))) ;
    GGS_string var_header_13039 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 359)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 359)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 359)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 361)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 361)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 361)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 361)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 363)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13415 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (enumerator_12805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13415, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 366)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13415, GGS_string ("//"), var_header_13039, GGS_string ("\n\n"), var_s_12857, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 367)) ;
    }
    enumerator_12805.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_13994 (temp_22.readProperty_mOutletLinkerGenerationList ()) ;
  while (enumerator_13994.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_14068 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_13994.current_mLinkerName (HERE), enumerator_13994.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 380))) ;
    GGS_string var_header_14240 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 388)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14616 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)).add_operation (enumerator_13994.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14616, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 392)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14616, GGS_string ("//"), var_header_14240, GGS_string ("\n\n"), var_s_14068, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 401)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 401)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 401)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 393)) ;
    }
    enumerator_13994.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  3,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                            const GGS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const GGS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                            const GGS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                            const GGS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                            const GGS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                            const GGS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const GGS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const GGS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_543_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_543 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_543.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_543.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 14)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 14)).stringValue ()) ;
      enumerator_543.gotoNextObject () ;
      index_543_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_923_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_923 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_923.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_923.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_923.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_923.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_923.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_923.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_923.gotoNextObject () ;
      index_923_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1430_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_1430 (in_OUTLET_5F_GENERATION_5F_MAP) ;
    while (enumerator_1430.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1430.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1430.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1430.gotoNextObject () ;
      index_1430_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1840_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_1840 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_1840.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1840.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1840.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1840.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1840.gotoNextObject () ;
      index_1840_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3086_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_3086 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_3086.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3086.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3086.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3086.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 79)).stringValue ()) ;
      enumerator_3086.gotoNextObject () ;
      index_3086_.increment () ;
    }
  }
  GGS_uint index_3462_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_3462 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_3462.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3462_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 83)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3462_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3462.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 86)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_3462.gotoNextObject () ;
      index_3462_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4653_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4653 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST) ;
    while (enumerator_4653.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4653.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4752_ (0) ;
      if (enumerator_4653.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_4752 (enumerator_4653.current_mOutletNameAndTypeNameList (HERE)) ;
        while (enumerator_4752.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4752.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          enumerator_4752.gotoNextObject () ;
          if (enumerator_4752.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_4752_.increment () ;
        }
      }
      result.appendString (")\n") ;
      enumerator_4653.gotoNextObject () ;
      index_4653_.increment () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5241_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5241 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5241.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5241.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5241.gotoNextObject () ;
      index_5241_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (Compiler * /* inCompiler */,
                                                                                                              const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func configure_") ;
  result.appendString (in_OUTLET_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inOutlet : AutoLayout") ;
  result.appendString (in_OUTLET_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                const GGS_string & in_LINKER_5F_NAME,
                                                                                                const GGS__5B__32_string_5D_ & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_225_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_225 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST) ;
    while (enumerator_225.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_225.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_225.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString ("\?") ;
      enumerator_225.gotoNextObject () ;
      if (enumerator_225.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_225_.increment () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 24)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@prefsDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_prefsDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_prefsDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_preferencesName (Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("Preferences") ;
//---
  return result_outResult ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GGS_string gOnceFunctionResult_preferencesName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_preferencesName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_preferencesName) {
    gOnceFunctionResult_preferencesName = onceFunction_preferencesName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_preferencesName = true ;
  }
  return gOnceFunctionResult_preferencesName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_preferencesName (void) {
  gOnceFunctionResult_preferencesName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_preferencesName (nullptr,
                                                           releaseOnceFunctionResult_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_3942 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3942, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 94)) ;
  }
  {
  GGS_propertyGenerationList temp_1 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.galgas4", 97)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_3942, temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 95)) ;
  }
  UpEnumerator_actionMap enumerator_4084 (var_actionMap_3942) ;
  while (enumerator_4084.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_2 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_2.readProperty_mClassName ().readProperty_string (), enumerator_4084.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 103)) ;
    }
    enumerator_4084.gotoNextObject () ;
  }
  const GGS_prefsDeclarationAST temp_3 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_3.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  GGS_stringset var_availableCallers_4747 = temp_0 ;
  GGS_externFunctionMap var_externFunctionMap_4816 = GGS_externFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  UpEnumerator_externSwiftFunctionList enumerator_4872 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList ()) ;
  while (enumerator_4872.hasCurrentObject ()) {
    {
    var_externFunctionMap_4816.setter_insertKey (enumerator_4872.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 124)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_availableCallers_4747.getter_contains (enumerator_4872.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.galgas4", 125)).operator_not (SOURCE_FILE ("preferences.galgas4", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_5068 = GGS_string ("invalid caller; available callers:") ;
        UpEnumerator_stringset enumerator_5120 (var_availableCallers_4747) ;
        while (enumerator_5120.hasCurrentObject ()) {
          var_s_5068.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_5120.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 128)) ;
          enumerator_5120.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4872.current_mCallerName (HERE).readProperty_location (), var_s_5068, fixItArray3  COMMA_SOURCE_FILE ("preferences.galgas4", 130)) ;
      }
    }
    enumerator_4872.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5359 ;
  GGS_actionMap var_actionMap_5392 ;
  GGS_propertyGenerationList var_propertyGenerationList_5412 ;
  GGS_classKind joker_5346 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 135)), inCompiler COMMA_HERE), joker_5346, var_preferencesPropertyMap_5359, var_actionMap_5392, var_propertyGenerationList_5412, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5778 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_5849 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5921 ;
  GGS_decoratedOutletMap var_outletMap_5982 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6034 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6121 ;
  {
  const GGS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5359, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5359, var_actionMap_5392, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5778, var_multipleBindingGenerationList_5849, var_actionBindingListForGeneration_5921, var_outletMap_5982, var_tableViewBindingGenerationList_6034, var_ebViewGraphicControllerBindingGenerationList_6121, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6247 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_5 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 162)) ;
  GGS_viewGenerationList var_viewGenerationList_6297 = temp_5 ;
  GGS_implicitViewFunctionGenerationList temp_6 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 163)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6363 = temp_6 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6436 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6484 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_7 = this ;
  UpEnumerator_astViewDeclarationList enumerator_6526 (temp_7.readProperty_mDeclaration ().readProperty_mViewDeclarationList ()) ;
  while (enumerator_6526.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6247.setter_insertKey (enumerator_6526.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7029 ;
    const GGS_prefsDeclarationAST temp_8 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6526.current_mView (HERE).ptr (), enumerator_6526.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6247, GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5359, ioArgument_ioSemanticContext, GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5392, temp_8.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6363, var_configuratorMap_6436, var_autoLayoutOutletMap_6484, var_viewGeneration_7029, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 168)) ;
    {
    var_viewGenerationList_6297.setter_append (enumerator_6526.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7029, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 184)) ;
    }
    enumerator_6526.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_viewDeclarationMap_6247.getter_contains (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.galgas4", 186)).operator_not (SOURCE_FILE ("preferences.galgas4", 186)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray10  COMMA_SOURCE_FILE ("preferences.galgas4", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5412, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5778, var_multipleBindingGenerationList_5849, var_actionBindingListForGeneration_5921, var_outletMap_5982, temp_11.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6034, var_ebViewGraphicControllerBindingGenerationList_6121, var_viewGenerationList_6297, var_implicitViewFunctionGenerationList_6363, var_configuratorMap_6436, var_autoLayoutOutletMap_6484, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 190)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_3,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_1,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_2,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  3,
  gWrapperAllDirectories_prefsGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_prefsGenerationTemplate_preferences (Compiler * inCompiler,
                                                                    const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                    const GGS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                    const GGS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                    const GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                    const GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                    const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                    const GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                    const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                    const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor var g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\? = nil\n\n//--------------------------------------------------------------------------------------------------\n\nclass ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_SuperClass, NSWindowDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mWindow : CanariWindow\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Show Preferences window\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n    let window : CanariWindow\n    if let w = self.mWindow {\n      window = w\n    }else{\n      window = CanariWindow (\n        contentRect: .zero,\n        styleMask: [.closable, .resizable, .titled],\n        backing: .buffered,\n        defer: false\n      )\n      self.mWindow = window\n      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n      window.title = \"Preferences\"\n      window.isReleasedWhenClosed = false\n      window.setContentView (self.mPrefsMainView ())\n    //--- Contrôler le comportement en plein écran\n      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n      let zoomButton = window.standardWindowButton (.zoomButton)\n      zoomButton\?.isEnabled = false\n    }\n    window.makeKeyAndOrderFront (nil)\n  }\n\n") ;
  GGS_uint index_1888_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_1888 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_1888.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_1888.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1888.current_mView (HERE).ptr (), GGS_bool (true), enumerator_1888.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      enumerator_1888.gotoNextObject () ;
      index_1888_.increment () ;
    }
  }
  GGS_uint index_2263_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_2263 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_2263.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2263.current_mInstruction (HERE).ptr (), GGS_bool (true), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_2263.gotoNextObject () ;
      index_2263_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3009_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_3009 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_3009.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_3009.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3009.gotoNextObject () ;
      index_3009_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3505_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_3505 (in_OUTLET_5F_MAP) ;
    while (enumerator_3505.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet var ") ;
      result.appendString (enumerator_3505.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_3505.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_3505.gotoNextObject () ;
      index_3505_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3909_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_3909 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_3909.hasCurrentObject ()) {
      result.appendString ("  private var mController_") ;
      result.appendString (enumerator_3909.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\?\n") ;
      enumerator_3909.gotoNextObject () ;
      index_3909_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo Manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mUndoManager = UndoManager ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // The preferences window should register this object as delegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n    g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" = self\n  //--- Read from preferences\n") ;
  GGS_uint index_5212_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5212 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_5212.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5212.current_mProperty (HERE).ptr (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue ()) ;
      enumerator_5212.gotoNextObject () ;
      index_5212_.increment () ;
    }
  }
  result.appendString ("    //--- Extern functions\n") ;
  GGS_uint index_5363_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_5363 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_5363.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_5363.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_5363.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5363.gotoNextObject () ;
      index_5363_.increment () ;
    }
  }
  result.appendString ("//    }\n  }\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 134)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    awakeFromNib\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func awakeFromNib () {\n    DispatchQueue.main.async {\n") ;
  result.appendString (extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 150)).stringValue ()) ;
  GGS_uint index_6128_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_6128 (in_OUTLET_5F_MAP) ;
    while (enumerator_6128.hasCurrentObject ()) {
      result.appendString ("      checkOutletConnection (self.") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6128.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      enumerator_6128.gotoNextObject () ;
      index_6128_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install bindings\n") ;
  GGS_uint index_6406_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_regularBindingsGenerationList enumerator_6406 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST) ;
    while (enumerator_6406.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_6406.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6406.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_6520_ (0) ;
      if (enumerator_6406.current_mBoundObjectList (HERE).isValid ()) {
        UpEnumerator_boundObjectList enumerator_6520 (enumerator_6406.current_mBoundObjectList (HERE)) ;
        while (enumerator_6520.hasCurrentObject ()) {
          result.appendString (enumerator_6520.current_mBoundObjectString (HERE).stringValue ()) ;
          enumerator_6520.gotoNextObject () ;
          if (enumerator_6520.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_6520_.increment () ;
        }
      }
      result.appendString (enumerator_6406.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_6406.gotoNextObject () ;
      index_6406_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install multiple bindings\n") ;
  GGS_uint index_6753_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_6753 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_6753.hasCurrentObject ()) {
      result.appendString ("      do{\n        let controller = MultipleBindingController_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (\n          computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_6753.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (",\n          outlet: self.") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\n        )\n        self.mController_") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" = controller\n      }\n") ;
      enumerator_6753.gotoNextObject () ;
      index_6753_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Array controller\n") ;
  GGS_uint index_7240_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_tableViewBindingGenerationList enumerator_7240 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7240.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7240.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7240.gotoNextObject () ;
      index_7240_.increment () ;
    }
  }
  GGS_uint index_7470_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7470 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7470.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7470.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7470.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7470.gotoNextObject () ;
      index_7470_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Set targets / actions\n") ;
  GGS_uint index_7713_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    UpEnumerator_actionBindingListForGeneration enumerator_7713 (in_TARGET_5F_ACTION_5F_LIST) ;
    while (enumerator_7713.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7713.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7713.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7713.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      enumerator_7713.gotoNextObject () ;
      index_7713_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Extern functions\n") ;
  GGS_uint index_7995_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_7995 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_7995.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7995.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_7995.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_7995.gotoNextObject () ;
      index_7995_.increment () ;
    }
  }
  result.appendString ("    }\n    super.awakeFromNib ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8414_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8414 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8414.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8414.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 206)).stringValue ()) ;
      enumerator_8414.gotoNextObject () ;
      index_8414_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_8510_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8510 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8510.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8510.current_mProperty (HERE).ptr (), GGS_bool (true), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 211)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 211)).stringValue ()) ;
      enumerator_8510.gotoNextObject () ;
      index_8510_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@preferencesForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@preferencesForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_preferencesForGeneration temp_0 = this ;
  const GGS_preferencesForGeneration temp_1 = this ;
  const GGS_preferencesForGeneration temp_2 = this ;
  const GGS_preferencesForGeneration temp_3 = this ;
  const GGS_preferencesForGeneration temp_4 = this ;
  const GGS_preferencesForGeneration temp_5 = this ;
  const GGS_preferencesForGeneration temp_6 = this ;
  const GGS_preferencesForGeneration temp_7 = this ;
  const GGS_preferencesForGeneration temp_8 = this ;
  const GGS_preferencesForGeneration temp_9 = this ;
  const GGS_preferencesForGeneration temp_10 = this ;
  const GGS_preferencesForGeneration temp_11 = this ;
  GGS_string var_s_10633 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.galgas4", 266))) ;
  GGS_string var_fileName_11134 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11134, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 281)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11134, var_s_10633, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 282)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_11326 (temp_12.readProperty_mConfiguratorMap ()) ;
  while (enumerator_11326.hasCurrentObject ()) {
    GGS_string var_s_11378 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11326.current_lkey (HERE).readProperty_string (), enumerator_11326.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.galgas4", 289))) ;
    GGS_string var_header_11555 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 297)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 298)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)) ;
    GGS_string var_fileName_11930 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11326.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 300)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 300)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11930, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 301)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11930, GGS_string ("//"), var_header_11555, GGS_string ("\n\n"), var_s_11378, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 310)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 310)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 302)) ;
    }
    enumerator_11326.gotoNextObject () ;
  }
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
                                                                            const GGS__5B_string_5D_ & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS__5B_string_5D_ & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_544_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_544 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_544.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_544.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_544.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_544.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_544.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_544.gotoNextObject () ;
      index_544_.increment () ;
    }
  }
  GGS_uint index_905_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_905 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_905.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_905.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_905.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_905.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_905.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_905.gotoNextObject () ;
      index_905_.increment () ;
    }
  }
  GGS_uint index_1265_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1265 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_1265.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1265.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1265.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1265.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1265.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1265.gotoNextObject () ;
      index_1265_.increment () ;
    }
  }
  GGS_uint index_1633_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1633 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1633.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1633.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1633.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1633.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1633.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1633.gotoNextObject () ;
      index_1633_.increment () ;
    }
  }
  GGS_uint index_1997_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1997 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_1997.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1997.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1997.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1997.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1997.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1997.gotoNextObject () ;
      index_1997_.increment () ;
    }
  }
  GGS_uint index_2362_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_2362 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2362.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2362.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2362.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2362.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2362.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2362.gotoNextObject () ;
      index_2362_.increment () ;
    }
  }
  GGS_uint index_2919_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_2919 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_2919.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2919.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2919.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2919.gotoNextObject () ;
      index_2919_.increment () ;
    }
  }
  GGS_uint index_3510_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_3510 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_3510.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3510.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3510.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3510.gotoNextObject () ;
      index_3510_.increment () ;
    }
  }
  GGS_uint index_3809_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_3809 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3809.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3809.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3809.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3809.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3809.gotoNextObject () ;
      index_3809_.increment () ;
    }
  }
  GGS_uint index_4141_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4141 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4141.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4141.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4141.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4141.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4141.gotoNextObject () ;
      index_4141_.increment () ;
    }
  }
  GGS_uint index_4475_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4475 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_4475.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4475.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4475.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4475.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4475.gotoNextObject () ;
      index_4475_.increment () ;
    }
  }
  GGS_uint index_4782_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4782 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_4782.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4782.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4782.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4782.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4782.gotoNextObject () ;
      index_4782_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5411_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_5411 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_5411.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5411.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5411.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5650_ (0) ;
        if (enumerator_5411.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator__5B_string_5D_ enumerator_5650 (enumerator_5411.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_5650.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5650.current_entry (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_5650.gotoNextObject () ;
            index_5650_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5411.gotoNextObject () ;
      index_5411_.increment () ;
    }
  }
  GGS_uint index_6103_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_6103 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_6103.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6103.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6287_ (0) ;
      if (enumerator_6103.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_6287 (enumerator_6103.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6287.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6287.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6287.gotoNextObject () ;
          index_6287_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_6103.gotoNextObject () ;
      index_6103_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6563_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_6563 (in_GROUPS) ;
    while (enumerator_6563.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6563.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6563.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6690_ (0) ;
      if (enumerator_6563.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_6690 (enumerator_6563.current_mChildrenRefs (HERE)) ;
        while (enumerator_6690.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6690.current_entry (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_6690.gotoNextObject () ;
          index_6690_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6563.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6563.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_6563.gotoNextObject () ;
      index_6563_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_7002_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_7002 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_7002.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7002.current_entry (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_7002.gotoNextObject () ;
      index_7002_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7416_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_7416 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_7416.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7416.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7416.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7416.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7416.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7416.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7416.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7416.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7416.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7416.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_7416.gotoNextObject () ;
      index_7416_.increment () ;
    }
  }
  GGS_uint index_8348_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_8348 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8348.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8348.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8348.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8348.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8348.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8348.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8348.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8727_ (0) ;
      if (enumerator_8348.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_8727 (enumerator_8348.current_mDependentTargets (HERE)) ;
        while (enumerator_8727.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8727.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_8727.gotoNextObject () ;
          index_8727_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8348.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8348.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8348.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_8348.gotoNextObject () ;
      index_8348_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9805_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_9805 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9805.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9805.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9805.gotoNextObject () ;
      index_9805_.increment () ;
    }
  }
  GGS_uint index_10159_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10159 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10159.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10159.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10159.gotoNextObject () ;
      index_10159_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10626_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10626 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10626.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10626.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_10809_ (0) ;
      if (enumerator_10626.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_10809 (enumerator_10626.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_10809.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10809.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_10809.gotoNextObject () ;
          index_10809_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_10626.gotoNextObject () ;
      index_10626_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11259_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11259 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11259.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11259.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11426_ (0) ;
      if (enumerator_11259.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_11426 (enumerator_11259.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11426.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11426.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11426.gotoNextObject () ;
          index_11426_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11259.gotoNextObject () ;
      index_11259_.increment () ;
    }
  }
  GGS_uint index_11847_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11847 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11847.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11847.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12014_ (0) ;
      if (enumerator_11847.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_12014 (enumerator_11847.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_12014.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12014.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_12014.gotoNextObject () ;
          index_12014_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11847.gotoNextObject () ;
      index_11847_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12536_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12536 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12536.hasCurrentObject ()) {
      GGS_uint index_12574_ (0) ;
      if (enumerator_12536.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_12574 (enumerator_12536.current_mDependentTargets (HERE)) ;
        while (enumerator_12574.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12574.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12574.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_12574.gotoNextObject () ;
          index_12574_.increment () ;
        }
      }
      enumerator_12536.gotoNextObject () ;
      index_12536_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_13063_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_13063 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_13063.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_13063.current_entry (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13063.gotoNextObject () ;
      index_13063_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13378_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_13378 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_13378.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13378.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_13546_ (0) ;
      if (enumerator_13378.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_13546 (enumerator_13378.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_13546.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13546.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13546.gotoNextObject () ;
          index_13546_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13378.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13378.gotoNextObject () ;
      index_13378_.increment () ;
    }
  }
  GGS_uint index_14016_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_14016 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_14016.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14016.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14184_ (0) ;
      if (enumerator_14016.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_14184 (enumerator_14016.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14184.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14184.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14184.gotoNextObject () ;
          index_14184_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_14016.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14016.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_14016.gotoNextObject () ;
      index_14016_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_15066_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_15066 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_15066.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15066.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15066.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_15066.gotoNextObject () ;
      index_15066_.increment () ;
    }
  }
  GGS_uint index_15663_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_15663 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_15663.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15663.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15663.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_15663.gotoNextObject () ;
      index_15663_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outletClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_outletClassDeclarationAST temp_0 = this ;
  const GGS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 18)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.galgas4", 20)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@outletClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outletClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_outletClassDeclarationAST temp_2 = this ;
      const GGS_outletClassDeclarationAST temp_3 = this ;
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      const GGS_outletClassDeclarationAST temp_6 = this ;
      const GGS_outletClassDeclarationAST temp_7 = this ;
      const GGS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.galgas4", 107)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 105)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_3623 ;
    GGS_bool var_handlesTableValueBinding_3648 ;
    GGS_bool var_hasEnabled_3685 ;
    GGS_bool var_hasHidden_3708 ;
    GGS_bool var_handlesGraphicControllerBinding_3730 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3608 ; // Joker input parameter
    GGS_bool joker_3769 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3608, var_hasRunAction_3623, var_handlesTableValueBinding_3648, var_hasEnabled_3685, var_hasHidden_3708, var_handlesGraphicControllerBinding_3730, joker_3769, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 116)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3623 COMMA_SOURCE_FILE ("outlet-class.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas4", 127)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3648 COMMA_SOURCE_FILE ("outlet-class.galgas4", 129)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.galgas4", 130)) ;
      }
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3685 COMMA_SOURCE_FILE ("outlet-class.galgas4", 132)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.galgas4", 133)) ;
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3708 COMMA_SOURCE_FILE ("outlet-class.galgas4", 135)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.galgas4", 136)) ;
      }
    }
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3730 COMMA_SOURCE_FILE ("outlet-class.galgas4", 138)).boolEnum () ;
      if (GalgasBool::boolTrue == test_26) {
        const GGS_outletClassDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.galgas4", 139)) ;
      }
    }
    {
    const GGS_outletClassDeclarationAST temp_30 = this ;
    const GGS_outletClassDeclarationAST temp_31 = this ;
    const GGS_outletClassDeclarationAST temp_32 = this ;
    const GGS_outletClassDeclarationAST temp_33 = this ;
    const GGS_outletClassDeclarationAST temp_34 = this ;
    const GGS_outletClassDeclarationAST temp_35 = this ;
    const GGS_outletClassDeclarationAST temp_36 = this ;
    const GGS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3623 COMMA_SOURCE_FILE ("outlet-class.galgas4", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3648 COMMA_SOURCE_FILE ("outlet-class.galgas4", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3685 COMMA_SOURCE_FILE ("outlet-class.galgas4", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3708 COMMA_SOURCE_FILE ("outlet-class.galgas4", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3730 COMMA_SOURCE_FILE ("outlet-class.galgas4", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 141)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1090 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1090, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1090, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 36)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 36)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6122 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6339 ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6350_3 ; // Joker input parameter
  GGS_actionMap joker_6350_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6350_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6339, joker_6350_3, joker_6350_2, joker_6350_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 161)) ;
  GGS_propertyMap var_preferencesPropertyMap_6459 ;
  GGS_classKind joker_6444 ; // Joker input parameter
  GGS_actionMap joker_6489_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6489_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 163)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.galgas4", 163)), inCompiler COMMA_HERE), joker_6444, var_preferencesPropertyMap_6459, joker_6489_2, joker_6489_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 162)) ;
  switch (var_classKind_6339.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_atomicPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 170)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6628_kind_0 ;
      var_classKind_6339.getAssociatedValuesFor_atomic (extractedValue_6628_kind_0) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_4 = this ;
      var_entry_6122.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6628_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.galgas4", 172))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)) ;
      }
      GGS_string var_swiftDefaultValueAsString_6884 ;
      const GGS_atomicPropertyDeclarationAST temp_5 = this ;
      GGS_typeKindList temp_6 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      temp_6.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_6628_kind_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_6459, var_swiftDefaultValueAsString_6884, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_7 = this ;
      const GGS_atomicPropertyDeclarationAST temp_8 = this ;
      const GGS_atomicPropertyDeclarationAST temp_9 = this ;
      const GGS_atomicPropertyDeclarationAST temp_10 = this ;
      const GGS_atomicPropertyDeclarationAST temp_11 = this ;
      const GGS_atomicPropertyDeclarationAST temp_12 = this ;
      var_entry_6122.mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_generateResetMethod (), temp_9.readProperty_generateDirectRead (), temp_10.readProperty_generateDirectAccess (), temp_11.readProperty_standalone (), extractedValue_6628_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6884, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 185)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 176)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7403__0 ;
      var_classKind_6339.getAssociatedValuesFor_document (extractedValue_7403__0) ;
      const GGS_atomicPropertyDeclarationAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 189)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7500__0 ;
      GGS_bool extractedValue_7500__1 ;
      GGS_bool extractedValue_7500__2 ;
      GGS_bool extractedValue_7500__3 ;
      var_classKind_6339.getAssociatedValuesFor_entity (extractedValue_7500__0, extractedValue_7500__1, extractedValue_7500__2, extractedValue_7500__3) ;
      const GGS_atomicPropertyDeclarationAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 191)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6122, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 240)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 242)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 244)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 246)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 248)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 249)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 251)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 252)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 253)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 254)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 255)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 256)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 257)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 258)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 259)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 260)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 261)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 262)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 263)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 265)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 266)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 268)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 269)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 270)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 271)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 272)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 274)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 275)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 276)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 277)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 278)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 279)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 281)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 282)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 283)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 284)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 285)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("_property = EBPreferenceProperty_").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 306)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)) ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssignOperation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 321)) ;
      }
    }
    GGS_bool test_24 = constinArgument_inGenerationDirectAccess ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_25 = this ;
      test_24 = temp_25.readProperty_generateDirectRead () ;
    }
    GGS_bool test_26 = test_24 ;
    if (GalgasBool::boolTrue != test_26.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_27 = this ;
      test_26 = temp_27.readProperty_generateDirectAccess () ;
    }
    GGS_bool var_generateAccess_14030 = test_26 ;
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_generateAccess_14030.boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)) ;
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)) ;
          }
        }
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 331)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_initCode (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_standalone ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_atomicPropertyGeneration temp_2 = this ;
      const GGS_atomicPropertyGeneration temp_3 = this ;
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 345)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    GGS_bool test_2 = temp_1.readProperty_standalone () ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mInPreferences () ;
    }
    test_0 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_4 = this ;
    result_result = GGS_string ("    self.accumulateProperty (self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 355)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 355)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const GGS_string constinArgument_inSourceFile,
                                         const GGS__5B_abstractDeclarationAST_5D_ constinArgument_inDeclarationListAST,
                                         GGS__5B_abstractDeclarationAST_5D_ & outArgument_outSortedDeclarationListAST,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2207 = GGS_declarationPrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_2261 (constinArgument_inDeclarationListAST) ;
  while (enumerator_2261.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2261.current (HERE).ptr (), var_declarationPrecedenceGraph_2207, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 63)) ;
    enumerator_2261.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2484 = var_declarationPrecedenceGraph_2207.getter_graphviz (SOURCE_FILE ("declaration-graph.galgas4", 67)) ;
      GGS_string var_path_2532 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 68)) ;
      GGS_bool joker_2629 ; // Joker input parameter
      var_s_2484.method_writeToFileWhenDifferentContents (var_path_2532, joker_2629, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 69)) ;
    }
  }
  GGS__5B_abstractDeclarationAST_5D_ temp_1 = GGS__5B_abstractDeclarationAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 72)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2207.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.galgas4", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator__5B_lstring_5D_ enumerator_2838 (var_declarationPrecedenceGraph_2207.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.galgas4", 74))) ;
      while (enumerator_2838.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_2838.current (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_2838.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)) ;
        enumerator_2838.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS__5B_abstractDeclarationAST_5D_ var_unsortedSemanticDeclarationListAST_3060 ;
    GGS__5B_lstring_5D_ joker_3045 ; // Joker input parameter
    GGS__5B_lstring_5D_ joker_3102 ; // Joker input parameter
    var_declarationPrecedenceGraph_2207.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3045, var_unsortedSemanticDeclarationListAST_3060, joker_3102, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 78)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3060.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 84)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3178 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3060.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 86)).getter_string (SOURCE_FILE ("declaration-graph.galgas4", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 85)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 86)) ;
        UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_3366 (var_unsortedSemanticDeclarationListAST_3060) ;
        while (enumerator_3366.hasCurrentObject ()) {
          var_s_3178.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3366.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)) ;
          enumerator_3366.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.galgas4", 91)), var_s_3178, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 91)) ;
        UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_3510 (var_unsortedSemanticDeclarationListAST_3060) ;
        while (enumerator_3510.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3510.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3510.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)) ;
          enumerator_3510.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3821 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_3842 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_3821.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
  if (enumerator_3842.hasCurrentObject () && bool_0) {
    while (enumerator_3842.hasCurrentObject () && bool_0) {
      switch (enumerator_3842.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_boolAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("true") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_3821 = GGS_bool (true) ;
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
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_3842.gotoNextObject () ;
      if (enumerator_3842.hasCurrentObject ()) {
        bool_0 = var_found_3821.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_found_3821.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 128)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4856 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_4877 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_4856.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 143)).isValidAndTrue () ;
  if (enumerator_4877.hasCurrentObject () && bool_0) {
    while (enumerator_4877.hasCurrentObject () && bool_0) {
      switch (enumerator_4877.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_integerAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 146)) ;
          var_found_4856 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        {
          outArgument_outSwiftDefaultValueAsString = GGS_string (".degree (Double (") ;
          const GGS_integerAsDefaultValue temp_5 = this ;
          GGS_string temp_6 ;
          const GalgasBool test_7 = temp_5.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_8 = this ;
          outArgument_outSwiftDefaultValueAsString.plusAssignOperation(temp_6.add_operation (temp_8.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 150)) ;
          outArgument_outSwiftDefaultValueAsString.plusAssignOperation(GGS_string (") / 1000.0)"), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 151)) ;
          var_found_4856 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_integerAsDefaultValue temp_10 = this ;
            test_9 = temp_10.readProperty_mNegative ().boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_integerAsDefaultValue temp_11 = this ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (temp_11.readProperty_mValue ().readProperty_location (), GGS_string ("Uint32 value should be ≥ 0"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 155)) ;
            }
          }
          const GGS_integerAsDefaultValue temp_13 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_13.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 157)) ;
          var_found_4856 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_integerAsDefaultValue temp_14 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_14.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 160)).add_operation (GGS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 160)) ;
          var_found_4856 = GGS_bool (true) ;
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
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        break ;
      }
      enumerator_4877.gotoNextObject () ;
      if (enumerator_4877.hasCurrentObject ()) {
        bool_0 = var_found_4856.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 143)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_found_4856.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 170)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_integerAsDefaultValue temp_16 = this ;
      GenericArray <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray17  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 171)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doubleAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6460 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_6481 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_6460.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 186)).isValidAndTrue () ;
  if (enumerator_6481.hasCurrentObject () && bool_0) {
    while (enumerator_6481.hasCurrentObject () && bool_0) {
      switch (enumerator_6481.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 189)) ;
          var_found_6460 = GGS_bool (true) ;
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
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_6481.gotoNextObject () ;
      if (enumerator_6481.hasCurrentObject ()) {
        bool_0 = var_found_6460.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 186)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_6460.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7487 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_7508 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_7487.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 216)).isValidAndTrue () ;
  if (enumerator_7508.hasCurrentObject () && bool_0) {
    while (enumerator_7508.hasCurrentObject () && bool_0) {
      switch (enumerator_7508.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        {
          const GGS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_string () ;
          var_found_7487 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_stringAsDefaultValue temp_2 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("\"").add_operation (temp_2.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 222)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 222)) ;
          var_found_7487 = GGS_bool (true) ;
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
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_7508.gotoNextObject () ;
      if (enumerator_7508.hasCurrentObject ()) {
        bool_0 = var_found_7487.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 216)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_7487.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 233)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_stringAsDefaultValue temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mValue ().readProperty_location (), GGS_string ("only a string attribute can be initialized by a string constant"), fixItArray5  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 234)) ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 243)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("now"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 244)) ;
  }
  {
  result_result.setter_insert (GGS_string ("distantPast"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 245)) ;
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
//
//Once function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedColors (Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 251)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("black"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 252)) ;
  }
  {
  result_result.setter_insert (GGS_string ("blue"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 253)) ;
  }
  {
  result_result.setter_insert (GGS_string ("brown"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 254)) ;
  }
  {
  result_result.setter_insert (GGS_string ("clear"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 255)) ;
  }
  {
  result_result.setter_insert (GGS_string ("control"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 256)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlDarkShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 257)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 258)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlLightHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 259)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 260)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 261)) ;
  }
  {
  result_result.setter_insert (GGS_string ("cyan"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 262)) ;
  }
  {
  result_result.setter_insert (GGS_string ("darkGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 263)) ;
  }
  {
  result_result.setter_insert (GGS_string ("disabledControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 264)) ;
  }
  {
  result_result.setter_insert (GGS_string ("gray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 265)) ;
  }
  {
  result_result.setter_insert (GGS_string ("green"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 266)) ;
  }
  {
  result_result.setter_insert (GGS_string ("grid"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 267)) ;
  }
  {
  result_result.setter_insert (GGS_string ("header"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 268)) ;
  }
  {
  result_result.setter_insert (GGS_string ("headerText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 269)) ;
  }
  {
  result_result.setter_insert (GGS_string ("highlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 270)) ;
  }
  {
  result_result.setter_insert (GGS_string ("keyboardFocusIndicator"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 271)) ;
  }
  {
  result_result.setter_insert (GGS_string ("knob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 272)) ;
  }
  {
  result_result.setter_insert (GGS_string ("lightGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 273)) ;
  }
  {
  result_result.setter_insert (GGS_string ("magenta"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 274)) ;
  }
  {
  result_result.setter_insert (GGS_string ("orange"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 275)) ;
  }
  {
  result_result.setter_insert (GGS_string ("purple"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 276)) ;
  }
  {
  result_result.setter_insert (GGS_string ("red"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 277)) ;
  }
  {
  result_result.setter_insert (GGS_string ("scrollBar"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 278)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControl"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 279)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 280)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedKnob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 281)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItem"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 282)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItemText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 283)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedTextBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 284)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 285)) ;
  }
  {
  result_result.setter_insert (GGS_string ("shadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 286)) ;
  }
  {
  result_result.setter_insert (GGS_string ("textBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 287)) ;
  }
  {
  result_result.setter_insert (GGS_string ("white"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 288)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 289)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrame"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 290)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrameText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 291)) ;
  }
  {
  result_result.setter_insert (GGS_string ("yellow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 292)) ;
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
//Overriding extension proc '@identifierAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_10356 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_10377 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_10356.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 303)).isValidAndTrue () ;
  if (enumerator_10377.hasCurrentObject () && bool_0) {
    while (enumerator_10377.hasCurrentObject () && bool_0) {
      switch (enumerator_10377.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_10356 = GGS_bool (true) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 307)).getter_contains (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 307)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                GalgasBool test_5 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (GalgasBool::boolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  GenericArray <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 313)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 316)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_10356 = GGS_bool (true) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 323)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_10356 = GGS_bool (true) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 330)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_11455_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_11486_constantMap_1 ;
          GGS_enumFuncMap extractedValue_11499__2 ;
          enumerator_10377.current_mType (HERE).getAssociatedValuesFor_enumType (extractedValue_11455_enumTypeName_0, extractedValue_11486_constantMap_1, extractedValue_11499__2) ;
          var_found_10356 = GGS_bool (true) ;
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_11486_constantMap_1.getter_contains (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 334)).boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_11455_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 335)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 335)) ;
            }
          }
          if (GalgasBool::boolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_11455_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 337)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11870__0 ;
          GGS_bool extractedValue_11870__1 ;
          enumerator_10377.current_mType (HERE).getAssociatedValuesFor_entityType (extractedValue_11870__0, extractedValue_11870__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 342)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11945__0 ;
          enumerator_10377.current_mType (HERE).getAssociatedValuesFor_classType (extractedValue_11945__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 344)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 346)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_10356 = GGS_bool (true) ;
          GalgasBool test_31 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 352)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariLength type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 355)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariAngle type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 357)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariLengthUnit type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 359)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 361)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 363)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (temp_45.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray46  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 365)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_47 = this ;
          GenericArray <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (temp_47.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray48  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 367)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_49 = this ;
          GenericArray <FixItDescription> fixItArray50 ;
          inCompiler->emitSemanticError (temp_49.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray50  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 369)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          GalgasBool test_51 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_51) {
            const GGS_identifierAsDefaultValue temp_52 = this ;
            test_51 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 371)).getter_contains (temp_52.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 371)).boolEnum () ;
            if (GalgasBool::boolTrue == test_51) {
              const GGS_identifierAsDefaultValue temp_53 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_53.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 372)) ;
              var_found_10356 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_51) {
            const GGS_identifierAsDefaultValue temp_54 = this ;
            GenericArray <FixItDescription> fixItArray55 ;
            inCompiler->emitSemanticError (temp_54.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray55  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 375)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_13202__0 ;
          enumerator_10377.current_mType (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_13202__0) ;
          const GGS_identifierAsDefaultValue temp_56 = this ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray57  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 378)) ;
        }
        break ;
      }
      enumerator_10377.gotoNextObject () ;
      if (enumerator_10377.hasCurrentObject ()) {
        bool_0 = var_found_10356.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 303)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_58 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_58) {
    test_58 = var_found_10356.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 381)).boolEnum () ;
    if (GalgasBool::boolTrue == test_58) {
      const GGS_identifierAsDefaultValue temp_59 = this ;
      GenericArray <FixItDescription> fixItArray60 ;
      inCompiler->emitSemanticError (temp_59.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray60  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 382)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_13745 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_13751_2 ; // Joker input parameter
  GGS_bool joker_13751_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_13745, joker_13751_2, joker_13751_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 395)) ;
  switch (var_kind_13745.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13797_type_0 ;
      GGS_propertyAccessibility extractedValue_13803__1 ;
      var_kind_13745.getAssociatedValuesFor_property (extractedValue_13797_type_0, extractedValue_13803__1) ;
      GGS_bool var_found_13816 = GGS_bool (false) ;
      UpEnumerator_typeKindList enumerator_13839 (constinArgument_inAttributeActualTypeList) ;
      bool bool_1 = var_found_13816.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 399)).isValidAndTrue () ;
      if (enumerator_13839.hasCurrentObject () && bool_1) {
        while (enumerator_13839.hasCurrentObject () && bool_1) {
          var_found_13816 = GGS_bool (ComparisonKind::equal, extractedValue_13797_type_0.objectCompare (enumerator_13839.current_mType (HERE))) ;
          enumerator_13839.gotoNextObject () ;
          if (enumerator_13839.hasCurrentObject ()) {
            bool_1 = var_found_13816.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 399)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_13816.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 402)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 403)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_14052__0 ;
      GGS_propertyAccessibility extractedValue_14052__1 ;
      GGS_bool extractedValue_14052__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_14052__3 ;
      var_kind_13745.getAssociatedValuesFor_toMany (extractedValue_14052__0, extractedValue_14052__1, extractedValue_14052__2, extractedValue_14052__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 406)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_14147__0 ;
      GGS_propertyAccessibility extractedValue_14147__1 ;
      GGS_bool extractedValue_14147__2 ;
      GGS_toOneOppositeRelationship extractedValue_14147__3 ;
      GGS_bool extractedValue_14147__4 ;
      var_kind_13745.getAssociatedValuesFor_toOne (extractedValue_14147__0, extractedValue_14147__1, extractedValue_14147__2, extractedValue_14147__3, extractedValue_14147__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 408)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_14252__0 ;
      GGS_bool extractedValue_14252__1 ;
      var_kind_13745.getAssociatedValuesFor_arrayController (extractedValue_14252__0, extractedValue_14252__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 410)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_14360__0 ;
      var_kind_13745.getAssociatedValuesFor_selectionController (extractedValue_14360__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 412)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 414)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsAsDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_14760 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_14760 COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 424)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [4] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  3,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nenum GridStyle {\n  noGrid, cross, line\n}\n\n//----------------------------------------------------------------------------------------\n\ntransient property struct CGFloat ;\n\ntransient property class NSImage ;\n\ntransient property class EBShape ;\n\nextern outlet class EBGraphicView : NSView $graphicController ;\nbinding EBGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $backColor : transient NSColor ;\nbinding EBGraphicView $mouseGrid : transient Int ;\nbinding EBGraphicView $gridStep : transient Int ;\nbinding EBGraphicView $gridStyle : transient GridStyle ;\nbinding EBGraphicView $gridDisplayFactor : transient Int ;\nbinding EBGraphicView $gridLineColor : transient NSColor ;\nbinding EBGraphicView $gridCrossColor : transient NSColor ;\nbinding EBGraphicView $zoom : property Int ;\nbinding EBGraphicView $horizontalFlip : transient Bool ;\nbinding EBGraphicView $verticalFlip : transient Bool ;\nbinding EBGraphicView $xPlacardUnit : transient Int ;\nbinding EBGraphicView $yPlacardUnit : transient Int ;\nbinding EBGraphicView $backgroundImageData : transient Data ;\nbinding EBGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBGraphicView $foregroundImageData : transient Data ;\nbinding EBGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class EBEnclosingGraphicView : NSView $graphicController ;\nbinding EBEnclosingGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $backColor : transient NSColor ;\nbinding EBEnclosingGraphicView $mouseGrid : transient Int ;\nbinding EBEnclosingGraphicView $gridStep : transient Int ;\nbinding EBEnclosingGraphicView $gridStyle : transient GridStyle ;\nbinding EBEnclosingGraphicView $gridDisplayFactor : transient Int ;\nbinding EBEnclosingGraphicView $gridLineColor : transient NSColor ;\nbinding EBEnclosingGraphicView $gridCrossColor : transient NSColor ;\nbinding EBEnclosingGraphicView $zoom : property Int ;\nbinding EBEnclosingGraphicView $horizontalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $verticalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $xPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $yPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $backgroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBEnclosingGraphicView $foregroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class NSView $hidden ;\n\nextern outlet class NSControl : NSView $enabled $run ;\n\noutlet class EBButton : NSControl ;\nbinding EBButton $title : transient String ;\n\noutlet class EBColorObserverWell : NSControl ;\nbinding EBColorObserverWell $colorObserver : transient NSColor ;\n\noutlet class EBColorWell : NSControl ;\nbinding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n\n\noutlet class EBDatePicker : NSControl ;\nbinding EBDatePicker $date : property Date ;\n\noutlet class EBDoubleField : NSControl ;\nbinding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBDoubleObserverField : NSControl ;\nbinding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n\n\noutlet class EBIntField : NSControl ;\nbinding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBIntObserverField : NSControl ;\nbinding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n\n\noutlet class EBFontButton : NSControl ;\nbinding EBFontButton $fontValue : property NSFont ;\n\n\noutlet class EBPopUpButton : NSControl ;\nbinding EBPopUpButton $selectedTag : property Int ;\nbinding EBPopUpButton $selectedIndex : property enum ;\n\n\noutlet class EBGroupButton : NSControl ;\nbinding EBGroupButton $selectedIndex : property Int ;\n\n\noutlet class EBImageObserverView : NSView ;\nbinding EBImageObserverView $image : transient NSImage ;\nbinding EBImageObserverView $tooltip : transient String ;\n\n\noutlet class EBMenu ;\n\n\noutlet class EBMenuItem $enabled $run ;\n\n\noutlet class EBCheckedMenuItem ;\nbinding EBCheckedMenuItem $checked : property Bool ;\n\n\noutlet class EBProgressIndicator : NSView ;\n\n\noutlet class EBSegmentedControl : NSControl ;\nbinding EBSegmentedControl $selectedIndex : property Int ;\n\n\noutlet class EBSlider : NSControl ;\nbinding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\nbinding EBSlider $intValue : property Int {sendContinously:Bool} ;\n\n\noutlet class EBStepper : NSControl ;\nbinding EBStepper $value : property Int {sendContinously:Bool} ;\n\n\noutlet class EBSwitch : NSControl ;\nbinding EBSwitch $value : property Bool ;\n\n\noutlet class EBTableView : NSControl $tableValue ;\n\n\noutlet class EBTextField : NSControl ;\nbinding EBTextField $value : property String {sendContinously : Bool} ;\n\noutlet class EBTextObserverField : NSView ;\nbinding EBTextObserverField $valueObserver : transient String ;\nbinding EBTextObserverField $backColor : transient NSColor ;\n\n\noutlet class EBTextObserverView : NSView ;\nbinding EBTextObserverView $valueObserver : transient String ;\n\n\noutlet class EBTextView : NSControl ;\nbinding EBTextView $value : property String ;\n\noutlet class EBWindow ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 63)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 65)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutViewClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas4", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 237)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_8525 ;
    GGS_bool var_handlesTableValueBinding_8550 ;
    GGS_bool var_hasEnabled_8587 ;
    GGS_bool var_hasHidden_8610 ;
    GGS_bool var_handlesGraphicControllerBinding_8632 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8510 ; // Joker input parameter
    GGS_bool joker_8671_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_8671_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8671_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8510, var_hasRunAction_8525, var_handlesTableValueBinding_8550, var_hasEnabled_8587, var_hasHidden_8610, var_handlesGraphicControllerBinding_8632, joker_8671_3, joker_8671_2, joker_8671_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8525 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 261)) ;
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8550 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 264)) ;
      }
    }
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8587 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 266)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 267)) ;
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8610 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 269)).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 270)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8632 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 272)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 273)) ;
      }
    }
    {
    const GGS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8525 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8550 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8587 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8610 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8632 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 276)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (GGS__5B_abstractDeclarationAST_5D_ & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.galgas4", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.galgas4", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.galgas4", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.galgas4", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.galgas4", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariLength").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 31)), GGS_typeKind::class_func_canariLengthType (SOURCE_FILE ("atomic-class.galgas4", 31)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 31)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariLengthUnit").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 32)), GGS_typeKind::class_func_canariLengthUnitType (SOURCE_FILE ("atomic-class.galgas4", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariAngle").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 33)), GGS_typeKind::class_func_canariAngleType (SOURCE_FILE ("atomic-class.galgas4", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 35)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.galgas4", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 36)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.galgas4", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 37)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.galgas4", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 37)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 38)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.galgas4", 38)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 38)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 39)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.galgas4", 39)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 39)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 40)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.galgas4", 40)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 40)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 56)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.galgas4", 53)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 51)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS__5B_lstring_5D_ constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.galgas4", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_lstring_5D_ enumerator_1055 (constinArgument_inGraphvizList) ;
      while (enumerator_1055.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1055.current_entry (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1055.current_entry (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 32)) ;
        }
        enumerator_1055.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                     const GGS_semanticContext constinArgument_inSemanticContext,
                                                     const GGS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1660 = temp_0 ;
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  temp_1.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  GGS__5B_string_5D_ var_exploreArray_1720 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 44)) ;
  GGS__5B_string_5D_ var_nodeList_1770 = temp_2 ;
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 45)) ;
  GGS__5B_string_5D_ var_arrowList_1800 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).isValid ()) {
    uint32_t variant_1817 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).uintValue () ;
    bool loop_1817 = true ;
    while (loop_1817) {
      loop_1817 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1720.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1817) {
        loop_1817 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1720.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1817 && (0 == variant_1817)) {
        loop_1817 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 46)) ;
      }
      if (loop_1817) {
        variant_1817 -= 1 ;
        GGS_string var_entityName_1938 ;
        {
        var_exploreArray_1720.setter_removeLast (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 47)) ;
        }
        GGS_string var_node_1958 = GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)) ;
        GGS_classKind var_entityKind_2099 ;
        GGS_propertyMap var_propertyMap_2129 ;
        GGS_actionMap joker_2142_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2142_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1938.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 49)), var_entityKind_2099, var_propertyMap_2129, joker_2142_2, joker_2142_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 49)) ;
        GGS_string var_superEntityName_2199 ;
        GGS_bool joker_2216_3 ; // Joker input parameter
        GGS_bool joker_2216_2 ; // Joker input parameter
        GGS_bool joker_2216_1 ; // Joker input parameter
        var_entityKind_2099.method_extractEntity (var_superEntityName_2199, joker_2216_3, joker_2216_2, joker_2216_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 50)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2199.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1660.getter_contains (var_superEntityName_2199 COMMA_SOURCE_FILE ("graphviz.galgas4", 52)).operator_not (SOURCE_FILE ("graphviz.galgas4", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_1660.setter_insert (var_superEntityName_2199, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 53)) ;
                }
                {
                var_exploreArray_1720.setter_append (var_superEntityName_2199, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 54)) ;
                }
              }
            }
            {
            var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (var_superEntityName_2199, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_2605 (var_propertyMap_2129) ;
        while (enumerator_2605.hasCurrentObject ()) {
          switch (enumerator_2605.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2673_type_0 ;
              GGS_propertyAccessibility extractedValue_2679_accessibility_1 ;
              enumerator_2605.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2673_type_0, extractedValue_2679_accessibility_1) ;
              switch (extractedValue_2679_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1958.plusAssignOperation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2673_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 63)) ;
                }
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_transient:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_computed:
                break ;
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_2975_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3008_accessibility_1 ;
              GGS_bool extractedValue_3023__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3026_optionKind_3 ;
              enumerator_2605.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_2975_typeName_0, extractedValue_3008_accessibility_1, extractedValue_3023__2, extractedValue_3026_optionKind_3) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_3008_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 70)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  var_node_1958.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 71)) ;
                  switch (extractedValue_3026_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      GalgasBool test_7 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1660.getter_contains (extractedValue_2975_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 74)).operator_not (SOURCE_FILE ("graphviz.galgas4", 74)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1660.setter_insert (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 75)) ;
                          }
                          {
                          var_exploreArray_1720.setter_append (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3567_oppositeName_0 ;
                      extractedValue_3026_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3567_oppositeName_0) ;
                      GalgasBool test_8 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1660.getter_contains (extractedValue_2975_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 81)).operator_not (SOURCE_FILE ("graphviz.galgas4", 81)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1660.setter_insert (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 82)) ;
                          }
                          {
                          var_exploreArray_1720.setter_append (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (extractedValue_3567_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_3972__0 ;
                      extractedValue_3026_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_3972__0) ;
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1660.getter_contains (extractedValue_2975_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 88)).operator_not (SOURCE_FILE ("graphviz.galgas4", 88)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1660.setter_insert (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 89)) ;
                          }
                          {
                          var_exploreArray_1720.setter_append (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (extractedValue_2975_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_4365_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4398_accessibility_1 ;
              GGS_bool extractedValue_4413__2 ;
              GGS_toOneOppositeRelationship extractedValue_4416_opposite_3 ;
              GGS_bool extractedValue_4426__4 ;
              enumerator_2605.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4365_typeName_0, extractedValue_4398_accessibility_1, extractedValue_4413__2, extractedValue_4416_opposite_3, extractedValue_4426__4) ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = extractedValue_4398_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 97)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  var_node_1958.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 98)) ;
                  switch (extractedValue_4416_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1660.getter_contains (extractedValue_4365_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 101)).operator_not (SOURCE_FILE ("graphviz.galgas4", 101)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1660.setter_insert (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 102)) ;
                          }
                          {
                          var_exploreArray_1720.setter_append (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5042_oppositeName_0 ;
                      extractedValue_4416_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5042_oppositeName_0) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1660.getter_contains (extractedValue_4365_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 109)).operator_not (SOURCE_FILE ("graphviz.galgas4", 109)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1660.setter_insert (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 110)) ;
                          }
                          {
                          var_exploreArray_1720.setter_append (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 111)) ;
                          }
                        }
                      }
                      GalgasBool test_13 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2605.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5042_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_13) {
                          {
                          var_arrowList_1800.setter_append (GGS_string ("  ").add_operation (var_entityName_1938, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (enumerator_2605.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (extractedValue_5042_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_2605.gotoNextObject () ;
        }
        var_node_1958.plusAssignOperation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 121)) ;
        {
        var_nodeList_1770.setter_append (var_node_1958, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5628 = GGS_string ("digraph G {\n") ;
  var_s_5628.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 126)) ;
  var_s_5628.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 127)) ;
  UpEnumerator__5B_string_5D_ enumerator_5749 (var_nodeList_1770) ;
  while (enumerator_5749.hasCurrentObject ()) {
    var_s_5628.plusAssignOperation(enumerator_5749.current_entry (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 129)) ;
    enumerator_5749.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_5806 (var_arrowList_1800) ;
  while (enumerator_5806.hasCurrentObject ()) {
    var_s_5628.plusAssignOperation(enumerator_5806.current_entry (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 132)) ;
    enumerator_5806.gotoNextObject () ;
  }
  var_s_5628.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 134)) ;
  GGS_string var_filePath_5878 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)) ;
  GGS_string var_temp_5964 = var_filePath_5878.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 136)) ;
  var_temp_5964.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           const GGS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  GGS_stringset var_reachableEntityNameSet_6688 = temp_0 ;
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 152)) ;
  temp_1.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 152)) ;
  GGS__5B_string_5D_ var_exploreArray_6748 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 153)) ;
  GGS__5B_string_5D_ var_nodeList_6798 = temp_2 ;
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 154)) ;
  GGS__5B_string_5D_ var_arrowList_6828 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6877 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 156)).isValid ()) {
    uint32_t variant_6912 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 156)).uintValue () ;
    bool loop_6912 = true ;
    while (loop_6912) {
      loop_6912 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6748.getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6912) {
        loop_6912 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6748.getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6912 && (0 == variant_6912)) {
        loop_6912 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 156)) ;
      }
      if (loop_6912) {
        variant_6912 -= 1 ;
        GGS_string var_entityName_7033 ;
        {
        var_exploreArray_6748.setter_removeLast (var_entityName_7033, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 157)) ;
        }
        {
        var_nodeList_6798.setter_append (var_entityName_7033, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_6877.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7033, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 159)), inCompiler COMMA_HERE), var_entityName_7033, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 159)) ;
        }
        GGS_classKind var_entityKind_7228 ;
        GGS_propertyMap var_propertyMap_7258 ;
        GGS_actionMap joker_7271_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7271_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7033.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 160)), var_entityKind_7228, var_propertyMap_7258, joker_7271_2, joker_7271_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 160)) ;
        GGS_string var_superEntityName_7328 ;
        GGS_bool joker_7345_3 ; // Joker input parameter
        GGS_bool joker_7345_2 ; // Joker input parameter
        GGS_bool joker_7345_1 ; // Joker input parameter
        var_entityKind_7228.method_extractEntity (var_superEntityName_7328, joker_7345_3, joker_7345_2, joker_7345_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 161)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7328.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6688.getter_contains (var_superEntityName_7328 COMMA_SOURCE_FILE ("graphviz.galgas4", 163)).operator_not (SOURCE_FILE ("graphviz.galgas4", 163)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_6688.setter_insert (var_superEntityName_7328, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 164)) ;
                }
                {
                var_exploreArray_6748.setter_append (var_superEntityName_7328, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 165)) ;
                }
              }
            }
            {
            var_arrowList_6828.setter_append (var_superEntityName_7328.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)).add_operation (var_entityName_7033, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_6877.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7328, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7033, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 168)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_7818 (var_propertyMap_7258) ;
        while (enumerator_7818.hasCurrentObject ()) {
          switch (enumerator_7818.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_7992_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8025_accessibility_1 ;
              GGS_bool extractedValue_8041__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8041__3 ;
              enumerator_7818.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_7992_typeName_0, extractedValue_8025_accessibility_1, extractedValue_8041__2, extractedValue_8041__3) ;
              {
              var_arrowList_6828.setter_append (var_entityName_7033.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)).add_operation (extractedValue_7992_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_6877.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7033, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_7992_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 177)) ;
              }
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_8025_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 178)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6688.getter_contains (extractedValue_7992_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 179)).operator_not (SOURCE_FILE ("graphviz.galgas4", 179)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6688.setter_insert (extractedValue_7992_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 180)) ;
                      }
                      {
                      var_exploreArray_6748.setter_append (extractedValue_7992_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8520_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8553_accessibility_1 ;
              GGS_bool extractedValue_8568__2 ;
              GGS_toOneOppositeRelationship extractedValue_8571_opposite_3 ;
              GGS_bool extractedValue_8581_isWeak_4 ;
              enumerator_7818.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8520_typeName_0, extractedValue_8553_accessibility_1, extractedValue_8568__2, extractedValue_8571_opposite_3, extractedValue_8581_isWeak_4) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = extractedValue_8581_isWeak_4.operator_not (SOURCE_FILE ("graphviz.galgas4", 185)).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  {
                  var_arrowList_6828.setter_append (var_entityName_7033.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)).add_operation (extractedValue_8520_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6877.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7033, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8520_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 187)) ;
                  }
                }
              }
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = extractedValue_8553_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 189)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  switch (extractedValue_8571_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_10 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6688.getter_contains (extractedValue_8520_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 192)).operator_not (SOURCE_FILE ("graphviz.galgas4", 192)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6688.setter_insert (extractedValue_8520_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 193)) ;
                          }
                          {
                          var_exploreArray_6748.setter_append (extractedValue_8520_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9210__0 ;
                      extractedValue_8571_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9210__0) ;
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6688.getter_contains (extractedValue_8520_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 198)).operator_not (SOURCE_FILE ("graphviz.galgas4", 198)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6688.setter_insert (extractedValue_8520_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 199)) ;
                          }
                          {
                          var_exploreArray_6748.setter_append (extractedValue_8520_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 200)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_7818.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9474 = GGS_string ("digraph G {\n") ;
  var_s_9474.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 209)) ;
  var_s_9474.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 210)) ;
  UpEnumerator__5B_string_5D_ enumerator_9595 (var_nodeList_6798) ;
  while (enumerator_9595.hasCurrentObject ()) {
    var_s_9474.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9595.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 212)) ;
    enumerator_9595.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_9659 (var_arrowList_6828) ;
  while (enumerator_9659.hasCurrentObject ()) {
    var_s_9474.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9659.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 215)) ;
    enumerator_9659.gotoNextObject () ;
  }
  var_s_9474.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 217)) ;
  GGS_string var_filePath_9738 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)) ;
  GGS_string var_temp_9825 = var_filePath_9738.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 219)) ;
  var_temp_9825.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 219)) ;
  GGS_bool joker_9939 ; // Joker input parameter
  var_s_9474.method_writeToFileWhenDifferentContents (var_filePath_9738, joker_9939, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 220)) ;
  var_filePath_9738 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)) ;
  GGS_string var_temp_32__10053 = var_entityStrongReferenceGraph_6877.getter_graphviz (SOURCE_FILE ("graphviz.galgas4", 223)) ;
  GGS_bool joker_10149 ; // Joker input parameter
  var_temp_32__10053.method_writeToFileWhenDifferentContents (var_filePath_9738, joker_10149, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 223)) ;
  GGS__5B_string_5D_ var_undefinedNodeList_10191 = var_entityStrongReferenceGraph_6877.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.galgas4", 225)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10191.getter_count (SOURCE_FILE ("graphviz.galgas4", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_string var_s_10305 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 227)) ;
      UpEnumerator__5B_string_5D_ enumerator_10396 (var_undefinedNodeList_10191) ;
      while (enumerator_10396.hasCurrentObject ()) {
        var_s_10305.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_10396.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 229)) ;
        enumerator_10396.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 231)), var_s_10305, fixItArray13  COMMA_SOURCE_FILE ("graphviz.galgas4", 231)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10191.getter_count (SOURCE_FILE ("graphviz.galgas4", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS__5B_lstring_5D_ temp_15 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      temp_15.plusPlusAssignOperation (constinArgument_inRootEntityName.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 236))  COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 237)) ;
      GGS__5B_lstring_5D_ var_accessibleNodeList_10564 = var_entityStrongReferenceGraph_6877.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 235)) ;
      GGS_stringset var_accessibleNodeSet_10691 = GGS_stringset::init_21_lstringArray (var_accessibleNodeList_10564, inCompiler COMMA_HERE) ;
      UpEnumerator__5B_string_5D_ enumerator_10767 (var_nodeList_6798) ;
      while (enumerator_10767.hasCurrentObject ()) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10691.getter_contains (enumerator_10767.current_entry (HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 241)).operator_not (SOURCE_FILE ("graphviz.galgas4", 241)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 242)), enumerator_10767.current_entry (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 242)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 242)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.galgas4", 242)) ;
          }
        }
        enumerator_10767.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10191.getter_count (SOURCE_FILE ("graphviz.galgas4", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GGS__5B_lstring_5D_ var_unsortedNodeList_11093 ;
      GGS__5B_string_5D_ joker_11084 ; // Joker input parameter
      var_entityStrongReferenceGraph_6877.method_circularities (joker_11084, var_unsortedNodeList_11093 COMMA_SOURCE_FILE ("graphviz.galgas4", 248)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11093.getter_count (SOURCE_FILE ("graphviz.galgas4", 249)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_string var_s_11160 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 250)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 250)).add_operation (var_unsortedNodeList_11093.getter_count (SOURCE_FILE ("graphviz.galgas4", 250)).getter_string (SOURCE_FILE ("graphviz.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 250)) ;
          var_s_11160.plusAssignOperation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 251)) ;
          UpEnumerator__5B_lstring_5D_ enumerator_11314 (var_unsortedNodeList_11093) ;
          while (enumerator_11314.hasCurrentObject ()) {
            var_s_11160.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_11314.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 253)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 253)) ;
            enumerator_11314.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 255)), var_s_11160, fixItArray21  COMMA_SOURCE_FILE ("graphviz.galgas4", 255)) ;
        }
      }
    }
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inXcodeProjectString.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.galgas4", 39)) ;
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
  GGS_XcodeProjectDescriptor var_xcodeProject_1556 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1637 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1658 = GGS_string ("10.10") ;
  {
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 57)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 58)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 60)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 61)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 64)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 65)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 66)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 67)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 68)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 69)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 70)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 71)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 72)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 73)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 74)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 75)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 76)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_SHADOW = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 79)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 80)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 81)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 82)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 83)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 84)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 85)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 86)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 87)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("HEADER_SEARCH_PATHS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 88)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1658, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 89))  COMMA_SOURCE_FILE ("xcode-project.galgas4", 89)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("SDKROOT = ").add_operation (var_SDK_1637, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 90))  COMMA_SOURCE_FILE ("xcode-project.galgas4", 90)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 91)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("SWIFT_VERSION = 4.2")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 92)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\"")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1556, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 55)) ;
  }
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 96)) ;
  GGS__5B_string_5D_ var_swiftFileRefList_3413 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 97)) ;
  GGS__5B_string_5D_ var_resourceFileRefList_3451 = temp_2 ;
  GGS_stringset var_generatedFileSet_3482 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3482.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 99)) ;
  }
  GGS__5B_string_5D_ var_cppFileRefs_3572 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mFileRefs_3606 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mmFileRefs_3638 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_frameworkFileRefs_3671 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4066 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3482, var_cppFileRefs_3572, var_mFileRefs_3606, var_mmFileRefs_3638, var_swiftFileRefList_3413, var_frameworkFileRefs_3671, var_resourceFileRefList_3451, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 116)) ;
  }
  GGS__5B_string_5D_ var_cppFileRefs_32__4146 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mFileRefs_32__4181 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mmFileRefs_32__4214 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_frameworkFileRefs_32__4248 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4146, var_mFileRefs_32__4181, var_mmFileRefs_32__4214, var_swiftFileRefList_3413, var_frameworkFileRefs_32__4248, var_resourceFileRefList_3451, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 133)) ;
  }
  {
  GGS__5B_string_5D_ temp_4 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 139)) ;
  GGS__5B_string_5D_ temp_5 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 142)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  GGS__5B_string_5D_ temp_6 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 145)) ;
  GGS__5B__32_string_5D_ temp_7 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 146)) ;
  GGS_string joker_5157 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1556, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3413, temp_4, var_resourceFileRefList_3451, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 147)), joker_5157, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 135)) ;
  }
  GGS_string var_sourceDir_5207 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1556, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)), var_sourceDir_5207.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  temp_8.plusPlusAssignOperation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  GGS_string var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.galgas4", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5207, GGS_string ("Info.plist"), var_s_5470, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 163)) ;
  }
  var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5207, GGS_string ("MainMenu.xib"), var_s_5470, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 171)) ;
  }
  var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 176))) ;
  GGS_bool joker_5963 ; // Joker input parameter
  var_s_5470.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 178)), joker_5963, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 177)) ;
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
    UpEnumerator_stringset enumerator_1016 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1016.hasCurrentObject ()) {
      result.appendString ("  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n") ;
      enumerator_1016.gotoNextObject () ;
      index_1016_.increment () ;
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
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3660 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_3660.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3761 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_3827 (enumerator_3660.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_3827.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3827.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_3761.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 102)), enumerator_3827.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 101)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4239 ;
        GGS_propertyMap joker_4250_3 ; // Joker input parameter
        GGS_actionMap joker_4250_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4250_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3827.current_mModelTypeName (HERE), var_classKind_4239, joker_4250_3, joker_4250_2, joker_4250_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 106)) ;
        GGS_typeKind var_typeKind_4277 ;
        switch (var_classKind_4239.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3827.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 110)) ;
            var_typeKind_4277.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4448_kind_0 ;
            var_classKind_4239.getAssociatedValuesFor_atomic (extractedValue_4448_kind_0) ;
            var_typeKind_4277 = extractedValue_4448_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4505__0 ;
            var_classKind_4239.getAssociatedValuesFor_document (extractedValue_4505__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3827.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 114)) ;
            var_typeKind_4277.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4617__0 ;
            GGS_bool extractedValue_4617__1 ;
            GGS_bool extractedValue_4617__2 ;
            GGS_bool extractedValue_4617__3 ;
            var_classKind_4239.getAssociatedValuesFor_entity (extractedValue_4617__0, extractedValue_4617__1, extractedValue_4617__2, extractedValue_4617__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3827.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 116)) ;
            var_typeKind_4277.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3761.setter_append (var_typeKind_4277, enumerator_3827.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 118)) ;
        }
      }
      enumerator_3827.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_4879 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_4943 (enumerator_3660.current_mBindingOptionList (HERE)) ;
    while (enumerator_4943.hasCurrentObject ()) {
      GGS_classKind var_classKind_5063 ;
      GGS_propertyMap joker_5074_3 ; // Joker input parameter
      GGS_actionMap joker_5074_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5074_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4943.current_mOptionTypeName (HERE), var_classKind_5063, joker_5074_3, joker_5074_2, joker_5074_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 123)) ;
      GGS_typeKind var_typeKind_5099 ;
      switch (var_classKind_5063.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4943.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 127)) ;
          var_typeKind_5099.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5263_kind_0 ;
          var_classKind_5063.getAssociatedValuesFor_atomic (extractedValue_5263_kind_0) ;
          var_typeKind_5099 = extractedValue_5263_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5316__0 ;
          var_classKind_5063.getAssociatedValuesFor_document (extractedValue_5316__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4943.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 131)) ;
          var_typeKind_5099.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5425__0 ;
          GGS_bool extractedValue_5425__1 ;
          GGS_bool extractedValue_5425__2 ;
          GGS_bool extractedValue_5425__3 ;
          var_classKind_5063.getAssociatedValuesFor_entity (extractedValue_5425__0, extractedValue_5425__1, extractedValue_5425__2, extractedValue_5425__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4943.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 133)) ;
          var_typeKind_5099.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_4879.setter_append (var_typeKind_5099, enumerator_4943.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 135)) ;
      }
      enumerator_4943.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5684 ;
    GGS_lstring var_outletSuperClassName_5712 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_contains (enumerator_3660.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 140)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3660.current_mOutletClassName (HERE), var_outletSuperClassName_5712, var_bindingMap_5684, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 141)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_5684 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6090_8 ; // Joker input parameter
      GGS_bool joker_6090_7 ; // Joker input parameter
      GGS_bool joker_6090_6 ; // Joker input parameter
      GGS_bool joker_6090_5 ; // Joker input parameter
      GGS_bool joker_6090_4 ; // Joker input parameter
      GGS_bool joker_6090_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6090_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6090_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3660.current_mOutletClassName (HERE), var_outletSuperClassName_5712, joker_6090_8, joker_6090_7, joker_6090_6, joker_6090_5, joker_6090_4, joker_6090_3, joker_6090_2, joker_6090_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 144)) ;
    }
    {
    var_bindingMap_5684.setter_insertKey (enumerator_3660.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3761, var_controllerBindingOptionDecoratedList_4879, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3660.current_mOutletClassName (HERE), var_outletSuperClassName_5712, var_bindingMap_5684, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 151)) ;
    }
    enumerator_3660.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_outletClassBindingSpecificationList enumerator_4520 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_4520.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4621 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_4687 (enumerator_4520.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_4687.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4687.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_4621.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 134)), enumerator_4687.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 133)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_5099 ;
        GGS_propertyMap joker_5110_3 ; // Joker input parameter
        GGS_actionMap joker_5110_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5110_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4687.current_mModelTypeName (HERE), var_classKind_5099, joker_5110_3, joker_5110_2, joker_5110_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 138)) ;
        GGS_typeKind var_typeKind_5137 ;
        switch (var_classKind_5099.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4687.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 142)) ;
            var_typeKind_5137.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5308_kind_0 ;
            var_classKind_5099.getAssociatedValuesFor_atomic (extractedValue_5308_kind_0) ;
            var_typeKind_5137 = extractedValue_5308_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5365__0 ;
            var_classKind_5099.getAssociatedValuesFor_document (extractedValue_5365__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4687.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 146)) ;
            var_typeKind_5137.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5477__0 ;
            GGS_bool extractedValue_5477__1 ;
            GGS_bool extractedValue_5477__2 ;
            GGS_bool extractedValue_5477__3 ;
            var_classKind_5099.getAssociatedValuesFor_entity (extractedValue_5477__0, extractedValue_5477__1, extractedValue_5477__2, extractedValue_5477__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4687.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 148)) ;
            var_typeKind_5137.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4621.setter_append (var_typeKind_5137, enumerator_4687.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 150)) ;
        }
      }
      enumerator_4687.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5739 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_5803 (enumerator_4520.current_mBindingOptionList (HERE)) ;
    while (enumerator_5803.hasCurrentObject ()) {
      GGS_classKind var_classKind_5923 ;
      GGS_propertyMap joker_5934_3 ; // Joker input parameter
      GGS_actionMap joker_5934_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5934_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5803.current_mOptionTypeName (HERE), var_classKind_5923, joker_5934_3, joker_5934_2, joker_5934_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 155)) ;
      GGS_typeKind var_typeKind_5959 ;
      switch (var_classKind_5923.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5803.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 159)) ;
          var_typeKind_5959.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6123_kind_0 ;
          var_classKind_5923.getAssociatedValuesFor_atomic (extractedValue_6123_kind_0) ;
          var_typeKind_5959 = extractedValue_6123_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6176__0 ;
          var_classKind_5923.getAssociatedValuesFor_document (extractedValue_6176__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5803.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 163)) ;
          var_typeKind_5959.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6285__0 ;
          GGS_bool extractedValue_6285__1 ;
          GGS_bool extractedValue_6285__2 ;
          GGS_bool extractedValue_6285__3 ;
          var_classKind_5923.getAssociatedValuesFor_entity (extractedValue_6285__0, extractedValue_6285__1, extractedValue_6285__2, extractedValue_6285__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5803.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 165)) ;
          var_typeKind_5959.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5739.setter_append (var_typeKind_5959, enumerator_5803.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 167)) ;
      }
      enumerator_5803.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6536 ;
    GGS_lstring var_outletSuperClassName_6564 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_contains (enumerator_4520.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4520.current_mOutletClassName (HERE), var_outletSuperClassName_6564, var_bindingMap_6536, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 173)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_6536 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6914_6 ; // Joker input parameter
      GGS_bool joker_6914_5 ; // Joker input parameter
      GGS_bool joker_6914_4 ; // Joker input parameter
      GGS_bool joker_6914_3 ; // Joker input parameter
      GGS_bool joker_6914_2 ; // Joker input parameter
      GGS_bool joker_6914_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4520.current_mOutletClassName (HERE), var_outletSuperClassName_6564, joker_6914_6, joker_6914_5, joker_6914_4, joker_6914_3, joker_6914_2, joker_6914_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 176)) ;
    }
    {
    var_bindingMap_6536.setter_insertKey (enumerator_4520.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4621, var_controllerBindingOptionDecoratedList_5739, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4520.current_mOutletClassName (HERE), var_outletSuperClassName_6564, var_bindingMap_6536, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 183)) ;
    }
    enumerator_4520.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1113 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1113, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1113, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.galgas4", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1365_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1365_rootEntityName_0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1365_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1113, GGS_lstring::init_21__21_ (extractedValue_1365_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 34)) ;
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
      ioArgument_ioGraph.setter_addEdge (var_node_1113, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 37)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4129 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_4293 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_4293.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 111)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 111)) ;
  }
  {
  var_controllerActions_4293.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 112)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 112)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  switch (temp_1.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_4484_rootEntityName_0 ;
      temp_1.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4484_rootEntityName_0) ;
      GGS_propertyMap var_rootProperties_4572 ;
      GGS_classKind joker_4563 ; // Joker input parameter
      GGS_actionMap joker_4588_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4588_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4484_rootEntityName_0, joker_4563, var_rootProperties_4572, joker_4588_2, joker_4588_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 115)) ;
      GGS_propertyKind var_classKind_4656 ;
      const GGS_arrayControllerDeclarationAST temp_2 = this ;
      GGS_actionMap joker_4667_2 ; // Joker input parameter
      GGS_bool joker_4667_1 ; // Joker input parameter
      var_rootProperties_4572.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_classKind_4656, joker_4667_2, joker_4667_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 116)) ;
      switch (var_classKind_4656.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_4717__0 ;
          GGS_propertyAccessibility extractedValue_4717__1 ;
          var_classKind_4656.getAssociatedValuesFor_property (extractedValue_4717__0, extractedValue_4717__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas4", 119)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_4815_typeName_0 ;
          GGS_propertyAccessibility extractedValue_4825__1 ;
          GGS_bool extractedValue_4828_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_4837__3 ;
          var_classKind_4656.getAssociatedValuesFor_toMany (extractedValue_4815_typeName_0, extractedValue_4825__1, extractedValue_4828_graphic_2, extractedValue_4837__3) ;
          GGS_propertyKind var_kind_4854 = GGS_propertyKind::class_func_arrayController (extractedValue_4815_typeName_0, extractedValue_4828_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 121)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_4 = this ;
          var_entry_4129.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mControllerName (), var_kind_4854, var_controllerActions_4293, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 125)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_5 = this ;
          const GGS_arrayControllerDeclarationAST temp_6 = this ;
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          var_entry_4129.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_5.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_6.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 129)), temp_7.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 127)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_5310__0 ;
          GGS_propertyAccessibility extractedValue_5310__1 ;
          GGS_bool extractedValue_5310__2 ;
          GGS_toOneOppositeRelationship extractedValue_5310__3 ;
          GGS_bool extractedValue_5310__4 ;
          var_classKind_4656.getAssociatedValuesFor_toOne (extractedValue_5310__0, extractedValue_5310__1, extractedValue_5310__2, extractedValue_5310__3, extractedValue_5310__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 134)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_5418__0 ;
          GGS_bool extractedValue_5418__1 ;
          var_classKind_4656.getAssociatedValuesFor_arrayController (extractedValue_5418__0, extractedValue_5418__1) ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas4", 136)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_5529__0 ;
          var_classKind_4656.getAssociatedValuesFor_selectionController (extractedValue_5529__0) ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      GGS_propertyKind var_classKind_5719 ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GGS_actionMap joker_5730_2 ; // Joker input parameter
      GGS_bool joker_5730_1 ; // Joker input parameter
      var_entry_4129.readProperty_mPropertyMap ().method_searchKey (temp_11.readProperty_mToManyPropertyName (), var_classKind_5719, joker_5730_2, joker_5730_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 141)) ;
      switch (var_classKind_5719.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5780__0 ;
          GGS_propertyAccessibility extractedValue_5780__1 ;
          var_classKind_5719.getAssociatedValuesFor_property (extractedValue_5780__0, extractedValue_5780__1) ;
          const GGS_arrayControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.galgas4", 144)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5888_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5898__1 ;
          GGS_bool extractedValue_5901_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5910__3 ;
          var_classKind_5719.getAssociatedValuesFor_toMany (extractedValue_5888_typeName_0, extractedValue_5898__1, extractedValue_5901_graphic_2, extractedValue_5910__3) ;
          GGS_propertyKind var_kind_5927 = GGS_propertyKind::class_func_arrayController (extractedValue_5888_typeName_0, extractedValue_5901_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 146)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_14 = this ;
          var_entry_4129.mProperty_mPropertyMap.setter_insertKey (temp_14.readProperty_mControllerName (), var_kind_5927, var_controllerActions_4293, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 150)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_15 = this ;
          const GGS_arrayControllerDeclarationAST temp_16 = this ;
          const GGS_arrayControllerDeclarationAST temp_17 = this ;
          var_entry_4129.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_15.readProperty_mControllerName ().readProperty_string (), temp_16.readProperty_mToManyPropertyName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 152)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6367__0 ;
          GGS_propertyAccessibility extractedValue_6367__1 ;
          GGS_bool extractedValue_6367__2 ;
          GGS_toOneOppositeRelationship extractedValue_6367__3 ;
          GGS_bool extractedValue_6367__4 ;
          var_classKind_5719.getAssociatedValuesFor_toOne (extractedValue_6367__0, extractedValue_6367__1, extractedValue_6367__2, extractedValue_6367__3, extractedValue_6367__4) ;
          const GGS_arrayControllerDeclarationAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.galgas4", 159)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6485__0 ;
          GGS_bool extractedValue_6485__1 ;
          var_classKind_5719.getAssociatedValuesFor_arrayController (extractedValue_6485__0, extractedValue_6485__1) ;
          const GGS_arrayControllerDeclarationAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.galgas4", 161)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6606__0 ;
          var_classKind_5719.getAssociatedValuesFor_selectionController (extractedValue_6606__0) ;
          const GGS_arrayControllerDeclarationAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray23  COMMA_SOURCE_FILE ("array-controller.galgas4", 163)) ;
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4129, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_7187 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_7270_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_7270_rootEntityName_0) ;
      GGS_classKind joker_7361 ; // Joker input parameter
      GGS_actionMap joker_7403_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7403_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7270_rootEntityName_0, joker_7361, var_boundModelPropertyMap_7187, joker_7403_2, joker_7403_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 183)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7519 ; // Joker input parameter
      GGS_actionMap joker_7561_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7561_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7519, var_boundModelPropertyMap_7187, joker_7561_2, joker_7561_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 190)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7656 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7682_2 ; // Joker input parameter
  GGS_bool joker_7682_1 ; // Joker input parameter
  var_boundModelPropertyMap_7187.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7656, joker_7682_2, joker_7682_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 197)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7809 ;
  GGS_bool var_graphic_7846 ;
  GGS_string var_elementTypeName_7868 ;
  switch (var_boundModelClassKind_7656.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7931__0 ;
      GGS_propertyAccessibility extractedValue_7931__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_property (extractedValue_7931__0, extractedValue_7931__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas4", 208)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_8096_typeName_0 ;
      GGS_propertyAccessibility extractedValue_8106_accessibility_1 ;
      GGS_bool extractedValue_8121_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_8132__3 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toMany (extractedValue_8096_typeName_0, extractedValue_8106_accessibility_1, extractedValue_8121_isGraphic_2, extractedValue_8132__3) ;
      var_elementTypeName_7868 = extractedValue_8096_typeName_0.readProperty_string () ;
      var_graphic_7846 = extractedValue_8121_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const GalgasBool test_6 = extractedValue_8106_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.galgas4", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.galgas4", 215)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.galgas4", 216)) ;
      }
      var_arrayControllerModelKind_7809 = temp_5 ;
      GGS_classKind joker_8364 ; // Joker input parameter
      GGS_propertyMap joker_8368_3 ; // Joker input parameter
      GGS_actionMap joker_8368_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8368_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8096_typeName_0, joker_8364, joker_8368_3, joker_8368_2, joker_8368_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 218)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8388__0 ;
      GGS_propertyAccessibility extractedValue_8388__1 ;
      GGS_bool extractedValue_8388__2 ;
      GGS_toOneOppositeRelationship extractedValue_8388__3 ;
      GGS_bool extractedValue_8388__4 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toOne (extractedValue_8388__0, extractedValue_8388__1, extractedValue_8388__2, extractedValue_8388__3, extractedValue_8388__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 220)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8563__0 ;
      GGS_bool extractedValue_8563__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_arrayController (extractedValue_8563__0, extractedValue_8563__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 224)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8741__0 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_selectionController (extractedValue_8741__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.galgas4", 228)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 236)), var_arrayControllerModelKind_7809, var_elementTypeName_7868, var_graphic_7846, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 233)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 242)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument__5F_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 262)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 264)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 267)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 269)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerPropertyGeneration initCode'
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
//Overriding extension func '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 283)) ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const GalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const GalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const GalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const GalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const GalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const GalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : CanariAffinity) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : CanariAffinity) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
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
  const GalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: .cu (X), yBy: .cu (Y), userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx - 1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : CanariLength) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : CanariLength) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                   const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                   GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                   const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                   const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13456 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.galgas4", 340))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)), var_s_13456, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.galgas4", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_propertyKind var_kind_12398 ;
  GGS_string var__5F_swiftTypeStringForTransientFunctionArgument_12421 ;
  GGS_string var__5F_protocolTypeName_12484 ;
  GGS_string var__5F_defaultValueAsString_12520 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const GalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12398, var__5F_swiftTypeStringForTransientFunctionArgument_12421, var__5F_protocolTypeName_12484, var__5F_defaultValueAsString_12520, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 290)) ;
  switch (var_kind_12398.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12577_type_0 ;
      GGS_propertyAccessibility extractedValue_12583__1 ;
      var_kind_12398.getAssociatedValuesFor_property (extractedValue_12577_type_0, extractedValue_12583__1) ;
      outArgument_outType = extractedValue_12577_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12623__0 ;
      GGS_propertyAccessibility extractedValue_12623__1 ;
      GGS_bool extractedValue_12623__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12623__3 ;
      var_kind_12398.getAssociatedValuesFor_toMany (extractedValue_12623__0, extractedValue_12623__1, extractedValue_12623__2, extractedValue_12623__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12737__0 ;
      GGS_propertyAccessibility extractedValue_12737__1 ;
      GGS_bool extractedValue_12737__2 ;
      GGS_toOneOppositeRelationship extractedValue_12737__3 ;
      GGS_bool extractedValue_12737__4 ;
      var_kind_12398.getAssociatedValuesFor_toOne (extractedValue_12737__0, extractedValue_12737__1, extractedValue_12737__2, extractedValue_12737__3, extractedValue_12737__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12861__0 ;
      GGS_bool extractedValue_12861__1 ;
      var_kind_12398.getAssociatedValuesFor_arrayController (extractedValue_12861__0, extractedValue_12861__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_12988__0 ;
      var_kind_12398.getAssociatedValuesFor_selectionController (extractedValue_12988__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 312)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14169 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14169, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 329)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 339)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 340)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14169, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15269 ;
  GGS_typeKind var_outLeftType_15294 ;
  GGS_location var_outLeftLocation_15316 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15269, var_outLeftType_15294, var_outLeftLocation_15316, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 357)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_15294.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 367)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 367)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15316, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 368)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15739 ;
  GGS_typeKind var_outRightType_15765 ;
  GGS_location var_outRightLocation_15788 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15739, var_outRightType_15765, var_outRightLocation_15788, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 370)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_15765.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 380)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 380)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15788, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 381)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 383)) ;
  outArgument_outErrorLocation = var_outRightLocation_15788 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15269, var_rightExpression_15739, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16942 ;
  GGS_typeKind var_outLeftType_16967 ;
  GGS_location var_outLeftLocation_16989 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16942, var_outLeftType_16967, var_outLeftLocation_16989, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 400)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_16967.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 410)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16989, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 411)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17412 ;
  GGS_typeKind var_outRightType_17438 ;
  GGS_location var_outRightLocation_17461 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17412, var_outRightType_17438, var_outRightLocation_17461, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 413)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_17438.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 423)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 423)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17461, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 424)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 426)) ;
  outArgument_outErrorLocation = var_outRightLocation_17461 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16942, var_rightExpression_17412, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18616 ;
  GGS_typeKind var_outLeftType_18641 ;
  GGS_location var_outLeftLocation_18663 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_18616, var_outLeftType_18641, var_outLeftLocation_18663, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 443)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_18641.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 453)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 453)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18663, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 454)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19087 ;
  GGS_typeKind var_outRightType_19113 ;
  GGS_location var_outRightLocation_19136 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19087, var_outRightType_19113, var_outRightLocation_19136, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 456)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_19113.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 466)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 466)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19136, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 467)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 469)) ;
  outArgument_outErrorLocation = var_outRightLocation_19136 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_18616, var_rightExpression_19087, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
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
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_20292 ;
  GGS_typeKind var_outLeftType_20317 ;
  GGS_location var_outLeftLocation_20339 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_20292, var_outLeftType_20317, var_outLeftLocation_20339, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 486)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_20640 ;
  GGS_typeKind var_outRightType_20666 ;
  GGS_location var_outRightLocation_20689 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_20640, var_outRightType_20666, var_outRightLocation_20689, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 496)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_20317.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 506)) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_20317.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas4", 506)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.galgas4", 506)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_20339, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 507)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_20666.objectCompare (var_outLeftType_20317)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_20689, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 510)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 512)) ;
  outArgument_outErrorLocation = var_outRightLocation_20689 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_20292, temp_7.readProperty_mOperator (), var_rightExpression_20640, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.galgas4", 529)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 529)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 529)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 536)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 536)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (GGS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (GGS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (GGS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GGS_multipleBindingComparisonAST::Enumeration::invalid:
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_equal:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 573)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_notEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 574)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lower:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 575)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lowerOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 576)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greater:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 577)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greaterOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 578)) ;
    }
    break ;
  }
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectionControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_687 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 16)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 16)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_selectionControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_687, temp_3, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 19)) ;
  }
  {
  const GGS_selectionControllerDeclarationAST temp_4 = this ;
  const GGS_selectionControllerDeclarationAST temp_5 = this ;
  const GGS_selectionControllerDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_687, GGS_lstring::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)).add_operation (temp_5.readProperty_mModelControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)), temp_6.readProperty_mModelControllerName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectionControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_selectionControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 26)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 26)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectionControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3003 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_propertyKind_3214 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_3228_2 ; // Joker input parameter
  GGS_bool joker_3228_1 ; // Joker input parameter
  var_entry_3003.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3214, joker_3228_2, joker_3228_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 71)) ;
  switch (var_propertyKind_3214.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_3277__0 ;
      GGS_propertyAccessibility extractedValue_3277__1 ;
      var_propertyKind_3214.getAssociatedValuesFor_property (extractedValue_3277__0, extractedValue_3277__1) ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.galgas4", 74)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_3381__0 ;
      GGS_propertyAccessibility extractedValue_3381__1 ;
      GGS_bool extractedValue_3381__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_3381__3 ;
      var_propertyKind_3214.getAssociatedValuesFor_toMany (extractedValue_3381__0, extractedValue_3381__1, extractedValue_3381__2, extractedValue_3381__3) ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas4", 76)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3484__0 ;
      GGS_propertyAccessibility extractedValue_3484__1 ;
      GGS_bool extractedValue_3484__2 ;
      GGS_toOneOppositeRelationship extractedValue_3484__3 ;
      GGS_bool extractedValue_3484__4 ;
      var_propertyKind_3214.getAssociatedValuesFor_toOne (extractedValue_3484__0, extractedValue_3484__1, extractedValue_3484__2, extractedValue_3484__3, extractedValue_3484__4) ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.galgas4", 78)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3600__0 ;
      var_propertyKind_3214.getAssociatedValuesFor_selectionController (extractedValue_3600__0) ;
      const GGS_selectionControllerDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.galgas4", 80)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3713__0 ;
      GGS_bool extractedValue_3713__1 ;
      var_propertyKind_3214.getAssociatedValuesFor_arrayController (extractedValue_3713__0, extractedValue_3713__1) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_selectionControllerDeclarationAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_selectionControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GGS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.galgas4", 83)) ;
        }
      }
      const GGS_selectionControllerDeclarationAST temp_14 = this ;
      GGS_propertyKind var_kind_3899 = GGS_propertyKind::class_func_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.galgas4", 85)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_15 = this ;
      var_entry_3003.mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3899, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 86)) ;
      }
      {
      const GGS_selectionControllerDeclarationAST temp_16 = this ;
      const GGS_selectionControllerDeclarationAST temp_17 = this ;
      const GGS_selectionControllerDeclarationAST temp_18 = this ;
      const GGS_selectionControllerDeclarationAST temp_19 = this ;
      var_entry_3003.mProperty_mPropertyGenerationList.setter_append (GGS_selectionControllerPropertyGeneration::init_21__21__21__21_ (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 87)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3003, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 95)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectionControllerDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GGS_generationStruct & ioArgument_ioGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_superClassKind_6023 ;
  GGS_propertyMap var_propertyMap_6044 ;
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_actionMap joker_6057_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6057_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_6023, var_propertyMap_6044, joker_6057_2, joker_6057_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 131)) ;
  GGS_propertyKind var_propertyKind_6119 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_6133_2 ; // Joker input parameter
  GGS_bool joker_6133_1 ; // Joker input parameter
  var_propertyMap_6044.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_6119, joker_6133_2, joker_6133_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 132)) ;
  switch (var_propertyKind_6119.enumValue ()) {
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
      GGS_lstring extractedValue_6287_typeName_0 ;
      GGS_bool extractedValue_6297__1 ;
      var_propertyKind_6119.getAssociatedValuesFor_arrayController (extractedValue_6287_typeName_0, extractedValue_6297__1) ;
      GGS_propertyMap var_selectionObservablePropertyMap_6403 ;
      GGS_propertyGenerationList var_selectionGenerationList_6458 ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GGS_classKind joker_6387 ; // Joker input parameter
      GGS_actionMap joker_6442 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_6387, var_selectionObservablePropertyMap_6403, joker_6442, var_selectionGenerationList_6458, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 139)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_3 = this ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      const GGS_selectionControllerDeclarationAST temp_5 = this ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      const GGS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_6287_typeName_0.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_6403, var_selectionGenerationList_6458, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 146)) ;
      }
      {
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (extractedValue_6287_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 156)) ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, extractedValue_6287_typeName_0.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_10.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 158)) ;
          }
          {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.setter_insert (temp_11.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 159)) ;
          }
        }
      }
      const GGS_selectionControllerDeclarationAST temp_12 = this ;
      GGS_string var_testedTypeName_7209 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.galgas4", 162)).isValid ()) {
        uint32_t variant_7264 = GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.galgas4", 162)).uintValue () ;
        bool loop_7264 = true ;
        while (loop_7264) {
          loop_7264 = GGS_bool (ComparisonKind::notEqual, extractedValue_6287_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7209)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7209.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas4", 162)).isValid () ;
          if (loop_7264) {
            loop_7264 = GGS_bool (ComparisonKind::notEqual, extractedValue_6287_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7209)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7209.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas4", 162)).boolValue () ;
          }
          if (loop_7264 && (0 == variant_7264)) {
            loop_7264 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.galgas4", 162)) ;
          }
          if (loop_7264) {
            variant_7264 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_6287_typeName_0.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                switch (var_superClassKind_6023.enumValue ()) {
                case GGS_classKind::Enumeration::invalid:
                  break ;
                case GGS_classKind::Enumeration::enum_prefs:
                  {
                    var_testedTypeName_7209 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_atomic:
                  {
                    GGS_typeKind extractedValue_7524__0 ;
                    var_superClassKind_6023.getAssociatedValuesFor_atomic (extractedValue_7524__0) ;
                    var_testedTypeName_7209 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_document:
                  {
                    GGS_lstring extractedValue_7584__0 ;
                    var_superClassKind_6023.getAssociatedValuesFor_document (extractedValue_7584__0) ;
                    var_testedTypeName_7209 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_entity:
                  {
                    GGS_string extractedValue_7650_superOfSuperEntity_0 ;
                    GGS_bool extractedValue_7671__1 ;
                    GGS_bool extractedValue_7671__2 ;
                    GGS_bool extractedValue_7671__3 ;
                    var_superClassKind_6023.getAssociatedValuesFor_entity (extractedValue_7650_superOfSuperEntity_0, extractedValue_7671__1, extractedValue_7671__2, extractedValue_7671__3) ;
                    var_testedTypeName_7209 = extractedValue_7650_superOfSuperEntity_0 ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, var_testedTypeName_7209.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        const GGS_selectionControllerDeclarationAST temp_16 = this ;
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GGS_string ("This entity is not descendant of ").add_operation (extractedValue_6287_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 174)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.galgas4", 174)) ;
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
//Overriding extension func '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                       const GGS_bool /* constinArgument__5F_inGenerationDirectAccess */,
                                                                                       const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)) ;
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectionControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 207)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 207)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (GGS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 209)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectionControllerPropertyGeneration initCode'
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n//    Base Selection Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_1052_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_1052 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_1052.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selection observable property: ") ;
      result.appendString (enumerator_1052.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      const GalgasBool test_0 = extensionGetter_isEntityType (enumerator_1052.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_1 = extensionGetter_isTransient (enumerator_1052.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1052.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBTransientProperty <") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1052.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 32)).stringValue ()) ;
          result.appendString ("> ()\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1052.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBComputedProperty_") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1052.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 34)).stringValue ()) ;
          result.appendString (" ()\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1052.gotoNextObject () ;
      index_1052_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.mModel = model\n") ;
  GGS_uint index_2203_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2203 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2203.hasCurrentObject ()) {
      const GalgasBool test_2 = extensionGetter_isEntityType (enumerator_2203.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 49)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 49)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2203.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model: model)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2203.gotoNextObject () ;
      index_2203_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n") ;
  GGS_uint index_2666_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2666 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2666.hasCurrentObject ()) {
      const GalgasBool test_3 = extensionGetter_isEntityType (enumerator_2666.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 62)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 62)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2666.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2666.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_4 = extensionGetter_isTransient (enumerator_2666.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 65)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 65)).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2666.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.mModel\?.toMany_") ;
        result.appendString (enumerator_2666.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2666.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2666.gotoNextObject () ;
      index_2666_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mModel = nil\n  } */\n\n") ;
  GGS_uint index_3165_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_3165 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_3165.hasCurrentObject ()) {
      const GalgasBool test_5 = extensionGetter_isEntityType (enumerator_3165.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 76)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 76)).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func bind_property_") ;
        result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model : ReadOnlyArrayOf_") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") {\n    model.toMany_") ;
        result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.") ;
        result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n    self.") ;
        result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = { [weak self] in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty :\n          return .empty\n        case .multiple :\n          return .multiple\n        case .single (let v) :\n          var s = Set <") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_3165.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 88)).stringValue ()) ;
        result.appendString ("> ()\n          var isMultipleSelection = false\n          for object in v {\n            switch object.") ;
        result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.selection {\n            case .empty :\n              return .empty\n            case .multiple :\n              isMultipleSelection = true\n            case .single (let vProp) :\n              s.insert (vProp)\n            }\n          }\n          if isMultipleSelection {\n            return .multiple\n          }else if s.count == 0 {\n            return .empty\n          }else if s.count == 1 {\n            return .single (s.first!)\n          }else{\n            return .multiple\n          }\n        }\n      }else{\n        return .empty\n      }\n    }\n") ;
        const GalgasBool test_6 = extensionGetter_isTransient (enumerator_3165.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).boolEnum () ;
        switch (test_6) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = { [weak self] (inValue : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_3165.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 115)).stringValue ()) ;
          result.appendString (") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object.") ;
          result.appendString (enumerator_3165.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.setProp (inValue)\n          }\n        }\n      }\n    }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("  }\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3165.gotoNextObject () ;
      index_3165_.increment () ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n//    Derived selection controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_1020_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_1020 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_1020.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_1020.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 27)).stringValue ()) ;
      enumerator_1020.gotoNextObject () ;
      index_1020_.increment () ;
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
  GGS_uint index_2070_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2070 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2070.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_2070.current_mProperty (HERE).ptr ())).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_2070.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_2070.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_2070.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 49)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2070.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2070.gotoNextObject () ;
      index_2070_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n") ;
  GGS_uint index_2722_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2722 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2722.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_2722.current_mProperty (HERE).ptr ())).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_2722.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_2722.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 65)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2722.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2722.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_2 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_2722.current_mProperty (HERE).ptr ())).operator_or (GGS_bool (nullptr != dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_2722.current_mProperty (HERE).ptr ())) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 69)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2722.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.selectedArray_property.toMany_") ;
        result.appendString (enumerator_2722.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2722.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2722.gotoNextObject () ;
      index_2722_.increment () ;
    }
  }
  result.appendString ("  } */\n\n") ;
  GGS_uint index_3411_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3411 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_3411.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3411.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3411.gotoNextObject () ;
      index_3411_.increment () ;
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
  UpEnumerator_selectionControllerForGeneration enumerator_11704 (constinArgument_inArrayControllerListForGeneration) ;
  while (enumerator_11704.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_11704.current_mBaseTypeName (HERE).objectCompare (enumerator_11704.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_11825 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11704.current_mOwnerName (HERE), enumerator_11704.current_mSelectionControllerName (HERE), enumerator_11704.current_mBaseTypeName (HERE), enumerator_11704.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas4", 265))) ;
        GGS_string var_fileName_12050 = GGS_string ("selectionController-").add_operation (enumerator_11704.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (enumerator_11704.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)) ;
        {
        ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12050, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 272)) ;
        }
        {
        GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12050, var_s_11825, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 273)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_hasAtomicStoredProperties_12296 = GGS_bool (false) ;
      UpEnumerator_propertyGenerationList enumerator_12341 (enumerator_11704.current_mPropertyGenerationList (HERE)) ;
      bool bool_1 = var_hasAtomicStoredProperties_12296.operator_not (SOURCE_FILE ("selection-controller.galgas4", 280)).isValidAndTrue () ;
      if (enumerator_12341.hasCurrentObject () && bool_1) {
        while (enumerator_12341.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_12296 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12341.current_mProperty (HERE).ptr ())) ;
          enumerator_12341.gotoNextObject () ;
          if (enumerator_12341.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_12296.operator_not (SOURCE_FILE ("selection-controller.galgas4", 280)).isValidAndTrue () ;
          }
        }
      }
      GGS_string var_s_12510 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11704.current_mOwnerName (HERE), enumerator_11704.current_mSelectionControllerName (HERE), enumerator_11704.current_mBaseTypeName (HERE), enumerator_11704.current_mSelectionTypeName (HERE), enumerator_11704.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_12296 COMMA_SOURCE_FILE ("selection-controller.galgas4", 283))) ;
      GGS_string var_fileName_12792 = GGS_string ("selectionController-").add_operation (enumerator_11704.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (enumerator_11704.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12792, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 292)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12792, var_s_12510, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 293)) ;
      }
    }
    enumerator_11704.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astSeparatorInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument__5F_inViewDeclarationMap */,
                                                                       const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                       const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                                       const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                       const GGS_propertyMap /* constinArgument__5F_inObservablePropertyMap */,
                                                                       const GGS_actionMap /* constinArgument__5F_inActionMap */,
                                                                       const GGS_string /* constinArgument__5F_inReceiverSwiftTypeName */,
                                                                       const GGS_classMap /* constinArgument__5F_inClassMap */,
                                                                       GGS_implicitViewFunctionGenerationList & /* ioArgument__5F_ioImplicitViewFunctionGenerationList */,
                                                                       GGS_autoLayoutConfiguratorMap & /* ioArgument__5F_ioConfiguratorMap */,
                                                                       GGS_autoLayoutOutletMap & /* ioArgument__5F_ioOutletMap */,
                                                                       GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astGutterInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument__5F_inViewDeclarationMap */,
                                                                    const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                    const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                                    const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                    const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                    const GGS_propertyMap /* constinArgument__5F_inObservablePropertyMap */,
                                                                    const GGS_actionMap /* constinArgument__5F_inActionMap */,
                                                                    const GGS_string /* constinArgument__5F_inReceiverSwiftTypeName */,
                                                                    const GGS_classMap /* constinArgument__5F_inClassMap */,
                                                                    GGS_implicitViewFunctionGenerationList & /* ioArgument__5F_ioImplicitViewFunctionGenerationList */,
                                                                    GGS_autoLayoutConfiguratorMap & /* ioArgument__5F_ioConfiguratorMap */,
                                                                    GGS_autoLayoutOutletMap & /* ioArgument__5F_ioOutletMap */,
                                                                    GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astGutterInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutGutterInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astComputedHorizontalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GGS_string /* constinArgument__5F_inViewName */,
                                                                  const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GGS_bool constinArgument_inPreferences,
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
                                                                  GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_32027 ;
  GGS_classKind joker_32017_2 ; // Joker input parameter
  GGS_propertyMap joker_32017_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_32049 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 787)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 787)), inCompiler COMMA_HERE), joker_32017_2, joker_32017_1, var_preferencesActionMap_32027, joker_32049, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 787)) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_32566 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_32027, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_32566, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 788)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 805)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_32630 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_32658 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_32658.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_33086 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32658.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_33086, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 807)) ;
    {
    var_instructionList_32630.setter_append (var_generatedInstruction_33086, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 822)) ;
    }
    enumerator_32658.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_32566, var_instructionList_32630, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astComputedVerticalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GGS_string /* constinArgument__5F_inViewName */,
                                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GGS_bool constinArgument_inPreferences,
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
                                                                GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_34577 ;
  GGS_classKind joker_34567_2 ; // Joker input parameter
  GGS_propertyMap joker_34567_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_34599 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 844)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 844)), inCompiler COMMA_HERE), joker_34567_2, joker_34567_1, var_preferencesActionMap_34577, joker_34599, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 844)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 845)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_34650 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35184 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_34577, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35184, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 846)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_35208 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_35208.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_35635 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_35208.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_35635, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 864)) ;
    {
    var_instructionList_34650.setter_append (var_generatedInstruction_35635, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 879)) ;
    }
    enumerator_35208.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_4 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_5 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21__21__21_ (temp_3.readProperty_mHasVerticalScroller (), temp_4.readProperty_mConfiguratorName (), var_funcCallList_35184, var_instructionList_34650, temp_5.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astSpaceViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument__5F_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument__5F_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument__5F_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument__5F_inActionMap */,
                                                            const GGS_string /* constinArgument__5F_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument__5F_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument__5F_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument__5F_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument__5F_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GGS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astDividerInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument__5F_inViewDeclarationMap */,
                                                                     const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                     const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                                     const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                     const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                     const GGS_propertyMap /* constinArgument__5F_inObservablePropertyMap */,
                                                                     const GGS_actionMap /* constinArgument__5F_inActionMap */,
                                                                     const GGS_string /* constinArgument__5F_inReceiverSwiftTypeName */,
                                                                     const GGS_classMap /* constinArgument__5F_inClassMap */,
                                                                     GGS_implicitViewFunctionGenerationList & /* ioArgument__5F_ioImplicitViewFunctionGenerationList */,
                                                                     GGS_autoLayoutConfiguratorMap & /* ioArgument__5F_ioConfiguratorMap */,
                                                                     GGS_autoLayoutOutletMap & /* ioArgument__5F_ioOutletMap */,
                                                                     GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astLocalViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument__5F_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument__5F_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument__5F_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument__5F_inActionMap */,
                                                            const GGS_string /* constinArgument__5F_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument__5F_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument__5F_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument__5F_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument__5F_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astComputedViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GGS_bool constinArgument_inPreferences,
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
                                                               GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList var_formalParameterList_42035 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_42066 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_42020_7 ; // Joker input parameter
  GGS_bool joker_42020_6 ; // Joker input parameter
  GGS_bool joker_42020_5 ; // Joker input parameter
  GGS_bool joker_42020_4 ; // Joker input parameter
  GGS_bool joker_42020_3 ; // Joker input parameter
  GGS_bool joker_42020_2 ; // Joker input parameter
  GGS_bool joker_42020_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42020_7, joker_42020_6, joker_42020_5, joker_42020_4, joker_42020_3, joker_42020_2, joker_42020_1, var_formalParameterList_42035, var_functionMap_42066, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 980)) ;
  GGS_actionMap var_preferencesActionMap_42149 ;
  GGS_classKind joker_42139_2 ; // Joker input parameter
  GGS_propertyMap joker_42139_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_42171 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 986)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 986)), inCompiler COMMA_HERE), joker_42139_2, joker_42139_1, var_preferencesActionMap_42149, joker_42171, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 986)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 987)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_42231 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_42035.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 988)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 988)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42035.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 990)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 990)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 990)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 989)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_42501 (temp_7.readProperty_mParameterList ()) ;
    UpEnumerator_autoLayoutClassParameterList enumerator_42545 (var_formalParameterList_42035) ;
    while (enumerator_42501.hasCurrentObject () && enumerator_42545.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_42596 = enumerator_42545.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).unwrappedValue () ;
        if (!enumerator_42545.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).isValuated ()) {
          test_8 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_42641 = enumerator_42501.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).unwrappedValue () ;
          if (!enumerator_42501.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).isValuated ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GGS_classKind var_typeKind_42736 ;
            GGS_propertyMap joker_42746_3 ; // Joker input parameter
            GGS_actionMap joker_42746_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_42746_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_42596.readProperty_name (), var_typeKind_42736, joker_42746_3, joker_42746_2, joker_42746_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 995)) ;
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_42766 = var_typeKind_42736.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 996)).unwrappedValue () ;
              if (!var_typeKind_42736.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 996)).isValuated ()) {
                test_9 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_42807 = var_atomicTypeKind_42766.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 996)).unwrappedValue () ;
                if (!var_atomicTypeKind_42766.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 996)).isValuated ()) {
                  test_9 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint joker_42918 ; // Joker input parameter
                  var_enumKind_42807.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_42641.readProperty_name (), joker_42918, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 997)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_42596.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 999)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_42501.current_mParameterType (HERE).objectCompare (enumerator_42545.current_mParameterType (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_42501.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_42545.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)).add_operation (extensionGetter_string (enumerator_42501.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)) ;
          }
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_42501.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_42545.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_42501.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_42545.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)) ;
        }
      }
      switch (enumerator_42501.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_43342_instruction_0 ;
          enumerator_42501.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_43342_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_43863 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_43342_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_43863, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1009)) ;
          {
          var_parameterList_42231.setter_append (enumerator_42501.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1024)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_43863, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1025)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_44106_entityName_0 ;
          enumerator_42501.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_44106_entityName_0) ;
          GGS_classKind var_classKind_44167 ;
          GGS_propertyMap joker_44178_3 ; // Joker input parameter
          GGS_actionMap joker_44178_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44178_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44106_entityName_0, var_classKind_44167, joker_44178_3, joker_44178_2, joker_44178_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1027)) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = var_classKind_44167.getter_isEntity (SOURCE_FILE ("auto-layout-view.galgas4", 1028)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1028)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_44106_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1029)) ;
            }
          }
          {
          var_parameterList_42231.setter_append (enumerator_42501.current_mParameterName (HERE).readProperty_string (), extractedValue_44106_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1031)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1031)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_44379_stringValue_0 ;
          enumerator_42501.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_44379_stringValue_0) ;
          {
          var_parameterList_42231.setter_append (enumerator_42501.current_mParameterName (HERE).readProperty_string (), extractedValue_44379_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1033)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_44466_title_0 ;
          GGS_runActionDescriptor extractedValue_44473_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_44478_enabledBinding_2 ;
          enumerator_42501.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_44466_title_0, extractedValue_44473_run_1, extractedValue_44478_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_44814 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_44473_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1039)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_preferencesActionMap_42149, var_runBindingGeneration_44814, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1035)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45150 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_44478_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_45150, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1046)) ;
          }
          GGS_string var_s_45197 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_44466_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas4", 1056)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1056)) ;
          switch (var_runBindingGeneration_44814.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45197.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1059)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_45388_targetName_0 ;
              GGS_string extractedValue_45400_actionName_1 ;
              GGS_string extractedValue_45412_runTargetName_2 ;
              var_runBindingGeneration_44814.getAssociatedValuesFor_run (extractedValue_45388_targetName_0, extractedValue_45400_actionName_1, extractedValue_45412_runTargetName_2) ;
              var_s_45197.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_45388_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (extractedValue_45412_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (extractedValue_45400_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45150.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45197.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1065)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_45684_binding_0 ;
              var_enabledBindingGeneration_45150.getAssociatedValuesFor_enabled (extractedValue_45684_binding_0) ;
              var_s_45197.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_45684_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)) ;
            }
            break ;
          }
          var_s_45197.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1069)) ;
          {
          var_parameterList_42231.setter_append (enumerator_42501.current_mParameterName (HERE).readProperty_string (), var_s_45197, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1070)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_45848_enumTypeName_0 ;
          GGS_lstring extractedValue_45862_funcName_1 ;
          enumerator_42501.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_45848_enumTypeName_0, extractedValue_45862_funcName_1) ;
          GGS_classKind var_type_45940 ;
          GGS_propertyMap joker_45946_3 ; // Joker input parameter
          GGS_actionMap joker_45946_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_45946_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_45848_enumTypeName_0, var_type_45940, joker_45946_3, joker_45946_2, joker_45946_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1072)) ;
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = var_type_45940.getter_isAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 1073)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1073)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_45848_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1074)) ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GGS_typeKind var_typeKind_46106 ;
            var_type_45940.method_extractAtomic (var_typeKind_46106, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1076)) ;
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = var_typeKind_46106.getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 1077)).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_46210 ;
                GGS_string joker_46192_2 ; // Joker input parameter
                GGS_enumConstantMap joker_46192_1 ; // Joker input parameter
                var_typeKind_46106.method_extractEnumType (joker_46192_2, joker_46192_1, var_funcMap_46210, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1078)) ;
                GGS_enumFunAssociationSortedList joker_46260 ; // Joker input parameter
                var_funcMap_46210.method_searchKey (extractedValue_45862_funcName_1, joker_46260, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1079)) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_45848_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1081)) ;
            }
          }
          {
          var_parameterList_42231.setter_append (enumerator_42501.current_mParameterName (HERE).readProperty_string (), extractedValue_45848_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)).add_operation (extractedValue_45862_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)) ;
          }
        }
        break ;
      }
      enumerator_42501.gotoNextObject () ;
      enumerator_42545.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47016 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47097 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_47172 ;
  GGS_string var_inTableViewBindingGeneration_47211 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_47300 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_preferencesActionMap_42149, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47016, var_multipleBindingGenerationList_47097, var_runBindingGeneration_47172, var_inTableViewBindingGeneration_47211, var_ebViewGraphicControllerBindingGeneration_47300, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1089)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_47823 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_42066, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_42149, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_47823, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1114)) ;
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1133)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    const GGS_astComputedViewInstruction temp_35 = this ;
    test_34 = GGS_bool (ComparisonKind::notEqual, temp_35.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      {
      const GGS_astComputedViewInstruction temp_36 = this ;
      const GGS_astComputedViewInstruction temp_37 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1137)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_42231, var_funcCallList_47823, var_regularBindingsGenerationList_47016, var_multipleBindingGenerationList_47097, var_runBindingGeneration_47172, var_inTableViewBindingGeneration_47211, var_ebViewGraphicControllerBindingGeneration_47300, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding???????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                                                       const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                       const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inActionMap,
                                                                                                                       const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                                       const GGS_tableValueBinding constinArgument_inTableValueBinding,
                                                                                                                       const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                                                                                                       const GGS_graphicController constinArgument_inGraphicController,
                                                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                                                       GGS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                                                       GGS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                                                       GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                                                       GGS_string & outArgument_outTableViewBindingGeneration,
                                                                                                                       GGS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1180)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1181)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_50192 ;
  GGS_bool var_handlesTableViewBinding_50225 ;
  GGS_bool var_handlesEnabledBinding_50265 ;
  GGS_bool var_handlesHiddenBinding_50303 ;
  GGS_bool var_handleGraphicControllerBinding_50340 ;
  GGS_lstring joker_50173 ; // Joker input parameter
  GGS_bool joker_50376_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_50376_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_50376_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50173, var_handlesRunAction_50192, var_handlesTableViewBinding_50225, var_handlesEnabledBinding_50265, var_handlesHiddenBinding_50303, var_handleGraphicControllerBinding_50340, joker_50376_3, joker_50376_2, joker_50376_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1183)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1194)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_50530_controllerName_0 ;
      GGS_lstring extractedValue_50555_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_50530_controllerName_0, extractedValue_50555_propertyName_1) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_50340.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1198)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GGS_propertyKind var_kind_50825 ;
        GGS_actionMap joker_50839_2 ; // Joker input parameter
        GGS_bool joker_50839_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50530_controllerName_0, var_kind_50825, joker_50839_2, joker_50839_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1201)) ;
        switch (var_kind_50825.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_50891__0 ;
            GGS_propertyAccessibility extractedValue_50891__1 ;
            var_kind_50825.getAssociatedValuesFor_property (extractedValue_50891__0, extractedValue_50891__1) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1208)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_50997__0 ;
            GGS_propertyAccessibility extractedValue_50997__1 ;
            GGS_bool extractedValue_50997__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_50997__3 ;
            var_kind_50825.getAssociatedValuesFor_toMany (extractedValue_50997__0, extractedValue_50997__1, extractedValue_50997__2, extractedValue_50997__3) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1210)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_51102__0 ;
            GGS_propertyAccessibility extractedValue_51102__1 ;
            GGS_bool extractedValue_51102__2 ;
            GGS_toOneOppositeRelationship extractedValue_51102__3 ;
            GGS_bool extractedValue_51102__4 ;
            var_kind_50825.getAssociatedValuesFor_toOne (extractedValue_51102__0, extractedValue_51102__1, extractedValue_51102__2, extractedValue_51102__3, extractedValue_51102__4) ;
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1212)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_51216_entityName_0 ;
            GGS_bool extractedValue_51228_graphic_1 ;
            var_kind_50825.getAssociatedValuesFor_arrayController (extractedValue_51216_entityName_0, extractedValue_51228_graphic_1) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_50555_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = extractedValue_51228_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1215)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51216_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_51553 ;
              GGS_classKind joker_51532 ; // Joker input parameter
              GGS_actionMap joker_51588_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_51588_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51216_entityName_0, joker_51532, var_observablePropertyMap_51553, joker_51588_2, joker_51588_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1219)) ;
              GGS_propertyKind var_propertyKind_51666 ;
              GGS_actionMap joker_51680_2 ; // Joker input parameter
              GGS_bool joker_51680_1 ; // Joker input parameter
              var_observablePropertyMap_51553.method_searchKey (extractedValue_50555_propertyName_1, var_propertyKind_51666, joker_51680_2, joker_51680_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1225)) ;
              switch (var_propertyKind_51666.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_51741__0 ;
                  GGS_propertyAccessibility extractedValue_51741__1 ;
                  var_propertyKind_51666.getAssociatedValuesFor_property (extractedValue_51741__0, extractedValue_51741__1) ;
                  GenericArray <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1228)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_51852_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_51865__1 ;
                  GGS_bool extractedValue_51868_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_51879__3 ;
                  var_propertyKind_51666.getAssociatedValuesFor_toMany (extractedValue_51852_kEntityName_0, extractedValue_51865__1, extractedValue_51868_isGraphic_2, extractedValue_51879__3) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = extractedValue_51868_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1230)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GenericArray <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51852_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_52069__0 ;
                  GGS_propertyAccessibility extractedValue_52069__1 ;
                  GGS_bool extractedValue_52069__2 ;
                  GGS_toOneOppositeRelationship extractedValue_52069__3 ;
                  GGS_bool extractedValue_52069__4 ;
                  var_propertyKind_51666.getAssociatedValuesFor_toOne (extractedValue_52069__0, extractedValue_52069__1, extractedValue_52069__2, extractedValue_52069__3, extractedValue_52069__4) ;
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1234)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_52190__0 ;
                  GGS_bool extractedValue_52190__1 ;
                  var_propertyKind_51666.getAssociatedValuesFor_arrayController (extractedValue_52190__0, extractedValue_52190__1) ;
                  GenericArray <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1236)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_52314__0 ;
                  var_propertyKind_51666.getAssociatedValuesFor_selectionController (extractedValue_52314__0) ;
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1238)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_52459__0 ;
            var_kind_50825.getAssociatedValuesFor_selectionController (extractedValue_52459__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_50530_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1242)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_50530_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1244)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GGS_tableValueBinding::Enumeration::invalid:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
    {
      GGS_lstring extractedValue_52795_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_52795_controllerName_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_50225.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1251)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)) ;
        }
      }
      if (GalgasBool::boolFalse == test_17) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_propertyKind var_kind_53073 ;
            GGS_actionMap joker_53087_2 ; // Joker input parameter
            GGS_bool joker_53087_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_52795_controllerName_0, var_kind_53073, joker_53087_2, joker_53087_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1254)) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = var_kind_53073.getter_isArrayController (SOURCE_FILE ("auto-layout-view.galgas4", 1259)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1259)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_52795_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1260)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_52795_controllerName_0.readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GGS_propertyKind var_kind_53392 ;
          GGS_actionMap joker_53406_2 ; // Joker input parameter
          GGS_bool joker_53406_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_52795_controllerName_0, var_kind_53392, joker_53406_2, joker_53406_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1264)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = var_kind_53392.getter_isArrayController (SOURCE_FILE ("auto-layout-view.galgas4", 1269)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1269)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_52795_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1270)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_52795_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_50192, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1276)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54198 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50265, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54198, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1288)) ;
  }
  switch (var_enabledBindingGeneration_54198.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54291_binding_0 ;
      var_enabledBindingGeneration_54198.getAssociatedValuesFor_enabled (extractedValue_54291_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_54291_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1301)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54502_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54502_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_54786 ;
      GGS_typeKind var_type_54825 ;
      GGS_location var_errorLocation_54852 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54502_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_54786, var_type_54825, var_errorLocation_54852, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1307)) ;
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_type_54825.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1317)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1317)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_54852, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1318)) ;
        }
      }
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_50303.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1320)).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_54852, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1321)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_54786, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1323)) ;
      }
    }
    break ;
  }
  {
  GGS_string temp_28 ;
  const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_29) {
    temp_28 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_29) {
    temp_28 = GGS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1329)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                               const GGS_bool constinArgument_inHandlesEnabledBinding,
                                                                                                               const GGS_bool constinArgument_inPreferences,
                                                                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                               GGS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1356)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_56283_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_56283_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_56567 ;
      GGS_typeKind var_type_56606 ;
      GGS_location var_errorLocation_56633 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56283_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_56567, var_type_56606, var_errorLocation_56633, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1358)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1368)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_56633, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1369)) ;
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_type_56606.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1371)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1371)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_56633, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1372)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_56567  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1374)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                              const GGS_bool constinArgument_inHandlesRunAction,
                                                                                              const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_lstring constinArgument_inTypeName,
                                                                                              const GGS_actionMap constinArgument_inActionMap,
                                                                                              const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                              const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                              const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                              GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GGS_runActionDescriptor::Enumeration::invalid:
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_noAction:
    {
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1391)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_57830_target_0 ;
      GGS_lstring extractedValue_57847_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_57830_target_0, extractedValue_57847_action_1) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1393)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_57830_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_57847_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1397)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_57847_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1398)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extractedValue_57830_target_0.readProperty_string ().objectCompare (GGS_string ("prefs"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              constinArgument_inPreferencesActionMap.method_searchKey (extractedValue_57847_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1404)) ;
              outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("g").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)).add_operation (GGS_string ("!"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)), extractedValue_57847_action_1.readProperty_string (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1408))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1405)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GGS_actionMap var_controllerActionMap_58643 ;
            GGS_propertyKind joker_58615 ; // Joker input parameter
            GGS_bool joker_58672 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_57830_target_0, joker_58615, var_controllerActionMap_58643, joker_58672, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1411)) ;
            var_controllerActionMap_58643.method_searchKey (extractedValue_57847_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1417)) ;
            GGS_string temp_4 ;
            const GalgasBool test_5 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              temp_4 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_5) {
              temp_4 = GGS_string::makeEmptyString () ;
            }
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_4.add_operation (extractedValue_57830_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1419)), extractedValue_57847_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421)).add_operation (extractedValue_57830_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1418)) ;
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding?prefs???????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                       const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                                       const GGS_lstring constinArgument_inOutletTypeName,
                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                       const GGS_string constinArgument_inSelfSwiftName,
                                                                                       GGS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_59577 (constinArgument_inRegularBindingList) ;
  while (enumerator_59577.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1442)) ;
    GGS_outletBindingModelList var_boundModelTypeList_59677 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1443)) ;
    GGS_boundObjectList var_boundModelListForGeneration_59726 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_59768 (enumerator_59577.current_mObservablePropertyList (HERE)) ;
    while (enumerator_59768.hasCurrentObject ()) {
      GGS_propertyKind var_kind_60042 ;
      GGS_string var__5F_swiftTypeStringForTransientFunctionArgument_60069 ;
      GGS_string var__5F_protocolTypeName_60136 ;
      GGS_string var__5F_defaultValueAsString_60176 ;
      GGS_propertyMap temp_2 ;
      const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_59768.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_60042, var__5F_swiftTypeStringForTransientFunctionArgument_60069, var__5F_protocolTypeName_60136, var__5F_defaultValueAsString_60176, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1445)) ;
      switch (var_kind_60042.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_60277__0 ;
          GGS_propertyAccessibility extractedValue_60277__1 ;
          GGS_bool extractedValue_60277__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_60277__3 ;
          var_kind_60042.getAssociatedValuesFor_toMany (extractedValue_60277__0, extractedValue_60277__1, extractedValue_60277__2, extractedValue_60277__3) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59768.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1457)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1457)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_60383__0 ;
          GGS_propertyAccessibility extractedValue_60383__1 ;
          GGS_bool extractedValue_60383__2 ;
          GGS_toOneOppositeRelationship extractedValue_60383__3 ;
          GGS_bool extractedValue_60383__4 ;
          var_kind_60042.getAssociatedValuesFor_toOne (extractedValue_60383__0, extractedValue_60383__1, extractedValue_60383__2, extractedValue_60383__3, extractedValue_60383__4) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59768.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1459)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1459)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_60498__0 ;
          GGS_bool extractedValue_60498__1 ;
          var_kind_60042.getAssociatedValuesFor_arrayController (extractedValue_60498__0, extractedValue_60498__1) ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59768.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1461)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1461)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_60619__0 ;
          var_kind_60042.getAssociatedValuesFor_selectionController (extractedValue_60619__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59768.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1463)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1463)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_59726.setter_append (extensionGetter_modelStringForSelf (enumerator_59768.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1465)), var_kind_60042, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1465)) ;
      }
      {
      var_boundModelTypeList_59677.setter_append (var_kind_60042, extensionGetter_location (enumerator_59768.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1466)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1466)) ;
      }
      enumerator_59768.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1469)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_60984 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1470)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61071 = temp_9 ;
    GGS_lstring var_outletTypeName_61121 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_61163 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).isValid ()) {
      uint32_t variant_61184 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).uintValue () ;
      bool loop_61184 = true ;
      while (loop_61184) {
        loop_61184 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61121.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61163 COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).isValid () ;
        if (loop_61184) {
          loop_61184 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61121.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61163 COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).boolValue () ;
        }
        if (loop_61184 && (0 == variant_61184)) {
          loop_61184 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.galgas4", 1473)) ;
        }
        if (loop_61184) {
          variant_61184 -= 1 ;
          var_continues_61163 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_61426 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_61461 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61121, var_superOutletClassName_61426, var_bindingMap_61461, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1475)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_bindingMap_61461.getter_contains (enumerator_59577.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1480)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              var_bindingMap_61461.method_searchKey (enumerator_59577.current_mBindingName (HERE), var_outletBindingSpecificationModelList_60984, var_controllerBindingOptionDecoratedList_61071, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1481)) ;
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            var_continues_61163 = GGS_bool (true) ;
            var_outletTypeName_61121 = var_superOutletClassName_61426 ;
          }
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_continues_61163.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_59577.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1492)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_59677.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1493)).objectCompare (var_outletBindingSpecificationModelList_60984.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1493)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_59577.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_60984.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1495)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1495)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1495)).add_operation (var_boundModelTypeList_59677.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1497)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1496)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1496)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1497)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1494)) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_62193 (var_outletBindingSpecificationModelList_60984) ;
        UpEnumerator_outletBindingModelList enumerator_62288 (var_boundModelTypeList_59677) ;
        while (enumerator_62193.hasCurrentObject () && enumerator_62288.hasCurrentObject ()) {
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_bool test_16 = enumerator_62193.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_62288.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1501)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_62288.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1502)) ;
            }
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_bool test_19 = enumerator_62193.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 1504)) ;
            if (GalgasBool::boolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_62288.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1504)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_62193.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1505)).objectCompare (extensionGetter_swiftTypeName (enumerator_62288.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1505)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_62288.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62193.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)) ;
              }
            }
          }
          enumerator_62193.gotoNextObject () ;
          enumerator_62288.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_62864 = GGS_string::makeEmptyString () ;
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_61071.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1512)).objectCompare (enumerator_59577.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1512)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GGS_string var_s_62990 ;
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_61071.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1514)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            var_s_62990 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_23) {
          var_s_62990 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_63191 (var_controllerBindingOptionDecoratedList_61071) ;
          while (enumerator_63191.hasCurrentObject ()) {
            var_s_62990.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_63191.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)).add_operation (extensionGetter_swiftTypeName (enumerator_63191.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)) ;
            enumerator_63191.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_59577.current_mBindingName (HERE).readProperty_location (), var_s_62990, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1522)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_63418 (var_controllerBindingOptionDecoratedList_61071) ;
      UpEnumerator_bindingOptionList enumerator_63505 (enumerator_59577.current_mBindingOptionList (HERE)) ;
      while (enumerator_63418.hasCurrentObject () && enumerator_63505.hasCurrentObject ()) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_63418.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_63505.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_63505.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_63418.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)) ;
          }
        }
        GGS_string var_optionValueAsString_63894 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1529)) ;
        temp_27.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_63418.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1529)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_63505.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_63894, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1528)) ;
        var_bindingOptionString_62864.plusAssignOperation(GGS_string (", ").add_operation (enumerator_63418.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)).add_operation (var_optionValueAsString_63894, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)) ;
        enumerator_63418.gotoNextObject () ;
        enumerator_63505.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_59577.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_59726, var_bindingOptionString_62864, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1537)) ;
    }
    enumerator_59577.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astHStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
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
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_65327 ;
  GGS_classKind joker_65317_2 ; // Joker input parameter
  GGS_propertyMap joker_65317_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_65349 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1561)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1561)), inCompiler COMMA_HERE), joker_65317_2, joker_65317_1, var_preferencesActionMap_65327, joker_65349, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1561)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1562)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65400 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_65935 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_65327, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_65935, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1563)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1580)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_65999 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66106_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66106_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66416 ;
      GGS_typeKind var_type_66455 ;
      GGS_location var_errorLocation_66482 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66106_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66416, var_type_66455, var_errorLocation_66482, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1584)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_66455.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1594)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1594)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_66482, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1595)) ;
        }
      }
      {
      var_multipleBindingGenerationList_65999.setter_append (GGS_string ("hidden"), var_hiddenExpression_66416, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1597)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_66703 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_66703.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67130 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66703.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67130, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1603)) ;
    {
    var_instructionList_65400.setter_append (var_generatedInstruction_67130, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1618)) ;
    }
    enumerator_66703.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_65935, var_instructionList_65400, var_multipleBindingGenerationList_65999, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@astVStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
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
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_68506 ;
  GGS_classKind joker_68496_2 ; // Joker input parameter
  GGS_propertyMap joker_68496_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_68528 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1644)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1644)), inCompiler COMMA_HERE), joker_68496_2, joker_68496_1, var_preferencesActionMap_68506, joker_68528, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1644)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1645)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_68579 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_69114 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_68506, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_69114, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1646)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1663)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69178 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_69285_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_69285_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_69595 ;
      GGS_typeKind var_type_69634 ;
      GGS_location var_errorLocation_69661 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69285_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_69595, var_type_69634, var_errorLocation_69661, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1667)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_69634.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1677)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1677)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_69661, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1678)) ;
        }
      }
      {
      var_multipleBindingGenerationList_69178.setter_append (GGS_string ("hidden"), var_hiddenExpression_69595, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1680)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_69864 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_69864.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_70292 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_69864.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70292, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1683)) ;
    {
    var_instructionList_68579.setter_append (var_generatedInstruction_70292, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1698)) ;
    }
    enumerator_69864.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_8 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_9 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21__21__21_ (temp_7.readProperty_mHasVerticalScroller (), temp_8.readProperty_mConfiguratorName (), var_funcCallList_69114, var_instructionList_68579, var_multipleBindingGenerationList_69178, temp_9.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutSeparatorInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)).add_operation (GGS_string (".appendSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutGutterInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                       const GGS_string constinArgument_inName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutGutterInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutGutterInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                             const GGS_string constinArgument_inReceiverViewName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)).add_operation (GGS_string (".appendGutter ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                              const GGS_string constinArgument_inViewName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1934)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1934)) ;
  result_result.plusAssignOperation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1935)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1936)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_80738 (temp_1.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_80738.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_80738.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (enumerator_80738.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)) ;
    enumerator_80738.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_80863 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_80863.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_80863.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("hStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1941)) ;
    enumerator_80863.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1943)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1944)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_string constinArgument_inViewName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1951)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1951)) ;
  result_result.plusAssignOperation(GGS_string ("    let vStackView = "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1952)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedVerticalViewGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1954)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1956)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1958)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedVerticalViewGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedVerticalViewGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)).add_operation (GGS_string (" (vStackView)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)) ;
    }
  }
  const GGS_computedVerticalViewGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1962)) ;
  const GGS_computedVerticalViewGeneration temp_6 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_81896 (temp_6.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_81896.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_81896.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (enumerator_81896.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)) ;
    enumerator_81896.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_7 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_82021 (temp_7.readProperty_mInstructionList ()) ;
  while (enumerator_82021.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82021.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("vStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1967)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1967)) ;
    enumerator_82021.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1969)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1970)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutSpaceViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)).add_operation (GGS_string (".appendFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                        const GGS_string constinArgument_inName,
                                                                                        const GGS_string constinArgument_inIndentation,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutDividerInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                              const GGS_string constinArgument_inReceiverViewName,
                                                                                              const GGS_string constinArgument_inIndentation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)).add_operation (GGS_string (".appendDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutLocalViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_string constinArgument_inName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_85570 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_85570.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_85570.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)).add_operation (enumerator_85570.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)) ;
    enumerator_85570.gotoNextObject () ;
    if (enumerator_85570.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2036)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2038)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2039)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_85814 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_85814.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)).add_operation (enumerator_85814.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)) ;
    UpEnumerator_boundObjectList enumerator_85964 (enumerator_85814.current_mBoundObjectList (HERE)) ;
    while (enumerator_85964.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_85964.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2043)) ;
      enumerator_85964.gotoNextObject () ;
      if (enumerator_85964.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2044)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_85814.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2046)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2046)) ;
    enumerator_85814.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_86125 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_86125.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (enumerator_86125.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_86125.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)) ;
    enumerator_86125.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_86341_targetName_0 ;
      GGS_string extractedValue_86353_actionName_1 ;
      GGS_string extractedValue_86365_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_86341_targetName_0, extractedValue_86353_actionName_1, extractedValue_86365_targetTypeName_2) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2054)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2054)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)).add_operation (extractedValue_86341_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (extractedValue_86365_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (extractedValue_86353_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2057)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2057)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_86734_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_86734_controllerName_0) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)).add_operation (extractedValue_86734_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_86906 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (var_prefix_86906, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutComputedViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                                   const GGS_string constinArgument_inReceiverViewName,
                                                                                                   const GGS_string constinArgument_inIndentation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2085)) ;
  GGS_string var_indentation_87977 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2086)) ;
  GGS_string var_name_88018 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2087)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88182 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_88182.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_88182.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)).add_operation (enumerator_88182.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)) ;
    enumerator_88182.gotoNextObject () ;
    if (enumerator_88182.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2093)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2095)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), var_indentation_87977, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2096)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_88424 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_88424.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)).add_operation (enumerator_88424.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)) ;
    UpEnumerator_boundObjectList enumerator_88572 (enumerator_88424.current_mBoundObjectList (HERE)) ;
    while (enumerator_88572.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_88572.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2100)) ;
      enumerator_88572.gotoNextObject () ;
      if (enumerator_88572.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2101)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_88424.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2103)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2103)) ;
    enumerator_88424.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_88733 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_88733.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (enumerator_88733.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_88733.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)) ;
    enumerator_88733.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_88947_targetName_0 ;
      GGS_string extractedValue_88959_actionName_1 ;
      GGS_string extractedValue_88971_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_88947_targetName_0, extractedValue_88959_actionName_1, extractedValue_88971_targetTypeName_2) ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2111)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2111)) ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)).add_operation (extractedValue_88947_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)) ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (extractedValue_88971_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (extractedValue_88959_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)) ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2114)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2114)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_89332_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_89332_controllerName_0) ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)).add_operation (extractedValue_89332_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_89502 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (var_prefix_89502, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)) ;
    }
  }
  result_result.plusAssignOperation(var_indentation_87977.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (var_name_88018, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2136)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2136)) ;
//---
  return result_result ;
}


