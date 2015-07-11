#ifndef all_2D_declarations_2D__35__ENTITIES_DEFINED
#define all_2D_declarations_2D__35__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"

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
