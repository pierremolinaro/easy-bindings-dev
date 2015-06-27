#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addTIFF_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addTIFF_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_getReferenceKey (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       class GALGAS_string & out_outRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addInfoPlistFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addInfoPlistFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inFileName,
                                        class GALGAS_string & out_outFileRef,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category setter '@XcodeProjectDescriptor addXIBFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addXIBFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                  const class GALGAS_string constin_inFileName,
                                  class GALGAS_string & out_outFileRef,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addFrameworkFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addFrameworkFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inFileName,
                                        class GALGAS_string & out_outFileRef,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addMFile'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inFileName,
                                class GALGAS_string & out_outFileRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addSwiftFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSwiftFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category setter '@XcodeProjectDescriptor addCppFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addCppFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                  const class GALGAS_string constin_inFileName,
                                  class GALGAS_string & out_outFileRef,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addHeaderFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                     const class GALGAS_string constin_inFileName,
                                     class GALGAS_string & out_outFileRef,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addBuildFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addBuildFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileReference,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outBuildRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addToolTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                     const class GALGAS_string constin_inTargetName,
                                     const class GALGAS_string constin_inProductFileName,
                                     const class GALGAS_stringlist constin_inSourceList,
                                     const class GALGAS_stringlist constin_inToolFrameworksFileRefList,
                                     const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                     class GALGAS_string & out_outTargetRef,
                                     class GALGAS_string & out_outProductFileRef,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addGroup'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inGroupName,
                                const class GALGAS_string constin_inGroupPath,
                                const class GALGAS_stringlist constin_inChildrenRefs,
                                class GALGAS_string & out_outGroupRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addICNS_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addICNS_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

#endif
