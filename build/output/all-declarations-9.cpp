#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 24)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
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

static GGS_string onceFunction_preferencesName (Compiler *
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
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_preferencesName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_preferencesName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_preferencesName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_preferencesName ("preferencesName",
                                                                 functionWithGenericHeader_preferencesName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_3974 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3974, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 94)) ;
  }
  {
  GGS_propertyGenerationList temp_1 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.ggs", 97)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_3974, temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  UpEnumerator_actionMap enumerator_4116 (var_actionMap_3974) ;
  while (enumerator_4116.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_2 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_2.readProperty_mClassName ().readProperty_string (), enumerator_4116.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 103)) ;
    }
    enumerator_4116.gotoNextObject () ;
  }
  const GGS_prefsDeclarationAST temp_3 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_3.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("init")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  GGS_stringset var_availableCallers_4779 = temp_0 ;
  GGS_externFunctionMap var_externFunctionMap_4848 = GGS_externFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  UpEnumerator_externSwiftFunctionList enumerator_4904 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList ()) ;
  while (enumerator_4904.hasCurrentObject ()) {
    {
    var_externFunctionMap_4848.setter_insertKey (enumerator_4904.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_availableCallers_4779.getter_hasKey (enumerator_4904.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_5098 = GGS_string ("invalid caller; available callers:") ;
        UpEnumerator_stringset enumerator_5150 (var_availableCallers_4779) ;
        while (enumerator_5150.hasCurrentObject ()) {
          var_s_5098.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_5150.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5150.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4904.current_mCallerName (HERE).readProperty_location (), var_s_5098, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_4904.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5387 ;
  GGS_actionMap var_actionMap_5420 ;
  GGS_propertyGenerationList var_propertyGenerationList_5440 ;
  GGS_classKind joker_5374 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 135)), inCompiler COMMA_HERE), joker_5374, var_preferencesPropertyMap_5387, var_actionMap_5420, var_propertyGenerationList_5440, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5806 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_5877 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5949 ;
  GGS_decoratedOutletMap var_outletMap_6010 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6062 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6149 ;
  {
  const GGS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5387, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5387, var_actionMap_5420, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5806, var_multipleBindingGenerationList_5877, var_actionBindingListForGeneration_5949, var_outletMap_6010, var_tableViewBindingGenerationList_6062, var_ebViewGraphicControllerBindingGenerationList_6149, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6275 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_5 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 162)) ;
  GGS_viewGenerationList var_viewGenerationList_6325 = temp_5 ;
  GGS_implicitViewFunctionGenerationList temp_6 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 163)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6391 = temp_6 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6464 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6512 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_7 = this ;
  UpEnumerator_astViewDeclarationList enumerator_6554 (temp_7.readProperty_mDeclaration ().readProperty_mViewDeclarationList ()) ;
  while (enumerator_6554.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6275.setter_insertKey (enumerator_6554.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7057 ;
    const GGS_prefsDeclarationAST temp_8 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6554.current_mView (HERE).ptr (), enumerator_6554.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6275, GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5387, ioArgument_ioSemanticContext, GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5420, temp_8.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6391, var_configuratorMap_6464, var_autoLayoutOutletMap_6512, var_viewGeneration_7057, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    {
    var_viewGenerationList_6325.setter_append (enumerator_6554.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7057, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    }
    enumerator_6554.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_viewDeclarationMap_6275.getter_hasKey (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray10  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5440, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5806, var_multipleBindingGenerationList_5877, var_actionBindingListForGeneration_5949, var_outletMap_6010, temp_11.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6062, var_ebViewGraphicControllerBindingGenerationList_6149, var_viewGenerationList_6325, var_implicitViewFunctionGenerationList_6391, var_configuratorMap_6464, var_autoLayoutOutletMap_6512, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
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
//Overriding extension method '@preferencesForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@preferencesForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument_inUsedProtocolSet */,
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
  GGS_string var_s_10721 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 266))) ;
  GGS_string var_fileName_11222 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 280)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 280)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11222, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11222, var_s_10721, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 282)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_11414 (temp_12.readProperty_mConfiguratorMap ()) ;
  while (enumerator_11414.hasCurrentObject ()) {
    GGS_string var_s_11466 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11414.current_lkey (HERE).readProperty_string (), enumerator_11414.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 289))) ;
    GGS_string var_header_11643 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 294)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 294)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 297)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)) ;
    GGS_string var_fileName_11985 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11414.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11985, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11985, GGS_string ("//"), var_header_11643, GGS_string ("\n\n"), var_s_11466, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 309)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 301)) ;
    }
    enumerator_11414.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  const GGS_entityDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 21)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_entityDeclarationAST temp_4 = this ;
      const GGS_entityDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperEntityName () COMMA_SOURCE_FILE ("entity.ggs", 23)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@entityDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_entityDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_entityDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_5244 ;
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5244, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 162)) ;
  }
  {
  const GGS_entityDeclarationAST temp_1 = this ;
  const GGS_entityDeclarationAST temp_2 = this ;
  const GGS_entityDeclarationAST temp_3 = this ;
  const GGS_entityDeclarationAST temp_4 = this ;
  const GGS_entityDeclarationAST temp_5 = this ;
  GGS_propertyGenerationList temp_6 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 173)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 165)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5244, temp_6, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_entityDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_propertyMap var_inheritedPropertyMap_6051 ;
      const GGS_entityDeclarationAST temp_2 = this ;
      GGS_classKind joker_6023 ; // Joker input parameter
      GGS_actionMap joker_6079_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6079_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6023, var_inheritedPropertyMap_6051, joker_6079_2, joker_6079_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 183)) ;
      GGS_propertyMap var_propertyMap_6237 ;
      const GGS_entityDeclarationAST temp_3 = this ;
      GGS_classKind joker_6209 ; // Joker input parameter
      GGS_actionMap joker_6256_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6256_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6209, var_propertyMap_6237, joker_6256_2, joker_6256_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 190)) ;
      GGS_propertyMap var_newPropertyMap_6298 = var_inheritedPropertyMap_6051 ;
      UpEnumerator_propertyMap enumerator_6472 (var_propertyMap_6237) ;
      while (enumerator_6472.hasCurrentObject ()) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_6472.current_mIsOverriding (HERE).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_propertyKind joker_6577_3 ; // Joker input parameter
            GGS_actionMap joker_6577_2 ; // Joker input parameter
            GGS_bool joker_6577_1 ; // Joker input parameter
            var_inheritedPropertyMap_6051.method_searchKey (enumerator_6472.current_lkey (HERE), joker_6577_3, joker_6577_2, joker_6577_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          var_newPropertyMap_6298.setter_insertKey (enumerator_6472.current_lkey (HERE), enumerator_6472.current_mKind (HERE), enumerator_6472.current_mActionMap (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 206)) ;
          }
        }
        enumerator_6472.gotoNextObject () ;
      }
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_classMap_2E_element var_entry_6759 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_5.readProperty_mClassName (), inCompiler COMMA_HERE) ;
      var_entry_6759.mProperty_mPropertyMap = var_newPropertyMap_6298 ;
      {
      ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6759, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 212)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_propertyMap_7463 ;
  GGS_propertyGenerationList var_propertyGenerationList_7517 ;
  const GGS_entityDeclarationAST temp_0 = this ;
  GGS_classKind joker_7437 ; // Joker input parameter
  GGS_actionMap joker_7480 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7437, var_propertyMap_7463, joker_7480, var_propertyGenerationList_7517, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 225)) ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 233)) ;
  GGS_stringset var_overridenTransients_7662 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    const GGS_entityDeclarationAST temp_4 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (temp_4.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 234)) COMMA_SOURCE_FILE ("entity.ggs", 234)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_classKind var_superClassKind_7851 ;
      GGS_propertyMap var_superPropertyMap_7891 ;
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_actionMap joker_7915_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7915_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_5.readProperty_mSuperEntityName (), var_superClassKind_7851, var_superPropertyMap_7891, joker_7915_2, joker_7915_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 235)) ;
      switch (var_superClassKind_7851.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          const GGS_entityDeclarationAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("prefs cannot be a super entity"), fixItArray7  COMMA_SOURCE_FILE ("entity.ggs", 243)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_8054__0 ;
          var_superClassKind_7851.getAssociatedValuesFor_atomic (extractedValue_8054__0) ;
          const GGS_entityDeclarationAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("an atomic class cannot be a super entity"), fixItArray9  COMMA_SOURCE_FILE ("entity.ggs", 245)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_8157__0 ;
          var_superClassKind_7851.getAssociatedValuesFor_document (extractedValue_8157__0) ;
          const GGS_entityDeclarationAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("a document cannot be a super entity"), fixItArray11  COMMA_SOURCE_FILE ("entity.ggs", 247)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_8253__0 ;
          GGS_bool extractedValue_8262_isGraphic_1 ;
          GGS_bool extractedValue_8279_isAbstract_2 ;
          GGS_bool extractedValue_8291__3 ;
          var_superClassKind_7851.getAssociatedValuesFor_entity (extractedValue_8253__0, extractedValue_8262_isGraphic_1, extractedValue_8279_isAbstract_2, extractedValue_8291__3) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_entityDeclarationAST temp_13 = this ;
            test_12 = extractedValue_8262_isGraphic_1.operator_and (temp_13.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 249)) COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_entityDeclarationAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray15  COMMA_SOURCE_FILE ("entity.ggs", 250)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_entityDeclarationAST temp_17 = this ;
            test_16 = extractedValue_8279_isAbstract_2.operator_and (temp_17.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 252)) COMMA_SOURCE_FILE ("entity.ggs", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              UpEnumerator_propertyMap enumerator_8588 (var_superPropertyMap_7891) ;
              while (enumerator_8588.hasCurrentObject ()) {
                GalgasBool test_18 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_18) {
                  test_18 = extensionGetter_isAbstract (enumerator_8588.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 254)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_18) {
                    GalgasBool test_19 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_19) {
                      test_19 = var_propertyMap_7463.getter_hasKey (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 255)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_19) {
                        {
                        var_overridenTransients_7662.setter_insert (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)) ;
                        }
                        GGS_propertyKind var_propertyKind_8865 ;
                        GGS_actionMap joker_8879_2 ; // Joker input parameter
                        GGS_bool joker_8879_1 ; // Joker input parameter
                        var_propertyMap_7463.method_searchKey (enumerator_8588.current (HERE).readProperty_lkey (), var_propertyKind_8865, joker_8879_2, joker_8879_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 257)) ;
                        GGS_string var_typeName_8902 = extensionGetter_typeName (var_propertyKind_8865, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 258)) ;
                        GGS_string var_superTypeName_8953 = extensionGetter_typeName (enumerator_8588.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 259)) ;
                        GalgasBool test_20 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_20) {
                          test_20 = GGS_bool (ComparisonKind::notEqual, var_typeName_8902.objectCompare (var_superTypeName_8953)).boolEnum () ;
                          if (GalgasBool::boolTrue == test_20) {
                            GenericArray <FixItDescription> fixItArray21 ;
                            inCompiler->emitSemanticError (var_propertyMap_7463.getter_locationForKey (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 261)), GGS_string ("type '").add_operation (var_superTypeName_8953, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 262)).add_operation (GGS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 262)), fixItArray21  COMMA_SOURCE_FILE ("entity.ggs", 261)) ;
                          }
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_19) {
                      const GGS_entityDeclarationAST temp_22 = this ;
                      GenericArray <FixItDescription> fixItArray23 ;
                      inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("transient '").add_operation (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 266)).add_operation (GGS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 266)), fixItArray23  COMMA_SOURCE_FILE ("entity.ggs", 265)) ;
                    }
                  }
                }
                enumerator_8588.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GGS_bool var_canCopyAndPaste_5F_option_9492 = GGS_bool (false) ;
  GGS_bool var_cannotBeDeleted_5F_option_9529 = GGS_bool (false) ;
  const GGS_entityDeclarationAST temp_24 = this ;
  UpEnumerator_lstringlist enumerator_9570 (temp_24.readProperty_mGraphicOptionArray ()) ;
  while (enumerator_9570.hasCurrentObject ()) {
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = GGS_bool (ComparisonKind::equal, enumerator_9570.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("canCopyAndPaste"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = var_canCopyAndPaste_5F_option_9492.boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GenericArray <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray27  COMMA_SOURCE_FILE ("entity.ggs", 280)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9492 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::equal, enumerator_9570.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("cannotBeDeleted"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GalgasBool test_29 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_29) {
            test_29 = var_cannotBeDeleted_5F_option_9529.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              GenericArray <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 285)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9529 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        GenericArray <FixItDescription> fixItArray31 ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("unkown graphic option"), fixItArray31  COMMA_SOURCE_FILE ("entity.ggs", 289)) ;
      }
    }
    enumerator_9570.gotoNextObject () ;
  }
  GGS_bool var_hasSubClass_10236 = GGS_bool (false) ;
  UpEnumerator_classMap enumerator_10300 (ioArgument_ioSemanticContext.readProperty_mClassMap ()) ;
  bool bool_32 = var_hasSubClass_10236.operator_not (SOURCE_FILE ("entity.ggs", 298)).isValidAndTrue () ;
  if (enumerator_10300.hasCurrentObject () && bool_32) {
    while (enumerator_10300.hasCurrentObject () && bool_32) {
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = enumerator_10300.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 299)).boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_string var_superEntityName_10455 ;
          GGS_bool joker_10472_3 ; // Joker input parameter
          GGS_bool joker_10472_2 ; // Joker input parameter
          GGS_bool joker_10472_1 ; // Joker input parameter
          enumerator_10300.current (HERE).readProperty_mClassKind ().method_extractEntity (var_superEntityName_10455, joker_10472_3, joker_10472_2, joker_10472_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 300)) ;
          const GGS_entityDeclarationAST temp_34 = this ;
          var_hasSubClass_10236 = GGS_bool (ComparisonKind::equal, temp_34.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10455)) ;
        }
      }
      enumerator_10300.gotoNextObject () ;
      if (enumerator_10300.hasCurrentObject ()) {
        bool_32 = var_hasSubClass_10236.operator_not (SOURCE_FILE ("entity.ggs", 298)).isValidAndTrue () ;
      }
    }
  }
  {
  const GGS_entityDeclarationAST temp_35 = this ;
  const GGS_entityDeclarationAST temp_36 = this ;
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.setter_append (temp_35.readProperty_mClassName ().readProperty_string (), temp_36.readProperty_mObsoleteEntityNames (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 305)) ;
  }
  {
  const GGS_entityDeclarationAST temp_37 = this ;
  const GGS_entityDeclarationAST temp_38 = this ;
  const GGS_entityDeclarationAST temp_39 = this ;
  const GGS_entityDeclarationAST temp_40 = this ;
  const GGS_entityDeclarationAST temp_41 = this ;
  const GGS_entityDeclarationAST temp_42 = this ;
  const GGS_entityDeclarationAST temp_43 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_entityForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mClassName ().readProperty_string (), temp_38.readProperty_mSuperEntityName ().readProperty_string (), temp_39.readProperty_mHandlingOpposite (), var_propertyGenerationList_7517, temp_40.readProperty_mSignatureList (), temp_41.readProperty_mIsGraphicEntity (), temp_42.readProperty_mIsAbstract (), var_overridenTransients_7662, temp_43.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10236, var_canCopyAndPaste_5F_option_9492, var_cannotBeDeleted_5F_option_9529, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 309)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                             const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                             GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                             GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_generationStruct constinArgument_inGenerationStruct,
                                                             const GGS_stringset constinArgument_inUsedProtocolSet,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList temp_0 = GGS_atomicPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 365)) ;
  GGS_atomicPropertyGenerationList var_atomicPropertyGenerationList_12934 = temp_0 ;
  GGS_transientPropertyGenerationList temp_1 = GGS_transientPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 366)) ;
  GGS_transientPropertyGenerationList var_transientPropertyGenerationList_13009 = temp_1 ;
  GGS_computedPropertyGenerationList temp_2 = GGS_computedPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 367)) ;
  GGS_computedPropertyGenerationList var_computedPropertyGenerationList_13086 = temp_2 ;
  GGS_toOnePropertyGenerationList temp_3 = GGS_toOnePropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 368)) ;
  GGS_toOnePropertyGenerationList var_toOnePropertyGenerationList_13159 = temp_3 ;
  GGS_toManyPropertyGenerationList temp_4 = GGS_toManyPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 369)) ;
  GGS_toManyPropertyGenerationList var_toManyPropertyGenerationList_13230 = temp_4 ;
  GGS_atomicProxyGenerationList temp_5 = GGS_atomicProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 370)) ;
  GGS_atomicProxyGenerationList var_proxyGenerationList_13299 = temp_5 ;
  GGS_toManyProxyGenerationList temp_6 = GGS_toManyProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 371)) ;
  GGS_toManyProxyGenerationList var_toManyProxyGenerationList_13359 = temp_6 ;
  const GGS_entityForGeneration temp_7 = this ;
  UpEnumerator_propertyGenerationList enumerator_13399 (temp_7.readProperty_mPropertyGenerationList ()) ;
  while (enumerator_13399.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_atomicPropertyGeneration var_atomicProperty_13457 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
      if (nullptr == var_atomicProperty_13457.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        {
        var_atomicPropertyGenerationList_12934.setter_append (var_atomicProperty_13457, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 374)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_transientPropertyGeneration var_transientProperty_13596 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
        if (nullptr == var_transientProperty_13596.ptr ()) {
          test_9 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_9) {
          {
          var_transientPropertyGenerationList_13009.setter_append (var_transientProperty_13596, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 376)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_computedPropertyGeneration var_computedProperty_13747 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
          if (nullptr == var_computedProperty_13747.ptr ()) {
            test_10 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_10) {
            {
            var_computedPropertyGenerationList_13086.setter_append (var_computedProperty_13747, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 378)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_toManyProxyGeneration var_toManyProxy_13894 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
            if (nullptr == var_toManyProxy_13894.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              {
              var_toManyProxyGenerationList_13359.setter_append (var_toManyProxy_13894, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 380)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_atomicProxyGeneration var_proxyProperty_14021 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
              if (nullptr == var_proxyProperty_14021.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                {
                var_proxyGenerationList_13299.setter_append (var_proxyProperty_14021, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 382)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_toOnePropertyGeneration var_toOneProperty_14146 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
                if (nullptr == var_toOneProperty_14146.ptr ()) {
                  test_13 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_13) {
                  {
                  var_toOnePropertyGenerationList_13159.setter_append (var_toOneProperty_14146, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 384)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                GalgasBool test_14 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_14) {
                  GGS_toManyPropertyGeneration var_toOneProperty_14281 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
                  if (nullptr == var_toOneProperty_14281.ptr ()) {
                    test_14 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_14) {
                    {
                    var_toManyPropertyGenerationList_13230.setter_append (var_toOneProperty_14281, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 386)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_13399.gotoNextObject () ;
  }
  GGS_string var_superEntityName_14428 = GGS_string::makeEmptyString () ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_entityForGeneration temp_16 = this ;
    test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mSuperEntityName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_entityForGeneration temp_17 = this ;
      var_superEntityName_14428 = temp_17.readProperty_mSuperEntityName () ;
    }
  }
  if (GalgasBool::boolFalse == test_15) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_entityForGeneration temp_19 = this ;
      test_18 = temp_19.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_superEntityName_14428 = GGS_string ("EBGraphicManagedObject") ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_superEntityName_14428 = GGS_string ("EBManagedObject") ;
    }
  }
  const GGS_entityForGeneration temp_20 = this ;
  const GGS_entityForGeneration temp_21 = this ;
  const GGS_entityForGeneration temp_22 = this ;
  const GGS_entityForGeneration temp_23 = this ;
  const GGS_entityForGeneration temp_24 = this ;
  const GGS_entityForGeneration temp_25 = this ;
  const GGS_entityForGeneration temp_26 = this ;
  const GGS_entityForGeneration temp_27 = this ;
  const GGS_entityForGeneration temp_28 = this ;
  const GGS_entityForGeneration temp_29 = this ;
  const GGS_entityForGeneration temp_30 = this ;
  GGS_string var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_20.readProperty_mEntityName (), var_superEntityName_14428, temp_21.readProperty_mPropertyGenerationList (), constinArgument_inUsedProtocolSet, var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_22.readProperty_mSignatureSet (), temp_23.readProperty_mIsGraphicEntity (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_mOverridenTransients (), temp_26.readProperty_mExternSwiftDelegateList (), temp_27.readProperty_mHasSubEntity (), temp_28.readProperty_mCanCopyAndPaste_5F_option (), temp_29.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_30.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 417)) COMMA_SOURCE_FILE ("entity.ggs", 397))) ;
  const GGS_entityForGeneration temp_31 = this ;
  GGS_string var_fileName_15469 = GGS_string ("entity-").add_operation (temp_31.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 419)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 419)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 420)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 421)) ;
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    const GGS_entityForGeneration temp_33 = this ;
    test_32 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_33.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 426)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_entityForGeneration temp_34 = this ;
      const GGS_entityForGeneration temp_35 = this ;
      const GGS_entityForGeneration temp_36 = this ;
      const GGS_entityForGeneration temp_37 = this ;
      const GGS_entityForGeneration temp_38 = this ;
      const GGS_entityForGeneration temp_39 = this ;
      const GGS_entityForGeneration temp_40 = this ;
      const GGS_entityForGeneration temp_41 = this ;
      var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_34.readProperty_mEntityName (), var_superEntityName_14428, temp_35.readProperty_mHandlingOpposite (), temp_36.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_37.readProperty_mSignatureSet (), temp_38.readProperty_mIsGraphicEntity (), temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mOverridenTransients (), temp_41.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 427))) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    var_s_14688 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_42 = this ;
  var_fileName_15469 = GGS_string ("toone-").add_operation (temp_42.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 448)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 448)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 449)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 450)) ;
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    const GGS_entityForGeneration temp_44 = this ;
    test_43 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_44.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 455)).boolEnum () ;
    if (GalgasBool::boolTrue == test_43) {
      const GGS_entityForGeneration temp_45 = this ;
      const GGS_entityForGeneration temp_46 = this ;
      const GGS_entityForGeneration temp_47 = this ;
      const GGS_entityForGeneration temp_48 = this ;
      const GGS_entityForGeneration temp_49 = this ;
      const GGS_entityForGeneration temp_50 = this ;
      const GGS_entityForGeneration temp_51 = this ;
      const GGS_entityForGeneration temp_52 = this ;
      const GGS_entityForGeneration temp_53 = this ;
      const GGS_entityForGeneration temp_54 = this ;
      const GGS_entityForGeneration temp_55 = this ;
      const GGS_entityForGeneration temp_56 = this ;
      const GGS_entityForGeneration temp_57 = this ;
      var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_45.readProperty_mEntityName (), var_superEntityName_14428, temp_46.readProperty_mHandlingOpposite (), temp_47.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_48.readProperty_mSignatureSet (), temp_49.readProperty_mIsGraphicEntity (), temp_50.readProperty_mIsAbstract (), temp_51.readProperty_mOverridenTransients (), temp_52.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_53.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 473)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_54.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 474)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_55.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 475)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_56.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 476)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_57.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 477)), constinArgument_inUsedProtocolSet COMMA_SOURCE_FILE ("entity.ggs", 456))) ;
    }
  }
  if (GalgasBool::boolFalse == test_43) {
    var_s_14688 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_58 = this ;
  var_fileName_15469 = GGS_string ("tomany-").add_operation (temp_58.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 483)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 483)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 484)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 485)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const GGS_entityListForGeneratingEBManagedObjectContext constinArgument_inEntityListForGeneration,
                                                         const GGS_string constinArgument_inOutputDirectory,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inEntityListForGeneration.getter_count (SOURCE_FILE ("entity.ggs", 501)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_fileName_18591 = GGS_string ("EBManagedObjectFactory.swift") ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_18591, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 503)) ;
      }
      GGS_string var_s_18684 = GGS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 504))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_18591, var_s_18684, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 505)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_entityGenerationTemplate_3,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_entityGenerationTemplate_1,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_entityGenerationTemplate_2,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_entityGenerationTemplate_0,
  3,
  gWrapperAllDirectories_entityGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (Compiler * inCompiler,
                                                                                     const GGS_string & in_ENTITY_5F_NAME,
                                                                                     const GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_stringset & in_USED_5F_PROTOCOL_5F_SET,
                                                                                     const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                     const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_computedPropertyGenerationList & /* in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                     const GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    GGS_uint index_387_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_387 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_387.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_1 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).add_operation (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 19)).stringValue ()) ;
          result.appendString (" { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_387.gotoNextObject () ;
        index_387_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1033_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicProxyGenerationList enumerator_1033 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1033.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_3 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).add_operation (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_3) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 32)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 36)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1033.gotoNextObject () ;
        index_1033_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_4 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1686_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1686 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1686.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_5 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).add_operation (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 48)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 53)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1686.gotoNextObject () ;
        index_1686_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_6 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 65)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("final ") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("class ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    GGS_uint index_2668_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_propertyGenerationList enumerator_2668 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2668.hasCurrentObject ()) {
        const GalgasBool test_8 = GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          const GalgasBool test_9 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).add_operation (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("    , ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString ("\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("    // ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString (" // Commented out, not used\n") ;
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
        enumerator_2668.gotoNextObject () ;
        index_2668_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    {\n\n") ;
  GGS_uint index_3151_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3151 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3151.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_3151.current_mProperty (HERE).ptr (), GGS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 84)).stringValue ()) ;
      enumerator_3151.gotoNextObject () ;
      index_3151_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  required init (_ inUndoManager : UndoManager\?) {\n") ;
  GGS_uint index_3580_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3580 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3580.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_3580.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 93)).stringValue ()) ;
      enumerator_3580.gotoNextObject () ;
      index_3580_.increment () ;
    }
  }
  result.appendString ("    super.init (inUndoManager)\n") ;
  GGS_uint index_3689_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toOnePropertyGenerationList enumerator_3689 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_3689.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none)\n") ;
      enumerator_3689.gotoNextObject () ;
      index_3689_.increment () ;
    }
  }
  GGS_uint index_4124_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_4124 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4124.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_4124.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 108)).stringValue ()) ;
      enumerator_4124.gotoNextObject () ;
      index_4124_.increment () ;
    }
  }
  result.appendString ("  //--- Install undoers and opposite setter for relationships\n") ;
  GGS_uint index_4281_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4281 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4281.hasCurrentObject ()) {
      switch (enumerator_4281.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid :
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none :
        {
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance :
        {
          GGS_string extractedValue_4356_masterPropertyName_0 ;
          GGS_string extractedValue_4375__1 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_4356_masterPropertyName_0, extractedValue_4375__1) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setDataProvider (self.") ;
          result.appendString (extractedValue_4356_masterPropertyName_0.stringValue ()) ;
          result.appendString ("_property)\n") ;
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite :
        {
          GGS_string extractedValue_4515_oppositeName_0 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_4515_oppositeName_0) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (me) } },\n      resetter: { inObject in inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (nil) }\n    )\n") ;
        }
        break ;
      }
      enumerator_4281.gotoNextObject () ;
      index_4281_.increment () ;
    }
  }
  result.appendString ("  //--- Register properties for handling signature\n") ;
  GGS_uint index_4931_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_4931 (in_SIGNATURE_5F_SET) ;
    while (enumerator_4931.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_4931.current_key (HERE).stringValue ()) ;
      result.appendString ("_property.setSignatureObserver (observer: self)\n") ;
      enumerator_4931.gotoNextObject () ;
      index_4931_.increment () ;
    }
  }
  result.appendString ("  //--- Extern delegates\n") ;
  GGS_uint index_5115_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5115 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5115.hasCurrentObject ()) {
      result.appendString ("    self.mExternDelegate") ;
      result.appendString (index_5115_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_5115.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (object: self)\n") ;
      enumerator_5115.gotoNextObject () ;
      index_5115_idx.increment () ;
    }
  }
  result.appendString ("   }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Extern delegates\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_5545_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5545 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5545.hasCurrentObject ()) {
      result.appendString ("  final var mExternDelegate") ;
      result.appendString (index_5545_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 143)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_5545.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_5545.gotoNextObject () ;
      index_5545_idx.increment () ;
    }
  }
  result.appendString ("\n") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   computeSignature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n") ;
    GGS_uint index_6034_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      UpEnumerator_stringset enumerator_6034 (in_SIGNATURE_5F_SET) ;
      while (enumerator_6034.hasCurrentObject ()) {
        result.appendString ("    crc.accumulate (u32: self.") ;
        result.appendString (enumerator_6034.current_key (HERE).stringValue ()) ;
        result.appendString ("_property.signature ())\n") ;
        enumerator_6034.gotoNextObject () ;
        index_6034_.increment () ;
      }
    }
    result.appendString ("    return crc\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 163)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 163)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func cursorForKnob (knob inKnobIndex: Int) -> NSCursor\? {\n    return self.cursorForKnob_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (knob: inKnobIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Translate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptedTranslation (xBy inDx: Int, yBy inDy: Int) -> CanariPoint {\n    return self.acceptedTranslation_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptToTranslate (xBy inDx: Int, yBy inDy: Int) -> Bool {\n    return self.acceptToTranslate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func translate (xBy inDx: Int, yBy inDy: Int,\n                           userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.translate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Move\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canMove (knob inKnobIndex : Int,\n                         proposedUnalignedAlignedTranslation inProposedUnalignedTranslation : CanariPoint,\n                         proposedAlignedTranslation inProposedAlignedTranslation : CanariPoint,\n                         unalignedMouseDraggedLocation inUnalignedMouseDraggedLocation : CanariPoint,\n                         shift inShift : Bool) -> CanariPoint {\n    return self.canMove_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedUnalignedAlignedTranslation: inProposedUnalignedTranslation,\n      proposedAlignedTranslation: inProposedAlignedTranslation,\n      unalignedMouseDraggedLocation: inUnalignedMouseDraggedLocation,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func move (knob inKnobIndex: Int,\n                      proposedDx inDx: Int,\n                      proposedDy inDy: Int,\n                      unalignedMouseLocationX inUnlignedMouseLocationX : Int,\n                      unalignedMouseLocationY inUnlignedMouseLocationY : Int,\n                      alignedMouseLocationX inAlignedMouseLocationX : Int,\n                      alignedMouseLocationY inAlignedMouseLocationY : Int,\n                      shift inShift : Bool) {\n    self.move_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedDx: inDx,\n      proposedDy: inDy,\n      unalignedMouseLocationX: inUnlignedMouseLocationX,\n      unalignedMouseLocationY: inUnlignedMouseLocationY,\n      alignedMouseLocationX: inAlignedMouseLocationX,\n      alignedMouseLocationY: inAlignedMouseLocationY,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Snap to grid\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func snapToGrid (_ inGrid : Int) {\n    self.snapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canSnapToGrid (_ inGrid : Int) -> Bool {\n    return self.canSnapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  HORIZONTAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipHorizontally () {\n    self.flipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipHorizontally () -> Bool {\n    return self.canFlipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  VERTICAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipVertically () {\n    self.flipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipVertically () -> Bool {\n    return self.canFlipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  ROTATE 90\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canRotate90 (accumulatedPoints : inout Set <CanariPoint>) -> Bool {\n    return self.canRotate90_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (accumulatedPoints: &accumulatedPoints)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90Clockwise (from inRotationCenter : CanariPoint,\n                                   userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90Clockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90CounterClockwise (from inRotationCenter : CanariPoint,\n                                          userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90CounterClockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Save into additional dictionary\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func saveIntoAdditionalDictionary (_ ioDictionary : inout [String : Any]) {\n    self.saveIntoAdditionalDictionary_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (&ioDictionary)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationAfterPasting\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationAfterPasting (additionalDictionary inDictionary : [String : Any],\n                                       optionalDocument inOptionalDocument : EBAutoLayoutManagedDocument\?,\n                                       objectArray inObjectArray : [EBGraphicManagedObject]) -> String {\n    return self.operationAfterPasting_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (additionalDictionary: inDictionary,\n                                                      optionalDocument: inOptionalDocument,\n                                                      objectArray: inObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Alignment Points\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func alignmentPoints () -> Set <CanariPoint> {\n    return self.alignmentPoints_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationBeforeRemoving\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationBeforeRemoving () {\n    self.operationBeforeRemoving_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n") ;
    const GalgasBool test_12 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    switch (test_12) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  COPY AND PASTE\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    const GalgasBool test_13 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    switch (test_13) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Can be deleted\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canBeDeleted () -> Bool {\n    return false\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
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
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (Compiler * inCompiler,
                                                                                           const GGS_string & in_ENTITY_5F_NAME,
                                                                                           const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                           const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                           const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_toManyPropertyGenerationList & /* in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                           const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                           const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                           const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                           const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_,
                                                                                           const GGS_stringset & /* in_USED_5F_PROTOCOL_5F_SET */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("ReadOnlyArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractArrayProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">,                            \n                                 addedSet inAddedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">) {\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n  //--- Remove observers from removed objects\n    for managedObject in inRemovedSet.values {\n") ;
  GGS_uint index_1159_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_1159 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1159.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1159.gotoNextObject () ;
      index_1159_.increment () ;
    }
  }
  GGS_uint index_1421_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_1421 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1421.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1421.gotoNextObject () ;
      index_1421_.increment () ;
    }
  }
  GGS_uint index_1694_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_1694 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1694.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1694.gotoNextObject () ;
      index_1694_.increment () ;
    }
  }
  GGS_uint index_1958_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_1958 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1958.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1958.gotoNextObject () ;
      index_1958_.increment () ;
    }
  }
  result.appendString ("    }\n  //--- Add observers to added objects\n    for managedObject in inAddedSet.values {\n") ;
  GGS_uint index_2318_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_2318 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_2318.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2318.gotoNextObject () ;
      index_2318_.increment () ;
    }
  }
  GGS_uint index_2581_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_2581 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2581.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2581.gotoNextObject () ;
      index_2581_.increment () ;
    }
  }
  GGS_uint index_2855_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_2855 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2855.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2855.gotoNextObject () ;
      index_2855_.increment () ;
    }
  }
  GGS_uint index_3120_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_3120 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3120.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_3120.gotoNextObject () ;
      index_3120_.increment () ;
    }
  }
  result.appendString ("    }\n  }\n\n") ;
  GGS_uint index_3403_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3403 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3403.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_3403.gotoNextObject () ;
      index_3403_.increment () ;
    }
  }
  GGS_uint index_4806_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_4806 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4806.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' toMany proxy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4806.gotoNextObject () ;
      index_4806_.increment () ;
    }
  }
  GGS_uint index_6198_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicProxyGenerationList enumerator_6198 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6198.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' proxy property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_6198.gotoNextObject () ;
      index_6198_.increment () ;
    }
  }
  GGS_uint index_7600_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_7600 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_7600.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by:  inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_7600.gotoNextObject () ;
      index_7600_.increment () ;
    }
  }
  GGS_uint index_9015_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_9015 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_9015.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_9015.gotoNextObject () ;
      index_9015_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 235)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sort\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mIsOrderedBefore : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (",\n                        sortCallback inSortCallBack : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          if let sortFunction = self.mIsOrderedBefore {\n            newArray = EBReferenceArray (v.sorted { sortFunction ($0, $1) })\n          }else{\n            newArray = EBReferenceArray (v)\n          }\n          self.mTransientKind = .single\n        case .multiple :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.propval.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOfSuperOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 351)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" <SUPER : EBManagedObject> : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : EBReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : EBReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for superObject in newModelArray.values {\n        if let object = superObject as\? ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          newArray.append (object)\n        }\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.mInternalArrayValue.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 444)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ value :  EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) { } // Abstract method\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    Proxy: ProxyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 464)).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setModel (_ inModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\?) {\n    if self.mModel !== inModel {\n      self.mModel\?.detachClient (self)\n      self.mModel = inModel\n      self.mModel\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    let newModelArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty :\n        newModelArray = EBReferenceArray ()\n      case .single (let v) :\n        newModelArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> (v)\n      case .multiple :\n        newModelArray = EBReferenceArray ()\n      }\n    }else{\n      newModelArray = EBReferenceArray ()\n    }\n    self.mInternalArrayValue = newModelArray\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inArrayValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mModel\?.setProp (inArrayValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    if let model = self.mModel {\n      return model.selection\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        return EBReferenceArray ()\n      case .single (let v) :\n        return EBReferenceArray (v)\n      }\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("StandAlone Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 539)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 542)).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" { // , EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak final var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
    const GalgasBool test_5 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_5) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n  private final var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void,\n                                               resetter inResetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Update observers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
    const GalgasBool test_6 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_6) {
    case GalgasBool::boolTrue : {
      result.appendString ("  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">) {\n    for managedObject in inRemovedSet.values {\n      self.mResetOppositeRelationship\? (managedObject)\n    }\n    for managedObject in inAddedSet.values {\n      self.mSetOppositeRelationship\? (managedObject)\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    return .single (self.mInternalArrayValue.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mInternalArrayValue = inValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func remove (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if let idx = self.mInternalArrayValue.firstIndex (of: inObject) {\n      self.mInternalArrayValue.remove (at: idx)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func add (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if !self.internalSetValue.contains (inObject) {\n      self.mInternalArrayValue.append (inObject)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 651)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 654)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.key = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final let key : String\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndexArray = inDictionary [self.key] as\? [Int] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for idx in objectSavingIndexArray {\n        objectArray.append (inManagedObjectArray [idx] as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n      }\n      self.setProp (objectArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    let indexArray = inData.base62EncodedIntArray (fromRange: inRange)\n    for idx in indexArray {\n      objectArray.append (inRawObjectArray [idx].object as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n    }\n    self.setProp (objectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if self.mInternalArrayValue.count > 0 {\n      var array = [Int] ()\n      for object in self.mInternalArrayValue.values {\n        array.append (object.savingIndex)\n      }\n      ioDictionary [self.key] = array\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mInternalArrayValue.count > 0 {\n      for object in self.mInternalArrayValue.values {\n        ioArray.append (object)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    enterToManyRelationshipObjectIndexes (from: self.propval.values, into: &ioData)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    if self.mUsedForSignature {\n      for managedObject in inRemovedSet.values {\n        managedObject.setSignatureObserver (observer: nil)\n      }\n      for managedObject in inAddedSet.values {\n        managedObject.setSignatureObserver (observer: self)\n      }\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak final var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    for object in self.mInternalArrayValue.values {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 800)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 803)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("// PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mPrefKey : String\n  private let mObserverForWritingPreferences = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (prefKey inPrefKey : String) {\n    self.mPrefKey = inPrefKey\n    super.init ()\n    if let array = UserDefaults.standard.array (forKey: inPrefKey) as\? [[String : Any]] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for dictionary in array {\n        let object = newInstanceOfEntityNamed (self.undoManager, \"") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\") as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\n        object.setUpProperties (fromValueDictionary: dictionary, managedObjectArray: [])\n        objectArray.append (object)\n      }\n      self.setProp (objectArray)\n    }\n") ;
    GGS_uint index_33741_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_33741 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_33741.hasCurrentObject ()) {
        result.appendString ("    self.toMany_") ;
        result.appendString (enumerator_33741.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mObserverForWritingPreferences)\n") ;
        enumerator_33741.gotoNextObject () ;
        index_33741_.increment () ;
      }
    }
    result.appendString ("    self.mObserverForWritingPreferences.mEventCallBack = { [weak self] in self\?.writeInPreferences () }\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func writeInPreferences () {\n    var dictionaryArray = [[String  : Any]] ()\n    for object in self.mInternalArrayValue.values {\n      var d = [String  : Any] ()\n      object.savePropertiesAndRelationshipsIntoDictionary (&d)\n      d [ENTITY_KEY] = nil // Remove entity key, not used in preferences\n      dictionaryArray.append (d)\n    }\n    UserDefaults.standard.set (dictionaryArray, forKey: self.mPrefKey)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (Compiler * inCompiler,
                                                                                          const GGS_string & in_ENTITY_5F_NAME,
                                                                                          const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                          const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicProxyGenerationList & /* in_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                          const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                          const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                          const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                          const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                          const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractObjectProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  //--- Remove observers from removed objects\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let oldValue = inOldValue {\n") ;
    GGS_uint index_1161_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_1161 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1161.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_1161.gotoNextObject () ;
        index_1161_.increment () ;
      }
    }
    GGS_uint index_1363_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1363 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1363.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_1363.gotoNextObject () ;
        index_1363_.increment () ;
      }
    }
    GGS_uint index_1576_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_1576 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1576.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_1576.gotoNextObject () ;
        index_1576_.increment () ;
      }
    }
    GGS_uint index_1772_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_1772 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_1772.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        oldValue.") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
        enumerator_1772.gotoNextObject () ;
        index_1772_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  //--- Add observers to added objects\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let newValue = self.mWeakInternalValue {\n") ;
    GGS_uint index_2297_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_2297 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2297.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_2297.gotoNextObject () ;
        index_2297_.increment () ;
      }
    }
    GGS_uint index_2500_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_2500 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2500.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_2500.gotoNextObject () ;
        index_2500_.increment () ;
      }
    }
    GGS_uint index_2714_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_2714 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2714.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_2714.gotoNextObject () ;
        index_2714_.increment () ;
      }
    }
    GGS_uint index_2911_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_2911 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_2911.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        newValue.") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
        enumerator_2911.gotoNextObject () ;
        index_2911_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n") ;
  GGS_uint index_3192_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3192 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3192.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3192.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3192.gotoNextObject () ;
      index_3192_.increment () ;
    }
  }
  GGS_uint index_3636_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_3636 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_3636.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3636.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 73)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3636.gotoNextObject () ;
      index_3636_.increment () ;
    }
  }
  GGS_uint index_4090_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_4090 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_4090.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_4090.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_4090.gotoNextObject () ;
      index_4090_.increment () ;
    }
  }
  GGS_uint index_4527_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4527 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4527.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observable toMany property: ") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?.") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4527.gotoNextObject () ;
      index_4527_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   INIT\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n") ;
  GGS_uint index_6224_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_6224 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6224.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" simple stored property\n    self.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6224.gotoNextObject () ;
      index_6224_.increment () ;
    }
  }
  GGS_uint index_6567_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_6567 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6567.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" transient property\n    self.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6567.gotoNextObject () ;
      index_6567_.increment () ;
    }
  }
  GGS_uint index_6914_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_6914 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6914.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" computed property\n    self.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6914.gotoNextObject () ;
      index_6914_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mKey : String\n  var key : String { return self.mKey }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndex = inDictionary [self.mKey] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    if let idx = inData.base62EncodedInt (range: inRange) {\n      let object = inRawObjectArray [idx].object as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let idx = self.mWeakInternalValue\?.savingIndex {\n      ioDictionary [self.mKey] = idx\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if let object = self.mWeakInternalValue {\n      ioArray.append (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    if let object = self.propval {\n      ioData.append (base62Encoded: object.savingIndex)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
  const GalgasBool test_2 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n  private var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void,\n                                         resetter inResetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    if let object = inOldValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: nil)\n      }\n") ;
  const GalgasBool test_3 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mResetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    if let object = self.mWeakInternalValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: self)\n      }\n") ;
  const GalgasBool test_4 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mSetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n    self.clearSignatureCache ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? > {\n    if let object = self.mWeakInternalValue {\n      return .single (object)\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var propval : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? { return self.mWeakInternalValue }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   setProp\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mIsStrongReference : Bool\n  private var mStrongInternalValue : EBManagedObject\? = nil // Only used for retaining\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ inValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    self.mWeakInternalValue = inValue\n    if self.mIsStrongReference {\n      self.mStrongInternalValue = inValue\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    if let object = self.mWeakInternalValue {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (Compiler * /* inCompiler */,
                                                                              const GGS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n") ;
  GGS_uint index_510_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    UpEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_510 (in_ENTITY_5F_LIST) ;
    while (enumerator_510.hasCurrentObject ()) {
      result.appendString ("  \"") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString ("\" : ") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString (".self") ;
      GGS_uint index_597_ (0) ;
      if (enumerator_510.current_mObsoleteEntityNames (HERE).isValid ()) {
        UpEnumerator_lstringlist enumerator_597 (enumerator_510.current_mObsoleteEntityNames (HERE)) ;
        while (enumerator_597.hasCurrentObject ()) {
          result.appendString (",\n  \"") ;
          result.appendString (enumerator_597.current_mValue (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("\" : ") ;
          result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
          result.appendString (".self") ;
          enumerator_597.gotoNextObject () ;
          index_597_.increment () ;
        }
      }
      enumerator_510.gotoNextObject () ;
      if (enumerator_510.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_510_.increment () ;
    }
  }
  result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//  newInstanceOfEntityNamed\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//--------------------------------------------------------------------------------------------------\n//   makeManagedObjectFromDictionary\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (fromValueDictionary: inDictionary, managedObjectArray: [])\n  return object\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS_lstringlist constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_lstringlist enumerator_1084 (constinArgument_inGraphvizList) ;
      while (enumerator_1084.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
        }
        enumerator_1084.gotoNextObject () ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1689 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GGS_stringlist var_exploreArray_1751 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GGS_stringlist var_nodeList_1806 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 45)) ;
  GGS_stringlist var_arrowList_1838 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_1855 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_1855 = true ;
    while (loop_1855) {
      loop_1855 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1855) {
        loop_1855 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1855 && (0 == variant_1855)) {
        loop_1855 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_1855) {
        variant_1855 -= 1 ;
        GGS_string var_entityName_1973 ;
        {
        var_exploreArray_1751.setter_popLast (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GGS_string var_node_1993 = GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GGS_classKind var_entityKind_2134 ;
        GGS_propertyMap var_propertyMap_2164 ;
        GGS_actionMap joker_2177_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2177_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1973.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2134, var_propertyMap_2164, joker_2177_2, joker_2177_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GGS_string var_superEntityName_2234 ;
        GGS_bool joker_2251_3 ; // Joker input parameter
        GGS_bool joker_2251_2 ; // Joker input parameter
        GGS_bool joker_2251_1 ; // Joker input parameter
        var_entityKind_2134.method_extractEntity (var_superEntityName_2234, joker_2251_3, joker_2251_2, joker_2251_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2234.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1689.getter_hasKey (var_superEntityName_2234 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_1689.setter_insert (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                }
                {
                var_exploreArray_1751.setter_append (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                }
              }
            }
            {
            var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_2638 (var_propertyMap_2164) ;
        while (enumerator_2638.hasCurrentObject ()) {
          switch (enumerator_2638.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2706_type_0 ;
              GGS_propertyAccessibility extractedValue_2712_accessibility_1 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2706_type_0, extractedValue_2712_accessibility_1) ;
              switch (extractedValue_2712_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1993.plusAssignOperation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2706_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
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
              GGS_lstring extractedValue_3009_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3042_accessibility_1 ;
              GGS_bool extractedValue_3057__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3060_optionKind_3 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_3009_typeName_0, extractedValue_3042_accessibility_1, extractedValue_3057__2, extractedValue_3060_optionKind_3) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_3042_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  var_node_1993.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3060_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      GalgasBool test_7 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3599_oppositeName_0 ;
                      extractedValue_3060_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3599_oppositeName_0) ;
                      GalgasBool test_8 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3599_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_4002__0 ;
                      extractedValue_3060_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_4002__0) ;
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
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
              GGS_lstring extractedValue_4393_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4426_accessibility_1 ;
              GGS_bool extractedValue_4441__2 ;
              GGS_toOneOppositeRelationship extractedValue_4444_opposite_3 ;
              GGS_bool extractedValue_4454__4 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4393_typeName_0, extractedValue_4426_accessibility_1, extractedValue_4441__2, extractedValue_4444_opposite_3, extractedValue_4454__4) ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = extractedValue_4426_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  var_node_1993.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4444_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4393_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5069_oppositeName_0 ;
                      extractedValue_4444_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5069_oppositeName_0) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4393_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                          }
                        }
                      }
                      GalgasBool test_13 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2638.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5069_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_13) {
                          {
                          var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5069_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2638.gotoNextObject () ;
        }
        var_node_1993.plusAssignOperation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        {
        var_nodeList_1806.setter_append (var_node_1993, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5654 = GGS_string ("digraph G {\n") ;
  var_s_5654.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5654.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  UpEnumerator_stringlist enumerator_5775 (var_nodeList_1806) ;
  while (enumerator_5775.hasCurrentObject ()) {
    var_s_5654.plusAssignOperation(enumerator_5775.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5775.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_5832 (var_arrowList_1838) ;
  while (enumerator_5832.hasCurrentObject ()) {
    var_s_5654.plusAssignOperation(enumerator_5832.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5832.gotoNextObject () ;
  }
  var_s_5654.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GGS_string var_filePath_5904 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GGS_string var_temp_5990 = var_filePath_5904.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_5990.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  GGS_stringset var_reachableEntityNameSet_6734 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GGS_stringlist var_exploreArray_6796 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 153)) ;
  GGS_stringlist var_nodeList_6851 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 154)) ;
  GGS_stringlist var_arrowList_6883 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6932 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_6967 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_6967 = true ;
    while (loop_6967) {
      loop_6967 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6796.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6967) {
        loop_6967 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6796.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6967 && (0 == variant_6967)) {
        loop_6967 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_6967) {
        variant_6967 -= 1 ;
        GGS_string var_entityName_7085 ;
        {
        var_exploreArray_6796.setter_popLast (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        {
        var_nodeList_6851.setter_append (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_6932.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 159)), inCompiler COMMA_HERE), var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GGS_classKind var_entityKind_7280 ;
        GGS_propertyMap var_propertyMap_7310 ;
        GGS_actionMap joker_7323_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7323_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7085.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7280, var_propertyMap_7310, joker_7323_2, joker_7323_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GGS_string var_superEntityName_7380 ;
        GGS_bool joker_7397_3 ; // Joker input parameter
        GGS_bool joker_7397_2 ; // Joker input parameter
        GGS_bool joker_7397_1 ; // Joker input parameter
        var_entityKind_7280.method_extractEntity (var_superEntityName_7380, joker_7397_3, joker_7397_2, joker_7397_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7380.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6734.getter_hasKey (var_superEntityName_7380 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_6734.setter_insert (var_superEntityName_7380, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                }
                {
                var_exploreArray_6796.setter_append (var_superEntityName_7380, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
                }
              }
            }
            {
            var_arrowList_6883.setter_append (var_superEntityName_7380.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7380, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_7868 (var_propertyMap_7310) ;
        while (enumerator_7868.hasCurrentObject ()) {
          switch (enumerator_7868.current_mKind (HERE).enumValue ()) {
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
              GGS_lstring extractedValue_8042_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8075_accessibility_1 ;
              GGS_bool extractedValue_8091__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8091__3 ;
              enumerator_7868.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_8042_typeName_0, extractedValue_8075_accessibility_1, extractedValue_8091__2, extractedValue_8091__3) ;
              {
              var_arrowList_6883.setter_append (var_entityName_7085.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8042_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_8075_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8042_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6734.setter_insert (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      }
                      {
                      var_exploreArray_6796.setter_append (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8568_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8601_accessibility_1 ;
              GGS_bool extractedValue_8616__2 ;
              GGS_toOneOppositeRelationship extractedValue_8619_opposite_3 ;
              GGS_bool extractedValue_8629_isWeak_4 ;
              enumerator_7868.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8568_typeName_0, extractedValue_8601_accessibility_1, extractedValue_8616__2, extractedValue_8619_opposite_3, extractedValue_8629_isWeak_4) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = extractedValue_8629_isWeak_4.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  {
                  var_arrowList_6883.setter_append (var_entityName_7085.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8568_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = extractedValue_8601_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  switch (extractedValue_8619_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_10 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8568_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6734.setter_insert (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          }
                          {
                          var_exploreArray_6796.setter_append (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9256__0 ;
                      extractedValue_8619_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9256__0) ;
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8568_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6734.setter_insert (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          }
                          {
                          var_exploreArray_6796.setter_append (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
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
          enumerator_7868.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9518 = GGS_string ("digraph G {\n") ;
  var_s_9518.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9518.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  UpEnumerator_stringlist enumerator_9639 (var_nodeList_6851) ;
  while (enumerator_9639.hasCurrentObject ()) {
    var_s_9518.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9639.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_9703 (var_arrowList_6883) ;
  while (enumerator_9703.hasCurrentObject ()) {
    var_s_9518.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9703.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9703.gotoNextObject () ;
  }
  var_s_9518.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GGS_string var_filePath_9782 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GGS_string var_temp_9869 = var_filePath_9782.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_9869.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GGS_bool joker_9991 ; // Joker input parameter
  var_s_9518.method_writeToFileWhenDifferentContents (var_filePath_9782, joker_9991, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9782 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GGS_string var_temp_32__10105 = var_entityStrongReferenceGraph_6932.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_bool joker_10201 ; // Joker input parameter
  var_temp_32__10105.method_writeToFileWhenDifferentContents (var_filePath_9782, joker_10201, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_stringlist var_undefinedNodeList_10243 = var_entityStrongReferenceGraph_6932.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_string var_s_10357 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      UpEnumerator_stringlist enumerator_10448 (var_undefinedNodeList_10243) ;
      while (enumerator_10448.hasCurrentObject ()) {
        var_s_10357.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_10448.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10448.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10357, fixItArray13  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_lstringlist temp_15 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      temp_15.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (GGS_lstring::init_21__21_ (constinArgument_inRootEntityName, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_lstringlist var_accessibleNodeList_10614 = var_entityStrongReferenceGraph_6932.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GGS_stringset var_accessibleNodeSet_10737 = GGS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10614  COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      UpEnumerator_stringlist enumerator_10817 (var_nodeList_6851) ;
      while (enumerator_10817.hasCurrentObject ()) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10737.getter_hasKey (enumerator_10817.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 239)).operator_not (SOURCE_FILE ("graphviz.ggs", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 240)), enumerator_10817.current_mValue (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 240)) ;
          }
        }
        enumerator_10817.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 245)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GGS_lstringlist var_unsortedNodeList_11153 ;
      GGS_stringlist joker_11131 ; // Joker input parameter
      var_entityStrongReferenceGraph_6932.method_circularities (joker_11131, var_unsortedNodeList_11153 COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11153.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_string var_s_11220 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (var_unsortedNodeList_11153.getter_count (SOURCE_FILE ("graphviz.ggs", 248)).getter_string (SOURCE_FILE ("graphviz.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          var_s_11220.plusAssignOperation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          UpEnumerator_lstringlist enumerator_11363 (var_unsortedNodeList_11153) ;
          while (enumerator_11363.hasCurrentObject ()) {
            var_s_11220.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_11363.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 251)) ;
            enumerator_11363.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 253)), var_s_11220, fixItArray21  COMMA_SOURCE_FILE ("graphviz.ggs", 253)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'
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
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3023 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_propertyKind_3234 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_3248_2 ; // Joker input parameter
  GGS_bool joker_3248_1 ; // Joker input parameter
  var_entry_3023.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3234, joker_3248_2, joker_3248_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 71)) ;
  switch (var_propertyKind_3234.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_3297__0 ;
      GGS_propertyAccessibility extractedValue_3297__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_property (extractedValue_3297__0, extractedValue_3297__1) ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.ggs", 74)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_3399__0 ;
      GGS_propertyAccessibility extractedValue_3399__1 ;
      GGS_bool extractedValue_3399__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_3399__3 ;
      var_propertyKind_3234.getAssociatedValuesFor_toMany (extractedValue_3399__0, extractedValue_3399__1, extractedValue_3399__2, extractedValue_3399__3) ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.ggs", 76)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3500__0 ;
      GGS_propertyAccessibility extractedValue_3500__1 ;
      GGS_bool extractedValue_3500__2 ;
      GGS_toOneOppositeRelationship extractedValue_3500__3 ;
      GGS_bool extractedValue_3500__4 ;
      var_propertyKind_3234.getAssociatedValuesFor_toOne (extractedValue_3500__0, extractedValue_3500__1, extractedValue_3500__2, extractedValue_3500__3, extractedValue_3500__4) ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.ggs", 78)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3614__0 ;
      var_propertyKind_3234.getAssociatedValuesFor_selectionController (extractedValue_3614__0) ;
      const GGS_selectionControllerDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.ggs", 80)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3725__0 ;
      GGS_bool extractedValue_3725__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_arrayController (extractedValue_3725__0, extractedValue_3725__1) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_selectionControllerDeclarationAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_selectionControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GGS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.ggs", 83)) ;
        }
      }
      const GGS_selectionControllerDeclarationAST temp_14 = this ;
      GGS_propertyKind var_kind_3909 = GGS_propertyKind::class_func_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 85)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_15 = this ;
      var_entry_3023.mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3909, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 86)) ;
      }
      {
      const GGS_selectionControllerDeclarationAST temp_16 = this ;
      const GGS_selectionControllerDeclarationAST temp_17 = this ;
      const GGS_selectionControllerDeclarationAST temp_18 = this ;
      const GGS_selectionControllerDeclarationAST temp_19 = this ;
      var_entry_3023.mProperty_mPropertyGenerationList.setter_append (GGS_selectionControllerPropertyGeneration::init_21__21__21__21_ (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 87)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3023, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 95)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GGS_generationStruct & ioArgument_ioGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_superClassKind_6033 ;
  GGS_propertyMap var_propertyMap_6054 ;
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_actionMap joker_6067_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6067_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_6033, var_propertyMap_6054, joker_6067_2, joker_6067_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 131)) ;
  GGS_propertyKind var_propertyKind_6129 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_6143_2 ; // Joker input parameter
  GGS_bool joker_6143_1 ; // Joker input parameter
  var_propertyMap_6054.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_6129, joker_6143_2, joker_6143_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 132)) ;
  switch (var_propertyKind_6129.enumValue ()) {
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
      GGS_lstring extractedValue_6297_typeName_0 ;
      GGS_bool extractedValue_6307__1 ;
      var_propertyKind_6129.getAssociatedValuesFor_arrayController (extractedValue_6297_typeName_0, extractedValue_6307__1) ;
      GGS_propertyMap var_selectionObservablePropertyMap_6413 ;
      GGS_propertyGenerationList var_selectionGenerationList_6468 ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GGS_classKind joker_6397 ; // Joker input parameter
      GGS_actionMap joker_6452 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_6397, var_selectionObservablePropertyMap_6413, joker_6452, var_selectionGenerationList_6468, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 139)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_3 = this ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      const GGS_selectionControllerDeclarationAST temp_5 = this ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      const GGS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_6297_typeName_0.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_6413, var_selectionGenerationList_6468, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 146)) ;
      }
      {
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (extractedValue_6297_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 156)) ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_10.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 158)) ;
          }
          {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.setter_insert (temp_11.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 159)) ;
          }
        }
      }
      const GGS_selectionControllerDeclarationAST temp_12 = this ;
      GGS_string var_testedTypeName_7227 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 162)).isValid ()) {
        uint32_t variant_7282 = GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 162)).uintValue () ;
        bool loop_7282 = true ;
        while (loop_7282) {
          loop_7282 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7227)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 162)).isValid () ;
          if (loop_7282) {
            loop_7282 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7227)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 162)).boolValue () ;
          }
          if (loop_7282 && (0 == variant_7282)) {
            loop_7282 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.ggs", 162)) ;
          }
          if (loop_7282) {
            variant_7282 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                switch (var_superClassKind_6033.enumValue ()) {
                case GGS_classKind::Enumeration::invalid:
                  break ;
                case GGS_classKind::Enumeration::enum_prefs:
                  {
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_atomic:
                  {
                    GGS_typeKind extractedValue_7542__0 ;
                    var_superClassKind_6033.getAssociatedValuesFor_atomic (extractedValue_7542__0) ;
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_document:
                  {
                    GGS_lstring extractedValue_7602__0 ;
                    var_superClassKind_6033.getAssociatedValuesFor_document (extractedValue_7602__0) ;
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_entity:
                  {
                    GGS_string extractedValue_7668_superOfSuperEntity_0 ;
                    GGS_bool extractedValue_7689__1 ;
                    GGS_bool extractedValue_7689__2 ;
                    GGS_bool extractedValue_7689__3 ;
                    var_superClassKind_6033.getAssociatedValuesFor_entity (extractedValue_7668_superOfSuperEntity_0, extractedValue_7689__1, extractedValue_7689__2, extractedValue_7689__3) ;
                    var_testedTypeName_7227 = extractedValue_7668_superOfSuperEntity_0 ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        const GGS_selectionControllerDeclarationAST temp_16 = this ;
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GGS_string ("This entity is not descendant of ").add_operation (extractedValue_6297_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.ggs", 174)) ;
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
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 198)) ;
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 199)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 199)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 200)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 200)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 200)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 201)) ;
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
  result_result = GGS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 207)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 207)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (GGS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 209)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 208)) ;
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
    UpEnumerator_propertyMap enumerator_1030 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_1030.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selection observable property: ") ;
      result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      const GalgasBool test_0 = extensionGetter_isEntityType (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_1 = extensionGetter_isTransient (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBTransientProperty <") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).stringValue ()) ;
          result.appendString ("> ()\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBComputedProperty_") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 33)).stringValue ()) ;
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
      enumerator_1030.gotoNextObject () ;
      index_1030_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.mModel = model\n") ;
  GGS_uint index_2181_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2181 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2181.hasCurrentObject ()) {
      const GalgasBool test_2 = extensionGetter_isEntityType (enumerator_2181.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2181.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model: model)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2181.gotoNextObject () ;
      index_2181_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n") ;
  GGS_uint index_2644_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2644 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2644.hasCurrentObject ()) {
      const GalgasBool test_3 = extensionGetter_isEntityType (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_4 = extensionGetter_isTransient (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.mModel\?.toMany_") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2644.gotoNextObject () ;
      index_2644_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mModel = nil\n  } */\n\n") ;
  GGS_uint index_3143_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_3143 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_3143.hasCurrentObject ()) {
      const GalgasBool test_5 = extensionGetter_isEntityType (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func bind_property_") ;
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
        const GalgasBool test_6 = extensionGetter_isTransient (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).boolEnum () ;
        switch (test_6) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = { [weak self] (inValue : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).stringValue ()) ;
          result.appendString (") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
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
      enumerator_3143.gotoNextObject () ;
      index_3143_.increment () ;
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
    UpEnumerator_propertyGenerationList enumerator_998 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_998.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_998.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 26)).stringValue ()) ;
      enumerator_998.gotoNextObject () ;
      index_998_.increment () ;
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
    UpEnumerator_propertyGenerationList enumerator_2048 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2048.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 46)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2048.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2048.gotoNextObject () ;
      index_2048_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n") ;
  GGS_uint index_2712_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2712 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2712.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 63)).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_2 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 68)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.selectedArray_property.toMany_") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2712.gotoNextObject () ;
      index_2712_.increment () ;
    }
  }
  result.appendString ("  } */\n\n") ;
  GGS_uint index_3416_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3416 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_3416.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3416.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 77)).stringValue ()) ;
      enumerator_3416.gotoNextObject () ;
      index_3416_.increment () ;
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
  UpEnumerator_selectionControllerForGeneration enumerator_11744 (constinArgument_inArrayControllerListForGeneration) ;
  while (enumerator_11744.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_11744.current_mBaseTypeName (HERE).objectCompare (enumerator_11744.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_11865 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11744.current_mOwnerName (HERE), enumerator_11744.current_mSelectionControllerName (HERE), enumerator_11744.current_mBaseTypeName (HERE), enumerator_11744.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 265))) ;
        GGS_string var_fileName_12090 = GGS_string ("selectionController-").add_operation (enumerator_11744.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (enumerator_11744.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)) ;
        {
        ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12090, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 272)) ;
        }
        {
        GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12090, var_s_11865, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 273)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_hasAtomicStoredProperties_12336 = GGS_bool (false) ;
      UpEnumerator_propertyGenerationList enumerator_12381 (enumerator_11744.current_mPropertyGenerationList (HERE)) ;
      bool bool_1 = var_hasAtomicStoredProperties_12336.operator_not (SOURCE_FILE ("selection-controller.ggs", 280)).isValidAndTrue () ;
      if (enumerator_12381.hasCurrentObject () && bool_1) {
        while (enumerator_12381.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_12336 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12381.current_mProperty (HERE).ptr ())) ;
          enumerator_12381.gotoNextObject () ;
          if (enumerator_12381.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_12336.operator_not (SOURCE_FILE ("selection-controller.ggs", 280)).isValidAndTrue () ;
          }
        }
      }
      GGS_string var_s_12550 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11744.current_mOwnerName (HERE), enumerator_11744.current_mSelectionControllerName (HERE), enumerator_11744.current_mBaseTypeName (HERE), enumerator_11744.current_mSelectionTypeName (HERE), enumerator_11744.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_12336 COMMA_SOURCE_FILE ("selection-controller.ggs", 283))) ;
      GGS_string var_fileName_12832 = GGS_string ("selectionController-").add_operation (enumerator_11744.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (enumerator_11744.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12832, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 292)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12832, var_s_12550, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 293)) ;
      }
    }
    enumerator_11744.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_686 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 15)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 15)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_686, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_984 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_984.hasCurrentObject ()) {
    switch (enumerator_984.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1068_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1068_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 23)).add_operation (extractedValue_1068_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 23)), extractedValue_1068_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1296_propertyName_0 ;
        GGS_lstring extractedValue_1310__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1296_propertyName_0, extractedValue_1310__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 27)).add_operation (extractedValue_1296_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 27)), extractedValue_1296_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1529_relationshipName_0 ;
        GGS_lstring extractedValue_1547__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1529_relationshipName_0, extractedValue_1547__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 31)).add_operation (extractedValue_1529_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 31)), extractedValue_1529_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1766_relationshipName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1766_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 35)).add_operation (extractedValue_1766_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 35)), extractedValue_1766_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2031_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2031_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 39)).add_operation (extractedValue_2031_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 39)), extractedValue_2031_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2203_propertyName_0 ;
        GGS_lstring extractedValue_2217__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2203_propertyName_0, extractedValue_2217__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 41)).add_operation (extractedValue_2203_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 41)), extractedValue_2203_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2373_propertyName_0 ;
        GGS_lstring extractedValue_2387__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2373_propertyName_0, extractedValue_2387__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 43)).add_operation (extractedValue_2373_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 43)), extractedValue_2373_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2544_propertyName_0 ;
        GGS_lstring extractedValue_2558__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2544_propertyName_0, extractedValue_2558__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 45)).add_operation (extractedValue_2544_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 45)), extractedValue_2544_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2713_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2713_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 47)).add_operation (extractedValue_2713_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 47)), extractedValue_2713_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2876_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2876_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)).add_operation (extractedValue_2876_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)), extractedValue_2876_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3045_propertyName_0 ;
        GGS_lstring extractedValue_3059__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3045_propertyName_0, extractedValue_3059__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)).add_operation (extractedValue_3045_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)), extractedValue_3045_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3216_controllerName_0 ;
        GGS_lstring extractedValue_3239_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3216_controllerName_0, extractedValue_3239_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 53)).add_operation (extractedValue_3216_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 53)), extractedValue_3216_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3425_controllerName_0 ;
        GGS_lstring extractedValue_3448_propertyName_1 ;
        GGS_lstring extractedValue_3469_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3425_controllerName_0, extractedValue_3448_propertyName_1, extractedValue_3469_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 55)).add_operation (extractedValue_3425_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 55)), extractedValue_3425_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3660_controllerName_0 ;
        GGS_lstring extractedValue_3683_propertyName_1 ;
        GGS_lstring extractedValue_3704_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3660_controllerName_0, extractedValue_3683_propertyName_1, extractedValue_3704_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 57)).add_operation (extractedValue_3660_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 57)), extractedValue_3660_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3893_controllerName_0 ;
        GGS_lstring extractedValue_3916_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3893_controllerName_0, extractedValue_3916_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 59)).add_operation (extractedValue_3893_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 59)), extractedValue_3893_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4191_superEntityName_0 ;
        GGS_lstring extractedValue_4217_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4191_superEntityName_0, extractedValue_4217_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4191_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 64)).add_operation (extractedValue_4217_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 64)), extractedValue_4217_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4396_superEntityName_0 ;
        GGS_lstring extractedValue_4422_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4436__2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4396_superEntityName_0, extractedValue_4422_propertyName_1, extractedValue_4436__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4396_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 66)).add_operation (extractedValue_4422_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 66)), extractedValue_4422_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 66)) ;
        }
      }
      break ;
    }
    enumerator_984.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 74)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 74)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6555 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6701 ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6712_3 ; // Joker input parameter
  GGS_actionMap joker_6712_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6712_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6701, joker_6712_3, joker_6712_2, joker_6712_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 130)) ;
  switch (var_classKind_6701.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 133)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6852_kind_0 ;
      var_classKind_6701.getAssociatedValuesFor_atomic (extractedValue_6852_kind_0) ;
      {
      const GGS_computedPropertyDeclarationAST temp_4 = this ;
      var_entry_6555.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6852_kind_0, GGS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.ggs", 137))  COMMA_SOURCE_FILE ("computed-property.ggs", 137)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 135)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7048__0 ;
      var_classKind_6701.getAssociatedValuesFor_document (extractedValue_7048__0) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 142)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7151__0 ;
      GGS_bool extractedValue_7151__1 ;
      GGS_bool extractedValue_7151__2 ;
      GGS_bool extractedValue_7151__3 ;
      var_classKind_6701.getAssociatedValuesFor_entity (extractedValue_7151__0, extractedValue_7151__1, extractedValue_7151__2, extractedValue_7151__3) ;
      const GGS_computedPropertyDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.ggs", 144)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6555, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 146)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & ioArgument_ioGeneration,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_7791 ;
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_7802_3 ; // Joker input parameter
  GGS_actionMap joker_7802_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7802_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7791, joker_7802_3, joker_7802_2, joker_7802_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 159)) ;
  GGS_typeKind var_typeKind_7839 ;
  switch (var_classKind_7791.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 164)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8001_kind_0 ;
      var_classKind_7791.getAssociatedValuesFor_atomic (extractedValue_8001_kind_0) ;
      var_typeKind_7839 = extractedValue_8001_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8046__0 ;
      var_classKind_7791.getAssociatedValuesFor_document (extractedValue_8046__0) ;
      const GGS_computedPropertyDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 168)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8161__0 ;
      GGS_bool extractedValue_8161__1 ;
      GGS_bool extractedValue_8161__2 ;
      GGS_bool extractedValue_8161__3 ;
      var_classKind_7791.getAssociatedValuesFor_entity (extractedValue_8161__0, extractedValue_8161__1, extractedValue_8161__2, extractedValue_8161__3) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 170)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8306 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_8306 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_computedPropertyDeclarationAST temp_9 = this ;
    GGS_classKind joker_8461 ; // Joker input parameter
    GGS_actionMap joker_8482_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8482_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8461, var_rootProperties_8306, joker_8482_2, joker_8482_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 177)) ;
  }
  GGS_classKind var_currentClassKind_8586 ;
  GGS_propertyMap var_properties_8609 ;
  const GGS_computedPropertyDeclarationAST temp_10 = this ;
  GGS_actionMap joker_8621_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8621_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8586, var_properties_8609, joker_8621_2, joker_8621_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 180)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GGS_transientDependencyListForGeneration var_dependencies_8701 = temp_11 ;
  const GGS_computedPropertyDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_8726 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_8726.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_8916 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_8951 ;
    GGS_string var_protocolTypeName_9015 ;
    GGS_string var_defaultValueAsString_9052 ;
    extensionMethod_analyzeObservableProperty (enumerator_8726.current_mObservableProperty (HERE), var_rootProperties_8306, ioArgument_ioSemanticContext, var_properties_8609, var_dependencyKind_8916, var_swiftTypeStringForTransientFunctionArgument_8951, var_protocolTypeName_9015, var_defaultValueAsString_9052, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 184)) ;
    switch (var_dependencyKind_8916.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9202__0 ;
        GGS_bool extractedValue_9202__1 ;
        var_dependencyKind_8916.getAssociatedValuesFor_arrayController (extractedValue_9202__0, extractedValue_9202__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 198)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 198)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9322__0 ;
        var_dependencyKind_8916.getAssociatedValuesFor_selectionController (extractedValue_9322__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
      }
      break ;
    }
    {
    var_dependencies_8701.setter_append (enumerator_8726.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 204)), var_swiftTypeStringForTransientFunctionArgument_8951, var_defaultValueAsString_9052, var_protocolTypeName_9015, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 202)) ;
    }
    enumerator_8726.gotoNextObject () ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_15 = this ;
  const GGS_computedPropertyDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7839, GGS_string ("computed"), var_dependencies_8701, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 210)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_17 = this ;
  const GGS_computedPropertyDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_computeRoutineGeneration::init_21__21__21__21_ (temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7839, var_dependencies_8701, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 219)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_19 = this ;
  GGS_classMap_2E_element var_entry_10045 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_19.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10125 ;
  switch (var_currentClassKind_8586.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10220__0 ;
      var_currentClassKind_8586.getAssociatedValuesFor_document (extractedValue_10220__0) ;
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10264__0 ;
      var_currentClassKind_8586.getAssociatedValuesFor_atomic (extractedValue_10264__0) ;
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10308__0 ;
      GGS_bool extractedValue_10311_graphic_1 ;
      GGS_bool extractedValue_10321__2 ;
      GGS_bool extractedValue_10321__3 ;
      var_currentClassKind_8586.getAssociatedValuesFor_entity (extractedValue_10308__0, extractedValue_10311_graphic_1, extractedValue_10321__2, extractedValue_10321__3) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = extractedValue_10311_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_computedPropertyDeclarationAST temp_21 = this ;
          const GGS_computedPropertyDeclarationAST temp_22 = this ;
          var_generate_10125 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 238)) ;
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        var_generate_10125 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_23 = this ;
  const GGS_computedPropertyDeclarationAST temp_24 = this ;
  var_entry_10045.mProperty_mPropertyGenerationList.setter_append (GGS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_23.readProperty_mComputedPropertyName ().readProperty_string (), temp_24.readProperty_mClassName ().readProperty_string (), var_typeKind_7839, var_dependencies_8701, var_generate_10125, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10045, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 251)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 275)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 276)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 277)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 278)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 290)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  const GGS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 295)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 296)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 297)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 298)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 299)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 300)) ;
  const GGS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 301)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 302)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 303)) ;
  const GGS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 304)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 304)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 305)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 321)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 326)) ;
  const GGS_computedPropertyGeneration temp_6 = this ;
  const GGS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
  const GGS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 335)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 335)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 340)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GGS_stringset constinArgument_inOverriddenTransients,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedPropertyGeneration temp_1 = this ;
    const GGS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 349)).operator_not (SOURCE_FILE ("computed-property.ggs", 349)) COMMA_SOURCE_FILE ("computed-property.ggs", 349)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          const GGS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
          const GGS_computedPropertyGeneration temp_5 = this ;
          const GGS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
          const GGS_computedPropertyGeneration temp_7 = this ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssignOperation(GGS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssignOperation(GGS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 358)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 360)) ;
        const GGS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 361)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 362)) ;
        const GGS_computedPropertyGeneration temp_11 = this ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 363)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16757 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 373)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16884 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      const GGS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 375)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16884.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          const GGS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 382)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        const GGS_computedPropertyGeneration temp_13 = this ;
        const GGS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 385)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GGS_computedPropertyGeneration temp_15 = this ;
      const GGS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GGS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 388)) ;
      const GGS_computedPropertyGeneration temp_17 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17890 (temp_17.readProperty_mDependencyList ()) ;
      while (enumerator_17890.hasCurrentObject ()) {
        GGS_string var_s_17930 = extensionGetter_generateAddObserverCall (enumerator_17890.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 390)) ;
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::notEqual, var_s_17930.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            const GGS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17930, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 392)) ;
          }
        }
        enumerator_17890.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computeRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 425)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_computeRoutineGeneration temp_2 = this ;
      const GGS_computeRoutineGeneration temp_3 = this ;
      const GGS_computeRoutineGeneration temp_4 = this ;
      GGS_string var_s_19333 = GGS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 426))) ;
      const GGS_computeRoutineGeneration temp_5 = this ;
      const GGS_computeRoutineGeneration temp_6 = this ;
      GGS_string var_fileName_19497 = GGS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_19497, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 432)) ;
      }
      GGS_string var_header_19627 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 433)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 433)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 433)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 434)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 435)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 435)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 435)) ;
      var_header_19627.plusAssignOperation(GGS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 436)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 437)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 437)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 437)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 437)) ;
      GGS_string var_generatedZone_33__19997 = GGS_string ("  }\n\n") ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 439)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 439)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 439)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 439)) ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 440)) ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 441)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 441)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 441)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 441)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19497, GGS_string ("//"), var_header_19627, GGS_string ("\n\n"), var_s_19333, GGS_string ("\n"), var_generatedZone_33__19997, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 442)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager (
  "standard-properties",
  0,
  gWrapperAllFiles_computedPropertyManager_1,
  0,
  gWrapperAllDirectories_computedPropertyManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager (
  "xcode-project",
  0,
  gWrapperAllFiles_computedPropertyManager_2,
  0,
  gWrapperAllDirectories_computedPropertyManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                        const GGS_string & in_OWNER_5F_NAME,
                                                                                        const GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  GGS_lstring var_node_666 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 15)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 15)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_666, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)) ;
  }
  {
  const GGS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GGS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  const GGS_transientDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_951 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_951.hasCurrentObject ()) {
    switch (enumerator_951.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1039_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1039_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_transientDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 23)).add_operation (extractedValue_1039_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 23)), extractedValue_1039_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1275_propertyName_0 ;
        GGS_lstring extractedValue_1289__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1275_propertyName_0, extractedValue_1289__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_transientDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 27)).add_operation (extractedValue_1275_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 27)), extractedValue_1275_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1516_relationshipName_0 ;
        GGS_lstring extractedValue_1534__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1516_relationshipName_0, extractedValue_1534__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_transientDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 31)).add_operation (extractedValue_1516_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 31)), extractedValue_1516_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1761_relationshipName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1761_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_transientDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 35)).add_operation (extractedValue_1761_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 35)), extractedValue_1761_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2036_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2036_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 39)).add_operation (extractedValue_2036_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 39)), extractedValue_2036_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2212_propertyName_0 ;
        GGS_lstring extractedValue_2226__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2212_propertyName_0, extractedValue_2226__1) ;
        {
        const GGS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 41)).add_operation (extractedValue_2212_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 41)), extractedValue_2212_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2386_propertyName_0 ;
        GGS_lstring extractedValue_2400__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2386_propertyName_0, extractedValue_2400__1) ;
        {
        const GGS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 43)).add_operation (extractedValue_2386_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 43)), extractedValue_2386_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2561_propertyName_0 ;
        GGS_lstring extractedValue_2575__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2561_propertyName_0, extractedValue_2575__1) ;
        {
        const GGS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 45)).add_operation (extractedValue_2561_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 45)), extractedValue_2561_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2734_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2734_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 47)).add_operation (extractedValue_2734_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 47)), extractedValue_2734_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2901_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2901_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)).add_operation (extractedValue_2901_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)), extractedValue_2901_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3074_propertyName_0 ;
        GGS_lstring extractedValue_3088__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3074_propertyName_0, extractedValue_3088__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)).add_operation (extractedValue_3074_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)), extractedValue_3074_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3249_controllerName_0 ;
        GGS_lstring extractedValue_3272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3249_controllerName_0, extractedValue_3272_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 53)).add_operation (extractedValue_3249_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 53)), extractedValue_3249_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3462_controllerName_0 ;
        GGS_lstring extractedValue_3485_propertyName_1 ;
        GGS_lstring extractedValue_3506_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3462_controllerName_0, extractedValue_3485_propertyName_1, extractedValue_3506_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 55)).add_operation (extractedValue_3462_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 55)), extractedValue_3462_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3701_controllerName_0 ;
        GGS_lstring extractedValue_3724_propertyName_1 ;
        GGS_lstring extractedValue_3745_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3701_controllerName_0, extractedValue_3724_propertyName_1, extractedValue_3745_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 57)).add_operation (extractedValue_3701_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 57)), extractedValue_3701_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3938_controllerName_0 ;
        GGS_lstring extractedValue_3961_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3938_controllerName_0, extractedValue_3961_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 59)).add_operation (extractedValue_3938_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 59)), extractedValue_3938_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4246_superEntityName_0 ;
        GGS_lstring extractedValue_4272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4246_superEntityName_0, extractedValue_4272_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4246_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 64)).add_operation (extractedValue_4272_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 64)), extractedValue_4272_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4455_superEntityName_0 ;
        GGS_lstring extractedValue_4481_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4495__2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4455_superEntityName_0, extractedValue_4481_propertyName_1, extractedValue_4495__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4455_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 66)).add_operation (extractedValue_4481_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 66)), extractedValue_4481_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 66)) ;
        }
      }
      break ;
    }
    enumerator_951.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 74)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 74)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_7287 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_7426 ;
  const GGS_transientDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_7437_3 ; // Joker input parameter
  GGS_actionMap joker_7437_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7437_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7426, joker_7437_3, joker_7437_2, joker_7437_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 155)) ;
  switch (var_classKind_7426.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.ggs", 158)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_7570_kind_0 ;
      var_classKind_7426.getAssociatedValuesFor_atomic (extractedValue_7570_kind_0) ;
      {
      const GGS_transientDeclarationAST temp_4 = this ;
      const GGS_transientDeclarationAST temp_5 = this ;
      const GGS_transientDeclarationAST temp_6 = this ;
      var_entry_7287.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GGS_propertyKind::class_func_property (extractedValue_7570_kind_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 162)).objectCompare (GGS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 162))  COMMA_SOURCE_FILE ("transient-property.ggs", 162)), GGS_actionMap::init (inCompiler COMMA_HERE), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 160)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7820__0 ;
      var_classKind_7426.getAssociatedValuesFor_document (extractedValue_7820__0) ;
      const GGS_transientDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.ggs", 167)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7916__0 ;
      GGS_bool extractedValue_7916__1 ;
      GGS_bool extractedValue_7916__2 ;
      GGS_bool extractedValue_7916__3 ;
      var_classKind_7426.getAssociatedValuesFor_entity (extractedValue_7916__0, extractedValue_7916__1, extractedValue_7916__2, extractedValue_7916__3) ;
      const GGS_transientDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.ggs", 169)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_7287, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 171)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & ioArgument_ioGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_8535 ;
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_8546_3 ; // Joker input parameter
  GGS_actionMap joker_8546_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8546_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8535, joker_8546_3, joker_8546_2, joker_8546_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 183)) ;
  GGS_typeKind var_typeKind_8583 ;
  switch (var_classKind_8535.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 188)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8738_kind_0 ;
      var_classKind_8535.getAssociatedValuesFor_atomic (extractedValue_8738_kind_0) ;
      var_typeKind_8583 = extractedValue_8738_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8783__0 ;
      var_classKind_8535.getAssociatedValuesFor_document (extractedValue_8783__0) ;
      const GGS_transientDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8891__0 ;
      GGS_bool extractedValue_8891__1 ;
      GGS_bool extractedValue_8891__2 ;
      GGS_bool extractedValue_8891__3 ;
      var_classKind_8535.getAssociatedValuesFor_entity (extractedValue_8891__0, extractedValue_8891__1, extractedValue_8891__2, extractedValue_8891__3) ;
      const GGS_transientDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 194)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_9029 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_transientDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_9029 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_transientDeclarationAST temp_9 = this ;
    GGS_classKind joker_9184 ; // Joker input parameter
    GGS_actionMap joker_9205_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9205_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9184, var_rootProperties_9029, joker_9205_2, joker_9205_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 201)) ;
  }
  GGS_classKind var_currentClassKind_9309 ;
  GGS_propertyMap var_properties_9332 ;
  const GGS_transientDeclarationAST temp_10 = this ;
  GGS_actionMap joker_9344_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_9344_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9309, var_properties_9332, joker_9344_2, joker_9344_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 204)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
  GGS_transientDependencyListForGeneration var_dependencies_9424 = temp_11 ;
  const GGS_transientDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_9449 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_9449.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_9639 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_9674 ;
    GGS_string var_protocolTypeName_9738 ;
    GGS_string var_defaultValueAsString_9775 ;
    extensionMethod_analyzeObservableProperty (enumerator_9449.current_mObservableProperty (HERE), var_rootProperties_9029, ioArgument_ioSemanticContext, var_properties_9332, var_dependencyKind_9639, var_swiftTypeStringForTransientFunctionArgument_9674, var_protocolTypeName_9738, var_defaultValueAsString_9775, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 208)) ;
    switch (var_dependencyKind_9639.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9993__0 ;
        GGS_bool extractedValue_9993__1 ;
        var_dependencyKind_9639.getAssociatedValuesFor_arrayController (extractedValue_9993__0, extractedValue_9993__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 223)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 223)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_10113__0 ;
        var_dependencyKind_9639.getAssociatedValuesFor_selectionController (extractedValue_10113__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 225)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.ggs", 225)) ;
      }
      break ;
    }
    {
    var_dependencies_9424.setter_append (enumerator_9449.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 229)), var_swiftTypeStringForTransientFunctionArgument_9674, var_defaultValueAsString_9775, var_protocolTypeName_9738, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 227)) ;
    }
    enumerator_9449.gotoNextObject () ;
  }
  {
  const GGS_transientDeclarationAST temp_15 = this ;
  const GGS_transientDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mTransientName ().readProperty_string (), var_typeKind_8583, GGS_string ("transient"), var_dependencies_9424, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 235)) ;
  }
  const GGS_transientDeclarationAST temp_17 = this ;
  GGS_classMap_2E_element var_entry_10626 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_17.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10706 ;
  switch (var_currentClassKind_9309.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10801__0 ;
      var_currentClassKind_9309.getAssociatedValuesFor_document (extractedValue_10801__0) ;
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10845__0 ;
      var_currentClassKind_9309.getAssociatedValuesFor_atomic (extractedValue_10845__0) ;
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10889__0 ;
      GGS_bool extractedValue_10892_graphic_1 ;
      GGS_bool extractedValue_10902__2 ;
      GGS_bool extractedValue_10902__3 ;
      var_currentClassKind_9309.getAssociatedValuesFor_entity (extractedValue_10889__0, extractedValue_10892_graphic_1, extractedValue_10902__2, extractedValue_10902__3) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = extractedValue_10892_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_transientDeclarationAST temp_19 = this ;
          const GGS_transientDeclarationAST temp_20 = this ;
          var_generate_10706 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 254)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        var_generate_10706 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_transientDeclarationAST temp_21 = this ;
  const GGS_transientDeclarationAST temp_22 = this ;
  var_entry_10626.mProperty_mPropertyGenerationList.setter_append (GGS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_21.readProperty_mTransientName ().readProperty_string (), temp_22.readProperty_mClassName ().readProperty_string (), var_typeKind_8583, var_dependencies_9424, var_generate_10706, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 259)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10626, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 292)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 293)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 294)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 307)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 308)) ;
  const GGS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 309)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 309)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 310)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 316)) ;
  const GGS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 319)) ;
  const GGS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 320)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 321)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 327)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 341)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 342)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                             const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GGS_stringset constinArgument_inOverriddenTransients,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientPropertyGeneration temp_1 = this ;
    const GGS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 354)).operator_not (SOURCE_FILE ("transient-property.ggs", 354)) COMMA_SOURCE_FILE ("transient-property.ggs", 354)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
          const GGS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
          const GGS_transientPropertyGeneration temp_5 = this ;
          const GGS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 359)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        const GGS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssignOperation(GGS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        const GGS_transientPropertyGeneration temp_8 = this ;
        const GGS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
        const GGS_transientPropertyGeneration temp_10 = this ;
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 366)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 367)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 368)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16590 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_transientPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_transientPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16717 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
      const GGS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 380)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 380)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16717.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 382)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
          const GGS_transientPropertyGeneration temp_8 = this ;
          const GGS_transientPropertyGeneration temp_9 = this ;
          const GGS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 385)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 387)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        const GGS_transientPropertyGeneration temp_13 = this ;
        const GGS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 390)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 392)) ;
      const GGS_transientPropertyGeneration temp_15 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17560 (temp_15.readProperty_mDependencyList ()) ;
      while (enumerator_17560.hasCurrentObject ()) {
        GGS_string var_s_17600 = extensionGetter_generateAddObserverCall (enumerator_17560.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 394)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, var_s_17600.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17600, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 396)) ;
          }
        }
        enumerator_17560.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                    GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_31_ (const GGS_string constinArgument_inOutputDirectory,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    GGS_stringset & ioArgument_ioUsedProtocolSet,
                                                                    GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 614)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_transientRoutineGeneration temp_2 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_28883 (temp_2.readProperty_mDependencyList ()) ;
      while (enumerator_28883.hasCurrentObject ()) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_28883.current (HERE).readProperty_mProtocolName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            ioArgument_ioUsedProtocolSet.plusPlusAssignOperation (enumerator_28883.current (HERE).readProperty_mProtocolName ()  COMMA_SOURCE_FILE ("transient-property.ggs", 617)) ;
          }
        }
        enumerator_28883.gotoNextObject () ;
      }
      const GGS_transientRoutineGeneration temp_4 = this ;
      const GGS_transientRoutineGeneration temp_5 = this ;
      const GGS_transientRoutineGeneration temp_6 = this ;
      const GGS_transientRoutineGeneration temp_7 = this ;
      const GGS_transientRoutineGeneration temp_8 = this ;
      GGS_string var_s_29065 = GGS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_4.readProperty_mOwnerName (), temp_5.readProperty_mTransientName (), temp_6.readProperty_mDependencyList (), temp_7.readProperty_mTransientType (), temp_8.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 621))) ;
      GGS_string var_header_29306 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 628)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 628)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 628)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 630)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 631)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 632)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 632)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 632)) ;
      const GGS_transientRoutineGeneration temp_9 = this ;
      const GGS_transientRoutineGeneration temp_10 = this ;
      const GGS_transientRoutineGeneration temp_11 = this ;
      GGS_string var_fileName_29657 = temp_9.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (temp_10.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (temp_11.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_29657, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 634)) ;
      }
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29657, GGS_string ("//"), var_header_29306, GGS_string ("\n\n"), var_s_29065, GGS_string ("\n"), GGS_string ("}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 643)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 643)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 635)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_transientManager (
  "standard-properties",
  0,
  gWrapperAllFiles_transientManager_1,
  0,
  gWrapperAllDirectories_transientManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_transientManager (
  "xcode-project",
  0,
  gWrapperAllFiles_transientManager_2,
  0,
  gWrapperAllDirectories_transientManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                  const GGS_string & in_OWNER_5F_NAME,
                                                                                  const GGS_string & in_TRANSIENT_5F_NAME,
                                                                                  const GGS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                  const GGS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                  const GGS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func ") ;
  result.appendString (in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TRANSIENT_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_270_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    UpEnumerator_transientDependencyListForGeneration enumerator_270 (in_DEPENDENCY_5F_LIST) ;
    while (enumerator_270.hasCurrentObject ()) {
      result.appendString ("\n       _ ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentName (HERE).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentTypeString (HERE).stringValue ()) ;
      enumerator_270.gotoNextObject () ;
      if (enumerator_270.hasCurrentObject ()) {
        result.appendString (",") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_270_.increment () ;
    }
  }
  result.appendString ("\n) -> ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_lstring var_node_1014 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1014, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GGS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
    {
      GGS_lstring extractedValue_1332_masterPropertyName_0 ;
      temp_6.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_1332_masterPropertyName_0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GGS_lstring var_dependanceNode_1362 = GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1332_masterPropertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1332_masterPropertyName_0.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1014, var_dependanceNode_1362 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
      }
    }
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5325 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 141)) ;
  }
  GGS_classKind var_classKind_5631 ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_5642_3 ; // Joker input parameter
  GGS_actionMap joker_5642_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5642_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5631, joker_5642_3, joker_5642_2, joker_5642_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
  switch (var_classKind_5631.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toManyRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 145)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_5773__0 ;
      var_classKind_5631.getAssociatedValuesFor_atomic (extractedValue_5773__0) ;
      const GGS_toManyRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 147)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_5868__0 ;
      var_classKind_5631.getAssociatedValuesFor_document (extractedValue_5868__0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 149)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_5961__0 ;
      GGS_bool extractedValue_5964_graphic_1 ;
      GGS_bool extractedValue_5973__2 ;
      GGS_bool extractedValue_5976_handleOpposite_3 ;
      var_classKind_5631.getAssociatedValuesFor_entity (extractedValue_5961__0, extractedValue_5964_graphic_1, extractedValue_5973__2, extractedValue_5976_handleOpposite_3) ;
      const GGS_toManyRelationshipAST temp_9 = this ;
      const GGS_toManyRelationshipAST temp_10 = this ;
      GGS_propertyKind var_kind_6004 = GGS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.ggs", 153)), extractedValue_5964_graphic_1, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 151)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = extractedValue_5976_handleOpposite_3.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 158)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_toManyRelationshipAST temp_12 = this ;
          test_11 = temp_12.readProperty_mOption ().getter_isHasOpposite (SOURCE_FILE ("to-many-relationship.ggs", 158)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_toManyRelationshipAST temp_13 = this ;
            const GGS_toManyRelationshipAST temp_14 = this ;
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)) ;
          }
        }
      }
      {
      const GGS_toManyRelationshipAST temp_16 = this ;
      var_entry_5325.mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6004, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 161)) ;
      }
      const GGS_toManyRelationshipAST temp_17 = this ;
      GGS_bool var_inPrefs_6591 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 163)))) ;
      GGS_toManyRelationshipOptionGeneration var_optionForGeneration_6708 ;
      const GGS_toManyRelationshipAST temp_18 = this ;
      switch (temp_18.readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
        {
          GGS_lstring extractedValue_6780_masterPropertyName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_6780_masterPropertyName_0) ;
          GGS_propertyKind var_masterPropertyKind_6865 ;
          GGS_actionMap joker_6885_2 ; // Joker input parameter
          GGS_bool joker_6885_1 ; // Joker input parameter
          var_entry_5325.readProperty_mPropertyMap ().method_searchKey (extractedValue_6780_masterPropertyName_0, var_masterPropertyKind_6865, joker_6885_2, joker_6885_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 168)) ;
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6780_masterPropertyName_0.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6865, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 171))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 169)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
        {
          GGS_lstring extractedValue_7102_oppositeName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_7102_oppositeName_0) ;
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_7102_oppositeName_0.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 174)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
        {
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 176)) ;
        }
        break ;
      }
      {
      const GGS_toManyRelationshipAST temp_19 = this ;
      const GGS_toManyRelationshipAST temp_20 = this ;
      const GGS_toManyRelationshipAST temp_21 = this ;
      const GGS_toManyRelationshipAST temp_22 = this ;
      const GGS_toManyRelationshipAST temp_23 = this ;
      var_entry_5325.mProperty_mPropertyGenerationList.setter_append (GGS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_19.readProperty_mToManyRelationshipName ().readProperty_string (), temp_20.readProperty_mGenerateDirectAccess (), temp_21.readProperty_mGenerateDirectRead (), var_kind_6004, var_optionForGeneration_6708, var_inPrefs_6591, temp_22.readProperty_mCustomStore (), temp_23.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 179)) ;
      }
      {
      const GGS_toManyRelationshipAST temp_24 = this ;
      ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_24.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 190)) ;
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = var_inPrefs_6591.boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          {
          const GGS_toManyRelationshipAST temp_26 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.setter_insert (temp_26.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 192)) ;
          }
        }
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5325, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 230)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)) ;
      GGS_string var_masterPropertyTypeName_9601 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9562_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9562_1, var_masterPropertyTypeName_9601, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (var_masterPropertyTypeName_9601, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 240)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 240)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)) ;
        const GGS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(GGS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)) ;
        const GGS_toManyPropertyGeneration temp_15 = this ;
        const GGS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (GGS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)) ;
        const GGS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssignOperation(GGS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
      const GGS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)) ;
      const GGS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)).add_operation (GGS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssignOperation(GGS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)) ;
        }
      }
      const GGS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssignOperation(GGS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)) ;
      const GGS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)).add_operation (GGS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)) ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_toManyPropertyGeneration temp_27 = this ;
          const GGS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssignOperation(GGS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)) ;
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        const GGS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssignOperation(GGS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)) ;
      }
      result_result.plusAssignOperation(GGS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)) ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_toManyPropertyGeneration temp_31 = this ;
        GGS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (GalgasBool::boolTrue != test_32.boolEnum ()) {
          const GGS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (GalgasBool::boolTrue == test_30) {
          result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)) ;
          const GGS_toManyPropertyGeneration temp_34 = this ;
          const GGS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
          const GGS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)) ;
          GalgasBool test_37 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_37) {
            const GGS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 270)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 270)).boolEnum () ;
            if (GalgasBool::boolTrue == test_37) {
              const GGS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)) ;
              }
            }
          }
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 273)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyPropertyGeneration temp_0 = this ;
  const GGS_toManyPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_12791 = temp_0 ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_12860 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (var_undoManager_12860, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_13183__0 ;
      GGS_string extractedValue_13183__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_13183__0, extractedValue_13183__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13232_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13232_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (var_undoManager_12860, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13232_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13232_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)) ;
    }
    break ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicClassDeclarationAST nodeKey'
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

