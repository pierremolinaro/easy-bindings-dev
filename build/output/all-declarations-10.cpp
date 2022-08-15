#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_PROJECT_5F_REF,
                                                                               const GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "// !$*UTF8*$!\n"
    "{\n"
    "  archiveVersion = 1;\n"
    "  classes = {\n"
    "  };\n"
    "  objectVersion = 42;\n"
    "  objects = {\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_250_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_250 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_250.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_250.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_250.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_250.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_250_.increment () ;
      enumerator_250.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_555_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_555 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_555.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_555.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_555.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_555.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_555_.increment () ;
      enumerator_555.gotoNextObject () ;
    }
  }
  GALGAS_uint index_902_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_902 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_902.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_902.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_902.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_902.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_902_.increment () ;
      enumerator_902.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1248_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1248 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1248.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1248.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1248.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1248.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1248_.increment () ;
      enumerator_1248.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1602_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1602 (in_SWIFT_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1602.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1602.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1602.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.swift;\n"
        "    name = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1602.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1602_.increment () ;
      enumerator_1602.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1952_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1952 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1952.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1952.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1952.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1952.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1952_.increment () ;
      enumerator_1952.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2303_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2303 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2303.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2303.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2303.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2303.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2303_.increment () ;
      enumerator_2303.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2836_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2836 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2836.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2836.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2836_.increment () ;
      enumerator_2836.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3427.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3427.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_3427.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_3427_.increment () ;
      enumerator_3427.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3736_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3736 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3736.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3736.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3736.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3736_.increment () ;
      enumerator_3736.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4060_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4060 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4060.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4060.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4060.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4060_.increment () ;
      enumerator_4060.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4386_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4386 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4386.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4386.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4386.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4386_.increment () ;
      enumerator_4386.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4685_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4685 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4685.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4685.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4685.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4685_.increment () ;
      enumerator_4685.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_5296_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5296 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5296.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5296.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).getter_uint (inCompiler COMMA_SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_5296.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_5536_ (0) ;
        if (enumerator_5296.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5536 (enumerator_5296.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_5536.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_5536.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_5536_.increment () ;
            enumerator_5536.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5296_.increment () ;
      enumerator_5296.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5989_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_5989 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5989.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5989.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_6173_ (0) ;
      if (enumerator_5989.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6173 (enumerator_5989.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_6173.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6173.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_6173_.increment () ;
          enumerator_6173.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_5989_.increment () ;
      enumerator_5989.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_6449_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6449 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6449.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6449.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6449.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_6576_ (0) ;
      if (enumerator_6449.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6576 (enumerator_6449.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_6576.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6576.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_6576_.increment () ;
          enumerator_6576.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6449.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_6449.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_6449_.increment () ;
      enumerator_6449.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_6888_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_6888 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_6888.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_6888.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_6888_.increment () ;
      enumerator_6888.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_7302_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7302 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7302.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7302.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_7302.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_7302.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_7302.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7302.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).getter_uint (inCompiler COMMA_SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_7302.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_7302.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_7302.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_7302_.increment () ;
      enumerator_7302.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8235_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8235 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8235.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_8235.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_8235.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_8235.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_8235.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_8235.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_8235.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_8624_ (0) ;
      if (enumerator_8235.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8624 (enumerator_8235.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8624.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_8624.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_8624_.increment () ;
          enumerator_8624.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_8235.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_8235.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_8235_.increment () ;
      enumerator_8235.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n"
    "  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n"
    "   isa = PBXProject;\n"
    "   attributes = {\n"
    "     LastSwiftUpdateCheck = 0700;\n"
    "     LastUpgradeCheck = 0700;\n"
    "   };\n"
    "   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n"
    "   compatibilityVersion = \"Xcode 2.4\";\n"
    "   hasScannedForEncodings = 1;\n"
    "   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n"
    "   projectDirPath = \"\";\n"
    "   projectRoot = \"\";\n"
    "   targets = (\n" ;
  GALGAS_uint index_9696_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9696 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9696.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9696.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_9696_.increment () ;
      enumerator_9696.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10050_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10050 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10050.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10050.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_10050_.increment () ;
      enumerator_10050.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_10517_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10517 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10517.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_10517.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_10700_ (0) ;
      if (enumerator_10517.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10700 (enumerator_10517.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_10700.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10700.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_10700_.increment () ;
          enumerator_10700.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_10517_.increment () ;
      enumerator_10517.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_11150_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11150 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11150.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11317_ (0) ;
      if (enumerator_11150.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11317 (enumerator_11150.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11317.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11317.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11317_.increment () ;
          enumerator_11317.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_11150_.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11738_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11738 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11738.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11738.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11905_ (0) ;
      if (enumerator_11738.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11905 (enumerator_11738.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11905.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11905.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11905_.increment () ;
          enumerator_11905.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_11738_.increment () ;
      enumerator_11738.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_12427_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12427 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12427.hasCurrentObject ()) {
      GALGAS_uint index_12475_ (0) ;
      if (enumerator_12427.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12475 (enumerator_12427.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_12475.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_12475.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_12475.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_12475_.increment () ;
          enumerator_12475.gotoNextObject () ;
        }
      }
      index_12427_.increment () ;
      enumerator_12427.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n"
    " \n"
    "  /*------------------------------------------------------------------ XCBuildConfiguration */\n"
    "    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n"
    "      isa = XCBuildConfiguration;\n"
    "      buildSettings = {\n" ;
  GALGAS_uint index_12952_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12952 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12952.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_12952.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_12952_.increment () ;
      enumerator_12952.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_13267_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13267 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13267.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13267.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_13435_ (0) ;
      if (enumerator_13267.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13435 (enumerator_13267.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13435.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13435.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13435_.increment () ;
          enumerator_13435.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_13267.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13267_.increment () ;
      enumerator_13267.gotoNextObject () ;
    }
  }
  GALGAS_uint index_13905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_13905 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13905.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13905.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_14073_ (0) ;
      if (enumerator_13905.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14073 (enumerator_13905.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_14073.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_14073.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_14073_.increment () ;
          enumerator_14073.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = " ;
      result << enumerator_13905.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
      result << ";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_13905.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13905_.increment () ;
      enumerator_13905.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n"
    "\n"
    "    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n"
    "      isa = XCConfigurationList;\n"
    "      buildConfigurations = (\n"
    "        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n"
    "      );\n"
    "      defaultConfigurationIsVisible = 0;\n"
    "      defaultConfigurationName = Default;\n"
    "    };\n"
    "\n" ;
  GALGAS_uint index_14955_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_14955 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_14955.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_14955.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_14955_.increment () ;
      enumerator_14955.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15552_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_15552 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15552.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15552.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_15552.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_15552_.increment () ;
      enumerator_15552.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n"
    "  };\n"
    "\n"
    "  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTestFile (const GALGAS_string constinArgument_inBundleIdentifier,
                               const GALGAS_string constinArgument_inProjectName,
                               const GALGAS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                               const GALGAS_string constinArgument_inOutputDirectory,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inMainXibDescriptorList.getter_length (SOURCE_FILE ("main-xib.ggs", 135)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 135)).getter_uint (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 135)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBundleIdentifier.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_outlet_5F_identifier_5F_list_5342 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 136)) ;
      cEnumerator_mainXibDescriptorList enumerator_5362 (constinArgument_inMainXibDescriptorList, kENUMERATION_UP) ;
      while (enumerator_5362.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5413 (enumerator_5362.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_5413.hasCurrentObject ()) {
          switch (enumerator_5413.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_5566 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_5413.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_5508_outletName = extractPtr_5566->mAssociatedValue1 ;
              var_outlet_5F_identifier_5F_list_5342.addAssign_operation (extractedValue_5508_outletName.readProperty_string ()  COMMA_SOURCE_FILE ("main-xib.ggs", 142)) ;
            }
            break ;
          }
          enumerator_5413.gotoNextObject () ;
        }
        enumerator_5362.gotoNextObject () ;
      }
      GALGAS_string var_s_5606 = GALGAS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5342 COMMA_SOURCE_FILE ("main-xib.ggs", 146))) ;
      GALGAS_string var_header_5737 = GALGAS_string ("#!/usr/bin/python\n"
        "# coding=utf-8\n"
        "\n"
        "# https://pypi.python.org/pypi/atomac\n"
        "# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n"
        "\n") ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GALGAS_string ("test.py"), GALGAS_string ("#"), var_header_5737, GALGAS_string::makeEmptyString (), var_s_5606, GALGAS_string ("#    ENTER USER CODE HERE\n"), GALGAS_string ("\n"
        "quitApplication ()\n"
        "\n"
        "#----------------------------------------------------------------------------*\n"), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 155)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (C_Compiler * /* inCompiler */,
                                                        const GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const GALGAS_string & in_PROJECT_5F_NAME,
                                                        const GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#------------------------------------------------------------------------------*\n"
    "\n"
    "import random, string\n"
    "\n"
    "import subprocess, os, sys, atexit\n"
    "import atomac, sys, time, inspect\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   GET SOURCE LINE NUMBER                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def lineno():\n"
    "  return inspect.currentframe().f_back.f_lineno\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   LAUNCH APPLICATION                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def launchApplication ():\n"
    "  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".app\")\n"
    "  time.sleep (0.5)\n"
    "  application = atomac.getAppRefByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  return application\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   QUIT APPLICATION                                                           *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def quitApplication ():\n"
    "  atomac.terminateAppByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   PREFERENCES WINDOW                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setUpPreferencesWindow (application) :\n"
    "  time.sleep (0.5)\n"
    "  window = application.windows ('" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')[0]\n" ;
  GALGAS_uint index_1785_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1785 (in_OUTLET_5F_IDENTIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1785.hasCurrentObject ()) {
      result << "  global " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "\n"
        "  " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << " = window.findFirst (AXIdentifier='" ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "')\n" ;
      index_1785_.increment () ;
      enumerator_1785.gotoNextObject () ;
    }
  }
  result << "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   CHECK TEXT FIELD VALUE                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def checkTextFieldValue (textField, expectedValue, line):\n"
    "  if textField.AXValue != expectedValue :\n"
    "    print '*** Check error at line ' + str (line) + ' ***'\n"
    "    sys.exit (1)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   SET TEXT FIELD                                                             *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setTextFieldValue (textField, value):\n"
    "  textField.AXFocused = True\n"
    "  textField.AXValue = value\n"
    "  textField.Confirm ()\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   MAIN                                                                       *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "application = launchApplication ()\n"
    "setUpPreferencesWindow (application)\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct var_declarationStruct_1127 = GALGAS_astDeclarationStruct::constructor_default (SOURCE_FILE ("program.ggs", 23)) ;
  GALGAS_location joker_1266 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GALGAS_string::makeEmptyString (), var_declarationStruct_1127, joker_1266  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GALGAS_location var_endOfSourceFile_1474 ;
  var_endOfSourceFile_1474.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1127, var_endOfSourceFile_1474  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  var_declarationStruct_1127.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.ggs", 30))  COMMA_SOURCE_FILE ("program.ggs", 30)), var_declarationStruct_1127.readProperty_mPreferences ()  COMMA_SOURCE_FILE ("program.ggs", 29))  COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  {
  routine_enterAtomicClassesIn (var_declarationStruct_1127.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 34)) ;
  }
  GALGAS_declarationListAST var_sortedDeclarationListAST_2024 ;
  {
  routine_sortProperties (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1127.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_2024, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 36)) ;
  }
  GALGAS_semanticContext var_semanticContext_2138 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("program.ggs", 38)) ;
  var_semanticContext_2138.setter_setMAutoLayoutVStackFunctionMap (var_declarationStruct_1127.readProperty_mAutoLayoutVStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 39)) ;
  var_semanticContext_2138.setter_setMAutoLayoutHStackFunctionMap (var_declarationStruct_1127.readProperty_mAutoLayoutHStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 40)) ;
  var_semanticContext_2138.setter_setMEnumerationFunctionListAST (var_declarationStruct_1127.readProperty_mEnumerationFunctionListAST () COMMA_SOURCE_FILE ("program.ggs", 41)) ;
  GALGAS_generationStruct var_generation_2470 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("program.ggs", 42)) ;
  cEnumerator_declarationListAST enumerator_2500 (var_sortedDeclarationListAST_2024, kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 43)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 43)))).isValidAndTrue () ;
  if (enumerator_2500.hasCurrentObject () && bool_0) {
    while (enumerator_2500.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2500.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2138, var_generation_2470, inCompiler COMMA_SOURCE_FILE ("program.ggs", 44)) ;
      enumerator_2500.gotoNextObject () ;
      if (enumerator_2500.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 43)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 43)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 47)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 47)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 47)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap (var_semanticContext_2138, var_declarationStruct_1127.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 48)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 53)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 53)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 53)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap (var_semanticContext_2138, var_declarationStruct_1127.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 54)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3134 (var_sortedDeclarationListAST_2024, kENUMERATION_UP) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 60)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 60)))).isValidAndTrue () ;
  if (enumerator_3134.hasCurrentObject () && bool_3) {
    while (enumerator_3134.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3134.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2138, var_generation_2470, inCompiler COMMA_SOURCE_FILE ("program.ggs", 61)) ;
      enumerator_3134.gotoNextObject () ;
      if (enumerator_3134.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 60)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 60)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3362 (var_sortedDeclarationListAST_2024, kENUMERATION_UP) ;
  bool bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 64)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 64)))).isValidAndTrue () ;
  if (enumerator_3362.hasCurrentObject () && bool_4) {
    while (enumerator_3362.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3362.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2138, var_generation_2470, inCompiler COMMA_SOURCE_FILE ("program.ggs", 65)) ;
      enumerator_3362.gotoNextObject () ;
      if (enumerator_3362.hasCurrentObject ()) {
        bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 64)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 64)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3590 (var_sortedDeclarationListAST_2024, kENUMERATION_UP) ;
  bool bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 68)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 68)))).isValidAndTrue () ;
  if (enumerator_3590.hasCurrentObject () && bool_5) {
    while (enumerator_3590.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3590.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2138, var_generation_2470, inCompiler COMMA_SOURCE_FILE ("program.ggs", 69)) ;
      enumerator_3590.gotoNextObject () ;
      if (enumerator_3590.hasCurrentObject ()) {
        bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 68)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 68)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 72)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 72)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 72)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3878 (var_semanticContext_2138.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
      while (enumerator_3878.hasCurrentObject ()) {
        GALGAS_classKind var_type_3996 ;
        GALGAS_propertyMap joker_3998_3 ; // Joker input parameter
        GALGAS_actionMap joker_3998_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3998_1 ; // Joker input parameter
        var_semanticContext_2138.readProperty_mClassMap ().method_searchKey (enumerator_3878.current_mEnumName (HERE), var_type_3996, joker_3998_3, joker_3998_2, joker_3998_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 74)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_3996.getter_isAtomic (SOURCE_FILE ("program.ggs", 75)).operator_not (SOURCE_FILE ("program.ggs", 75)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3878.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 76)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_typeKind var_typeKind_4150 ;
          var_type_3996.method_atomic (var_typeKind_4150, inCompiler COMMA_SOURCE_FILE ("program.ggs", 78)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4150.getter_isEnumType (SOURCE_FILE ("program.ggs", 79)).operator_not (SOURCE_FILE ("program.ggs", 79)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3878.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 80)) ;
            }
          }
        }
        enumerator_3878.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 86)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 86)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 86)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.ggs", 87)), var_semanticContext_2138, var_declarationStruct_1127.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 87)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 90)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 90)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 90)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode (var_declarationStruct_1127.readProperty_mXcodeProject ().readProperty_string (), var_generation_2470, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 91)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
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
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
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

