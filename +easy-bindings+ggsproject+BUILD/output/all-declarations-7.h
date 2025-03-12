#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @entityStrongReferenceGraph graph
//
//--------------------------------------------------------------------------------------------------

class GGS_entityStrongReferenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_entityStrongReferenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityStrongReferenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityStrongReferenceGraph extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityStrongReferenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_stringlist & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_stringlist & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_stringlist & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_stringlist & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_stringlist & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_stringlist & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_stringlist & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityStrongReferenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityStrongReferenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                          const class GGS_stringset & constinOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedPropertyGeneration_2E_weak (const class GGS_computedPropertyGeneration & inSource) ;

  public: GGS_computedPropertyGeneration_2E_weak & operator = (const class GGS_computedPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedPropertyGeneration_2E_weak init_nil (void) {
    GGS_computedPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedPropertyGeneration bang_computedPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_computedPropertyGeneration unwrappedValue (void) const {
    GGS_computedPropertyGeneration result ;
    if (isValid ()) {
      const cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_computedPropertyGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XcodeProjectDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mSequenceNumber ;
  public: inline GGS_uint readProperty_mSequenceNumber (void) const {
    return mProperty_mSequenceNumber ;
  }

  public: GGS_string mProperty_mMainGroupReference ;
  public: inline GGS_string readProperty_mMainGroupReference (void) const {
    return mProperty_mMainGroupReference ;
  }

  public: GGS_stringlist mProperty_mMainGroupChildrenRefs ;
  public: inline GGS_stringlist readProperty_mMainGroupChildrenRefs (void) const {
    return mProperty_mMainGroupChildrenRefs ;
  }

  public: GGS_string mProperty_mProjectObjectReference ;
  public: inline GGS_string readProperty_mProjectObjectReference (void) const {
    return mProperty_mProjectObjectReference ;
  }

  public: GGS_XCodeGroupList mProperty_mGroupList ;
  public: inline GGS_XCodeGroupList readProperty_mGroupList (void) const {
    return mProperty_mGroupList ;
  }

  public: GGS_XCodeToolTargetList mProperty_mToolTargetList ;
  public: inline GGS_XCodeToolTargetList readProperty_mToolTargetList (void) const {
    return mProperty_mToolTargetList ;
  }

  public: GGS_XCodeAppTargetList mProperty_mAppTargetList ;
  public: inline GGS_XCodeAppTargetList readProperty_mAppTargetList (void) const {
    return mProperty_mAppTargetList ;
  }

  public: GGS__32_stringlist mProperty_mCppFileList ;
  public: inline GGS__32_stringlist readProperty_mCppFileList (void) const {
    return mProperty_mCppFileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_M_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_M_5F_FileList (void) const {
    return mProperty_m_5F_M_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_MM_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_MM_5F_FileList (void) const {
    return mProperty_m_5F_MM_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_SwiftFileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_SwiftFileList (void) const {
    return mProperty_m_5F_SwiftFileList ;
  }

  public: GGS__32_stringlist mProperty_mFrameworkFileList ;
  public: inline GGS__32_stringlist readProperty_mFrameworkFileList (void) const {
    return mProperty_mFrameworkFileList ;
  }

  public: GGS__32_stringlist mProperty_mHeaderFileList ;
  public: inline GGS__32_stringlist readProperty_mHeaderFileList (void) const {
    return mProperty_mHeaderFileList ;
  }

  public: GGS_BuildFileList mProperty_mBuildFileList ;
  public: inline GGS_BuildFileList readProperty_mBuildFileList (void) const {
    return mProperty_mBuildFileList ;
  }

  public: GGS_string mProperty_mDefaultConfigurationRef ;
  public: inline GGS_string readProperty_mDefaultConfigurationRef (void) const {
    return mProperty_mDefaultConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mDefaultConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mDefaultConfigurationSettingList (void) const {
    return mProperty_mDefaultConfigurationSettingList ;
  }

  public: GGS_string mProperty_mProjectBuildConfigurationRef ;
  public: inline GGS_string readProperty_mProjectBuildConfigurationRef (void) const {
    return mProperty_mProjectBuildConfigurationRef ;
  }

  public: GGS__32_stringlist mProperty_mInfoPlistFileList ;
  public: inline GGS__32_stringlist readProperty_mInfoPlistFileList (void) const {
    return mProperty_mInfoPlistFileList ;
  }

  public: GGS__32_stringlist mProperty_mXIB_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mXIB_5F_fileList (void) const {
    return mProperty_mXIB_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mTIFF_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mTIFF_5F_fileList (void) const {
    return mProperty_mTIFF_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mICNS_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mICNS_5F_fileList (void) const {
    return mProperty_mICNS_5F_fileList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XcodeProjectDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSequenceNumber (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSequenceNumber = inValue ;
  }

  public: inline void setter_setMMainGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupReference = inValue ;
  }

  public: inline void setter_setMMainGroupChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupChildrenRefs = inValue ;
  }

  public: inline void setter_setMProjectObjectReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectObjectReference = inValue ;
  }

  public: inline void setter_setMGroupList (const GGS_XCodeGroupList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupList = inValue ;
  }

  public: inline void setter_setMToolTargetList (const GGS_XCodeToolTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolTargetList = inValue ;
  }

  public: inline void setter_setMAppTargetList (const GGS_XCodeAppTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAppTargetList = inValue ;
  }

  public: inline void setter_setMCppFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppFileList = inValue ;
  }

  public: inline void setter_setM_5F_M_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_M_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_MM_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_MM_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_SwiftFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_SwiftFileList = inValue ;
  }

  public: inline void setter_setMFrameworkFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkFileList = inValue ;
  }

  public: inline void setter_setMHeaderFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileList = inValue ;
  }

  public: inline void setter_setMBuildFileList (const GGS_BuildFileList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildFileList = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationRef = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMProjectBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMInfoPlistFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPlistFileList = inValue ;
  }

  public: inline void setter_setMXIB_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXIB_5F_fileList = inValue ;
  }

  public: inline void setter_setMTIFF_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTIFF_5F_fileList = inValue ;
  }

  public: inline void setter_setMICNS_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mICNS_5F_fileList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XcodeProjectDescriptor (const GGS_uint & in_mSequenceNumber,
                                      const GGS_string & in_mMainGroupReference,
                                      const GGS_stringlist & in_mMainGroupChildrenRefs,
                                      const GGS_string & in_mProjectObjectReference,
                                      const GGS_XCodeGroupList & in_mGroupList,
                                      const GGS_XCodeToolTargetList & in_mToolTargetList,
                                      const GGS_XCodeAppTargetList & in_mAppTargetList,
                                      const GGS__32_stringlist & in_mCppFileList,
                                      const GGS__32_stringlist & in_m_5F_M_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_MM_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_SwiftFileList,
                                      const GGS__32_stringlist & in_mFrameworkFileList,
                                      const GGS__32_stringlist & in_mHeaderFileList,
                                      const GGS_BuildFileList & in_mBuildFileList,
                                      const GGS_string & in_mDefaultConfigurationRef,
                                      const GGS_stringlist & in_mDefaultConfigurationSettingList,
                                      const GGS_string & in_mProjectBuildConfigurationRef,
                                      const GGS__32_stringlist & in_mInfoPlistFileList,
                                      const GGS__32_stringlist & in_mXIB_5F_fileList,
                                      const GGS__32_stringlist & in_mTIFF_5F_fileList,
                                      const GGS__32_stringlist & in_mICNS_5F_fileList) ;

//--------------------------------- Copy constructor
  public: GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XcodeProjectDescriptor & operator = (const GGS_XcodeProjectDescriptor & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XcodeProjectDescriptor init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XcodeProjectDescriptor extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XcodeProjectDescriptor class_func_new (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GGS_XcodeProjectDescriptor & ioObject,
                                      class GGS_string & out_outRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GGS_XcodeProjectDescriptor & ioObject,
                                const class GGS_string constin_inFileName,
                                class GGS_string & out_outFileRef,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inFileName,
                                    class GGS_string & out_outFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileReference,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outBuildRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inTargetName,
                                    const class GGS_string constin_inProductFileName,
                                    const class GGS_stringlist constin_inSourceList,
                                    const class GGS_stringlist constin_inToolFrameworksFileRefList,
                                    const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                    class GGS_string & out_outTargetRef,
                                    class GGS_string & out_outProductFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inTargetName,
                                   const class GGS_string constin_inProductFileName,
                                   const class GGS_stringlist constin_inSourceList,
                                   const class GGS_stringlist constin_inFrameworksFileRefList,
                                   const class GGS_stringlist constin_inResourceFileBuildRefs,
                                   const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                   const class GGS_stringlist constin_inDependentTargetRefList,
                                   const class GGS__32_stringlist constin_inProductCopyList,
                                   const class GGS_string constin_inInfoPList,
                                   class GGS_string & out_outProductFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inGroupName,
                               const class GGS_string constin_inGroupPath,
                               const class GGS_stringlist constin_inChildrenRefs,
                               class GGS_string & out_outGroupRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GGS_XcodeProjectDescriptor & ioObject,
                                        const class GGS_string constin_inGroupName,
                                        const class GGS_string constin_inGroupPath,
                                        const class GGS_stringset constin_inFileNames,
                                        class GGS_stringlist & io_ioCppFileBuildRefs,
                                        class GGS_stringlist & io_ioMFileBuildRefs,
                                        class GGS_stringlist & io_ioMMFileBuildRefs,
                                        class GGS_stringlist & io_ioSwiftFileBuildRefs,
                                        class GGS_stringlist & io_ioFrameWorkFileBuildRefs,
                                        class GGS_stringlist & io_ioResourceFileBuildRefs,
                                        class GGS_string & out_outGroupRef,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GGS_XcodeProjectDescriptor & ioObject,
                                            const class GGS_string constin_inGroupRef,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GGS_XcodeProjectDescriptor & ioObject,
                                                        const class GGS_stringlist constin_inSettingList,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GGS_XcodeProjectDescriptor inObject,
                                     const class GGS_string constin_inPath,
                                     const class GGS_string constin_inCacheFilePath,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_REF,
                                                                            const class GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const class GGS_XCodeGroupList & in_GROUPS,
                                                                            const class GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const class GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const class GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const class GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const class GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const class GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const class GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const class GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_LOCATION_ARGS) ;