void routine_enterAtomicClassesIn_26_declarationList (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.ggs", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.ggs", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.ggs", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.ggs", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.ggs", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 32)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.ggs", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 33)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.ggs", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 34)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.ggs", 34)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 34)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 35)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.ggs", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 36)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.ggs", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 37)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.ggs", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 53)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.ggs", 50)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 48)) ;
  }
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inMainXibDescriptorList.getter_count (SOURCE_FILE ("main-xib.ggs", 134)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBundleIdentifier.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 135)) ;
      GGS_stringlist var_outlet_5F_identifier_5F_list_5083 = temp_2 ;
      UpEnumerator_mainXibDescriptorList enumerator_5120 (constinArgument_inMainXibDescriptorList) ;
      while (enumerator_5120.hasCurrentObject ()) {
        UpEnumerator_mainXibLineDescriptorList enumerator_5168 (enumerator_5120.current_mLine (HERE)) ;
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
    UpEnumerator_stringlist enumerator_1788 (in_OUTLET_5F_IDENTIFIER_5F_LIST) ;
    while (enumerator_1788.hasCurrentObject ()) {
      result.appendString ("  global ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\n  ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString (" = window.findFirst (AXIdentifier='") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("')\n") ;
      enumerator_1788.gotoNextObject () ;
      index_1788_.increment () ;
    }
  }
  result.appendString ("\n//-----------------------------------------------------------------------------*\n//   CHECK TEXT FIELD VALUE                                                     *\n//-----------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n//-----------------------------------------------------------------------------*\n//   SET TEXT FIELD                                                             *\n//-----------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   MAIN                                                                       *\n//-----------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n") ;
  return GGS_string (result) ;
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
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
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
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_mIsRoot ().operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 36)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
      test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
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
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5245 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_5409 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 147)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 147)) ;
  }
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_rootProperties_5636 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      GGS_classKind joker_5627 ; // Joker input parameter
      GGS_actionMap joker_5652_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5652_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mRootEntityName (), joker_5627, var_rootProperties_5636, joker_5652_2, joker_5652_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 150)) ;
      GGS_propertyKind var_classKind_5720 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
      GGS_actionMap joker_5731_2 ; // Joker input parameter
      GGS_bool joker_5731_1 ; // Joker input parameter
      var_rootProperties_5636.method_searchKey (temp_4.readProperty_mToManyPropertyName (), var_classKind_5720, joker_5731_2, joker_5731_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 151)) ;
      switch (var_classKind_5720.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5781__0 ;
          GGS_propertyAccessibility extractedValue_5781__1 ;
          var_classKind_5720.getAssociatedValuesFor_property (extractedValue_5781__0, extractedValue_5781__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 154)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5883_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5893__1 ;
          GGS_bool extractedValue_5896_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5905__3 ;
          var_classKind_5720.getAssociatedValuesFor_toMany (extractedValue_5883_typeName_0, extractedValue_5893__1, extractedValue_5896_graphic_2, extractedValue_5905__3) ;
          GGS_propertyKind var_kind_5922 = GGS_propertyKind::class_func_arrayController (extractedValue_5883_typeName_0, extractedValue_5896_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 156)) ;
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
          var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_7.readProperty_mControllerName (), var_kind_5922, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 160)) ;
          }
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
          var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_8.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_9.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 165)), temp_10.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 162)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6409__0 ;
          GGS_propertyAccessibility extractedValue_6409__1 ;
          GGS_bool extractedValue_6409__2 ;
          GGS_toOneOppositeRelationship extractedValue_6409__3 ;
          GGS_bool extractedValue_6409__4 ;
          var_classKind_5720.getAssociatedValuesFor_toOne (extractedValue_6409__0, extractedValue_6409__1, extractedValue_6409__2, extractedValue_6409__3, extractedValue_6409__4) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 170)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6521__0 ;
          GGS_bool extractedValue_6521__1 ;
          var_classKind_5720.getAssociatedValuesFor_arrayController (extractedValue_6521__0, extractedValue_6521__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 172)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6636__0 ;
          var_classKind_5720.getAssociatedValuesFor_selectionController (extractedValue_6636__0) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 174)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_propertyKind var_classKind_6805 ;
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
    GGS_actionMap joker_6816_2 ; // Joker input parameter
    GGS_bool joker_6816_1 ; // Joker input parameter
    var_entry_5245.readProperty_mPropertyMap ().method_searchKey (temp_17.readProperty_mToManyPropertyName (), var_classKind_6805, joker_6816_2, joker_6816_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 177)) ;
    switch (var_classKind_6805.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_6866__0 ;
        GGS_propertyAccessibility extractedValue_6866__1 ;
        var_classKind_6805.getAssociatedValuesFor_property (extractedValue_6866__0, extractedValue_6866__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 180)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_6968_typeName_0 ;
        GGS_propertyAccessibility extractedValue_6978__1 ;
        GGS_bool extractedValue_6981_graphic_2 ;
        GGS_toManyRelationshipOptionAST extractedValue_6990__3 ;
        var_classKind_6805.getAssociatedValuesFor_toMany (extractedValue_6968_typeName_0, extractedValue_6978__1, extractedValue_6981_graphic_2, extractedValue_6990__3) ;
        GGS_propertyKind var_kind_7007 = GGS_propertyKind::class_func_arrayController (extractedValue_6968_typeName_0, extractedValue_6981_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 182)) ;
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_20 = this ;
        var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_20.readProperty_mControllerName (), var_kind_7007, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 186)) ;
        }
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
        var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_21.readProperty_mControllerName ().readProperty_string (), temp_22.readProperty_mToManyPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 188)) ;
        }
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_7461__0 ;
        GGS_propertyAccessibility extractedValue_7461__1 ;
        GGS_bool extractedValue_7461__2 ;
        GGS_toOneOppositeRelationship extractedValue_7461__3 ;
        GGS_bool extractedValue_7461__4 ;
        var_classKind_6805.getAssociatedValuesFor_toOne (extractedValue_7461__0, extractedValue_7461__1, extractedValue_7461__2, extractedValue_7461__3, extractedValue_7461__4) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 195)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_7573__0 ;
        GGS_bool extractedValue_7573__1 ;
        var_classKind_6805.getAssociatedValuesFor_arrayController (extractedValue_7573__0, extractedValue_7573__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 197)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_7688__0 ;
        var_classKind_6805.getAssociatedValuesFor_selectionController (extractedValue_7688__0) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray29  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 199)) ;
      }
      break ;
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5245, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 202)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & ioArgument_ioGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_8344 ;
  GGS_classKind joker_8331 ; // Joker input parameter
  GGS_actionMap joker_8372_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8372_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)), inCompiler COMMA_HERE), joker_8331, var_preferencesPropertyMap_8344, joker_8372_2, joker_8372_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 214)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  GGS_stringset var_attributes_8482 = temp_0 ;
  GGS_typeKindList temp_1 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
  temp_1.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (GGS_typeKind::class_func_boolType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
  GGS_typeKindList var_allowedTypes_8564 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 223)) ;
  GGS_stringset var_definedAttributes_8625 = temp_2 ;
  GGS__32_stringlist temp_3 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 224)) ;
  GGS__32_stringlist var_attributeListForGeneration_8667 = temp_3 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  UpEnumerator_autoLayoutTableViewControllerAttributListAST enumerator_8712 (temp_4.readProperty_mTableViewControllerAttributListAST ()) ;
  while (enumerator_8712.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_attributes_8482.getter_hasKey (enumerator_8712.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_8712.current_mAttributeName (HERE).readProperty_location (), GGS_string ("unknown attribute"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 227)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_definedAttributes_8625.getter_hasKey (enumerator_8712.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_8712.current_mAttributeName (HERE).readProperty_location (), GGS_string ("attribute multiply defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 229)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        {
        var_definedAttributes_8625.setter_insert (enumerator_8712.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)) ;
        }
      }
    }
    GGS_string var_valueAsString_9097 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8712.current_mAttributeValue (HERE).ptr (), var_allowedTypes_8564, var_preferencesPropertyMap_8344, var_valueAsString_9097, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 233)) ;
    {
    var_attributeListForGeneration_8667.setter_append (enumerator_8712.current_mAttributeName (HERE).readProperty_string (), var_valueAsString_9097, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 234)) ;
    }
    enumerator_8712.gotoNextObject () ;
  }
  UpEnumerator_stringset enumerator_9198 (var_attributes_8482) ;
  while (enumerator_9198.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_definedAttributes_8625.getter_hasKey (enumerator_9198.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 237)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mControllerName ().readProperty_location (), GGS_string ("attribute '").add_operation (enumerator_9198.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)).add_operation (GGS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)) ;
      }
    }
    enumerator_9198.gotoNextObject () ;
  }
  GGS_propertyMap var_boundModelPropertyMap_9369 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
      GGS_classKind joker_9493 ; // Joker input parameter
      GGS_actionMap joker_9535_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_9535_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_14.readProperty_mRootEntityName (), joker_9493, var_boundModelPropertyMap_9369, joker_9535_2, joker_9535_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 244)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
    GGS_classKind joker_9627 ; // Joker input parameter
    GGS_actionMap joker_9669_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9669_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_15.readProperty_mClassName (), joker_9627, var_boundModelPropertyMap_9369, joker_9669_2, joker_9669_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 251)) ;
  }
  GGS_propertyKind var_boundModelClassKind_9778 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
  GGS_actionMap joker_9804_2 ; // Joker input parameter
  GGS_bool joker_9804_1 ; // Joker input parameter
  var_boundModelPropertyMap_9369.method_searchKey (temp_16.readProperty_mToManyPropertyName (), var_boundModelClassKind_9778, joker_9804_2, joker_9804_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 258)) ;
  GGS_propertyMap var_propertyMap_9918 ;
  GGS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_9976 ;
  GGS_bool var_graphic_10013 ;
  GGS_string var_elementTypeName_10035 ;
  switch (var_boundModelClassKind_9778.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_10098__0 ;
      GGS_propertyAccessibility extractedValue_10098__1 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_property (extractedValue_10098__0, extractedValue_10098__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 270)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_10276_typeName_0 ;
      GGS_propertyAccessibility extractedValue_10286_accessibility_1 ;
      GGS_bool extractedValue_10301_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_10312__3 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_toMany (extractedValue_10276_typeName_0, extractedValue_10286_accessibility_1, extractedValue_10301_isGraphic_2, extractedValue_10312__3) ;
      var_elementTypeName_10035 = extractedValue_10276_typeName_0.readProperty_string () ;
      var_graphic_10013 = extractedValue_10301_isGraphic_2 ;
      GGS_autoLayoutTableViewControllerModelKind temp_19 ;
      const GalgasBool test_20 = extractedValue_10286_accessibility_1.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 276)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 277)) ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 278)) ;
      }
      var_arrayControllerModelKind_9976 = temp_19 ;
      GGS_classKind joker_10544 ; // Joker input parameter
      GGS_actionMap joker_10562 ; // Joker input parameter
      GGS_propertyGenerationList joker_10566 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10276_typeName_0, joker_10544, var_propertyMap_9918, joker_10562, joker_10566, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 280)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_10585__0 ;
      GGS_propertyAccessibility extractedValue_10585__1 ;
      GGS_bool extractedValue_10585__2 ;
      GGS_toOneOppositeRelationship extractedValue_10585__3 ;
      GGS_bool extractedValue_10585__4 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_toOne (extractedValue_10585__0, extractedValue_10585__1, extractedValue_10585__2, extractedValue_10585__3, extractedValue_10585__4) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 282)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_10773__0 ;
      GGS_bool extractedValue_10773__1 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_arrayController (extractedValue_10773__0, extractedValue_10773__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 286)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_10964__0 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_selectionController (extractedValue_10964__0) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
      GenericArray <FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 290)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration temp_27 = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 294)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_11198 = temp_27 ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration temp_28 = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 295)) ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_11313 = temp_28 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
  UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST enumerator_11415 (temp_29.readProperty_mTableViewControllerBoundColumnListAST ()) ;
  while (enumerator_11415.hasCurrentObject ()) {
    GGS_autoLayoutClassParameterList temp_30 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 298)) ;
    GGS_autoLayoutClassParameterList var_formalArgumentList_11543 = temp_30 ;
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)) ;
    }
    GGS__32_stringlist temp_31 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)) ;
    GGS__32_stringlist var_actualParameterList_11993 = temp_31 ;
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::notEqual, var_formalArgumentList_11543.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 305)).objectCompare (enumerator_11415.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 305)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        GenericArray <FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_11415.current_mPropertyName (HERE).readProperty_location (), enumerator_11415.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (GGS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (var_formalArgumentList_11543.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (GGS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)), fixItArray33  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)) ;
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      UpEnumerator_autoLayoutClassParameterList enumerator_12238 (var_formalArgumentList_11543) ;
      UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_12298 (enumerator_11415.current_mColumnParameterListAST (HERE)) ;
      while (enumerator_12238.hasCurrentObject () && enumerator_12298.hasCurrentObject ()) {
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_12238.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_12298.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("required argument name: ").add_operation (enumerator_12238.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)), fixItArray35  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_12492 = enumerator_12238.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
          if (!enumerator_12238.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
            test_36 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_36) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_12537 = enumerator_12298.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
            if (!enumerator_12298.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
              test_36 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_36) {
              GGS_classKind var_typeKind_12657 ;
              GGS_propertyMap joker_12667_3 ; // Joker input parameter
              GGS_actionMap joker_12667_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_12667_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_formalTypeEnum_12492.readProperty_name (), var_typeKind_12657, joker_12667_3, joker_12667_2, joker_12667_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 313)) ;
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_12689 = var_typeKind_12657.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).unwrappedValue () ;
                if (!var_typeKind_12657.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).isValuated ()) {
                  test_37 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_37) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_12730 = var_atomicTypeKind_12689.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).unwrappedValue () ;
                  if (!var_atomicTypeKind_12689.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).isValuated ()) {
                    test_37 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_37) {
                    GGS_uint joker_12855 ; // Joker input parameter
                    var_atomicEnumType_12730.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_12537.readProperty_name (), joker_12855, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_12492.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray38  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 317)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_36) {
          GalgasBool test_39 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_39) {
            test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_12298.current_mParameterType (HERE).objectCompare (enumerator_12238.current_mParameterType (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_39) {
              GenericArray <FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_12238.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).add_operation (extensionGetter_string (enumerator_12298.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), fixItArray40  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)) ;
            }
          }
        }
        GalgasBool test_41 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_41) {
          const GGS_astAutoLayoutViewInstructionParameterValue_2E_string var_actualString_13146 = enumerator_12298.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).unwrappedValue () ;
          if (!enumerator_12298.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).isValuated ()) {
            test_41 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_41) {
            {
            var_actualParameterList_11993.setter_append (enumerator_12238.current_mParameterName (HERE).readProperty_string (), var_actualString_13146.readProperty_value (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 323)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_41) {
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("parameter value is not string convertible"), fixItArray42  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 325)) ;
        }
        enumerator_12238.gotoNextObject () ;
        enumerator_12298.gotoNextObject () ;
      }
    }
    GalgasBool test_43 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_43) {
      test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_11415.current_mSortPropertyName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_43) {
        GGS_propertyKind var_sortPropertyKind_13512 ;
        GGS_actionMap joker_13538_2 ; // Joker input parameter
        GGS_bool joker_13538_1 ; // Joker input parameter
        var_propertyMap_9918.method_searchKey (enumerator_11415.current_mSortPropertyName (HERE), var_sortPropertyKind_13512, joker_13538_2, joker_13538_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 331)) ;
        GalgasBool test_44 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_44) {
          test_44 = extensionGetter_isComparable (var_sortPropertyKind_13512, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).boolEnum () ;
          if (GalgasBool::boolTrue == test_44) {
            GenericArray <FixItDescription> fixItArray45 ;
            inCompiler->emitSemanticError (enumerator_11415.current_mSortPropertyName (HERE).readProperty_location (), GGS_string ("this property is not comparable"), fixItArray45  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 337)) ;
          }
        }
        {
        var_arrayControllerSortedColumnListForGeneration_11313.setter_append (enumerator_11415.current_mPropertyName (HERE).readProperty_string (), var_sortPropertyKind_13512, enumerator_11415.current_mSortPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 339)) ;
        }
      }
    }
    GGS_propertyKind var_propertyKind_13934 ;
    GGS_actionMap joker_13954_2 ; // Joker input parameter
    GGS_bool joker_13954_1 ; // Joker input parameter
    var_propertyMap_9918.method_searchKey (enumerator_11415.current_mPropertyName (HERE), var_propertyKind_13934, joker_13954_2, joker_13954_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 346)) ;
    {
    var_arrayControllerBoundColumnListForGeneration_11198.setter_append (enumerator_11415.current_mEditable (HERE), enumerator_11415.current_mSortPropertyName (HERE).readProperty_string (), enumerator_11415.current_mPropertyName (HERE).readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_13934, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 355)), GGS_string::makeEmptyString (), var_actualParameterList_11993, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 351)) ;
    }
    enumerator_11415.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_46 = this ;
  GGS_string temp_47 ;
  const GalgasBool test_48 = temp_46.readProperty_mIsRoot ().boolEnum () ;
  if (GalgasBool::boolTrue == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_49 = this ;
    temp_47 = GGS_string ("self.rootObject.").add_operation (temp_49.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 366)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 366)) ;
  }else if (GalgasBool::boolFalse == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_50 = this ;
    temp_47 = GGS_string ("self.").add_operation (temp_50.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 367)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 367)) ;
  }
  GGS_string var_modelString_14533 = temp_47 ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_51 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_52 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutTableViewControllerGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_51.readProperty_mClassName ().readProperty_string (), temp_52.readProperty_mControllerName (), var_modelString_14533, var_arrayControllerBoundColumnListForGeneration_11198, var_arrayControllerSortedColumnListForGeneration_11313, GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 376)), var_arrayControllerModelKind_9976, var_elementTypeName_10035, var_graphic_10013, var_attributeListForGeneration_8667, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 370)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 383)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.setter_insert (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 384)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Table View controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_6 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_7 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)) ;
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
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16960 = temp_0 ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16960, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (GGS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (var_prefix_16960, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)) ;
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
    UpEnumerator__32_stringlist enumerator_952 (in_ATTRIBUTE_5F_VALUES) ;
    while (enumerator_952.hasCurrentObject ()) {
      result.appendString ("  private let ") ;
      result.appendString (enumerator_952.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_952.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_952.gotoNextObject () ;
      index_952_.increment () ;
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
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("      sortCallback: { [weak self] (left, right) in self\?.isOrderedBefore (left, right) \?\? true },\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("      sortCallback: nil,\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      addSortObserversCallback: { (observer) in\n") ;
  GGS_uint index_3030_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3030 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3030.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3030.current_key (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: observer)\n") ;
      enumerator_3030.gotoNextObject () ;
      index_3030_.increment () ;
    }
  }
  result.appendString ("      },\n      removeSortObserversCallback: {(observer) in\n") ;
  GGS_uint index_3214_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3214 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3214.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3214.current_key (HERE).stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by: observer)\n") ;
      enumerator_3214.gotoNextObject () ;
      index_3214_.increment () ;
    }
  }
  result.appendString ("      }\n    )\n  }\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 81)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func isOrderedBefore (_ left : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool {\n    var order = ComparisonResult.orderedSame\n    for sortDescriptor in self.mSortDescriptorArray.reversed () {\n      order = sortDescriptor (left, right)\n      if order != .orderedSame {\n        break // Exit from for loop\n      }\n    }\n    return order == .orderedAscending\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_model () {\n    self.sortedArray_property.resetDataProvider ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return EBReferenceSet (self.selectedArray_property.propval.values) }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    let selectedObjectSet = self.selectedSet\n    var result = Set <Int> ()\n    var idx = 0\n    if let model = self.mModel {\n      for object in model.propval.values {\n        if selectedObjectSet.contains (object) {\n          result.insert (idx)\n        }\n        idx += 1\n      }\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObjects))\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    sorted array observer\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortedArrayValuesObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @MainActor override init () {\n    super.init ()\n    self.sortedArray_property.startsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
  GGS_uint index_6424_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_6424 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_6424.hasCurrentObject ()) {
      result.appendString ("  //--- Observe '") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    self.sortedArray_property.toMany_") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (enumerator_6424.current_mDisplayedPropertyName (HERE))) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("     self.sortedArray_property.toMany_") ;
        result.appendString (enumerator_6424.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6424.gotoNextObject () ;
      index_6424_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    bind_tableView\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n") ;
  GGS_uint index_8024_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_8024 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_8024.hasCurrentObject ()) {
      result.appendString ("  //--- Configure '") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    inTableView.addColumn_") ;
      result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
      result.appendString (" (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0].") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString (" },\n      valueSetterDelegate: ") ;
      const GalgasBool test_3 = enumerator_8024.current_mEditable (HERE).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex].") ;
        result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
        result.appendString (" = inNewValue }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n      sortDelegate: ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_8024.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (", _ right : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") in return compare_") ;
        result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
        result.appendString ("_properties (left.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property, ascending, right.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property) })\n      }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      GGS_uint index_8879_ (0) ;
      if (enumerator_8024.current_mActualParameterList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8879 (enumerator_8024.current_mActualParameterList (HERE)) ;
        while (enumerator_8879.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8879.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (": ") ;
          result.appendString (enumerator_8879.current_mValue_31_ (HERE).stringValue ()) ;
          enumerator_8879.gotoNextObject () ;
          if (enumerator_8879.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_8879_.increment () ;
        }
      }
      result.appendString ("\n    )\n") ;
      enumerator_8024.gotoNextObject () ;
      index_8024_.increment () ;
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
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 513)) ;
  GGS_stringset var_observedProperties_20986 = temp_0 ;
  const GGS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration enumerator_21021 (temp_1.readProperty_mTableViewControllerSortedColumnListForGeneration ()) ;
  while (enumerator_21021.hasCurrentObject ()) {
    {
    var_observedProperties_20986.setter_insert (enumerator_21021.current_mObservablePropertyForSorting (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 515)) ;
    }
    enumerator_21021.gotoNextObject () ;
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
  GGS_string var_s_21189 = GGS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mControllerName ().readProperty_string (), temp_4.readProperty_mModelString (), temp_5.readProperty_mTableViewControllerModelKind (), temp_6.readProperty_mModelTypeName (), temp_7.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_8.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_9.readProperty_mElementTypeName (), var_observedProperties_20986, temp_10.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 517))) ;
  {
  const GGS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_12 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-table-view-").add_operation (temp_11.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (temp_12.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)), var_s_21189, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 529)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1090 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1090, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1090, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6143 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6360 ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6371_3 ; // Joker input parameter
  GGS_actionMap joker_6371_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6371_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6360, joker_6371_3, joker_6371_2, joker_6371_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 161)) ;
  GGS_propertyMap var_preferencesPropertyMap_6480 ;
  GGS_classKind joker_6465 ; // Joker input parameter
  GGS_actionMap joker_6510_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6510_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 163)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 163)), inCompiler COMMA_HERE), joker_6465, var_preferencesPropertyMap_6480, joker_6510_2, joker_6510_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 162)) ;
  switch (var_classKind_6360.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_atomicPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 170)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6647_kind_0 ;
      var_classKind_6360.getAssociatedValuesFor_atomic (extractedValue_6647_kind_0) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_4 = this ;
      var_entry_6143.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6647_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.ggs", 172))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)) ;
      }
      GGS_string var_swiftDefaultValueAsString_6903 ;
      const GGS_atomicPropertyDeclarationAST temp_5 = this ;
      GGS_typeKindList temp_6 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      temp_6.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_6647_kind_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_6480, var_swiftDefaultValueAsString_6903, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_7 = this ;
      const GGS_atomicPropertyDeclarationAST temp_8 = this ;
      const GGS_atomicPropertyDeclarationAST temp_9 = this ;
      const GGS_atomicPropertyDeclarationAST temp_10 = this ;
      const GGS_atomicPropertyDeclarationAST temp_11 = this ;
      const GGS_atomicPropertyDeclarationAST temp_12 = this ;
      var_entry_6143.mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_generateResetMethod (), temp_9.readProperty_generateDirectRead (), temp_10.readProperty_generateDirectAccess (), temp_11.readProperty_standalone (), extractedValue_6647_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6903, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 185)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 176)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7422__0 ;
      var_classKind_6360.getAssociatedValuesFor_document (extractedValue_7422__0) ;
      const GGS_atomicPropertyDeclarationAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7517__0 ;
      GGS_bool extractedValue_7517__1 ;
      GGS_bool extractedValue_7517__2 ;
      GGS_bool extractedValue_7517__3 ;
      var_classKind_6360.getAssociatedValuesFor_entity (extractedValue_7517__0, extractedValue_7517__1, extractedValue_7517__2, extractedValue_7517__3) ;
      const GGS_atomicPropertyDeclarationAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6143, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 258)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 283)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 285)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("_property = EBPreferenceProperty_").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)) ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssignOperation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)) ;
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
    GGS_bool var_generateAccess_14057 = test_26 ;
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_generateAccess_14057.boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)) ;
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)) ;
          }
        }
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 331)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
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
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
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
    result_result = GGS_string ("    self.accumulateProperty (self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 355)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 355)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_830 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_830, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3061 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_proxyKind_3275 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_3286_3 ; // Joker input parameter
  GGS_actionMap joker_3286_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_3286_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3275, joker_3286_3, joker_3286_2, joker_3286_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 90)) ;
  switch (var_proxyKind_3275.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 93)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_3414__0 ;
      GGS_bool extractedValue_3423_isGraphic_1 ;
      GGS_bool extractedValue_3435__2 ;
      GGS_bool extractedValue_3435__3 ;
      var_proxyKind_3275.getAssociatedValuesFor_entity (extractedValue_3414__0, extractedValue_3423_isGraphic_1, extractedValue_3435__2, extractedValue_3435__3) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
      case GGS_proxyKind::Enumeration::invalid:
        break ;
      case GGS_proxyKind::Enumeration::enum_toManyProxy:
        {
          const GGS_proxyDeclarationAST temp_5 = this ;
          GGS_propertyKind var_k_3505 = GGS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 99)), extractedValue_3423_isGraphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.ggs", 101))  COMMA_SOURCE_FILE ("proxy.ggs", 97)) ;
          {
          const GGS_proxyDeclarationAST temp_6 = this ;
          var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3505, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 103)) ;
          }
        }
        break ;
      case GGS_proxyKind::Enumeration::enum_propertyProxy:
        {
          const GGS_proxyDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.ggs", 105)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_3862__0 ;
      var_proxyKind_3275.getAssociatedValuesFor_document (extractedValue_3862__0) ;
      const GGS_proxyDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.ggs", 108)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_3952_type_0 ;
      var_proxyKind_3275.getAssociatedValuesFor_atomic (extractedValue_3952_type_0) ;
      {
      const GGS_proxyDeclarationAST temp_11 = this ;
      var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GGS_propertyKind::class_func_property (extractedValue_3952_type_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 110))  COMMA_SOURCE_FILE ("proxy.ggs", 110)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 110)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3061, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 112)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4442 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_relationshipKind_4655 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_actionMap joker_4673_2 ; // Joker input parameter
  GGS_bool joker_4673_1 ; // Joker input parameter
  var_entry_4442.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4655, joker_4673_2, joker_4673_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 122)) ;
  switch (var_relationshipKind_4655.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4733__0 ;
      GGS_bool extractedValue_4733__1 ;
      var_relationshipKind_4655.getAssociatedValuesFor_arrayController (extractedValue_4733__0, extractedValue_4733__1) ;
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 125)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4850__0 ;
      var_relationshipKind_4655.getAssociatedValuesFor_selectionController (extractedValue_4850__0) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 127)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_4957__0 ;
      GGS_propertyAccessibility extractedValue_4957__1 ;
      var_relationshipKind_4655.getAssociatedValuesFor_property (extractedValue_4957__0, extractedValue_4957__1) ;
      const GGS_proxyDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 129)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5062__0 ;
      GGS_propertyAccessibility extractedValue_5062__1 ;
      GGS_bool extractedValue_5062__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5062__3 ;
      var_relationshipKind_4655.getAssociatedValuesFor_toMany (extractedValue_5062__0, extractedValue_5062__1, extractedValue_5062__2, extractedValue_5062__3) ;
      const GGS_proxyDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 131)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5165_toOneTypeName_0 ;
      GGS_propertyAccessibility extractedValue_5181__1 ;
      GGS_bool extractedValue_5181__2 ;
      GGS_toOneOppositeRelationship extractedValue_5181__3 ;
      GGS_bool extractedValue_5181__4 ;
      var_relationshipKind_4655.getAssociatedValuesFor_toOne (extractedValue_5165_toOneTypeName_0, extractedValue_5181__1, extractedValue_5181__2, extractedValue_5181__3, extractedValue_5181__4) ;
      GGS_propertyMap var_propertyMap_5255 ;
      GGS_classKind joker_5246 ; // Joker input parameter
      GGS_actionMap joker_5268_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5268_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5165_toOneTypeName_0, joker_5246, var_propertyMap_5255, joker_5268_2, joker_5268_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 133)) ;
      GGS_propertyKind var_propertyKind_5327 ;
      const GGS_proxyDeclarationAST temp_10 = this ;
      GGS_actionMap joker_5341_2 ; // Joker input parameter
      GGS_bool joker_5341_1 ; // Joker input parameter
      var_propertyMap_5255.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5327, joker_5341_2, joker_5341_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
      switch (var_propertyKind_5327.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5393_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_5408__1 ;
          var_propertyKind_5327.getAssociatedValuesFor_property (extractedValue_5393_propertyType_0, extractedValue_5408__1) ;
          {
          const GGS_proxyDeclarationAST temp_11 = this ;
          const GGS_proxyDeclarationAST temp_12 = this ;
          const GGS_proxyDeclarationAST temp_13 = this ;
          const GGS_proxyDeclarationAST temp_14 = this ;
          var_entry_4442.mProperty_mPropertyGenerationList.setter_append (GGS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5393_propertyType_0, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 137)) ;
          }
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_proxyDeclarationAST temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 145)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_proxyDeclarationAST temp_17 = this ;
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 146)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5821_toManyTypeName_0 ;
          GGS_propertyAccessibility extractedValue_5838__1 ;
          GGS_bool extractedValue_5838__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5838__3 ;
          var_propertyKind_5327.getAssociatedValuesFor_toMany (extractedValue_5821_toManyTypeName_0, extractedValue_5838__1, extractedValue_5838__2, extractedValue_5838__3) ;
          GGS_classKind joker_5906_4 ; // Joker input parameter
          GGS_propertyMap joker_5906_3 ; // Joker input parameter
          GGS_actionMap joker_5906_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_5906_1 ; // Joker input parameter
          ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5821_toManyTypeName_0, joker_5906_4, joker_5906_3, joker_5906_2, joker_5906_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 149)) ;
          {
          const GGS_proxyDeclarationAST temp_19 = this ;
          const GGS_proxyDeclarationAST temp_20 = this ;
          const GGS_proxyDeclarationAST temp_21 = this ;
          const GGS_proxyDeclarationAST temp_22 = this ;
          var_entry_4442.mProperty_mPropertyGenerationList.setter_append (GGS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5821_toManyTypeName_0.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
          }
          {
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5821_toManyTypeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 158)) ;
          }
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            const GGS_proxyDeclarationAST temp_24 = this ;
            test_23 = GGS_bool (ComparisonKind::notEqual, temp_24.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              const GGS_proxyDeclarationAST temp_25 = this ;
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 160)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6395__0 ;
          GGS_propertyAccessibility extractedValue_6395__1 ;
          GGS_bool extractedValue_6395__2 ;
          GGS_toOneOppositeRelationship extractedValue_6395__3 ;
          GGS_bool extractedValue_6395__4 ;
          var_propertyKind_5327.getAssociatedValuesFor_toOne (extractedValue_6395__0, extractedValue_6395__1, extractedValue_6395__2, extractedValue_6395__3, extractedValue_6395__4) ;
          const GGS_proxyDeclarationAST temp_27 = this ;
          switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_28 = this ;
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 165)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 167)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6677__0 ;
          GGS_bool extractedValue_6677__1 ;
          var_propertyKind_5327.getAssociatedValuesFor_arrayController (extractedValue_6677__0, extractedValue_6677__1) ;
          const GGS_proxyDeclarationAST temp_32 = this ;
          switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_33 = this ;
              GenericArray <FixItDescription> fixItArray34 ;
              inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 172)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_35 = this ;
              GenericArray <FixItDescription> fixItArray36 ;
              inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 174)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6962__0 ;
          var_propertyKind_5327.getAssociatedValuesFor_selectionController (extractedValue_6962__0) ;
          const GGS_proxyDeclarationAST temp_37 = this ;
          switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_38 = this ;
              GenericArray <FixItDescription> fixItArray39 ;
              inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 179)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_40 = this ;
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 181)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4442, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 185)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 210)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 211)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GGS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (temp_3.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (temp_5.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      switch self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  result_result.plusAssignOperation(GGS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssignOperation(GGS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 251)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 252)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)) ;
  result_result.plusAssignOperation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssignOperation(GGS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)).add_operation (GGS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  result_result.plusAssignOperation(GGS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  result_result.plusAssignOperation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GGS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 269)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 270)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 295)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 308)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 346)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssignOperation(GGS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)).add_operation (GGS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)).add_operation (GGS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssignOperation(GGS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  const GGS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  const GGS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3875 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_3896 (constinArgument_inAttributeActualTypeList) ;
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
          const GalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("true") ;
          }else if (GalgasBool::boolFalse == test_3) {
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
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 126)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 127)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4847 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_4868 (constinArgument_inAttributeActualTypeList) ;
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
          const GalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 144)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_integerAsDefaultValue temp_6 = this ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_integerAsDefaultValue temp_7 = this ;
              GenericArray <FixItDescription> fixItArray8 ;
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
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_integerAsDefaultValue temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 163)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6145 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_6166 (constinArgument_inAttributeActualTypeList) ;
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
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 190)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 191)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7108 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_7129 (constinArgument_inAttributeActualTypeList) ;
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
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 218)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_stringAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
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

static const GALGAS_TypeDescriptor * functionArgs_predefinedDates [1] = {
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

static const GALGAS_TypeDescriptor * functionArgs_predefinedColors [1] = {
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

