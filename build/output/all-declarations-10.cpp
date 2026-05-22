#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                          GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          const GGS_stringset /* constinArgument_inUsedProtocolSet */,
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
  GGS_string var_s_12121 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 330))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12792 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12792, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 348)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12792, var_s_12121, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 349)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_12979 (temp_19.readProperty_mConfiguratorMap ()) ;
  while (enumerator_12979.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_13031 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12979.current_lkey (HERE).readProperty_string (), enumerator_12979.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 355))) ;
    GGS_string var_header_13213 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 360)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 362)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 363)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13555 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (enumerator_12979.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13555, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 366)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13555, GGS_string ("//"), var_header_13213, GGS_string ("\n\n"), var_s_13031, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 375)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 367)) ;
    }
    enumerator_12979.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_14134 (temp_22.readProperty_mOutletLinkerGenerationList ()) ;
  while (enumerator_14134.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_14208 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_14134.current_mLinkerName (HERE), enumerator_14134.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380))) ;
    GGS_string var_header_14380 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 387)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 388)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 389)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14722 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (enumerator_14134.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 390)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14722, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 391)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14722, GGS_string ("//"), var_header_14380, GGS_string ("\n\n"), var_s_14208, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)) ;
    }
    enumerator_14134.gotoNextObject () ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_521_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_521 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_521.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_521.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue ()) ;
      enumerator_521.gotoNextObject () ;
      index_521_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_901_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_901 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_901.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_901.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1408_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_1408 (in_OUTLET_5F_GENERATION_5F_MAP) ;
    while (enumerator_1408.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1408.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1408.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1408.gotoNextObject () ;
      index_1408_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1818_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_1818 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_1818.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1818.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1818.gotoNextObject () ;
      index_1818_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3064.gotoNextObject () ;
      index_3064_.increment () ;
    }
  }
  GGS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_3440.gotoNextObject () ;
      index_3440_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4631_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4631 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST) ;
    while (enumerator_4631.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4631.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4740_ (0) ;
      if (enumerator_4631.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_4740 (enumerator_4631.current_mOutletNameAndTypeNameList (HERE)) ;
        while (enumerator_4740.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4740.current_mValue_30_ (HERE).stringValue ()) ;
          enumerator_4740.gotoNextObject () ;
          if (enumerator_4740.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_4740_.increment () ;
        }
      }
      result.appendString (")\n") ;
      enumerator_4631.gotoNextObject () ;
      index_4631_.increment () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5224_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5224 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5224.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5224.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5224.gotoNextObject () ;
      index_5224_.increment () ;
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
                                                                                                const GGS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_235_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_235 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST) ;
    while (enumerator_235.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_235.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_235.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\?") ;
      enumerator_235.gotoNextObject () ;
      if (enumerator_235.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_235_.increment () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
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
  GGS_string var_outputDirectory_3209 = constinArgument_inSourceFile.getter_deletingLastPathComponent (SOURCE_FILE ("code-generation.ggs", 67)) ;
  GGS_string var_projectName_3272 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.ggs", 68)).getter_deletingPathExtension (SOURCE_FILE ("code-generation.ggs", 68)) ;
  GGS_string var_fileOutputDirectory_3345 = var_outputDirectory_3209.add_operation (GGS_string ("/../"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 69)).add_operation (var_projectName_3272, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 69)) ;
  GGS_stringset var_generatedFileSet_3423 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedProtocolSet_3462 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_fileGenerationList enumerator_3490 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3490.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_31_ ((cPtr_abstractFileGeneration *) enumerator_3490.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3345, constinArgument_inGeneration, var_usedProtocolSet_3462, var_generatedFileSet_3423, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 73)) ;
    enumerator_3490.gotoNextObject () ;
  }
  UpEnumerator_fileGenerationList enumerator_3701 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3701.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_32_ ((cPtr_abstractFileGeneration *) enumerator_3701.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3345, constinArgument_inGeneration, var_usedProtocolSet_3462, var_generatedFileSet_3423, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 81)) ;
    enumerator_3701.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext_3F__3F__26_ (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_3345, var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 88)) ;
  }
  {
  routine_generateSelectionControllers_3F__3F__26_ (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_3345, var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 93)) ;
  }
  {
  routine_generateValidationRoutineStubs_3F__3F__26_ (var_fileOutputDirectory_3345, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 98)) ;
  }
  {
  routine_generateStandardProperties_3F__3F__3F__26_ (var_fileOutputDirectory_3345, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 103)) ;
  }
  {
  routine_generateXcodeProject_3F__3F__3F__3F_ (var_outputDirectory_3209, constinArgument_inXcodeProjectString, var_generatedFileSet_3423, var_projectName_3272, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 109)) ;
  }
  {
  routine_generateTestFile_3F__3F__3F__3F_ (constinArgument_inXcodeProjectString, var_projectName_3272, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_3209, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 115)) ;
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
  const GalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 11)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
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
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBPreferenceProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
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
  const GalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//   Transient property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("//   Property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_TRANSIENT.operator_not (SOURCE_FILE ("class-standard-property.swift.galgasTemplate", 17)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
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
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBPreferenceProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
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
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("UInt32"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 148)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Int"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 149)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Bool"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 150)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Double"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 151)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("String"), GGS_bool (false), GGS_string ("localizedStandardCompare"), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 152)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Data"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 153)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Date"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 154)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("BezierPathArray"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 155)) ;
  }
  UpEnumerator_stringlist enumerator_6523 (constinArgument_inPropertyClassList) ;
  while (enumerator_6523.hasCurrentObject ()) {
    {
    routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6523.current_mValue (HERE), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 158)) ;
    }
    enumerator_6523.gotoNextObject () ;
  }
  UpEnumerator_transientExternTypeList enumerator_6693 (constinArgument_inTransientPropertyExternTypeList) ;
  while (enumerator_6693.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_6693.current_mIsClass (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6693.current_mTypeName (HERE), GGS_bool (true), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 162)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, enumerator_6693.current_mTypeName (HERE), GGS_bool (true), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 164)) ;
      }
    }
    enumerator_6693.gotoNextObject () ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSBezierPath"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 167)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSFont"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 168)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSColor"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 169)) ;
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
  GGS_string var_contents_7682 = GGS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, constinArgument_inClassPropertyTypeName, constinArgument_inTransient COMMA_SOURCE_FILE ("code-generation.ggs", 178))) ;
  GGS_string var_fileName_7804 = GGS_string ("property-").add_operation (constinArgument_inClassPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 180)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 180)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_7804, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 181)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7804, var_contents_7682, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 182)) ;
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
  GGS_string var_contents_8447 = GGS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, constinArgument_inScalarPropertyTypeName, constinArgument_inTransient, constinArgument_inComparisonMethod COMMA_SOURCE_FILE ("code-generation.ggs", 196))) ;
  GGS_string var_fileName_8591 = GGS_string ("property-").add_operation (constinArgument_inScalarPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 198)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 198)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_8591, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 199)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8591, var_contents_8447, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 200)) ;
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
  GGS_XcodeProjectDescriptor var_xcodeProject_1556 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1637 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1658 = GGS_string ("10.10") ;
  {
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 57)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 58)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 60)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 61)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 64)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 65)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 66)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 67)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 68)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 69)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 70)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 71)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 72)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 73)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 74)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 75)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 76)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 79)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 80)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 81)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 82)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 83)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 84)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 85)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 86)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 87)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("HEADER_SEARCH_PATHS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 88)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1658, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 89)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 89)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = ").add_operation (var_SDK_1637, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 90)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 90)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 91)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 4.2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 92)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1556, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 55)) ;
  }
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 96)) ;
  GGS_stringlist var_swiftFileRefList_3529 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 97)) ;
  GGS_stringlist var_resourceFileRefList_3569 = temp_2 ;
  GGS_stringset var_generatedFileSet_3600 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3600.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 99)) ;
  }
  GGS_stringlist var_cppFileRefs_3690 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_3726 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_3760 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_3795 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4192 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3600, var_cppFileRefs_3690, var_mFileRefs_3726, var_mmFileRefs_3760, var_swiftFileRefList_3529, var_frameworkFileRefs_3795, var_resourceFileRefList_3569, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 116)) ;
  }
  GGS_stringlist var_cppFileRefs_32__4272 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_32__4309 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_32__4344 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_32__4380 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4272, var_mFileRefs_32__4309, var_mmFileRefs_32__4344, var_swiftFileRefList_3529, var_frameworkFileRefs_32__4380, var_resourceFileRefList_3569, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 133)) ;
  }
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 139)) ;
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 142)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)) ;
  GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 146)) ;
  GGS_string joker_5297 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1556, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3529, temp_4, var_resourceFileRefList_3569, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 147)), joker_5297, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 135)) ;
  }
  GGS_string var_sourceDir_5347 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1556, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)), var_sourceDir_5347.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  temp_8.plusPlusAssignOperation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  GGS_string var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.ggs", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5347, GGS_string ("Info.plist"), var_s_5610, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 163)) ;
  }
  var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5347, GGS_string ("MainMenu.xib"), var_s_5610, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 171)) ;
  }
  var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 176))) ;
  GGS_bool joker_6103 ; // Joker input parameter
  var_s_5610.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 178)), joker_6103, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 177)) ;
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
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const GGS_lstringlist constinArgument_inActionDeclarationList,
                                     GGS_actionMap & outArgument_outActionMap,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  outArgument_outActionMap = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_1756 (constinArgument_inActionDeclarationList) ;
  while (enumerator_1756.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1756.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1756.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@actionFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                              const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                              GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                              GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@actionFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                              const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                              const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                              GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actionFileGeneration temp_0 = this ;
  const GGS_actionFileGeneration temp_1 = this ;
  GGS_string var_s_2884 = GGS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 77))) ;
  const GGS_actionFileGeneration temp_2 = this ;
  const GGS_actionFileGeneration temp_3 = this ;
  GGS_string var_fileName_2996 = GGS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2996, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 82)) ;
  }
  {
  GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2996, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_2884, GGS_string ("    ENTER USER CODE HERE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 91)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 91)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 83)) ;
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
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 63)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 65)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
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
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
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
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 237)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_8531 ;
    GGS_bool var_handlesTableValueBinding_8556 ;
    GGS_bool var_hasEnabled_8593 ;
    GGS_bool var_hasHidden_8616 ;
    GGS_bool var_handlesGraphicControllerBinding_8638 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8516 ; // Joker input parameter
    GGS_bool joker_8677_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_8677_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8677_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8516, var_hasRunAction_8531, var_handlesTableValueBinding_8556, var_hasEnabled_8593, var_hasHidden_8616, var_handlesGraphicControllerBinding_8638, joker_8677_3, joker_8677_2, joker_8677_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 261)) ;
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 264)) ;
      }
    }
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 267)) ;
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 270)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 273)) ;
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
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 276)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets?????????&!!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                             const GGS_string /* constinArgument_inRootEntityName */,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_outletDeclarationList constinArgument_inOutletDeclarationList,
                                                                                             const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                             const GGS_actionMap constinArgument_inActionMap,
                                                                                             const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                             GGS_generationStruct & ioArgument_ioGeneration,
                                                                                             GGS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                             GGS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                             GGS_actionBindingListForGeneration & outArgument_outTargetActionList,
                                                                                             GGS_decoratedOutletMap & outArgument_outletMap,
                                                                                             GGS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                                                                                             GGS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  GGS_regularBindingsGenerationList temp_0 = GGS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 207)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_actionBindingListForGeneration temp_1 = GGS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
  outArgument_outTargetActionList = temp_1 ;
  GGS_multipleBindingGenerationList temp_2 = GGS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  outArgument_outletMap = GGS_decoratedOutletMap::init (inCompiler COMMA_HERE) ;
  GGS_tableViewBindingGenerationList temp_3 = GGS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 211)) ;
  outArgument_outTableViewBindingGenerationList = temp_3 ;
  GGS_ebViewGraphicControllerBindingGenerationList temp_4 = GGS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 212)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_4 ;
  UpEnumerator_outletDeclarationList enumerator_8190 (constinArgument_inOutletDeclarationList) ;
  while (enumerator_8190.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8190.current_mOutletName (HERE), enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 214)) ;
    }
    GGS_bool var_handlesRunAction_8431 ;
    GGS_bool var_handlesTableViewBinding_8466 ;
    GGS_bool var_handlesEnabledBinding_8508 ;
    GGS_bool var_handlesHiddenBinding_8548 ;
    GGS_bool var_handleGraphicControllerBinding_8587 ;
    GGS_bool var_outletClassIsUserDefined_8636 ;
    GGS_lstring joker_8410 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8190.current_mOutletTypeName (HERE), joker_8410, var_handlesRunAction_8431, var_handlesTableViewBinding_8466, var_handlesEnabledBinding_8508, var_handlesHiddenBinding_8548, var_handleGraphicControllerBinding_8587, var_outletClassIsUserDefined_8636, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 215)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_outletClassIsUserDefined_8636.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 225)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 226)) ;
        }
      }
    }
    switch (enumerator_8190.current_mGraphicController (HERE).enumValue ()) {
    case GGS_graphicController::Enumeration::invalid:
      break ;
    case GGS_graphicController::Enumeration::enum_none:
      break ;
    case GGS_graphicController::Enumeration::enum_defined:
      {
        GGS_lstring extractedValue_8903_controllerName_0 ;
        GGS_lstring extractedValue_8928_propertyName_1 ;
        enumerator_8190.current_mGraphicController (HERE).getAssociatedValuesFor_defined (extractedValue_8903_controllerName_0, extractedValue_8928_propertyName_1) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_handleGraphicControllerBinding_8587.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 232)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 233)) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GGS_propertyKind var_kind_9234 ;
          GGS_actionMap joker_9250_2 ; // Joker input parameter
          GGS_bool joker_9250_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_8903_controllerName_0, var_kind_9234, joker_9250_2, joker_9250_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 235)) ;
          switch (var_kind_9234.enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_9309__0 ;
              GGS_propertyAccessibility extractedValue_9309__1 ;
              var_kind_9234.getAssociatedValuesFor_property (extractedValue_9309__0, extractedValue_9309__1) ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 242)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_9419__0 ;
              GGS_propertyAccessibility extractedValue_9419__1 ;
              GGS_bool extractedValue_9419__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_9419__3 ;
              var_kind_9234.getAssociatedValuesFor_toMany (extractedValue_9419__0, extractedValue_9419__1, extractedValue_9419__2, extractedValue_9419__3) ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_9528__0 ;
              GGS_propertyAccessibility extractedValue_9528__1 ;
              GGS_bool extractedValue_9528__2 ;
              GGS_toOneOppositeRelationship extractedValue_9528__3 ;
              GGS_bool extractedValue_9528__4 ;
              var_kind_9234.getAssociatedValuesFor_toOne (extractedValue_9528__0, extractedValue_9528__1, extractedValue_9528__2, extractedValue_9528__3, extractedValue_9528__4) ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            {
              GGS_lstring extractedValue_9646_entityName_0 ;
              GGS_bool extractedValue_9658_graphic_1 ;
              var_kind_9234.getAssociatedValuesFor_arrayController (extractedValue_9646_entityName_0, extractedValue_9658_graphic_1) ;
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, extractedValue_8928_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GalgasBool test_12 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_12) {
                    test_12 = extractedValue_9658_graphic_1.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 249)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_12) {
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_9646_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 250)) ;
                    }
                  }
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GGS_propertyMap var_observablePropertyMap_10001 ;
                GGS_classKind joker_9978 ; // Joker input parameter
                GGS_actionMap joker_10038_2 ; // Joker input parameter
                GGS_propertyGenerationList joker_10038_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9646_entityName_0, joker_9978, var_observablePropertyMap_10001, joker_10038_2, joker_10038_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                GGS_propertyKind var_propertyKind_10120 ;
                GGS_actionMap joker_10134_2 ; // Joker input parameter
                GGS_bool joker_10134_1 ; // Joker input parameter
                var_observablePropertyMap_10001.method_searchKey (extractedValue_8928_propertyName_1, var_propertyKind_10120, joker_10134_2, joker_10134_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                switch (var_propertyKind_10120.enumValue ()) {
                case GGS_propertyKind::Enumeration::invalid:
                  break ;
                case GGS_propertyKind::Enumeration::enum_property:
                  {
                    GGS_typeKind extractedValue_10200__0 ;
                    GGS_propertyAccessibility extractedValue_10200__1 ;
                    var_propertyKind_10120.getAssociatedValuesFor_property (extractedValue_10200__0, extractedValue_10200__1) ;
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toMany:
                  {
                    GGS_lstring extractedValue_10315_kEntityName_0 ;
                    GGS_propertyAccessibility extractedValue_10328__1 ;
                    GGS_bool extractedValue_10331_isGraphic_2 ;
                    GGS_toManyRelationshipOptionAST extractedValue_10342__3 ;
                    var_propertyKind_10120.getAssociatedValuesFor_toMany (extractedValue_10315_kEntityName_0, extractedValue_10328__1, extractedValue_10331_isGraphic_2, extractedValue_10342__3) ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = extractedValue_10331_isGraphic_2.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 264)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        GenericArray <FixItDescription> fixItArray16 ;
                        inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_10315_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)), fixItArray16  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 265)) ;
                      }
                    }
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toOne:
                  {
                    GGS_lstring extractedValue_10540__0 ;
                    GGS_propertyAccessibility extractedValue_10540__1 ;
                    GGS_bool extractedValue_10540__2 ;
                    GGS_toOneOppositeRelationship extractedValue_10540__3 ;
                    GGS_bool extractedValue_10540__4 ;
                    var_propertyKind_10120.getAssociatedValuesFor_toOne (extractedValue_10540__0, extractedValue_10540__1, extractedValue_10540__2, extractedValue_10540__3, extractedValue_10540__4) ;
                    GenericArray <FixItDescription> fixItArray17 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 268)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_arrayController:
                  {
                    GGS_lstring extractedValue_10665__0 ;
                    GGS_bool extractedValue_10665__1 ;
                    var_propertyKind_10120.getAssociatedValuesFor_arrayController (extractedValue_10665__0, extractedValue_10665__1) ;
                    GenericArray <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_selectionController:
                  {
                    GGS_string extractedValue_10793__0 ;
                    var_propertyKind_10120.getAssociatedValuesFor_selectionController (extractedValue_10793__0) ;
                    GenericArray <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            {
              GGS_string extractedValue_10946__0 ;
              var_kind_9234.getAssociatedValuesFor_selectionController (extractedValue_10946__0) ;
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 276)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), extractedValue_8903_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 278)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GGS_tableValueBinding::Enumeration::invalid:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
      {
        GGS_lstring extractedValue_11343_controllerName_0 ;
        enumerator_8190.current_mTableValueBindingDescriptor (HERE).getAssociatedValuesFor_tableValueBinding (extractedValue_11343_controllerName_0) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = var_handlesTableViewBinding_8466.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 288)).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)), fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 289)) ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          GGS_propertyKind var_kind_11643 ;
          GGS_actionMap joker_11659_2 ; // Joker input parameter
          GGS_bool joker_11659_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11343_controllerName_0, var_kind_11643, joker_11659_2, joker_11659_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 291)) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = var_kind_11643.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 296)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 296)).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GenericArray <FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_11343_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 297)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), extractedValue_11343_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 299)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mRunDescriptor (HERE).enumValue ()) {
    case GGS_runActionDescriptor::Enumeration::invalid:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_noAction:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_action:
      {
        GGS_lstring extractedValue_12052_target_0 ;
        GGS_lstring extractedValue_12069_action_1 ;
        enumerator_8190.current_mRunDescriptor (HERE).getAssociatedValuesFor_action (extractedValue_12052_target_0, extractedValue_12069_action_1) ;
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_handlesRunAction_8431.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 309)).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 310)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, extractedValue_12052_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12069_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 312)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("self"), extractedValue_12069_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_27) {
            GGS_actionMap var_controllerActionMap_12607 ;
            GGS_propertyKind joker_12577 ; // Joker input parameter
            GGS_bool joker_12638 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12052_target_0, joker_12577, var_controllerActionMap_12607, joker_12638, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 320)) ;
            var_controllerActionMap_12607.method_searchKey (extractedValue_12069_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 326)) ;
            {
            GGS_string temp_28 ;
            const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              temp_28 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_29) {
              temp_28 = GGS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), temp_28.add_operation (extractedValue_12052_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 329)), extractedValue_12069_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)).add_operation (extractedValue_12052_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 331)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13115_expression_0 ;
        enumerator_8190.current_mEnabledBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13115_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13413 ;
        GGS_typeKind var_type_13454 ;
        GGS_location var_errorLocation_13483 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13115_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13413, var_type_13454, var_errorLocation_13483, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          test_30 = var_handlesEnabledBinding_8508.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 349)).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (var_errorLocation_13483, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray31  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
          }
        }
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          test_32 = var_type_13454.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 352)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 352)).boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (var_errorLocation_13483, GGS_string ("expression is not boolean"), fixItArray33  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 353)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("enabled"), var_enableExpression_13413, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 355)) ;
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_14027_expression_0 ;
        enumerator_8190.current_mHiddenBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_14027_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14325 ;
        GGS_typeKind var_type_14366 ;
        GGS_location var_errorLocation_14395 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_14027_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14325, var_type_14366, var_errorLocation_14395, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 365)) ;
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = var_type_14366.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 375)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 375)).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (var_errorLocation_14395, GGS_string ("expression is not boolean"), fixItArray35  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 376)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          test_36 = var_handlesHiddenBinding_8548.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 378)).boolEnum () ;
          if (GalgasBool::boolTrue == test_36) {
            GenericArray <FixItDescription> fixItArray37 ;
            inCompiler->emitSemanticError (var_errorLocation_14395, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray37  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 379)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_14325, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 381)) ;
        }
      }
      break ;
    }
    {
    GGS_string temp_38 ;
    const GalgasBool test_39 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string ("preferences_") ;
    }else if (GalgasBool::boolFalse == test_39) {
      temp_38 = GGS_string ("self.") ;
    }
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8190.current_mOutletTypeName (HERE), enumerator_8190.current_mOutletName (HERE).readProperty_string (), enumerator_8190.current_mRegularBindingList (HERE), temp_38, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 388)) ;
    }
    enumerator_8190.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                        const GGS_lstring constinArgument_inOutletTypeName,
                                                                        const GGS_string constinArgument_inOutletName,
                                                                        const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                        const GGS_string constinArgument_inSelfSwiftName,
                                                                        GGS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_15770 (constinArgument_inRegularBindingList) ;
  while (enumerator_15770.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
    GGS_outletBindingModelList var_boundModelTypeList_15870 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 418)) ;
    GGS_boundObjectList var_boundModelListForGeneration_15919 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_15961 (enumerator_15770.current_mObservablePropertyList (HERE)) ;
    while (enumerator_15961.hasCurrentObject ()) {
      GGS_propertyKind var_kind_16179 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_16213 ;
      GGS_string var_protocolTypeName_16286 ;
      GGS_string var_defaultValueAsString_16332 ;
      extensionMethod_analyzeObservableProperty (enumerator_15961.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16179, var_swiftTypeStringForTransientFunctionArgument_16213, var_protocolTypeName_16286, var_defaultValueAsString_16332, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 420)) ;
      switch (var_kind_16179.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_16432__0 ;
          GGS_propertyAccessibility extractedValue_16432__1 ;
          GGS_bool extractedValue_16432__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_16432__3 ;
          var_kind_16179.getAssociatedValuesFor_toMany (extractedValue_16432__0, extractedValue_16432__1, extractedValue_16432__2, extractedValue_16432__3) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 432)), GGS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 432)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_16538__0 ;
          GGS_propertyAccessibility extractedValue_16538__1 ;
          GGS_bool extractedValue_16538__2 ;
          GGS_toOneOppositeRelationship extractedValue_16538__3 ;
          GGS_bool extractedValue_16538__4 ;
          var_kind_16179.getAssociatedValuesFor_toOne (extractedValue_16538__0, extractedValue_16538__1, extractedValue_16538__2, extractedValue_16538__3, extractedValue_16538__4) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 434)), GGS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 434)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_16653__0 ;
          GGS_bool extractedValue_16653__1 ;
          var_kind_16179.getAssociatedValuesFor_arrayController (extractedValue_16653__0, extractedValue_16653__1) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)), GGS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_16774__0 ;
          var_kind_16179.getAssociatedValuesFor_selectionController (extractedValue_16774__0) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)), GGS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_15919.setter_append (extensionGetter_modelStringForSelf (enumerator_15961.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 441)), var_kind_16179, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 440)) ;
      }
      {
      var_boundModelTypeList_15870.setter_append (var_kind_16179, extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 444)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 444)) ;
      }
      enumerator_15961.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_6 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 447)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17163 = temp_6 ;
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 448)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17250 = temp_7 ;
    GGS_lstring var_outletTypeName_17300 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_17342 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).isValid ()) {
      uint32_t variant_17363 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).uintValue () ;
      bool loop_17363 = true ;
      while (loop_17363) {
        loop_17363 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17300.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17342 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).isValid () ;
        if (loop_17363) {
          loop_17363 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17300.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17342 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 451)).boolValue () ;
        }
        if (loop_17363 && (0 == variant_17363)) {
          loop_17363 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 451)) ;
        }
        if (loop_17363) {
          variant_17363 -= 1 ;
          var_continues_17342 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_17595 ;
          GGS_outletBindingSpecificationMap var_bindingMap_17661 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17300, var_superOutletClassName_17595, var_bindingMap_17661, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_bindingMap_17661.getter_hasKey (enumerator_15770.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_bindingMap_17661.method_searchKey (enumerator_15770.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17163, var_controllerBindingOptionDecoratedList_17250, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            var_continues_17342 = GGS_bool (true) ;
            var_outletTypeName_17300 = var_superOutletClassName_17595 ;
          }
        }
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_continues_17342.boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 470)) ;
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_15870.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (var_outletBindingSpecificationModelList_17163.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 471)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17163.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 473)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 473)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 473)).add_operation (var_boundModelTypeList_15870.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 475)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 474)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 474)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 475)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 472)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_18391 (var_outletBindingSpecificationModelList_17163) ;
        UpEnumerator_outletBindingModelList enumerator_18486 (var_boundModelTypeList_15870) ;
        while (enumerator_18391.hasCurrentObject () && enumerator_18486.hasCurrentObject ()) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_bool test_14 = enumerator_18391.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18486.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 480)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_bool test_17 = enumerator_18391.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 482)) ;
            if (GalgasBool::boolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 482)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_18 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_18) {
              test_18 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18391.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 483)).objectCompare (extensionGetter_swiftTypeName (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 483)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_18) {
                GenericArray <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18486.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18391.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)) ;
              }
            }
          }
          enumerator_18391.gotoNextObject () ;
          enumerator_18486.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_19062 = GGS_string::makeEmptyString () ;
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17250.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 490)).objectCompare (enumerator_15770.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 490)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GGS_string var_s_19188 ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17250.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 492)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            var_s_19188 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          var_s_19188 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_19390 (var_controllerBindingOptionDecoratedList_17250) ;
          while (enumerator_19390.hasCurrentObject ()) {
            var_s_19188.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_19390.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 497)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 497)).add_operation (extensionGetter_swiftTypeName (enumerator_19390.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 497)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 497)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 497)) ;
            enumerator_19390.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), var_s_19188, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 500)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_19617 (var_controllerBindingOptionDecoratedList_17250) ;
      UpEnumerator_bindingOptionList enumerator_19714 (enumerator_15770.current_mBindingOptionList (HERE)) ;
      while (enumerator_19617.hasCurrentObject () && enumerator_19714.hasCurrentObject ()) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_19617.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19714.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19714.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_19617.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 505)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 505)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 505)) ;
          }
        }
        GGS_string var_optionValueAsString_20103 ;
        GGS_typeKindList temp_25 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 508)) ;
        temp_25.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_19617.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 508)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19714.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20103, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 507)) ;
        var_bindingOptionString_19062.plusAssignOperation(GGS_string (", ").add_operation (enumerator_19617.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 512)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 512)).add_operation (var_optionValueAsString_20103, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 512)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 512)) ;
        enumerator_19617.gotoNextObject () ;
        enumerator_19714.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15770.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15919, var_bindingOptionString_19062, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 516)) ;
    }
    enumerator_15770.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & ioArgument_ioGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 66)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 61)) ;
  }
  {
  const GGS_transientClassDeclarationAST temp_3 = this ;
  const GGS_transientClassDeclarationAST temp_4 = this ;
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mIsClass (), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_lstring var_node_958 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_958, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_958, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3942 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 106)) ;
  }
  GGS_classKind var_classKind_4247 ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_4258_3 ; // Joker input parameter
  GGS_actionMap joker_4258_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_4258_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4247, joker_4258_3, joker_4258_2, joker_4258_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
  switch (var_classKind_4247.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toOneRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 110)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_4391__0 ;
      var_classKind_4247.getAssociatedValuesFor_atomic (extractedValue_4391__0) ;
      const GGS_toOneRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 112)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_4488__0 ;
      var_classKind_4247.getAssociatedValuesFor_document (extractedValue_4488__0) ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 114)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_4583__0 ;
      GGS_bool extractedValue_4586_graphic_1 ;
      GGS_bool extractedValue_4595__2 ;
      GGS_bool extractedValue_4598_handleOpposite_3 ;
      var_classKind_4247.getAssociatedValuesFor_entity (extractedValue_4583__0, extractedValue_4586_graphic_1, extractedValue_4595__2, extractedValue_4598_handleOpposite_3) ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      const GGS_toOneRelationshipAST temp_10 = this ;
      const GGS_toOneRelationshipAST temp_11 = this ;
      GGS_propertyKind var_kind_4626 = GGS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 118)), extractedValue_4586_graphic_1, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 116)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_toOneRelationshipAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extractedValue_4598_handleOpposite_3.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 123)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_toOneRelationshipAST temp_14 = this ;
            const GGS_toOneRelationshipAST temp_15 = this ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 124)) ;
          }
        }
      }
      {
      const GGS_toOneRelationshipAST temp_17 = this ;
      var_entry_3942.mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4626, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 126)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3942, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5494 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_5635 ;
  GGS_propertyMap var_destinationEntityPropertyMap_5651 ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  GGS_actionMap joker_5681_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5681_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5635, var_destinationEntityPropertyMap_5651, joker_5681_2, joker_5681_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 137)) ;
  switch (var_classKind_5635.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    break ;
  case GGS_classKind::Enumeration::enum_document:
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_5777__0 ;
      GGS_bool extractedValue_5780_graphic_1 ;
      GGS_bool extractedValue_5790__2 ;
      GGS_bool extractedValue_5790__3 ;
      var_classKind_5635.getAssociatedValuesFor_entity (extractedValue_5777__0, extractedValue_5780_graphic_1, extractedValue_5790__2, extractedValue_5790__3) ;
      const GGS_toOneRelationshipAST temp_2 = this ;
      const GGS_toOneRelationshipAST temp_3 = this ;
      const GGS_toOneRelationshipAST temp_4 = this ;
      GGS_propertyKind var_kind_5803 = GGS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 145)), extractedValue_5780_graphic_1, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 143)) ;
      {
      const GGS_toOneRelationshipAST temp_5 = this ;
      const GGS_toOneRelationshipAST temp_6 = this ;
      const GGS_toOneRelationshipAST temp_7 = this ;
      const GGS_toOneRelationshipAST temp_8 = this ;
      const GGS_toOneRelationshipAST temp_9 = this ;
      var_entry_5494.mProperty_mPropertyGenerationList.setter_append (GGS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5803, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5651, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 158)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 151)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5494, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                         const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                         const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)) ;
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (GGS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  const GGS_toOnePropertyGeneration temp_4 = this ;
  const GGS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (GGS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)).add_operation (GGS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  const GGS_toOnePropertyGeneration temp_6 = this ;
  const GGS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
  const GGS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)).add_operation (GGS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)) ;
  const GGS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("      // self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)) ;
  const GGS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("      if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GGS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  const GGS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssignOperation(GGS_string ("        if self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)).add_operation (GGS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  const GGS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)).add_operation (GGS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssignOperation(GGS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  const GGS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssignOperation(GGS_string ("          self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
  const GGS_toOnePropertyGeneration temp_14 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GGS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GGS_toOneOppositeRelationship::Enumeration::invalid:
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
    {
      GGS_lstring extractedValue_9615_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToMany (extractedValue_9615_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_1 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)) ;
      const GGS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      const GGS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)).add_operation (GGS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9615_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)).add_operation (GGS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
    {
      const GGS_toOnePropertyGeneration temp_4 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)) ;
      const GGS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
    {
      GGS_lstring extractedValue_10435_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToOne (extractedValue_10435_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_6 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
      const GGS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      const GGS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10435_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
    }
    break ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 246)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_toOnePropertyGeneration temp_10 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 247)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GGS_actionMap /* constinArgument_inActionMap */,
                                                                       const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GGS_classMap /* constinArgument_inClassMap */,
                                                                       GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astGutterInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                    const GGS_bool /* constinArgument_inPreferences */,
                                                                    const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                    const GGS_actionMap /* constinArgument_inActionMap */,
                                                                    const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                    const GGS_classMap /* constinArgument_inClassMap */,
                                                                    GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                    GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                    GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                    GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astGutterInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutGutterInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedHorizontalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
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
  GGS_actionMap var_preferencesActionMap_32254 ;
  GGS_classKind joker_32244_2 ; // Joker input parameter
  GGS_propertyMap joker_32244_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_32276 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 787)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 787)), inCompiler COMMA_HERE), joker_32244_2, joker_32244_1, var_preferencesActionMap_32254, joker_32276, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 787)) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_32793 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_32254, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_32793, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 788)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 805)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_32857 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_32885 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_32885.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_33313 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32885.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_33313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 807)) ;
    {
    var_instructionList_32857.setter_append (var_generatedInstruction_33313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 822)) ;
    }
    enumerator_32885.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_32793, var_instructionList_32857, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
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
  GGS_actionMap var_preferencesActionMap_34811 ;
  GGS_classKind joker_34801_2 ; // Joker input parameter
  GGS_propertyMap joker_34801_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_34833 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 844)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 844)), inCompiler COMMA_HERE), joker_34801_2, joker_34801_1, var_preferencesActionMap_34811, joker_34833, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 844)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 845)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_34884 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35418 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_34811, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35418, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 846)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_35442 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_35442.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_35869 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_35442.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_35869, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 864)) ;
    {
    var_instructionList_34884.setter_append (var_generatedInstruction_35869, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)) ;
    }
    enumerator_35442.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_4 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_5 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21__21__21_ (temp_3.readProperty_mHasVerticalScroller (), temp_4.readProperty_mConfiguratorName (), var_funcCallList_35418, var_instructionList_34884, temp_5.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GGS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                     const GGS_bool /* constinArgument_inPreferences */,
                                                                     const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                     const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                     const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                     const GGS_actionMap /* constinArgument_inActionMap */,
                                                                     const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                     const GGS_classMap /* constinArgument_inClassMap */,
                                                                     GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                     GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                     GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                     GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedViewInstruction generateViewCode'
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
  GGS_autoLayoutClassParameterList var_formalParameterList_42485 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_42516 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_42470_7 ; // Joker input parameter
  GGS_bool joker_42470_6 ; // Joker input parameter
  GGS_bool joker_42470_5 ; // Joker input parameter
  GGS_bool joker_42470_4 ; // Joker input parameter
  GGS_bool joker_42470_3 ; // Joker input parameter
  GGS_bool joker_42470_2 ; // Joker input parameter
  GGS_bool joker_42470_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42470_7, joker_42470_6, joker_42470_5, joker_42470_4, joker_42470_3, joker_42470_2, joker_42470_1, var_formalParameterList_42485, var_functionMap_42516, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)) ;
  GGS_actionMap var_preferencesActionMap_42600 ;
  GGS_classKind joker_42590_2 ; // Joker input parameter
  GGS_propertyMap joker_42590_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_42622 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 986)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 986)), inCompiler COMMA_HERE), joker_42590_2, joker_42590_1, var_preferencesActionMap_42600, joker_42622, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 986)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 987)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_42682 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_42485.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 988)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 988)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42485.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 990)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 990)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 990)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 990)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 990)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 990)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 990)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 989)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_42953 (temp_7.readProperty_mParameterList ()) ;
    UpEnumerator_autoLayoutClassParameterList enumerator_42997 (var_formalParameterList_42485) ;
    while (enumerator_42953.hasCurrentObject () && enumerator_42997.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_43048 = enumerator_42997.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
        if (!enumerator_42997.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
          test_8 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_43093 = enumerator_42953.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 994)).unwrappedValue () ;
          if (!enumerator_42953.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 994)).isValuated ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GGS_classKind var_typeKind_43188 ;
            GGS_propertyMap joker_43198_3 ; // Joker input parameter
            GGS_actionMap joker_43198_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_43198_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_43048.readProperty_name (), var_typeKind_43188, joker_43198_3, joker_43198_2, joker_43198_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 995)) ;
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_43218 = var_typeKind_43188.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 996)).unwrappedValue () ;
              if (!var_typeKind_43188.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 996)).isValuated ()) {
                test_9 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_43259 = var_atomicTypeKind_43218.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 996)).unwrappedValue () ;
                if (!var_atomicTypeKind_43218.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 996)).isValuated ()) {
                  test_9 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint joker_43370 ; // Joker input parameter
                  var_enumKind_43259.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_43093.readProperty_name (), joker_43370, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 997)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_43048.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 999)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_42953.current_mParameterType (HERE).objectCompare (enumerator_42997.current_mParameterType (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_42953.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_42997.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)).add_operation (extensionGetter_string (enumerator_42953.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)) ;
          }
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_42953.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_42997.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_42953.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_42997.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1005)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1005)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1005)) ;
        }
      }
      switch (enumerator_42953.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_43794_instruction_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_43794_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_44316 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_43794_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_44316, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1009)) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1024)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1024)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1024)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_44316, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1025)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_44559_entityName_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_44559_entityName_0) ;
          GGS_classKind var_classKind_44620 ;
          GGS_propertyMap joker_44631_3 ; // Joker input parameter
          GGS_actionMap joker_44631_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44631_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44559_entityName_0, var_classKind_44620, joker_44631_3, joker_44631_2, joker_44631_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1027)) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = var_classKind_44620.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 1028)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1028)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_44559_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1029)) ;
            }
          }
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_44559_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1031)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1031)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_44832_stringValue_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_44832_stringValue_0) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_44832_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1033)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_44919_title_0 ;
          GGS_runActionDescriptor extractedValue_44926_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_44931_enabledBinding_2 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_44919_title_0, extractedValue_44926_run_1, extractedValue_44931_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_45267 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_44926_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1039)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_preferencesActionMap_42600, var_runBindingGeneration_45267, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1035)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45603 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_44931_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_45603, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1046)) ;
          }
          GGS_string var_s_45650 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_44919_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 1056)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1056)) ;
          switch (var_runBindingGeneration_45267.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45650.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1059)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_45842_targetName_0 ;
              GGS_string extractedValue_45854_actionName_1 ;
              GGS_string extractedValue_45866_runTargetName_2 ;
              var_runBindingGeneration_45267.getAssociatedValuesFor_run (extractedValue_45842_targetName_0, extractedValue_45854_actionName_1, extractedValue_45866_runTargetName_2) ;
              var_s_45650.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_45842_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (extractedValue_45866_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (extractedValue_45854_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45603.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45650.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46139_binding_0 ;
              var_enabledBindingGeneration_45603.getAssociatedValuesFor_enabled (extractedValue_46139_binding_0) ;
              var_s_45650.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46139_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1067)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1067)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1067)) ;
            }
            break ;
          }
          var_s_45650.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1069)) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), var_s_45650, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1070)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_46303_enumTypeName_0 ;
          GGS_lstring extractedValue_46317_funcName_1 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_46303_enumTypeName_0, extractedValue_46317_funcName_1) ;
          GGS_classKind var_type_46395 ;
          GGS_propertyMap joker_46401_3 ; // Joker input parameter
          GGS_actionMap joker_46401_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_46401_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_46303_enumTypeName_0, var_type_46395, joker_46401_3, joker_46401_2, joker_46401_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1072)) ;
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = var_type_46395.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 1073)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1073)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_46303_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1074)) ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GGS_typeKind var_typeKind_46561 ;
            var_type_46395.method_extractAtomic (var_typeKind_46561, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1076)) ;
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = var_typeKind_46561.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1077)).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_46665 ;
                GGS_string joker_46647_2 ; // Joker input parameter
                GGS_enumConstantMap joker_46647_1 ; // Joker input parameter
                var_typeKind_46561.method_extractEnumType (joker_46647_2, joker_46647_1, var_funcMap_46665, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)) ;
                GGS_enumFunAssociationSortedList joker_46715 ; // Joker input parameter
                var_funcMap_46665.method_searchKey (extractedValue_46317_funcName_1, joker_46715, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_46303_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1081)) ;
            }
          }
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_46303_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)).add_operation (extractedValue_46317_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)) ;
          }
        }
        break ;
      }
      enumerator_42953.gotoNextObject () ;
      enumerator_42997.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47471 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47552 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_47627 ;
  GGS_string var_inTableViewBindingGeneration_47666 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_47755 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_preferencesActionMap_42600, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47471, var_multipleBindingGenerationList_47552, var_runBindingGeneration_47627, var_inTableViewBindingGeneration_47666, var_ebViewGraphicControllerBindingGeneration_47755, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1089)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48278 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_42516, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_42600, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48278, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1114)) ;
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1133)) ;
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
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_42682, var_funcCallList_48278, var_regularBindingsGenerationList_47471, var_multipleBindingGenerationList_47552, var_runBindingGeneration_47627, var_inTableViewBindingGeneration_47666, var_ebViewGraphicControllerBindingGeneration_47755, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
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
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1180)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1181)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_50685 ;
  GGS_bool var_handlesTableViewBinding_50718 ;
  GGS_bool var_handlesEnabledBinding_50758 ;
  GGS_bool var_handlesHiddenBinding_50796 ;
  GGS_bool var_handleGraphicControllerBinding_50833 ;
  GGS_lstring joker_50666 ; // Joker input parameter
  GGS_bool joker_50869_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_50869_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_50869_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50666, var_handlesRunAction_50685, var_handlesTableViewBinding_50718, var_handlesEnabledBinding_50758, var_handlesHiddenBinding_50796, var_handleGraphicControllerBinding_50833, joker_50869_3, joker_50869_2, joker_50869_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1183)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1194)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_51023_controllerName_0 ;
      GGS_lstring extractedValue_51048_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_51023_controllerName_0, extractedValue_51048_propertyName_1) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_50833.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1198)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GGS_propertyKind var_kind_51318 ;
        GGS_actionMap joker_51332_2 ; // Joker input parameter
        GGS_bool joker_51332_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_51023_controllerName_0, var_kind_51318, joker_51332_2, joker_51332_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1201)) ;
        switch (var_kind_51318.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_51385__0 ;
            GGS_propertyAccessibility extractedValue_51385__1 ;
            var_kind_51318.getAssociatedValuesFor_property (extractedValue_51385__0, extractedValue_51385__1) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1208)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_51491__0 ;
            GGS_propertyAccessibility extractedValue_51491__1 ;
            GGS_bool extractedValue_51491__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_51491__3 ;
            var_kind_51318.getAssociatedValuesFor_toMany (extractedValue_51491__0, extractedValue_51491__1, extractedValue_51491__2, extractedValue_51491__3) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1210)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_51596__0 ;
            GGS_propertyAccessibility extractedValue_51596__1 ;
            GGS_bool extractedValue_51596__2 ;
            GGS_toOneOppositeRelationship extractedValue_51596__3 ;
            GGS_bool extractedValue_51596__4 ;
            var_kind_51318.getAssociatedValuesFor_toOne (extractedValue_51596__0, extractedValue_51596__1, extractedValue_51596__2, extractedValue_51596__3, extractedValue_51596__4) ;
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1212)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_51710_entityName_0 ;
            GGS_bool extractedValue_51722_graphic_1 ;
            var_kind_51318.getAssociatedValuesFor_arrayController (extractedValue_51710_entityName_0, extractedValue_51722_graphic_1) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_51048_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = extractedValue_51722_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1215)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51710_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1216)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1216)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1216)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_52047 ;
              GGS_classKind joker_52026 ; // Joker input parameter
              GGS_actionMap joker_52082_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_52082_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51710_entityName_0, joker_52026, var_observablePropertyMap_52047, joker_52082_2, joker_52082_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1219)) ;
              GGS_propertyKind var_propertyKind_52160 ;
              GGS_actionMap joker_52174_2 ; // Joker input parameter
              GGS_bool joker_52174_1 ; // Joker input parameter
              var_observablePropertyMap_52047.method_searchKey (extractedValue_51048_propertyName_1, var_propertyKind_52160, joker_52174_2, joker_52174_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1225)) ;
              switch (var_propertyKind_52160.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_52236__0 ;
                  GGS_propertyAccessibility extractedValue_52236__1 ;
                  var_propertyKind_52160.getAssociatedValuesFor_property (extractedValue_52236__0, extractedValue_52236__1) ;
                  GenericArray <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1228)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_52347_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_52360__1 ;
                  GGS_bool extractedValue_52363_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_52374__3 ;
                  var_propertyKind_52160.getAssociatedValuesFor_toMany (extractedValue_52347_kEntityName_0, extractedValue_52360__1, extractedValue_52363_isGraphic_2, extractedValue_52374__3) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = extractedValue_52363_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1230)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GenericArray <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_52347_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1231)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1231)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1231)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_52564__0 ;
                  GGS_propertyAccessibility extractedValue_52564__1 ;
                  GGS_bool extractedValue_52564__2 ;
                  GGS_toOneOppositeRelationship extractedValue_52564__3 ;
                  GGS_bool extractedValue_52564__4 ;
                  var_propertyKind_52160.getAssociatedValuesFor_toOne (extractedValue_52564__0, extractedValue_52564__1, extractedValue_52564__2, extractedValue_52564__3, extractedValue_52564__4) ;
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1234)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_52685__0 ;
                  GGS_bool extractedValue_52685__1 ;
                  var_propertyKind_52160.getAssociatedValuesFor_arrayController (extractedValue_52685__0, extractedValue_52685__1) ;
                  GenericArray <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1236)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_52809__0 ;
                  var_propertyKind_52160.getAssociatedValuesFor_selectionController (extractedValue_52809__0) ;
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1238)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_52954__0 ;
            var_kind_51318.getAssociatedValuesFor_selectionController (extractedValue_52954__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1242)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_51023_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1244)) ;
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
      GGS_lstring extractedValue_53290_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_53290_controllerName_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_50718.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1251)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1252)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1252)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1252)) ;
        }
      }
      if (GalgasBool::boolFalse == test_17) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_propertyKind var_kind_53568 ;
            GGS_actionMap joker_53582_2 ; // Joker input parameter
            GGS_bool joker_53582_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_53290_controllerName_0, var_kind_53568, joker_53582_2, joker_53582_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1254)) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = var_kind_53568.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1259)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1259)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_53290_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1260)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_53290_controllerName_0.readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GGS_propertyKind var_kind_53887 ;
          GGS_actionMap joker_53901_2 ; // Joker input parameter
          GGS_bool joker_53901_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53290_controllerName_0, var_kind_53887, joker_53901_2, joker_53901_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1264)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = var_kind_53887.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1269)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1269)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_53290_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1270)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_53290_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_50685, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1276)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54693 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50758, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54693, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1288)) ;
  }
  switch (var_enabledBindingGeneration_54693.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54786_binding_0 ;
      var_enabledBindingGeneration_54693.getAssociatedValuesFor_enabled (extractedValue_54786_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_54786_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1301)) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54997_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54997_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_55281 ;
      GGS_typeKind var_type_55320 ;
      GGS_location var_errorLocation_55347 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54997_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_55281, var_type_55320, var_errorLocation_55347, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1307)) ;
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_type_55320.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1317)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1317)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_55347, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1318)) ;
        }
      }
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_50796.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1320)).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_55347, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1321)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_55281, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1323)) ;
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
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1329)) ;
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
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1356)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_56780_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_56780_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_57064 ;
      GGS_typeKind var_type_57103 ;
      GGS_location var_errorLocation_57130 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56780_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_57064, var_type_57103, var_errorLocation_57130, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1358)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1368)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_57130, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1369)) ;
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_type_57103.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1371)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1371)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_57130, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_57064  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)) ;
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
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1391)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_58327_target_0 ;
      GGS_lstring extractedValue_58344_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_58327_target_0, extractedValue_58344_action_1) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1393)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_58327_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1397)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_58344_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extractedValue_58327_target_0.readProperty_string ().objectCompare (GGS_string ("prefs"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              constinArgument_inPreferencesActionMap.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)) ;
              outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("g").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406)).add_operation (GGS_string ("!"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406)), extractedValue_58344_action_1.readProperty_string (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1408))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GGS_actionMap var_controllerActionMap_59140 ;
            GGS_propertyKind joker_59112 ; // Joker input parameter
            GGS_bool joker_59169 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_58327_target_0, joker_59112, var_controllerActionMap_59140, joker_59169, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1411)) ;
            var_controllerActionMap_59140.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1417)) ;
            GGS_string temp_4 ;
            const GalgasBool test_5 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              temp_4 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_5) {
              temp_4 = GGS_string::makeEmptyString () ;
            }
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_4.add_operation (extractedValue_58327_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1419)), extractedValue_58344_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1421)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1421)).add_operation (extractedValue_58327_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1421))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1418)) ;
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
  UpEnumerator_regularBindingList enumerator_60074 (constinArgument_inRegularBindingList) ;
  while (enumerator_60074.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1442)) ;
    GGS_outletBindingModelList var_boundModelTypeList_60174 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1443)) ;
    GGS_boundObjectList var_boundModelListForGeneration_60223 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_60265 (enumerator_60074.current_mObservablePropertyList (HERE)) ;
    while (enumerator_60265.hasCurrentObject ()) {
      GGS_propertyKind var_kind_60539 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_60573 ;
      GGS_string var_protocolTypeName_60646 ;
      GGS_string var_defaultValueAsString_60692 ;
      GGS_propertyMap temp_2 ;
      const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_60265.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_60539, var_swiftTypeStringForTransientFunctionArgument_60573, var_protocolTypeName_60646, var_defaultValueAsString_60692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1445)) ;
      switch (var_kind_60539.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_60792__0 ;
          GGS_propertyAccessibility extractedValue_60792__1 ;
          GGS_bool extractedValue_60792__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_60792__3 ;
          var_kind_60539.getAssociatedValuesFor_toMany (extractedValue_60792__0, extractedValue_60792__1, extractedValue_60792__2, extractedValue_60792__3) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1457)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1457)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_60898__0 ;
          GGS_propertyAccessibility extractedValue_60898__1 ;
          GGS_bool extractedValue_60898__2 ;
          GGS_toOneOppositeRelationship extractedValue_60898__3 ;
          GGS_bool extractedValue_60898__4 ;
          var_kind_60539.getAssociatedValuesFor_toOne (extractedValue_60898__0, extractedValue_60898__1, extractedValue_60898__2, extractedValue_60898__3, extractedValue_60898__4) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1459)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1459)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_61013__0 ;
          GGS_bool extractedValue_61013__1 ;
          var_kind_60539.getAssociatedValuesFor_arrayController (extractedValue_61013__0, extractedValue_61013__1) ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_61134__0 ;
          var_kind_60539.getAssociatedValuesFor_selectionController (extractedValue_61134__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_60223.setter_append (extensionGetter_modelStringForSelf (enumerator_60265.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1465)), var_kind_60539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1465)) ;
      }
      {
      var_boundModelTypeList_60174.setter_append (var_kind_60539, extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1466)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1466)) ;
      }
      enumerator_60265.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1469)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_61499 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61586 = temp_9 ;
    GGS_lstring var_outletTypeName_61636 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_61678 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1473)).isValid ()) {
      uint32_t variant_61699 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1473)).uintValue () ;
      bool loop_61699 = true ;
      while (loop_61699) {
        loop_61699 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61636.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61678 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1473)).isValid () ;
        if (loop_61699) {
          loop_61699 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61636.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61678 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1473)).boolValue () ;
        }
        if (loop_61699 && (0 == variant_61699)) {
          loop_61699 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1473)) ;
        }
        if (loop_61699) {
          variant_61699 -= 1 ;
          var_continues_61678 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_61941 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_61976 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61636, var_superOutletClassName_61941, var_bindingMap_61976, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1475)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_bindingMap_61976.getter_hasKey (enumerator_60074.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1480)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              var_bindingMap_61976.method_searchKey (enumerator_60074.current_mBindingName (HERE), var_outletBindingSpecificationModelList_61499, var_controllerBindingOptionDecoratedList_61586, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1481)) ;
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            var_continues_61678 = GGS_bool (true) ;
            var_outletTypeName_61636 = var_superOutletClassName_61941 ;
          }
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_continues_61678.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_60174.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1493)).objectCompare (var_outletBindingSpecificationModelList_61499.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1493)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_61499.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1495)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1495)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1495)).add_operation (var_boundModelTypeList_60174.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1497)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1496)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1496)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1494)) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_62706 (var_outletBindingSpecificationModelList_61499) ;
        UpEnumerator_outletBindingModelList enumerator_62801 (var_boundModelTypeList_60174) ;
        while (enumerator_62706.hasCurrentObject () && enumerator_62801.hasCurrentObject ()) {
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_bool test_16 = enumerator_62706.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1501)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_62801.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1502)) ;
            }
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_bool test_19 = enumerator_62706.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1504)) ;
            if (GalgasBool::boolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1504)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_62706.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1505)).objectCompare (extensionGetter_swiftTypeName (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1505)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_62801.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62706.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1506)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1506)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1506)) ;
              }
            }
          }
          enumerator_62706.gotoNextObject () ;
          enumerator_62801.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_63377 = GGS_string::makeEmptyString () ;
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_61586.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1512)).objectCompare (enumerator_60074.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1512)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GGS_string var_s_63503 ;
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_61586.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1514)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            var_s_63503 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_23) {
          var_s_63503 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_63705 (var_controllerBindingOptionDecoratedList_61586) ;
          while (enumerator_63705.hasCurrentObject ()) {
            var_s_63503.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_63705.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)).add_operation (extensionGetter_swiftTypeName (enumerator_63705.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)) ;
            enumerator_63705.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), var_s_63503, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1522)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_63932 (var_controllerBindingOptionDecoratedList_61586) ;
      UpEnumerator_bindingOptionList enumerator_64019 (enumerator_60074.current_mBindingOptionList (HERE)) ;
      while (enumerator_63932.hasCurrentObject () && enumerator_64019.hasCurrentObject ()) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_63932.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_64019.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_64019.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_63932.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1526)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1526)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1526)) ;
          }
        }
        GGS_string var_optionValueAsString_64408 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)) ;
        temp_27.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_63932.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_64019.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_64408, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1528)) ;
        var_bindingOptionString_63377.plusAssignOperation(GGS_string (", ").add_operation (enumerator_63932.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1533)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1533)).add_operation (var_optionValueAsString_64408, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1533)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1533)) ;
        enumerator_63932.gotoNextObject () ;
        enumerator_64019.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_60074.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_60223, var_bindingOptionString_63377, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1537)) ;
    }
    enumerator_60074.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
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
  GGS_actionMap var_preferencesActionMap_65845 ;
  GGS_classKind joker_65835_2 ; // Joker input parameter
  GGS_propertyMap joker_65835_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_65867 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1561)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1561)), inCompiler COMMA_HERE), joker_65835_2, joker_65835_1, var_preferencesActionMap_65845, joker_65867, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1561)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1562)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65918 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66453 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_65845, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66453, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1563)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1580)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66517 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66625_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66625_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66935 ;
      GGS_typeKind var_type_66974 ;
      GGS_location var_errorLocation_67001 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66625_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66935, var_type_66974, var_errorLocation_67001, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1584)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_66974.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1594)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1594)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_67001, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1595)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66517.setter_append (GGS_string ("hidden"), var_hiddenExpression_66935, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1597)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_67224 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_67224.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67651 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_67224.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67651, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1603)) ;
    {
    var_instructionList_65918.setter_append (var_generatedInstruction_67651, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1618)) ;
    }
    enumerator_67224.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66453, var_instructionList_65918, var_multipleBindingGenerationList_66517, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
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
  GGS_actionMap var_preferencesActionMap_69028 ;
  GGS_classKind joker_69018_2 ; // Joker input parameter
  GGS_propertyMap joker_69018_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_69050 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1644)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1644)), inCompiler COMMA_HERE), joker_69018_2, joker_69018_1, var_preferencesActionMap_69028, joker_69050, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1644)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1645)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_69101 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_69636 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_69028, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_69636, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1646)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1663)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69700 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_69808_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_69808_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_70118 ;
      GGS_typeKind var_type_70157 ;
      GGS_location var_errorLocation_70184 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69808_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_70118, var_type_70157, var_errorLocation_70184, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1667)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_70157.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1677)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1677)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_70184, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1678)) ;
        }
      }
      {
      var_multipleBindingGenerationList_69700.setter_append (GGS_string ("hidden"), var_hiddenExpression_70118, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1680)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_70387 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_70387.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_70815 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_70387.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1683)) ;
    {
    var_instructionList_69101.setter_append (var_generatedInstruction_70815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1698)) ;
    }
    enumerator_70387.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_8 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_9 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21__21__21_ (temp_7.readProperty_mHasVerticalScroller (), temp_8.readProperty_mConfiguratorName (), var_funcCallList_69636, var_instructionList_69101, var_multipleBindingGenerationList_69700, temp_9.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
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
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1792)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1792)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1792)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)).add_operation (GGS_string (".appendSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
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
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1816)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1816)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1816)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                             const GGS_string constinArgument_inReceiverViewName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1823)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1823)).add_operation (GGS_string (".appendGutter ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1823)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                              const GGS_string constinArgument_inViewName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1934)) ;
  result_result.plusAssignOperation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1936)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_81313 (temp_1.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_81313.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_81313.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)).add_operation (enumerator_81313.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1938)) ;
    enumerator_81313.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_81438 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_81438.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_81438.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("hStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1941)) ;
    enumerator_81438.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1943)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1944)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_string constinArgument_inViewName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1951)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1951)) ;
  result_result.plusAssignOperation(GGS_string ("    let vStackView = "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1952)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedVerticalViewGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1954)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1956)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1958)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedVerticalViewGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedVerticalViewGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)).add_operation (GGS_string (" (vStackView)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1960)) ;
    }
  }
  const GGS_computedVerticalViewGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1962)) ;
  const GGS_computedVerticalViewGeneration temp_6 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_82471 (temp_6.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_82471.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_82471.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)).add_operation (enumerator_82471.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1964)) ;
    enumerator_82471.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_7 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_82596 (temp_7.readProperty_mInstructionList ()) ;
  while (enumerator_82596.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82596.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("vStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1967)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1967)) ;
    enumerator_82596.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1969)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1970)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1979)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1979)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1979)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1988)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1988)).add_operation (GGS_string (".appendFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1988)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
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
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1998)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1998)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1998)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2000)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2000)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2000)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_string constinArgument_inReceiverViewName,
                                                                                              const GGS_string constinArgument_inIndentation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2007)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2007)).add_operation (GGS_string (".appendDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2007)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2016)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2016)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2016)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2016)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2016)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_string constinArgument_inName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2031)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_86181 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_86181.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_86181.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2034)).add_operation (enumerator_86181.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2034)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2034)) ;
    enumerator_86181.gotoNextObject () ;
    if (enumerator_86181.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2036)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2038)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2039)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_86425 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_86425.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2041)).add_operation (enumerator_86425.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2041)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2041)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2041)) ;
    UpEnumerator_boundObjectList enumerator_86575 (enumerator_86425.current_mBoundObjectList (HERE)) ;
    while (enumerator_86575.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_86575.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2043)) ;
      enumerator_86575.gotoNextObject () ;
      if (enumerator_86575.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2044)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_86425.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)) ;
    enumerator_86425.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_86736 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_86736.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)).add_operation (enumerator_86736.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_86736.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2049)) ;
    enumerator_86736.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_86953_targetName_0 ;
      GGS_string extractedValue_86965_actionName_1 ;
      GGS_string extractedValue_86977_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_86953_targetName_0, extractedValue_86965_actionName_1, extractedValue_86977_targetTypeName_2) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2054)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2054)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2055)).add_operation (extractedValue_86953_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2055)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2055)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2055)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)).add_operation (extractedValue_86977_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)).add_operation (extractedValue_86965_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2056)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2057)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2057)) ;
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
      GGS_string extractedValue_87346_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_87346_controllerName_0) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (extractedValue_87346_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)) ;
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
      GGS_string var_prefix_87518 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (var_prefix_87518, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2066)) ;
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
          result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2070)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2072)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2076)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                                   const GGS_string constinArgument_inReceiverViewName,
                                                                                                   const GGS_string constinArgument_inIndentation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2085)) ;
  GGS_string var_indentation_88589 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2086)) ;
  GGS_string var_name_88630 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2087)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2088)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88794 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_88794.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_88794.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2091)).add_operation (enumerator_88794.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2091)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2091)) ;
    enumerator_88794.gotoNextObject () ;
    if (enumerator_88794.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2093)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2095)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), var_indentation_88589, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2096)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_89036 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_89036.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2098)).add_operation (enumerator_89036.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2098)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2098)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2098)) ;
    UpEnumerator_boundObjectList enumerator_89184 (enumerator_89036.current_mBoundObjectList (HERE)) ;
    while (enumerator_89184.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_89184.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2100)) ;
      enumerator_89184.gotoNextObject () ;
      if (enumerator_89184.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2101)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_89036.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2103)) ;
    enumerator_89036.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_89345 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_89345.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (enumerator_89345.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_89345.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)) ;
    enumerator_89345.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_89560_targetName_0 ;
      GGS_string extractedValue_89572_actionName_1 ;
      GGS_string extractedValue_89584_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_89560_targetName_0, extractedValue_89572_actionName_1, extractedValue_89584_targetTypeName_2) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2111)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2111)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2112)).add_operation (extractedValue_89560_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2112)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2112)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2112)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)).add_operation (extractedValue_89584_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)).add_operation (extractedValue_89572_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2113)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2114)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2114)) ;
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
      GGS_string extractedValue_89945_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_89945_controllerName_0) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (extractedValue_89945_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2119)) ;
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
      GGS_string var_prefix_90115 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (var_prefix_90115, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)) ;
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
          result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2129)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)) ;
    }
  }
  result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2135)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2136)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2145)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2146)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91354 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_91354.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (enumerator_91354.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91354.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2148)) ;
    enumerator_91354.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_91526 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_91526.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)).add_operation (enumerator_91526.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)).add_operation (enumerator_91526.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2151)) ;
    enumerator_91526.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_91663 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_91663.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_91663.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2154)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2154)) ;
    enumerator_91663.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2163)) ;
  GGS_string var_indentation_92263 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2164)) ;
  GGS_string var_name_92304 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2165)) ;
  result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (var_name_92304, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), var_indentation_92263, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2167)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_92496 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_92496.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (enumerator_92496.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_92496.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)) ;
    enumerator_92496.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_92666 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_92666.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)).add_operation (enumerator_92666.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)).add_operation (enumerator_92666.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)) ;
    enumerator_92666.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_92801 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_92801.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_92801.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_92304, var_indentation_92263, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)) ;
    enumerator_92801.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)).add_operation (var_name_92304, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2177)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2178)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2189)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2191)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2193)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_vStackViewInstructionGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_vStackViewInstructionGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)) ;
    }
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)) ;
  const GGS_vStackViewInstructionGeneration temp_6 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93865 (temp_6.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_93865.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (enumerator_93865.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93865.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)) ;
    enumerator_93865.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_7 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_94037 (temp_7.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_94037.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)).add_operation (enumerator_94037.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)).add_operation (enumerator_94037.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2202)) ;
    enumerator_94037.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_8 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_94174 (temp_8.readProperty_mInstructionList ()) ;
  while (enumerator_94174.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_94174.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2205)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2205)) ;
    enumerator_94174.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)) ;
  GGS_string var_indentation_94774 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2215)) ;
  GGS_string var_name_94815 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2216)) ;
  result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2219)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2221)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2223)) ;
  const GGS_vStackViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFuncCallList (), var_indentation_94774, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2224)) ;
  const GGS_vStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_95143 (temp_3.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_95143.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (enumerator_95143.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_95143.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2226)) ;
    enumerator_95143.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_4 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_95313 (temp_4.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_95313.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (enumerator_95313.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (enumerator_95313.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)) ;
    enumerator_95313.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_95448 (temp_5.readProperty_mInstructionList ()) ;
  while (enumerator_95448.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_95448.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_94815, var_indentation_94774, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)) ;
    enumerator_95448.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_vStackViewInstructionGeneration temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_vStackViewInstructionGeneration temp_8 = this ;
      result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)).add_operation (temp_8.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)) ;
    }
  }
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2238)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2238)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 13)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_enumerationDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & ioArgument_ioGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap var_enumConstantMap_4269 = GGS_enumConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4297 (temp_0.readProperty_mEnumConstantNameList ()) ;
  while (enumerator_4297.hasCurrentObject ()) {
    {
    var_enumConstantMap_4269.setter_insertKey (enumerator_4297.current_mValue (HERE), var_enumConstantMap_4269.getter_count (SOURCE_FILE ("enumeration.ggs", 124)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
    }
    enumerator_4297.gotoNextObject () ;
  }
  GGS_enumFuncMap var_enumFuncMap_4418 = GGS_enumFuncMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_enumerationFunctionListAST enumerator_4466 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST ()) ;
  while (enumerator_4466.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4466.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 129)) ;
        GGS_stringset var_definedConstantNameSet_4614 = temp_3 ;
        GGS_enumFunAssociationSortedList temp_4 = GGS_enumFunAssociationSortedList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)) ;
        GGS_enumFunAssociationSortedList var_associationSortedList_4682 = temp_4 ;
        UpEnumerator__32_lstringlist enumerator_4734 (enumerator_4466.current_mAssociationList (HERE)) ;
        while (enumerator_4734.hasCurrentObject ()) {
          GGS_uint var_idx_4828 ;
          var_enumConstantMap_4269.method_searchKey (enumerator_4734.current_mValue_30_ (HERE), var_idx_4828, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 132)) ;
          {
          var_associationSortedList_4682.setter_insert (var_idx_4828, enumerator_4734.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
          }
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_definedConstantNameSet_4614.getter_hasKey (enumerator_4734.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 134)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4734.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("Duplicated constant"), fixItArray6  COMMA_SOURCE_FILE ("enumeration.ggs", 135)) ;
            }
          }
          {
          var_definedConstantNameSet_4614.setter_insert (enumerator_4734.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 137)) ;
          }
          enumerator_4734.gotoNextObject () ;
        }
        const GGS_enumerationDeclarationAST temp_7 = this ;
        UpEnumerator_lstringlist enumerator_5107 (temp_7.readProperty_mEnumConstantNameList ()) ;
        while (enumerator_5107.hasCurrentObject ()) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_definedConstantNameSet_4614.getter_hasKey (enumerator_5107.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 140)).operator_not (SOURCE_FILE ("enumeration.ggs", 140)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_4466.current_mFunctionName (HERE).readProperty_location (), GGS_string ("No association for '").add_operation (enumerator_5107.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)), fixItArray9  COMMA_SOURCE_FILE ("enumeration.ggs", 141)) ;
            }
          }
          enumerator_5107.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4418.setter_insertKey (enumerator_4466.current_mFunctionName (HERE), var_associationSortedList_4682, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
        }
      }
    }
    enumerator_4466.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_propertyGenerationList temp_12 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 152)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_10.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_enumType (temp_11.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4269, var_enumFuncMap_4418  COMMA_SOURCE_FILE ("enumeration.ggs", 149))  COMMA_SOURCE_FILE ("enumeration.ggs", 149)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_12, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 147)) ;
  }
  {
  const GGS_enumerationDeclarationAST temp_13 = this ;
  const GGS_enumerationDeclarationAST temp_14 = this ;
  const GGS_enumerationDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_enumForGeneration::init_21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mEnumConstantNameList (), var_enumFuncMap_4418, temp_15.readProperty_mCaseIterable (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  3,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport Foundation\n\n//--------------------------------------------------------------------------------------------------\n\nenum ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : Int, Sendable") ;
  const GalgasBool test_0 = in_CASE_5F_ITERABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", CaseIterable") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n") ;
  GGS_uint index_513_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_513 (in_CONSTANT_5F_ORDERED_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString ("  case ") ;
      result.appendString (enumerator_513.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_513_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_513.gotoNextObject () ;
      index_513_idx.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (Compiler * inCompiler,
                                                                                        const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : EBEnumPropertyProtocol, Hashable {\n\n") ;
  GGS_uint index_500_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    UpEnumerator_enumFuncMap enumerator_500 (in_FUNCTION_5F_MAP) ;
    while (enumerator_500.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Function ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" () -> [String] {\n    return [") ;
      GGS_uint index_872_ (0) ;
      if (enumerator_500.current_mAssociationSortedList (HERE).isValid ()) {
        UpEnumerator_enumFunAssociationSortedList enumerator_872 (enumerator_500.current_mAssociationSortedList (HERE)) ;
        while (enumerator_872.hasCurrentObject ()) {
          result.appendString (enumerator_872.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 19)).stringValue ()) ;
          enumerator_872.gotoNextObject () ;
          if (enumerator_872.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_872_.increment () ;
        }
      }
      result.appendString ("]\n  }\n\n") ;
      enumerator_500.gotoNextObject () ;
      index_500_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Enum generic bindings utility functions\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func buildfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) {\n      return v\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func enumfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = self\n    let v : ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) ;\n    if let unwrappedV = v {\n      result = unwrappedV\n    }\n    return result\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  EBStoredPropertyProtocol\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func ebHashValue () -> UInt32 {\n    return UInt32 (self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func convertToNSObject () -> NSObject {\n    return NSNumber (value: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func convertFromNSObject (object : NSObject) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 66)).readProperty_string ().stringValue ()) ;
  result.appendString ("\n    if let number = object as\? NSNumber, let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: number.intValue) {\n      result = v\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func unarchiveFromDataRange (_ inData : Data, _ inRange : NSRange) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let rawValue = inData.base62EncodedInt (range: inRange), let enumValue = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypealias EBReadWriteProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("  = EBEnumReadWriteProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStoredProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("     = EBEnumStoredProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStandAloneProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumStandAloneProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBComputedProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("   = EBEnumGenericComputedProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBPreferenceProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumPreferenceProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                           const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                           GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                           GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_enumForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mEnumConstantList ().getter_count (SOURCE_FILE ("enumeration.ggs", 208)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_enumForGeneration temp_2 = this ;
      const GGS_enumForGeneration temp_3 = this ;
      const GGS_enumForGeneration temp_4 = this ;
      GGS_string var_sA_7440 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mCaseIterable () COMMA_SOURCE_FILE ("enumeration.ggs", 209))) ;
      const GGS_enumForGeneration temp_5 = this ;
      GGS_string var_fileNameA_7595 = GGS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 214)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 214)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameA_7595, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 215)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameA_7595, var_sA_7440, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 216)) ;
      }
      const GGS_enumForGeneration temp_6 = this ;
      const GGS_enumForGeneration temp_7 = this ;
      const GGS_enumForGeneration temp_8 = this ;
      GGS_string var_sB_7779 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (inCompiler, temp_6.readProperty_mEnumName (), temp_7.readProperty_mEnumConstantList (), temp_8.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.ggs", 221))) ;
      const GGS_enumForGeneration temp_9 = this ;
      GGS_string var_fileNameB_7944 = GGS_string ("enum-").add_operation (temp_9.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 226)).add_operation (GGS_string ("-ebExtension.swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 226)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameB_7944, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 227)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameB_7944, var_sB_7779, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 228)) ;
      }
    }
  }
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
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
  GGS_astDeclarationStruct var_declarationStruct_1039 = GGS_astDeclarationStruct::init (inCompiler COMMA_HERE) ;
  GGS_location joker_1211 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GGS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GGS_string::makeEmptyString (), var_declarationStruct_1039, joker_1211  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GGS_location var_endOfSourceFile_1407 ;
  var_endOfSourceFile_1407.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1039, var_endOfSourceFile_1407  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  {
  var_declarationStruct_1039.mProperty_mUnifiedDeclarationList.setter_append (GGS_prefsDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("program.ggs", 30)), inCompiler COMMA_HERE), var_declarationStruct_1039.readProperty_mPreferences (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  }
  {
  routine_enterAtomicClassesIn_26_declarationList (var_declarationStruct_1039.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 35)) ;
  }
  GGS_declarationListAST var_sortedDeclarationListAST_1949 ;
  {
  routine_sortProperties_3F__3F__21_ (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1039.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_1949, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 37)) ;
  }
  GGS_semanticContext var_semanticContext_2055 = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  var_semanticContext_2055.mProperty_mAutoLayoutVStackFunctionMap = var_declarationStruct_1039.readProperty_mAutoLayoutVStackFunctionMap () ;
  var_semanticContext_2055.mProperty_mAutoLayoutHStackFunctionMap = var_declarationStruct_1039.readProperty_mAutoLayoutHStackFunctionMap () ;
  var_semanticContext_2055.mProperty_mEnumerationFunctionListAST = var_declarationStruct_1039.readProperty_mEnumerationFunctionListAST () ;
  GGS_generationStruct var_generation_2385 = GGS_generationStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2426 (var_sortedDeclarationListAST_1949) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2426.hasCurrentObject () && bool_0) {
    while (enumerator_2426.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2426.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.ggs", 45)) ;
      enumerator_2426.gotoNextObject () ;
      if (enumerator_2426.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap_26__3F_ (var_semanticContext_2055, var_declarationStruct_1039.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 49)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 54)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (var_semanticContext_2055, var_declarationStruct_1039.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 55)) ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3061 (var_sortedDeclarationListAST_1949) ;
  bool bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3061.hasCurrentObject () && bool_3) {
    while (enumerator_3061.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3061.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.ggs", 62)) ;
      enumerator_3061.gotoNextObject () ;
      if (enumerator_3061.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3290 (var_sortedDeclarationListAST_1949) ;
  bool bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3290.hasCurrentObject () && bool_4) {
    while (enumerator_3290.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3290.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.ggs", 66)) ;
      enumerator_3290.gotoNextObject () ;
      if (enumerator_3290.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_declarationListAST enumerator_3519 (var_sortedDeclarationListAST_1949) ;
  bool bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3519.hasCurrentObject () && bool_5) {
    while (enumerator_3519.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3519.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2055, var_generation_2385, inCompiler COMMA_SOURCE_FILE ("program.ggs", 70)) ;
      enumerator_3519.gotoNextObject () ;
      if (enumerator_3519.hasCurrentObject ()) {
        bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      UpEnumerator_enumerationFunctionListAST enumerator_3818 (var_semanticContext_2055.readProperty_mEnumerationFunctionListAST ()) ;
      while (enumerator_3818.hasCurrentObject ()) {
        GGS_classKind var_type_3933 ;
        GGS_propertyMap joker_3939_3 ; // Joker input parameter
        GGS_actionMap joker_3939_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_3939_1 ; // Joker input parameter
        var_semanticContext_2055.readProperty_mClassMap ().method_searchKey (enumerator_3818.current_mEnumName (HERE), var_type_3933, joker_3939_3, joker_3939_2, joker_3939_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 75)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = var_type_3933.getter_isAtomic (SOURCE_FILE ("program.ggs", 76)).operator_not (SOURCE_FILE ("program.ggs", 76)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3818.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 77)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_typeKind var_typeKind_4091 ;
          var_type_3933.method_extractAtomic (var_typeKind_4091, inCompiler COMMA_SOURCE_FILE ("program.ggs", 79)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_typeKind_4091.getter_isEnumType (SOURCE_FILE ("program.ggs", 80)).operator_not (SOURCE_FILE ("program.ggs", 80)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3818.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 81)) ;
            }
          }
        }
        enumerator_3818.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      routine_graphvizAnalysis_3F__3F__3F_ (constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("program.ggs", 88)), var_semanticContext_2055, var_declarationStruct_1039.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 88)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 91)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_generateCode_3F__3F__3F_ (var_declarationStruct_1039.readProperty_mXcodeProject ().readProperty_string (), var_generation_2385, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 92)) ;
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
  GenericUniqueArray <String> sourceFilesArray ;
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
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
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

