#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@XCodeAppTargetList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public : GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                  const GALGAS__32_stringlist & in_mDependentTargets,
                                                  const GALGAS_string & in_mResourceBuildRef,
                                                  const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                  const GALGAS_string & in_mInfoPListFile
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                                              const GALGAS_string & in_mTargetName,
                                                                              const GALGAS_string & in_mProductFileReference,
                                                                              const GALGAS_string & in_mProductFileName,
                                                                              const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                              const GALGAS_string & in_mBuildPhaseRef,
                                                                              const GALGAS_string & in_mBuildConfigurationListRef,
                                                                              const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                              const GALGAS_string & in_mBuildConfigurationRef,
                                                                              const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                              const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                              const GALGAS__32_stringlist & in_mDependentTargets,
                                                                              const GALGAS_string & in_mResourceBuildRef,
                                                                              const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                                              const GALGAS_string & in_mInfoPListFile
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInfoPListFile" ":" ;
  mObject.mProperty_mInfoPListFile.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_string & inOperand3,
                                                                                const GALGAS_stringlist & inOperand4,
                                                                                const GALGAS_string & inOperand5,
                                                                                const GALGAS_string & inOperand6,
                                                                                const GALGAS_stringlist & inOperand7,
                                                                                const GALGAS_string & inOperand8,
                                                                                const GALGAS_stringlist & inOperand9,
                                                                                const GALGAS_string & inOperand10,
                                                                                const GALGAS__32_stringlist & inOperand11,
                                                                                const GALGAS_string & inOperand12,
                                                                                const GALGAS_stringlist & inOperand13,
                                                                                const GALGAS_string & inOperand14
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mTargetRef,
                                                           const GALGAS_string & in_mTargetName,
                                                           const GALGAS_string & in_mProductFileReference,
                                                           const GALGAS_string & in_mProductFileName,
                                                           const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                           const GALGAS_string & in_mBuildPhaseRef,
                                                           const GALGAS_string & in_mBuildConfigurationListRef,
                                                           const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                           const GALGAS_string & in_mBuildConfigurationRef,
                                                           const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                           const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                           const GALGAS__32_stringlist & in_mDependentTargets,
                                                           const GALGAS_string & in_mResourceBuildRef,
                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                           const GALGAS_string & in_mInfoPListFile
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = NULL ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs,
                                                        in_mInfoPListFile COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_string & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_stringlist & inOperand4,
                                                     const GALGAS_string & inOperand5,
                                                     const GALGAS_string & inOperand6,
                                                     const GALGAS_stringlist & inOperand7,
                                                     const GALGAS_string & inOperand8,
                                                     const GALGAS_stringlist & inOperand9,
                                                     const GALGAS_string & inOperand10,
                                                     const GALGAS__32_stringlist & inOperand11,
                                                     const GALGAS_string & inOperand12,
                                                     const GALGAS_stringlist & inOperand13,
                                                     const GALGAS_string & inOperand14
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::setter_append (GALGAS_XCodeAppTargetList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_string inOperand2,
                                                      const GALGAS_string inOperand3,
                                                      const GALGAS_stringlist inOperand4,
                                                      const GALGAS_string inOperand5,
                                                      const GALGAS_string inOperand6,
                                                      const GALGAS_stringlist inOperand7,
                                                      const GALGAS_string inOperand8,
                                                      const GALGAS_stringlist inOperand9,
                                                      const GALGAS_string inOperand10,
                                                      const GALGAS__32_stringlist inOperand11,
                                                      const GALGAS_string inOperand12,
                                                      const GALGAS_stringlist inOperand13,
                                                      const GALGAS_string inOperand14,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_stringlist & outOperand4,
                                                      GALGAS_string & outOperand5,
                                                      GALGAS_string & outOperand6,
                                                      GALGAS_stringlist & outOperand7,
                                                      GALGAS_string & outOperand8,
                                                      GALGAS_stringlist & outOperand9,
                                                      GALGAS_string & outOperand10,
                                                      GALGAS__32_stringlist & outOperand11,
                                                      GALGAS_string & outOperand12,
                                                      GALGAS_stringlist & outOperand13,
                                                      GALGAS_string & outOperand14,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
      outOperand14.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
      outOperand0 = p->mObject.mProperty_mTargetRef ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mProductFileReference ;
      outOperand3 = p->mObject.mProperty_mProductFileName ;
      outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
      outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = p->mObject.mProperty_mDependentTargets ;
      outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
      outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
      outOperand14 = p->mObject.mProperty_mInfoPListFile ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 GALGAS__32_stringlist & outOperand11,
                                                 GALGAS_string & outOperand12,
                                                 GALGAS_stringlist & outOperand13,
                                                 GALGAS_string & outOperand14,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_string & outOperand3,
                                                GALGAS_stringlist & outOperand4,
                                                GALGAS_string & outOperand5,
                                                GALGAS_string & outOperand6,
                                                GALGAS_stringlist & outOperand7,
                                                GALGAS_string & outOperand8,
                                                GALGAS_stringlist & outOperand9,
                                                GALGAS_string & outOperand10,
                                                GALGAS__32_stringlist & outOperand11,
                                                GALGAS_string & outOperand12,
                                                GALGAS_stringlist & outOperand13,
                                                GALGAS_string & outOperand14,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              GALGAS__32_stringlist & outOperand11,
                                              GALGAS_string & outOperand12,
                                              GALGAS_stringlist & outOperand13,
                                              GALGAS_string & outOperand14,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_string & outOperand3,
                                             GALGAS_stringlist & outOperand4,
                                             GALGAS_string & outOperand5,
                                             GALGAS_string & outOperand6,
                                             GALGAS_stringlist & outOperand7,
                                             GALGAS_string & outOperand8,
                                             GALGAS_stringlist & outOperand9,
                                             GALGAS_string & outOperand10,
                                             GALGAS__32_stringlist & outOperand11,
                                             GALGAS_string & outOperand12,
                                             GALGAS_stringlist & outOperand13,
                                             GALGAS_string & outOperand14,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mInfoPListFile ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @XCodeAppTargetList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@BuildFileList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_BuildFileList : public cCollectionElement {
  public : GALGAS_BuildFileList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = NULL ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::setter_append (GALGAS_BuildFileList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mProperty_mFileReference ;
      outOperand1 = p->mObject.mProperty_mFileName ;
      outOperand2 = p->mObject.mProperty_mBuildReference ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @BuildFileList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@mainXibLineDescriptorList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public : GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibLineDescriptorList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_listWithValue (const GALGAS_mainXibElement & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_append (GALGAS_mainXibLineDescriptorList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_removeAtIndex (GALGAS_mainXibElement & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_popFirst (GALGAS_mainXibElement & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_popLast (GALGAS_mainXibElement & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::method_first (GALGAS_mainXibElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::method_last (GALGAS_mainXibElement & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @mainXibLineDescriptorList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  const GALGAS_mainXibLineDescriptorList * p = (const GALGAS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_mainXibElement_text::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_mainXibElement_outlet::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_mainXibElement_outlet::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_outlet * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_outlet *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_text (const GALGAS_lstring & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_text ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_text (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_outlet ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_outlet (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibElement::method_text (GALGAS_lstring & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_text) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @mainXibElement text invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_text * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibElement::method_outlet (GALGAS_lstring & outAssociatedValue0,
                                           GALGAS_lstring & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outlet) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @mainXibElement outlet invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_outlet * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibElement::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @mainXibElement: " << gEnumNameArrayFor_mainXibElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mainXibElement::objectCompare (const GALGAS_mainXibElement & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @mainXibElement type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibElement::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  const GALGAS_mainXibElement * p = (const GALGAS_mainXibElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension Getter '@mainXibDescriptorList generateCode'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("main-xib.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.galgas", 89)).getter_string (SOURCE_FILE ("main-xib.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 90)) ;
      GALGAS_uint var_idx_3051 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_columnMax_3073 = GALGAS_uint ((uint32_t) 1U) ;
      const GALGAS_mainXibDescriptorList temp_3 = inObject ;
      cEnumerator_mainXibDescriptorList enumerator_3096 (temp_3, kENUMERATION_UP) ;
      while (enumerator_3096.hasCurrentObject ()) {
        GALGAS_uint var_column_3116 = GALGAS_uint ((uint32_t) 0U) ;
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 95)) ;
        cEnumerator_mainXibLineDescriptorList enumerator_3188 (enumerator_3096.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_3188.hasCurrentObject ()) {
          switch (enumerator_3188.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
              const cEnumAssociatedValues_mainXibElement_text * extractPtr_3937 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_t = extractPtr_3937->mAssociatedValue0 ;
              var_idx_3051.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 99)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_t.getter_string (SOURCE_FILE ("main-xib.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 100)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 101)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 102)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 103)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 104)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 105)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 106)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 107)) ;
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4408 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_outletType = extractPtr_4408->mAssociatedValue0 ;
              const GALGAS_lstring extractedValue_outletName = extractPtr_4408->mAssociatedValue1 ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 109)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (extractedValue_outletType.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 110)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (extractedValue_outletName.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 111)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 112)) ;
            }
            break ;
          }
          var_column_3116.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 114)) ;
          enumerator_3188.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_column_3116.objectCompare (var_columnMax_3073)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_columnMax_3073 = var_column_3116 ;
          }
        }
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 119)) ;
        enumerator_3096.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 121)) ;
      const GALGAS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3073.getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.galgas", 122)).getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 122)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 123)) ;
    }
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::objectCompare (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntityName.objectCompare (inOperand.mProperty_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObsoleteEntityNames.objectCompare (inOperand.mProperty_mObsoleteEntityNames) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneratingEBManagedObjectContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @entityListForGeneratingEBManagedObjectContext-element type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelType.objectCompare (inOperand.mProperty_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_propertyKind & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingOutletName.objectCompare (inOperand.mProperty_mTableValueBindingOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingControllerName.objectCompare (inOperand.mProperty_mTableValueBindingControllerName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingControllerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @tableViewBindingGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  const GALGAS_tableViewBindingGenerationList_2D_element * p = (const GALGAS_tableViewBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEBViewOutletName.objectCompare (inOperand.mProperty_mEBViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerControllerName.objectCompare (inOperand.mProperty_mArrayControllerControllerName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @ebViewGraphicControllerBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEBViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mEBViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mArrayControllerControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerControllerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ebViewGraphicControllerBindingGenerationList-element type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_propertyKind & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_boundObjectList_2D_element::objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectString.objectCompare (inOperand.mProperty_mBoundObjectString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boundObjectList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @boundObjectList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBoundObjectString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_boundObjectList_2D_element::getter_mBoundObjectString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_boundObjectList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @boundObjectList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  const GALGAS_boundObjectList_2D_element * p = (const GALGAS_boundObjectList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boundObjectList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                                  const GALGAS_string & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionsString ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_string & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetTypeName.objectCompare (inOperand.mProperty_mTargetTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::getter_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @observablePropertyList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  const GALGAS_observablePropertyList_2D_element * p = (const GALGAS_observablePropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientDependencyListForGeneration_2D_element::objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDependency.objectCompare (inOperand.mProperty_mDependency) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentName.objectCompare (inOperand.mProperty_mFunctionArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentTypeString.objectCompare (inOperand.mProperty_mFunctionArgumentTypeString) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDependencyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDependency.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::getter_mDependency (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependency ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentTypeString ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @transientDependencyListForGeneration-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  const GALGAS_transientDependencyListForGeneration_2D_element * p = (const GALGAS_transientDependencyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::~ GALGAS_atomicPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::constructor_new (const GALGAS_atomicPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_atomicPropertyGenerationList_2D_element::objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_atomicPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @atomicPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @atomicPropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ("atomicPropertyGenerationList-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  const GALGAS_atomicPropertyGenerationList_2D_element * p = (const GALGAS_atomicPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element::~ GALGAS_toManyPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::constructor_new (const GALGAS_toManyPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toManyPropertyGenerationList_2D_element::objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toManyPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @toManyPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @toManyPropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ("toManyPropertyGenerationList-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  const GALGAS_toManyPropertyGenerationList_2D_element * p = (const GALGAS_toManyPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObjectTypeName.objectCompare (inOperand.mProperty_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelName.objectCompare (inOperand.mProperty_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  const GALGAS_validationStubRoutineListForGeneration_2D_element * p = (const GALGAS_validationStubRoutineListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  const GALGAS_multipleBindingGenerationList_2D_element * p = (const GALGAS_multipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element::GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) :
mProperty_mFilterPropertyName (),
mProperty_mFilterPropertyKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element::~ GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element::GALGAS_tableViewControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_propertyKind & inOperand1) :
mProperty_mFilterPropertyName (inOperand0),
mProperty_mFilterPropertyKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element GALGAS_tableViewControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                            const GALGAS_propertyKind & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerFilterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewControllerFilterListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerFilterListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerFilterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFilterPropertyName.objectCompare (inOperand.mProperty_mFilterPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilterPropertyKind.objectCompare (inOperand.mProperty_mFilterPropertyKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilterPropertyName.isValid () && mProperty_mFilterPropertyKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerFilterListForGeneration_2D_element::drop (void) {
  mProperty_mFilterPropertyName.drop () ;
  mProperty_mFilterPropertyKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerFilterListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerFilterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFilterPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilterPropertyKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerFilterListForGeneration_2D_element::getter_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_tableViewControllerFilterListForGeneration_2D_element::getter_mFilterPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @tableViewControllerFilterListForGeneration-element type                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration_2D_element ("tableViewControllerFilterListForGeneration-element",
                                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerFilterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerFilterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerFilterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element GALGAS_tableViewControllerFilterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerFilterListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerFilterListForGeneration_2D_element * p = (const GALGAS_tableViewControllerFilterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerFilterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerFilterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mRunAction (),
mProperty_mRegularBindingsGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mRunAction (inOperand2),
mProperty_mRegularBindingsGenerationList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnOutletTypeName.objectCompare (inOperand.mProperty_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunAction.objectCompare (inOperand.mProperty_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mRegularBindingsGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @tableViewControllerBoundColumnListForGeneration-element type                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ("tableViewControllerBoundColumnListForGeneration-element",
                                                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyKind.objectCompare (inOperand.mProperty_mSortPropertyKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyForSorting.objectCompare (inOperand.mProperty_mObservablePropertyForSorting) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerSortedColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           @tableViewControllerSortedColumnListForGeneration-element type                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ("tableViewControllerSortedColumnListForGeneration-element",
                                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap (),
mProperty_mPropertyGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_string & inOperand5,
                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                        const GALGAS_propertyGenerationList & inOperand7) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6),
mProperty_mPropertyGenerationList (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_propertyMap::constructor_emptyMap (HERE),
                                                             GALGAS_propertyGenerationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_string & inOperand5,
                                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                                        const GALGAS_propertyGenerationList & inOperand7 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_selectionControllerForGeneration_2D_element::objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerName.objectCompare (inOperand.mProperty_mSelectionControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerName.objectCompare (inOperand.mProperty_mBoundControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerPropertyName.objectCompare (inOperand.mProperty_mBoundControllerPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseTypeName.objectCompare (inOperand.mProperty_mBaseTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionTypeName.objectCompare (inOperand.mProperty_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyGenerationList.objectCompare (inOperand.mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @selectionControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_selectionControllerForGeneration_2D_element::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @selectionControllerForGeneration-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  const GALGAS_selectionControllerForGeneration_2D_element * p = (const GALGAS_selectionControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mProperty_mDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mProperty_mDefaultValue (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mProperty_mDefaultValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mProperty_mDefaultValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  const GALGAS_defaultValueList_2D_element * p = (const GALGAS_defaultValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @typeKindList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKindList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typeKindList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  const GALGAS_typeKindList_2D_element * p = (const GALGAS_typeKindList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::constructor_new (const GALGAS_propertyGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @propertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration GALGAS_propertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @propertyGenerationList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  const GALGAS_propertyGenerationList_2D_element * p = (const GALGAS_propertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientExternTypeList_2D_element::objectCompare (const GALGAS_transientExternTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsClass.objectCompare (inOperand.mProperty_mIsClass) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @transientExternTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientExternTypeList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientExternTypeList_2D_element::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @transientExternTypeList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  const GALGAS_transientExternTypeList_2D_element * p = (const GALGAS_transientExternTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientExternTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::constructor_new (const GALGAS_abstractFileGeneration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @fileGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractFileGeneration GALGAS_fileGenerationList_2D_element::getter_mFileGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGeneration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @fileGenerationList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  const GALGAS_fileGenerationList_2D_element * p = (const GALGAS_fileGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupReference.objectCompare (inOperand.mProperty_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupPath.objectCompare (inOperand.mProperty_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mChildrenRefs.objectCompare (inOperand.mProperty_mChildrenRefs) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupPath ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChildrenRefs ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_string & inOperand3,
                                                                                              const GALGAS_stringlist & inOperand4,
                                                                                              const GALGAS_string & inOperand5,
                                                                                              const GALGAS_string & inOperand6,
                                                                                              const GALGAS_stringlist & inOperand7,
                                                                                              const GALGAS_string & inOperand8,
                                                                                              const GALGAS_stringlist & inOperand9,
                                                                                              const GALGAS_string & inOperand10 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs (),
mProperty_mInfoPListFile () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_stringlist & inOperand4,
                                                                            const GALGAS_string & inOperand5,
                                                                            const GALGAS_string & inOperand6,
                                                                            const GALGAS_stringlist & inOperand7,
                                                                            const GALGAS_string & inOperand8,
                                                                            const GALGAS_stringlist & inOperand9,
                                                                            const GALGAS_string & inOperand10,
                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                            const GALGAS_string & inOperand12,
                                                                            const GALGAS_stringlist & inOperand13,
                                                                            const GALGAS_string & inOperand14) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13),
mProperty_mInfoPListFile (inOperand14) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_stringlist & inOperand4,
                                                                                            const GALGAS_string & inOperand5,
                                                                                            const GALGAS_string & inOperand6,
                                                                                            const GALGAS_stringlist & inOperand7,
                                                                                            const GALGAS_string & inOperand8,
                                                                                            const GALGAS_stringlist & inOperand9,
                                                                                            const GALGAS_string & inOperand10,
                                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                                            const GALGAS_string & inOperand12,
                                                                                            const GALGAS_stringlist & inOperand13,
                                                                                            const GALGAS_string & inOperand14 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependentTargets.objectCompare (inOperand.mProperty_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceBuildRef.objectCompare (inOperand.mProperty_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceFileBuildRefs.objectCompare (inOperand.mProperty_mResourceFileBuildRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPListFile.objectCompare (inOperand.mProperty_mInfoPListFile) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
  mProperty_mInfoPListFile.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependentTargets ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceBuildRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceFileBuildRefs ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPListFile ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileReference.objectCompare (inOperand.mProperty_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileName.objectCompare (inOperand.mProperty_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildReference.objectCompare (inOperand.mProperty_mBuildReference) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildReference ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibDescriptorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mainXibDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLine ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @mainXibDescriptorList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  const GALGAS_mainXibDescriptorList_2D_element * p = (const GALGAS_mainXibDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @mainXibLineDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElement ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @mainXibLineDescriptorList-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  const GALGAS_mainXibLineDescriptorList_2D_element * p = (const GALGAS_mainXibLineDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_easyBindings_grammar [91] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<entity_declaration>",// Index 5
  "<document_declaration>",// Index 6
  "<preferences_declaration>",// Index 7
  "<graphviz_declaration>",// Index 8
  "<outlet_class_declaration>",// Index 9
  "<binding_specification>",// Index 10
  "<outlet_declaration>",// Index 11
  "<observable_property>",// Index 12
  "<transient_declaration>",// Index 13
  "<simple_stored_declaration>",// Index 14
  "<toOne_relationship>",// Index 15
  "<toMany_relationship>",// Index 16
  "<action_declaration>",// Index 17
  "<booleanMultipleBindingExpression>",// Index 18
  "<booleanMultipleBindingComparison>",// Index 19
  "<booleanMultipleBindingTerm>",// Index 20
  "<booleanMultipleBindingOperand>",// Index 21
  "<binding_option_list>",// Index 22
  "<controller_declaration>",// Index 23
  "<column_bindings>",// Index 24
  "<explicit_value>",// Index 25
  "<xcode_project>",// Index 26
  "<main_xib>",// Index 27
  "<main_xib_line>",// Index 28
  "<select_easyBindings_5F_syntax_0>",// Index 29
  "<select_easyBindings_5F_syntax_1>",// Index 30
  "<select_easyBindings_5F_syntax_2>",// Index 31
  "<select_easyBindings_5F_syntax_3>",// Index 32
  "<select_easyBindings_5F_syntax_4>",// Index 33
  "<select_easyBindings_5F_syntax_5>",// Index 34
  "<select_easyBindings_5F_syntax_6>",// Index 35
  "<select_easyBindings_5F_syntax_7>",// Index 36
  "<select_easyBindings_5F_syntax_8>",// Index 37
  "<select_easyBindings_5F_syntax_9>",// Index 38
  "<select_easyBindings_5F_syntax_10>",// Index 39
  "<select_easyBindings_5F_syntax_11>",// Index 40
  "<select_easyBindings_5F_syntax_12>",// Index 41
  "<select_easyBindings_5F_syntax_13>",// Index 42
  "<select_easyBindings_5F_syntax_14>",// Index 43
  "<select_easyBindings_5F_syntax_15>",// Index 44
  "<select_easyBindings_5F_syntax_16>",// Index 45
  "<select_easyBindings_5F_syntax_17>",// Index 46
  "<select_easyBindings_5F_syntax_18>",// Index 47
  "<select_easyBindings_5F_syntax_19>",// Index 48
  "<select_easyBindings_5F_syntax_20>",// Index 49
  "<select_easyBindings_5F_syntax_21>",// Index 50
  "<select_easyBindings_5F_syntax_22>",// Index 51
  "<select_easyBindings_5F_syntax_23>",// Index 52
  "<select_easyBindings_5F_syntax_24>",// Index 53
  "<select_easyBindings_5F_syntax_25>",// Index 54
  "<select_easyBindings_5F_syntax_26>",// Index 55
  "<select_easyBindings_5F_syntax_27>",// Index 56
  "<select_easyBindings_5F_syntax_28>",// Index 57
  "<select_easyBindings_5F_syntax_29>",// Index 58
  "<select_easyBindings_5F_syntax_30>",// Index 59
  "<select_easyBindings_5F_syntax_31>",// Index 60
  "<select_easyBindings_5F_syntax_32>",// Index 61
  "<select_easyBindings_5F_syntax_33>",// Index 62
  "<select_easyBindings_5F_syntax_34>",// Index 63
  "<select_easyBindings_5F_syntax_35>",// Index 64
  "<select_easyBindings_5F_syntax_36>",// Index 65
  "<select_easyBindings_5F_syntax_37>",// Index 66
  "<select_easyBindings_5F_syntax_38>",// Index 67
  "<select_easyBindings_5F_syntax_39>",// Index 68
  "<select_easyBindings_5F_syntax_40>",// Index 69
  "<select_easyBindings_5F_syntax_41>",// Index 70
  "<select_easyBindings_5F_syntax_42>",// Index 71
  "<select_easyBindings_5F_syntax_43>",// Index 72
  "<select_easyBindings_5F_syntax_44>",// Index 73
  "<select_easyBindings_5F_syntax_45>",// Index 74
  "<select_easyBindings_5F_syntax_46>",// Index 75
  "<select_easyBindings_5F_syntax_47>",// Index 76
  "<select_easyBindings_5F_syntax_48>",// Index 77
  "<select_easyBindings_5F_syntax_49>",// Index 78
  "<select_easyBindings_5F_syntax_50>",// Index 79
  "<select_easyBindings_5F_syntax_51>",// Index 80
  "<select_easyBindings_5F_syntax_52>",// Index 81
  "<select_easyBindings_5F_syntax_53>",// Index 82
  "<select_easyBindings_5F_syntax_54>",// Index 83
  "<select_easyBindings_5F_syntax_55>",// Index 84
  "<select_easyBindings_5F_syntax_56>",// Index 85
  "<select_easyBindings_5F_syntax_57>",// Index 86
  "<select_easyBindings_5F_syntax_58>",// Index 87
  "<select_easyBindings_5F_syntax_59>",// Index 88
  "<select_easyBindings_5F_syntax_60>",// Index 89
  "<>"// Index 90
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_easyBindings_grammar [] = {
// State S0 (index = 0)
  C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S1 (index = 31)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (26)
, END
// State S2 (index = 34)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (27)
, END
// State S3 (index = 37)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S4 (index = 40)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (53)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (53)
, END
// State S5 (index = 45)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S6 (index = 48)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (30)
, END
// State S7 (index = 51)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (31)
, END
// State S8 (index = 54)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (83)
, END
// State S9 (index = 57)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (32)
, END
// State S10 (index = 60)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (33)
, END
// State S11 (index = 63)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (34)
, END
// State S12 (index = 66)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S13 (index = 69)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S14 (index = 100)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S15 (index = 131)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S16 (index = 162)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S17 (index = 193)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S18 (index = 224)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S19 (index = 255)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S20 (index = 286)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S21 (index = 317)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S22 (index = 348)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S23 (index = 379)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S24 (index = 382)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (54)
, END
// State S25 (index = 387)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (47)
, END
// State S26 (index = 390)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (48)
, END
// State S27 (index = 393)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (50)
, END
// State S28 (index = 398)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (52)
, END
// State S29 (index = 401)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (53)
, END
// State S30 (index = 404)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S31 (index = 431)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (74)
, END
// State S32 (index = 434)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (75)
, END
// State S33 (index = 437)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (76)
, END
// State S34 (index = 440)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S35 (index = 447)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S36 (index = 450)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S37 (index = 453)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S38 (index = 456)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S39 (index = 459)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S40 (index = 462)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S41 (index = 465)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S42 (index = 468)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (45)
, END
// State S43 (index = 471)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (46)
, END
// State S44 (index = 474)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (47)
, END
// State S45 (index = 477)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (55)
, END
// State S46 (index = 480)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (81)
, END
// State S47 (index = 483)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (82)
, END
// State S48 (index = 486)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S49 (index = 517)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (48)
, END
// State S50 (index = 520)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (49)
, END
// State S51 (index = 523)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (84)
, END
// State S52 (index = 526)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (85)
, END
// State S53 (index = 529)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (86)
, END
// State S54 (index = 532)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (87)
, END
// State S55 (index = 535)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (88)
, END
// State S56 (index = 540)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (90)
, END
// State S57 (index = 543)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (91)
, END
// State S58 (index = 546)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (143)
, END
// State S59 (index = 549)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (92)
, END
// State S60 (index = 554)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (94)
, END
// State S61 (index = 557)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (95)
, END
// State S62 (index = 560)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (96)
, END
// State S63 (index = 563)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (97)
, END
// State S64 (index = 566)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (98)
, END
// State S65 (index = 569)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S66 (index = 596)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S67 (index = 623)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S68 (index = 650)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S69 (index = 677)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S70 (index = 704)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S71 (index = 731)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S72 (index = 758)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (106)
, END
// State S73 (index = 761)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (107)
, END
// State S74 (index = 764)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S75 (index = 795)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (108)
, END
// State S76 (index = 798)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (33)
, END
// State S77 (index = 829)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (214)
, END
// State S78 (index = 834)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (109)
, END
// State S79 (index = 837)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (111)
, END
// State S80 (index = 842)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (211)
, END
// State S81 (index = 847)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S82 (index = 850)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (117)
, END
// State S83 (index = 853)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S84 (index = 856)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (118)
, END
// State S85 (index = 859)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S86 (index = 864)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (121)
, END
// State S87 (index = 867)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (122)
, END
// State S88 (index = 870)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (88)
, END
// State S89 (index = 875)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (124)
, END
// State S90 (index = 878)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (125)
, END
// State S91 (index = 881)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (126)
, END
// State S92 (index = 884)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (92)
, END
// State S93 (index = 889)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (128)
, END
// State S94 (index = 892)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (129)
, END
// State S95 (index = 895)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (130)
, END
// State S96 (index = 898)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (131)
, END
// State S97 (index = 901)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (132)
, END
// State S98 (index = 904)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (133)
, END
// State S99 (index = 907)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, END
// State S100 (index = 910)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S101 (index = 913)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, END
// State S102 (index = 916)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S103 (index = 919)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S104 (index = 922)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S105 (index = 925)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S106 (index = 928)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S107 (index = 959)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (134)
, END
// State S108 (index = 962)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (135)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (136)
, END
// State S109 (index = 967)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (213)
, END
// State S110 (index = 972)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (219)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (219)
, END
// State S111 (index = 977)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (138)
, END
// State S112 (index = 980)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (139)
, END
// State S113 (index = 983)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (216)
, END
// State S114 (index = 988)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S115 (index = 995)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (143)
, END
// State S116 (index = 998)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (144)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (56)
, END
// State S117 (index = 1005)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (146)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (85)
, END
// State S118 (index = 1020)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S119 (index = 1051)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (148)
, END
// State S120 (index = 1054)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (149)
, END
// State S121 (index = 1057)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S122 (index = 1078)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (155)
, END
// State S123 (index = 1081)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (149)
, END
// State S124 (index = 1084)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (156)
, END
// State S125 (index = 1087)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (157)
, END
// State S126 (index = 1090)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S127 (index = 1105)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (155)
, END
// State S128 (index = 1108)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (165)
, END
// State S129 (index = 1111)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, END
// State S130 (index = 1142)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (167)
, END
// State S131 (index = 1147)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (171)
, END
// State S132 (index = 1154)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (173)
, END
// State S133 (index = 1157)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (174)
, END
// State S134 (index = 1160)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (175)
, END
// State S135 (index = 1163)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (96)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (96)
, END
// State S136 (index = 1168)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (95)
, END
// State S137 (index = 1173)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (176)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (177)
, END
// State S138 (index = 1178)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (218)
, END
// State S139 (index = 1183)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (215)
, END
// State S140 (index = 1188)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (111)
, END
// State S141 (index = 1193)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (35)
, END
// State S142 (index = 1196)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (211)
, END
// State S143 (index = 1201)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S144 (index = 1232)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (181)
, END
// State S145 (index = 1235)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (60)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (182)
, END
// State S146 (index = 1240)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (184)
, END
// State S147 (index = 1243)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S148 (index = 1256)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S149 (index = 1261)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S150 (index = 1292)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S151 (index = 1313)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S152 (index = 1334)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S153 (index = 1355)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S154 (index = 1376)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (196)
, END
// State S155 (index = 1379)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (197)
, END
// State S156 (index = 1382)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (198)
, END
// State S157 (index = 1385)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (199)
, END
// State S158 (index = 1388)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (200)
, END
// State S159 (index = 1391)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (202)
, END
// State S160 (index = 1396)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S161 (index = 1419)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S162 (index = 1442)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (222)
, END
// State S163 (index = 1445)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S164 (index = 1462)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (224)
, END
// State S165 (index = 1465)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (226)
, END
// State S166 (index = 1472)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (175)
, END
// State S167 (index = 1475)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (176)
, END
// State S168 (index = 1478)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (228)
, END
// State S169 (index = 1481)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (177)
, END
// State S170 (index = 1484)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (178)
, END
// State S171 (index = 1487)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (179)
, END
// State S172 (index = 1490)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (229)
, END
// State S173 (index = 1493)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (230)
, END
// State S174 (index = 1496)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, END
// State S175 (index = 1499)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (144)
, END
// State S176 (index = 1504)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (97)
, END
// State S177 (index = 1511)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (98)
, END
// State S178 (index = 1518)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (234)
, END
// State S179 (index = 1525)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (216)
, END
// State S180 (index = 1530)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (212)
, END
// State S181 (index = 1533)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (58)
, END
// State S182 (index = 1538)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (239)
, END
// State S183 (index = 1541)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (240)
, END
// State S184 (index = 1544)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (86)
, END
// State S185 (index = 1557)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S186 (index = 1570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S187 (index = 1583)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S188 (index = 1596)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S189 (index = 1609)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (189)
, END
// State S190 (index = 1622)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (246)
, END
// State S191 (index = 1625)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, END
// State S192 (index = 1628)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S193 (index = 1631)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S194 (index = 1634)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S195 (index = 1637)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S196 (index = 1640)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S197 (index = 1671)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, END
// State S198 (index = 1698)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S199 (index = 1715)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (13)
, END
// State S200 (index = 1746)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S201 (index = 1761)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (111)
, END
// State S202 (index = 1764)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (110)
, END
// State S203 (index = 1767)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (258)
, END
// State S204 (index = 1770)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (259)
, END
// State S205 (index = 1773)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S206 (index = 1796)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (261)
, END
// State S207 (index = 1799)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (262)
, END
// State S208 (index = 1802)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (263)
, END
// State S209 (index = 1805)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (120)
, END
// State S210 (index = 1848)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (121)
, END
// State S211 (index = 1891)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (122)
, END
// State S212 (index = 1934)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (264)
, END
// State S213 (index = 1937)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S214 (index = 1960)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S215 (index = 1999)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S216 (index = 2038)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S217 (index = 2053)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S218 (index = 2076)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S219 (index = 2111)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (168)
, END
// State S220 (index = 2150)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (12)
, END
// State S221 (index = 2193)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S222 (index = 2208)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (280)
, END
// State S223 (index = 2211)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, END
// State S224 (index = 2230)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (11)
, END
// State S225 (index = 2257)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (283)
, END
// State S226 (index = 2260)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (284)
, END
// State S227 (index = 2263)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (285)
, END
// State S228 (index = 2266)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, END
// State S229 (index = 2269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (287)
, END
// State S230 (index = 2272)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S231 (index = 2289)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (289)
, END
// State S232 (index = 2292)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (290)
, END
// State S233 (index = 2295)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (291)
, END
// State S234 (index = 2298)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (135)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (136)
, END
// State S235 (index = 2303)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (293)
, END
// State S236 (index = 2308)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (217)
, END
// State S237 (index = 2311)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (295)
, END
// State S238 (index = 2314)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (296)
, END
// State S239 (index = 2317)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (61)
, END
// State S240 (index = 2320)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S241 (index = 2347)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, END
// State S242 (index = 2350)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, END
// State S243 (index = 2353)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (90)
, END
// State S244 (index = 2356)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (91)
, END
// State S245 (index = 2359)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, END
// State S246 (index = 2362)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S247 (index = 2393)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (206)
, END
// State S248 (index = 2402)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (207)
, END
// State S249 (index = 2411)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S250 (index = 2428)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (203)
, END
// State S251 (index = 2437)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (201)
, END
// State S252 (index = 2446)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (202)
, END
// State S253 (index = 2455)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (308)
, END
// State S254 (index = 2458)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (205)
, END
// State S255 (index = 2467)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (309)
, END
// State S256 (index = 2470)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (32)
, END
// State S257 (index = 2479)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (104)
, END
// State S258 (index = 2482)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (310)
, END
// State S259 (index = 2485)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (311)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (312)
, END
// State S260 (index = 2490)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (314)
, END
// State S261 (index = 2493)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (315)
, END
// State S262 (index = 2496)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (316)
, END
// State S263 (index = 2499)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (317)
, END
// State S264 (index = 2502)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (318)
, END
// State S265 (index = 2505)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S266 (index = 2544)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, END
// State S267 (index = 2547)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S268 (index = 2570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (19)
, END
// State S269 (index = 2591)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S270 (index = 2614)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S271 (index = 2637)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S272 (index = 2660)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S273 (index = 2683)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S274 (index = 2706)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S275 (index = 2729)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S276 (index = 2752)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S277 (index = 2775)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S278 (index = 2798)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S279 (index = 2833)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, END
// State S280 (index = 2836)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (328)
, END
// State S281 (index = 2839)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S282 (index = 2856)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (330)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (171)
, END
// State S283 (index = 2877)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (333)
, END
// State S284 (index = 2880)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (334)
, END
// State S285 (index = 2883)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S286 (index = 2914)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (335)
, END
// State S287 (index = 2917)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (336)
, END
// State S288 (index = 2920)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (337)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, END
// State S289 (index = 2925)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (339)
, END
// State S290 (index = 2928)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (145)
, END
// State S291 (index = 2931)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S292 (index = 2948)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (176)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (177)
, END
// State S293 (index = 2953)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (342)
, END
// State S294 (index = 2956)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (343)
, END
// State S295 (index = 2959)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (58)
, END
// State S296 (index = 2964)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (57)
, END
// State S297 (index = 2969)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (345)
, END
// State S298 (index = 2972)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (346)
, END
// State S299 (index = 2975)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S300 (index = 3002)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S301 (index = 3029)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S302 (index = 3056)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S303 (index = 3083)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S304 (index = 3110)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S305 (index = 3137)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (298)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (64)
, END
// State S306 (index = 3164)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (354)
, END
// State S307 (index = 3167)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (355)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (209)
, END
// State S308 (index = 3172)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (204)
, END
// State S309 (index = 3181)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S310 (index = 3212)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S311 (index = 3227)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (358)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (139)
, END
// State S312 (index = 3272)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (360)
, END
// State S313 (index = 3275)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (119)
, END
// State S314 (index = 3318)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S315 (index = 3357)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (361)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S316 (index = 3402)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (363)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (135)
, END
// State S317 (index = 3447)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (365)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (129)
, END
// State S318 (index = 3492)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (367)
, END
// State S319 (index = 3495)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S320 (index = 3518)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (162)
, END
// State S321 (index = 3541)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S322 (index = 3564)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (164)
, END
// State S323 (index = 3587)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (165)
, END
// State S324 (index = 3610)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S325 (index = 3633)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (167)
, END
// State S326 (index = 3656)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (168)
, END
// State S327 (index = 3695)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (168)
, END
// State S328 (index = 3734)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (371)
, END
// State S329 (index = 3751)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, END
// State S330 (index = 3770)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (374)
, END
// State S331 (index = 3773)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S332 (index = 3788)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S333 (index = 3807)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (376)
, END
// State S334 (index = 3810)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, END
// State S335 (index = 3813)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (27)
, END
// State S336 (index = 3844)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (28)
, END
// State S337 (index = 3875)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (377)
, END
// State S338 (index = 3878)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (378)
, END
// State S339 (index = 3881)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (379)
, END
// State S340 (index = 3884)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (380)
, END
// State S341 (index = 3889)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (234)
, END
// State S342 (index = 3896)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (383)
, END
// State S343 (index = 3899)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S344 (index = 3930)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (59)
, END
// State S345 (index = 3933)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (384)
, END
// State S346 (index = 3936)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (385)
, END
// State S347 (index = 3939)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S348 (index = 3942)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S349 (index = 3945)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S350 (index = 3948)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S351 (index = 3951)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S352 (index = 3954)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S353 (index = 3957)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S354 (index = 3960)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S355 (index = 3991)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S356 (index = 4008)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (387)
, END
// State S357 (index = 4011)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, END
// State S358 (index = 4014)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (388)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (389)
, END
// State S359 (index = 4019)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S360 (index = 4062)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (390)
, END
// State S361 (index = 4065)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (391)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (392)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (393)
, END
// State S362 (index = 4072)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S363 (index = 4115)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (395)
, END
// State S364 (index = 4118)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (118)
, END
// State S365 (index = 4161)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (396)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (397)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (398)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (399)
, END
// State S366 (index = 4170)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S367 (index = 4213)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (401)
, END
// State S368 (index = 4216)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S369 (index = 4237)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (169)
, END
// State S370 (index = 4272)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (170)
, END
// State S371 (index = 4307)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (402)
, END
// State S372 (index = 4310)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (163)
, END
// State S373 (index = 4325)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, END
// State S374 (index = 4342)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (404)
, END
// State S375 (index = 4345)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, END
// State S376 (index = 4348)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, END
// State S377 (index = 4351)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (405)
, END
// State S378 (index = 4354)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (407)
, END
// State S379 (index = 4359)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (409)
, END
// State S380 (index = 4362)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S381 (index = 4379)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (411)
, END
// State S382 (index = 4382)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (94)
, END
// State S383 (index = 4387)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (412)
, END
// State S384 (index = 4390)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (1)
, END
// State S385 (index = 4417)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (413)
, END
// State S386 (index = 4422)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (355)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (209)
, END
// State S387 (index = 4427)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (208)
, END
// State S388 (index = 4436)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (140)
, END
// State S389 (index = 4479)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (416)
, END
// State S390 (index = 4482)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S391 (index = 4525)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (126)
, END
// State S392 (index = 4568)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (417)
, END
// State S393 (index = 4571)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S394 (index = 4614)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S395 (index = 4657)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (136)
, END
// State S396 (index = 4700)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (134)
, END
// State S397 (index = 4743)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (418)
, END
// State S398 (index = 4746)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (133)
, END
// State S399 (index = 4789)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (419)
, END
// State S400 (index = 4792)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (130)
, END
// State S401 (index = 4835)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (123)
, END
// State S402 (index = 4878)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, END
// State S403 (index = 4893)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, END
// State S404 (index = 4896)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S405 (index = 4913)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S406 (index = 4930)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (182)
, END
// State S407 (index = 4933)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (183)
, END
// State S408 (index = 4936)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (422)
, END
// State S409 (index = 4939)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (423)
, END
// State S410 (index = 4942)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (380)
, END
// State S411 (index = 4947)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, END
// State S412 (index = 4978)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (425)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (101)
, END
// State S413 (index = 4983)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (427)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (428)
, END
// State S414 (index = 4988)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (430)
, END
// State S415 (index = 4991)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (210)
, END
// State S416 (index = 4994)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (431)
, END
// State S417 (index = 4997)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (432)
, END
// State S418 (index = 5000)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (433)
, END
// State S419 (index = 5003)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (434)
, END
// State S420 (index = 5006)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (435)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, END
// State S421 (index = 5011)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (337)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, END
// State S422 (index = 5016)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (438)
, END
// State S423 (index = 5019)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, END
// State S424 (index = 5050)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (147)
, END
// State S425 (index = 5053)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (439)
, END
// State S426 (index = 5056)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (440)
, END
// State S427 (index = 5059)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (441)
, END
// State S428 (index = 5062)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (442)
, END
// State S429 (index = 5065)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (151)
, END
// State S430 (index = 5068)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, END
// State S431 (index = 5095)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S432 (index = 5138)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (127)
, END
// State S433 (index = 5181)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (131)
, END
// State S434 (index = 5224)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (132)
, END
// State S435 (index = 5267)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (443)
, END
// State S436 (index = 5270)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (444)
, END
// State S437 (index = 5273)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (181)
, END
// State S438 (index = 5276)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (445)
, END
// State S439 (index = 5283)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (447)
, END
// State S440 (index = 5286)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S441 (index = 5289)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (152)
, END
// State S442 (index = 5292)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, END
// State S443 (index = 5295)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (448)
, END
// State S444 (index = 5298)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (172)
, END
// State S445 (index = 5317)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (449)
, END
// State S446 (index = 5320)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (450)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (451)
, END
// State S447 (index = 5325)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (453)
, END
// State S448 (index = 5328)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S449 (index = 5345)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (455)
, END
// State S450 (index = 5352)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (188)
, END
// State S451 (index = 5383)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (457)
, END
// State S452 (index = 5388)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, END
// State S453 (index = 5419)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (425)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (101)
, END
// State S454 (index = 5424)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (435)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, END
// State S455 (index = 5429)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (461)
, END
// State S456 (index = 5432)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (185)
, END
// State S457 (index = 5437)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (462)
, END
// State S458 (index = 5440)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (463)
, END
// State S459 (index = 5443)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (102)
, END
// State S460 (index = 5446)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, END
// State S461 (index = 5449)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (455)
, END
// State S462 (index = 5456)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (465)
, END
// State S463 (index = 5461)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_objectController, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (189)
, END
// State S464 (index = 5492)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (187)
, END
// State S465 (index = 5497)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (467)
, END
// State S466 (index = 5500)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (468)
, END
// State S467 (index = 5503)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (193)
, END
// State S468 (index = 5506)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (469)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (471)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S469 (index = 5519)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (475)
, END
// State S470 (index = 5522)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S471 (index = 5545)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (214)
, END
// State S472 (index = 5568)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S473 (index = 5585)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (457)
, END
// State S474 (index = 5590)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (30)
, END
// State S475 (index = 5595)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (480)
, END
// State S476 (index = 5598)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (469)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (471)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S477 (index = 5611)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (469)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (471)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S478 (index = 5624)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (483)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (199)
, END
// State S479 (index = 5641)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (191)
, END
// State S480 (index = 5644)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (485)
, END
// State S481 (index = 5647)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (196)
, END
// State S482 (index = 5652)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (197)
, END
// State S483 (index = 5657)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (212)
, END
// State S484 (index = 5674)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (330)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (171)
, END
// State S485 (index = 5695)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (469)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (471)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S486 (index = 5708)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (483)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (199)
, END
// State S487 (index = 5725)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (469)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (471)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S488 (index = 5738)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (195)
, END
// State S489 (index = 5743)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (200)
, END
// State S490 (index = 5758)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (198)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [491] = {
  0  // S0
, 31  // S1
, 34  // S2
, 37  // S3
, 40  // S4
, 45  // S5
, 48  // S6
, 51  // S7
, 54  // S8
, 57  // S9
, 60  // S10
, 63  // S11
, 66  // S12
, 69  // S13
, 100  // S14
, 131  // S15
, 162  // S16
, 193  // S17
, 224  // S18
, 255  // S19
, 286  // S20
, 317  // S21
, 348  // S22
, 379  // S23
, 382  // S24
, 387  // S25
, 390  // S26
, 393  // S27
, 398  // S28
, 401  // S29
, 404  // S30
, 431  // S31
, 434  // S32
, 437  // S33
, 440  // S34
, 447  // S35
, 450  // S36
, 453  // S37
, 456  // S38
, 459  // S39
, 462  // S40
, 465  // S41
, 468  // S42
, 471  // S43
, 474  // S44
, 477  // S45
, 480  // S46
, 483  // S47
, 486  // S48
, 517  // S49
, 520  // S50
, 523  // S51
, 526  // S52
, 529  // S53
, 532  // S54
, 535  // S55
, 540  // S56
, 543  // S57
, 546  // S58
, 549  // S59
, 554  // S60
, 557  // S61
, 560  // S62
, 563  // S63
, 566  // S64
, 569  // S65
, 596  // S66
, 623  // S67
, 650  // S68
, 677  // S69
, 704  // S70
, 731  // S71
, 758  // S72
, 761  // S73
, 764  // S74
, 795  // S75
, 798  // S76
, 829  // S77
, 834  // S78
, 837  // S79
, 842  // S80
, 847  // S81
, 850  // S82
, 853  // S83
, 856  // S84
, 859  // S85
, 864  // S86
, 867  // S87
, 870  // S88
, 875  // S89
, 878  // S90
, 881  // S91
, 884  // S92
, 889  // S93
, 892  // S94
, 895  // S95
, 898  // S96
, 901  // S97
, 904  // S98
, 907  // S99
, 910  // S100
, 913  // S101
, 916  // S102
, 919  // S103
, 922  // S104
, 925  // S105
, 928  // S106
, 959  // S107
, 962  // S108
, 967  // S109
, 972  // S110
, 977  // S111
, 980  // S112
, 983  // S113
, 988  // S114
, 995  // S115
, 998  // S116
, 1005  // S117
, 1020  // S118
, 1051  // S119
, 1054  // S120
, 1057  // S121
, 1078  // S122
, 1081  // S123
, 1084  // S124
, 1087  // S125
, 1090  // S126
, 1105  // S127
, 1108  // S128
, 1111  // S129
, 1142  // S130
, 1147  // S131
, 1154  // S132
, 1157  // S133
, 1160  // S134
, 1163  // S135
, 1168  // S136
, 1173  // S137
, 1178  // S138
, 1183  // S139
, 1188  // S140
, 1193  // S141
, 1196  // S142
, 1201  // S143
, 1232  // S144
, 1235  // S145
, 1240  // S146
, 1243  // S147
, 1256  // S148
, 1261  // S149
, 1292  // S150
, 1313  // S151
, 1334  // S152
, 1355  // S153
, 1376  // S154
, 1379  // S155
, 1382  // S156
, 1385  // S157
, 1388  // S158
, 1391  // S159
, 1396  // S160
, 1419  // S161
, 1442  // S162
, 1445  // S163
, 1462  // S164
, 1465  // S165
, 1472  // S166
, 1475  // S167
, 1478  // S168
, 1481  // S169
, 1484  // S170
, 1487  // S171
, 1490  // S172
, 1493  // S173
, 1496  // S174
, 1499  // S175
, 1504  // S176
, 1511  // S177
, 1518  // S178
, 1525  // S179
, 1530  // S180
, 1533  // S181
, 1538  // S182
, 1541  // S183
, 1544  // S184
, 1557  // S185
, 1570  // S186
, 1583  // S187
, 1596  // S188
, 1609  // S189
, 1622  // S190
, 1625  // S191
, 1628  // S192
, 1631  // S193
, 1634  // S194
, 1637  // S195
, 1640  // S196
, 1671  // S197
, 1698  // S198
, 1715  // S199
, 1746  // S200
, 1761  // S201
, 1764  // S202
, 1767  // S203
, 1770  // S204
, 1773  // S205
, 1796  // S206
, 1799  // S207
, 1802  // S208
, 1805  // S209
, 1848  // S210
, 1891  // S211
, 1934  // S212
, 1937  // S213
, 1960  // S214
, 1999  // S215
, 2038  // S216
, 2053  // S217
, 2076  // S218
, 2111  // S219
, 2150  // S220
, 2193  // S221
, 2208  // S222
, 2211  // S223
, 2230  // S224
, 2257  // S225
, 2260  // S226
, 2263  // S227
, 2266  // S228
, 2269  // S229
, 2272  // S230
, 2289  // S231
, 2292  // S232
, 2295  // S233
, 2298  // S234
, 2303  // S235
, 2308  // S236
, 2311  // S237
, 2314  // S238
, 2317  // S239
, 2320  // S240
, 2347  // S241
, 2350  // S242
, 2353  // S243
, 2356  // S244
, 2359  // S245
, 2362  // S246
, 2393  // S247
, 2402  // S248
, 2411  // S249
, 2428  // S250
, 2437  // S251
, 2446  // S252
, 2455  // S253
, 2458  // S254
, 2467  // S255
, 2470  // S256
, 2479  // S257
, 2482  // S258
, 2485  // S259
, 2490  // S260
, 2493  // S261
, 2496  // S262
, 2499  // S263
, 2502  // S264
, 2505  // S265
, 2544  // S266
, 2547  // S267
, 2570  // S268
, 2591  // S269
, 2614  // S270
, 2637  // S271
, 2660  // S272
, 2683  // S273
, 2706  // S274
, 2729  // S275
, 2752  // S276
, 2775  // S277
, 2798  // S278
, 2833  // S279
, 2836  // S280
, 2839  // S281
, 2856  // S282
, 2877  // S283
, 2880  // S284
, 2883  // S285
, 2914  // S286
, 2917  // S287
, 2920  // S288
, 2925  // S289
, 2928  // S290
, 2931  // S291
, 2948  // S292
, 2953  // S293
, 2956  // S294
, 2959  // S295
, 2964  // S296
, 2969  // S297
, 2972  // S298
, 2975  // S299
, 3002  // S300
, 3029  // S301
, 3056  // S302
, 3083  // S303
, 3110  // S304
, 3137  // S305
, 3164  // S306
, 3167  // S307
, 3172  // S308
, 3181  // S309
, 3212  // S310
, 3227  // S311
, 3272  // S312
, 3275  // S313
, 3318  // S314
, 3357  // S315
, 3402  // S316
, 3447  // S317
, 3492  // S318
, 3495  // S319
, 3518  // S320
, 3541  // S321
, 3564  // S322
, 3587  // S323
, 3610  // S324
, 3633  // S325
, 3656  // S326
, 3695  // S327
, 3734  // S328
, 3751  // S329
, 3770  // S330
, 3773  // S331
, 3788  // S332
, 3807  // S333
, 3810  // S334
, 3813  // S335
, 3844  // S336
, 3875  // S337
, 3878  // S338
, 3881  // S339
, 3884  // S340
, 3889  // S341
, 3896  // S342
, 3899  // S343
, 3930  // S344
, 3933  // S345
, 3936  // S346
, 3939  // S347
, 3942  // S348
, 3945  // S349
, 3948  // S350
, 3951  // S351
, 3954  // S352
, 3957  // S353
, 3960  // S354
, 3991  // S355
, 4008  // S356
, 4011  // S357
, 4014  // S358
, 4019  // S359
, 4062  // S360
, 4065  // S361
, 4072  // S362
, 4115  // S363
, 4118  // S364
, 4161  // S365
, 4170  // S366
, 4213  // S367
, 4216  // S368
, 4237  // S369
, 4272  // S370
, 4307  // S371
, 4310  // S372
, 4325  // S373
, 4342  // S374
, 4345  // S375
, 4348  // S376
, 4351  // S377
, 4354  // S378
, 4359  // S379
, 4362  // S380
, 4379  // S381
, 4382  // S382
, 4387  // S383
, 4390  // S384
, 4417  // S385
, 4422  // S386
, 4427  // S387
, 4436  // S388
, 4479  // S389
, 4482  // S390
, 4525  // S391
, 4568  // S392
, 4571  // S393
, 4614  // S394
, 4657  // S395
, 4700  // S396
, 4743  // S397
, 4746  // S398
, 4789  // S399
, 4792  // S400
, 4835  // S401
, 4878  // S402
, 4893  // S403
, 4896  // S404
, 4913  // S405
, 4930  // S406
, 4933  // S407
, 4936  // S408
, 4939  // S409
, 4942  // S410
, 4947  // S411
, 4978  // S412
, 4983  // S413
, 4988  // S414
, 4991  // S415
, 4994  // S416
, 4997  // S417
, 5000  // S418
, 5003  // S419
, 5006  // S420
, 5011  // S421
, 5016  // S422
, 5019  // S423
, 5050  // S424
, 5053  // S425
, 5056  // S426
, 5059  // S427
, 5062  // S428
, 5065  // S429
, 5068  // S430
, 5095  // S431
, 5138  // S432
, 5181  // S433
, 5224  // S434
, 5267  // S435
, 5270  // S436
, 5273  // S437
, 5276  // S438
, 5283  // S439
, 5286  // S440
, 5289  // S441
, 5292  // S442
, 5295  // S443
, 5298  // S444
, 5317  // S445
, 5320  // S446
, 5325  // S447
, 5328  // S448
, 5345  // S449
, 5352  // S450
, 5383  // S451
, 5388  // S452
, 5419  // S453
, 5424  // S454
, 5429  // S455
, 5432  // S456
, 5437  // S457
, 5440  // S458
, 5443  // S459
, 5446  // S460
, 5449  // S461
, 5456  // S462
, 5461  // S463
, 5492  // S464
, 5497  // S465
, 5500  // S466
, 5503  // S467
, 5506  // S468
, 5519  // S469
, 5522  // S470
, 5545  // S471
, 5568  // S472
, 5585  // S473
, 5590  // S474
, 5595  // S475
, 5598  // S476
, 5611  // S477
, 5624  // S478
, 5641  // S479
, 5644  // S480
, 5647  // S481
, 5652  // S482
, 5657  // S483
, 5674  // S484
, 5695  // S485
, 5708  // S486
, 5725  // S487
, 5738  // S488
, 5743  // S489
, 5758  // S490
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [29] = {0, 12,
  3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 23,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 35,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 36,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 37,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 38,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 39,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 40,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 41,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 42,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 43,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 44,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_24 [3] = {33, 46, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_27 [3] = {30, 51, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_30 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 72,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_34 [3] = {87, 80, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_48 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 83,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_55 [3] = {63, 89, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_59 [3] = {66, 93, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 99,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 100,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 101,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 102,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_69 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 103,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_70 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 104,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_71 [19] = {2, 65,
  11, 66,
  13, 67,
  14, 68,
  16, 69,
  17, 70,
  23, 71,
  39, 105,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_79 [5] = {28, 112,
  89, 113, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_80 [3] = {86, 115, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [3] = {31, 120, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_88 [3] = {63, 123, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_92 [3] = {66, 127, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_108 [3] = {44, 137, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_113 [3] = {88, 141, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_114 [3] = {87, 142, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_116 [3] = {34, 145, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_117 [3] = {41, 147, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_121 [13] = {11, 150,
  13, 151,
  17, 152,
  23, 153,
  38, 154,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_126 [3] = {48, 164, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_130 [3] = {73, 168, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_131 [3] = {74, 172, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_137 [3] = {45, 178, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_140 [3] = {89, 179, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [3] = {86, 180, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_145 [3] = {36, 183, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_147 [3] = {42, 190, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_148 [3] = {31, 191, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_150 [13] = {11, 150,
  13, 151,
  17, 152,
  23, 153,
  38, 192,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_151 [13] = {11, 150,
  13, 151,
  17, 152,
  23, 153,
  38, 193,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_152 [13] = {11, 150,
  13, 151,
  17, 152,
  23, 153,
  38, 194,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_153 [13] = {11, 150,
  13, 151,
  17, 152,
  23, 153,
  38, 195,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_159 [3] = {49, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_160 [13] = {12, 215,
  18, 216,
  19, 217,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_161 [13] = {12, 215,
  18, 221,
  19, 217,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [5] = {12, 223,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [3] = {67, 227, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_175 [3] = {61, 233, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_178 [3] = {43, 235, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_179 [3] = {88, 236, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_181 [3] = {35, 238, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_185 [3] = {42, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_186 [3] = {42, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_187 [3] = {42, 243, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_188 [3] = {42, 244, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [3] = {42, 245, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_198 [5] = {25, 255,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_200 [3] = {48, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_205 [13] = {12, 215,
  18, 260,
  19, 217,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_213 [7] = {12, 215,
  21, 265,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_216 [3] = {48, 266, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_217 [3] = {68, 268, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_218 [3] = {69, 275, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [3] = {70, 278, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_221 [3] = {48, 279, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_223 [3] = {50, 282, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_230 [5] = {25, 288,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_234 [3] = {44, 292, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_235 [3] = {46, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_240 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 306,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_249 [5] = {25, 307,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_259 [3] = {58, 313, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [11] = {12, 215,
  19, 319,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [9] = {12, 215,
  20, 320,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_270 [9] = {12, 215,
  20, 321,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [9] = {12, 215,
  20, 322,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [9] = {12, 215,
  20, 323,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_273 [9] = {12, 215,
  20, 324,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_274 [9] = {12, 215,
  20, 325,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [7] = {12, 215,
  21, 326,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_277 [7] = {12, 215,
  21, 327,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [5] = {12, 329,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_282 [5] = {22, 331,
  71, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_288 [3] = {75, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [5] = {12, 340,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_292 [3] = {45, 341, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_295 [3] = {35, 344, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 347,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 348,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_301 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 349,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_302 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 350,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_303 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 351,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_304 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 352,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_305 [19] = {1, 299,
  13, 300,
  14, 301,
  15, 302,
  16, 303,
  17, 304,
  23, 305,
  37, 353,
  60, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_307 [3] = {85, 356, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_310 [3] = {48, 357, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_311 [3] = {59, 359, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_315 [3] = {53, 362, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_316 [3] = {57, 364, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_317 [3] = {55, 366, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_319 [3] = {68, 368, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_326 [3] = {70, 369, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_327 [3] = {70, 370, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_328 [3] = {51, 372, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_329 [3] = {50, 373, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_331 [3] = {48, 375, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_340 [3] = {62, 381, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_341 [3] = {43, 382, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_355 [5] = {25, 386,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_361 [3] = {54, 394, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_365 [3] = {56, 400, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_372 [3] = {48, 403, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_378 [3] = {76, 408, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_380 [5] = {12, 410,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_385 [3] = {64, 414, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_386 [3] = {85, 415, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_404 [5] = {25, 420,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_405 [5] = {25, 421,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_410 [3] = {62, 424, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_412 [3] = {47, 426, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_413 [3] = {65, 429, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_420 [3] = {72, 436, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_421 [3] = {75, 437, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_438 [3] = {77, 446, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_446 [3] = {79, 452, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_448 [5] = {25, 454,
  84, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_449 [3] = {78, 456, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_451 [3] = {80, 458, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_453 [3] = {47, 459, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_454 [3] = {72, 460, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_461 [3] = {78, 464, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_462 [3] = {81, 466, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_468 [5] = {24, 473,
  82, 474, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_470 [13] = {12, 215,
  18, 476,
  19, 217,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_471 [13] = {12, 215,
  18, 477,
  19, 217,
  20, 218,
  21, 219,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_472 [5] = {12, 478,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_473 [3] = {80, 479, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_476 [3] = {82, 481, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_477 [3] = {82, 482, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_478 [3] = {83, 484, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_483 [5] = {12, 486,
  52, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_484 [5] = {22, 487,
  71, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_485 [3] = {82, 488, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_486 [3] = {83, 489, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_487 [3] = {82, 490, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [491] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, NULL, 
  gSuccessorTable_easyBindings_grammar_24, NULL, NULL, gSuccessorTable_easyBindings_grammar_27, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_30, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_34, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_48, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_55, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_59, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, gSuccessorTable_easyBindings_grammar_69, gSuccessorTable_easyBindings_grammar_70, gSuccessorTable_easyBindings_grammar_71, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_79, 
  gSuccessorTable_easyBindings_grammar_80, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_85, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_88, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_92, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_108, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_113, gSuccessorTable_easyBindings_grammar_114, NULL, 
  gSuccessorTable_easyBindings_grammar_116, gSuccessorTable_easyBindings_grammar_117, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_121, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_126, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_130, gSuccessorTable_easyBindings_grammar_131, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_137, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_140, NULL, gSuccessorTable_easyBindings_grammar_142, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_145, NULL, gSuccessorTable_easyBindings_grammar_147, 
  gSuccessorTable_easyBindings_grammar_148, NULL, gSuccessorTable_easyBindings_grammar_150, gSuccessorTable_easyBindings_grammar_151, 
  gSuccessorTable_easyBindings_grammar_152, gSuccessorTable_easyBindings_grammar_153, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_159, 
  gSuccessorTable_easyBindings_grammar_160, gSuccessorTable_easyBindings_grammar_161, NULL, gSuccessorTable_easyBindings_grammar_163, 
  NULL, gSuccessorTable_easyBindings_grammar_165, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_175, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_178, gSuccessorTable_easyBindings_grammar_179, 
  NULL, gSuccessorTable_easyBindings_grammar_181, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_185, gSuccessorTable_easyBindings_grammar_186, gSuccessorTable_easyBindings_grammar_187, 
  gSuccessorTable_easyBindings_grammar_188, gSuccessorTable_easyBindings_grammar_189, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_198, NULL, 
  gSuccessorTable_easyBindings_grammar_200, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_205, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_213, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_216, gSuccessorTable_easyBindings_grammar_217, gSuccessorTable_easyBindings_grammar_218, gSuccessorTable_easyBindings_grammar_219, 
  NULL, gSuccessorTable_easyBindings_grammar_221, NULL, gSuccessorTable_easyBindings_grammar_223, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_230, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_234, gSuccessorTable_easyBindings_grammar_235, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_240, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_249, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_259, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_267, 
  NULL, gSuccessorTable_easyBindings_grammar_269, gSuccessorTable_easyBindings_grammar_270, gSuccessorTable_easyBindings_grammar_271, 
  gSuccessorTable_easyBindings_grammar_272, gSuccessorTable_easyBindings_grammar_273, gSuccessorTable_easyBindings_grammar_274, NULL, 
  gSuccessorTable_easyBindings_grammar_276, gSuccessorTable_easyBindings_grammar_277, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_281, gSuccessorTable_easyBindings_grammar_282, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_288, NULL, NULL, gSuccessorTable_easyBindings_grammar_291, 
  gSuccessorTable_easyBindings_grammar_292, NULL, NULL, gSuccessorTable_easyBindings_grammar_295, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_299, 
  gSuccessorTable_easyBindings_grammar_300, gSuccessorTable_easyBindings_grammar_301, gSuccessorTable_easyBindings_grammar_302, gSuccessorTable_easyBindings_grammar_303, 
  gSuccessorTable_easyBindings_grammar_304, gSuccessorTable_easyBindings_grammar_305, NULL, gSuccessorTable_easyBindings_grammar_307, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_310, gSuccessorTable_easyBindings_grammar_311, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_315, 
  gSuccessorTable_easyBindings_grammar_316, gSuccessorTable_easyBindings_grammar_317, NULL, gSuccessorTable_easyBindings_grammar_319, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_326, gSuccessorTable_easyBindings_grammar_327, 
  gSuccessorTable_easyBindings_grammar_328, gSuccessorTable_easyBindings_grammar_329, NULL, gSuccessorTable_easyBindings_grammar_331, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_340, gSuccessorTable_easyBindings_grammar_341, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_355, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_361, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_365, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_372, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_378, NULL, 
  gSuccessorTable_easyBindings_grammar_380, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_385, gSuccessorTable_easyBindings_grammar_386, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_404, gSuccessorTable_easyBindings_grammar_405, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_410, NULL, 
  gSuccessorTable_easyBindings_grammar_412, gSuccessorTable_easyBindings_grammar_413, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_420, gSuccessorTable_easyBindings_grammar_421, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_438, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_446, NULL, 
  gSuccessorTable_easyBindings_grammar_448, gSuccessorTable_easyBindings_grammar_449, NULL, gSuccessorTable_easyBindings_grammar_451, 
  NULL, gSuccessorTable_easyBindings_grammar_453, gSuccessorTable_easyBindings_grammar_454, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_461, gSuccessorTable_easyBindings_grammar_462, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_468, NULL, gSuccessorTable_easyBindings_grammar_470, gSuccessorTable_easyBindings_grammar_471, 
  gSuccessorTable_easyBindings_grammar_472, gSuccessorTable_easyBindings_grammar_473, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_476, gSuccessorTable_easyBindings_grammar_477, gSuccessorTable_easyBindings_grammar_478, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_483, 
  gSuccessorTable_easyBindings_grammar_484, gSuccessorTable_easyBindings_grammar_485, gSuccessorTable_easyBindings_grammar_486, gSuccessorTable_easyBindings_grammar_487, 
  NULL, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [221 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
  5, 9,
  6, 7,
  7, 4,
  8, 3,
  9, 7,
  10, 9,
  11, 5,
  12, 1,
  13, 5,
  13, 9,
  14, 7,
  15, 5,
  16, 6,
  17, 3,
  18, 2,
  19, 2,
  20, 2,
  21, 1,
  21, 2,
  21, 3,
  21, 1,
  22, 1,
  23, 7,
  23, 7,
  23, 13,
  24, 1,
  23, 10,
  25, 1,
  26, 3,
  27, 5,
  28, 2,
  29, 0,
  29, 4,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  30, 1,
  30, 1,
  31, 0,
  31, 3,
  32, 0,
  32, 1,
  33, 0,
  33, 1,
  34, 0,
  34, 4,
  35, 0,
  35, 3,
  36, 0,
  36, 2,
  37, 0,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  38, 0,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  39, 0,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  40, 1,
  40, 0,
  41, 0,
  41, 2,
  42, 0,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  43, 0,
  43, 4,
  44, 1,
  44, 1,
  45, 1,
  45, 1,
  46, 0,
  46, 6,
  47, 0,
  47, 5,
  48, 0,
  48, 3,
  48, 5,
  48, 3,
  48, 3,
  48, 5,
  48, 6,
  49, 1,
  49, 1,
  50, 0,
  50, 3,
  51, 0,
  51, 2,
  52, 4,
  52, 4,
  52, 4,
  52, 3,
  52, 1,
  52, 1,
  52, 1,
  52, 5,
  53, 0,
  53, 2,
  54, 1,
  54, 3,
  54, 1,
  55, 0,
  55, 2,
  56, 3,
  56, 3,
  56, 1,
  56, 1,
  57, 0,
  57, 2,
  58, 3,
  58, 2,
  59, 0,
  59, 2,
  59, 4,
  60, 0,
  60, 1,
  61, 0,
  61, 2,
  62, 0,
  62, 3,
  63, 0,
  63, 2,
  64, 0,
  64, 2,
  65, 2,
  65, 2,
  66, 0,
  66, 2,
  67, 3,
  67, 4,
  67, 0,
  68, 0,
  68, 3,
  69, 0,
  69, 2,
  69, 2,
  69, 2,
  69, 2,
  69, 2,
  69, 2,
  70, 0,
  70, 3,
  70, 3,
  71, 0,
  71, 6,
  72, 0,
  72, 5,
  73, 1,
  73, 1,
  74, 1,
  74, 1,
  74, 1,
  75, 0,
  75, 5,
  76, 1,
  76, 1,
  77, 0,
  77, 3,
  78, 0,
  78, 3,
  79, 1,
  79, 3,
  80, 0,
  80, 6,
  81, 0,
  81, 2,
  82, 0,
  82, 5,
  82, 3,
  82, 3,
  82, 5,
  83, 0,
  83, 3,
  84, 1,
  84, 1,
  84, 1,
  84, 2,
  84, 1,
  84, 1,
  84, 1,
  84, 4,
  85, 0,
  85, 3,
  86, 0,
  86, 3,
  87, 2,
  87, 1,
  87, 3,
  88, 0,
  88, 3,
  89, 2,
  89, 1,
  90, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                         gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                         gProductionsTable_easyBindings_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_easyBindings_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                       gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                       gProductionsTable_easyBindings_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_easyBindings_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'extern_swift_delegate' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'extern_swift_func' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'class_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'enum_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'entity_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'document_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'preferences_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'graphviz_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'outlet_class_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'binding_specification' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'outlet_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'observable_property' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'transient_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'simple_stored_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                GALGAS_simpleStoredPropertyList &  parameter_2,
                                GALGAS_stringset &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i15_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'toOne_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i16_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'toMany_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i17_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'action_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i18_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'booleanMultipleBindingExpression' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'booleanMultipleBindingComparison' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'booleanMultipleBindingTerm' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'booleanMultipleBindingOperand' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'binding_option_list' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 26 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 26 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'controller_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'column_bindings' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'explicit_value' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'xcode_project' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'main_xib' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'main_xib_line' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_0' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 36 37 38 39 40 41 42 43 44 45 46 47
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 48 49
  return inLexique->nextProductionIndex () - 47 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 50 51
  return inLexique->nextProductionIndex () - 49 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 52 53
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 54 55
  return inLexique->nextProductionIndex () - 53 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 58 59
  return inLexique->nextProductionIndex () - 57 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 60 61
  return inLexique->nextProductionIndex () - 59 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 62 63 64 65 66 67 68 69
  return inLexique->nextProductionIndex () - 61 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 70 71 72 73 74
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 75 76 77 78 79 80 81 82
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88 89 90 91 92
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104 105 106 107 108 109
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117 118 119 120 121 122 123
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 126 127 128
  return inLexique->nextProductionIndex () - 125 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 129 130
  return inLexique->nextProductionIndex () - 128 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 131 132 133 134
  return inLexique->nextProductionIndex () - 130 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 135 136
  return inLexique->nextProductionIndex () - 134 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 137 138
  return inLexique->nextProductionIndex () - 136 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 139 140 141
  return inLexique->nextProductionIndex () - 138 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 142 143
  return inLexique->nextProductionIndex () - 141 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 156 157 158
  return inLexique->nextProductionIndex () - 155 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 159 160
  return inLexique->nextProductionIndex () - 158 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 161 162 163 164 165 166 167
  return inLexique->nextProductionIndex () - 160 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 168 169 170
  return inLexique->nextProductionIndex () - 167 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 171 172
  return inLexique->nextProductionIndex () - 170 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 173 174
  return inLexique->nextProductionIndex () - 172 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 175 176
  return inLexique->nextProductionIndex () - 174 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 177 178 179
  return inLexique->nextProductionIndex () - 176 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 180 181
  return inLexique->nextProductionIndex () - 179 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 182 183
  return inLexique->nextProductionIndex () - 181 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 184 185
  return inLexique->nextProductionIndex () - 183 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 186 187
  return inLexique->nextProductionIndex () - 185 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 188 189
  return inLexique->nextProductionIndex () - 187 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 190 191
  return inLexique->nextProductionIndex () - 189 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 192 193
  return inLexique->nextProductionIndex () - 191 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_53' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 194 195 196 197 198
  return inLexique->nextProductionIndex () - 193 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_54' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 199 200
  return inLexique->nextProductionIndex () - 198 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_55' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 201 202 203 204 205 206 207 208
  return inLexique->nextProductionIndex () - 200 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_56' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 209 210
  return inLexique->nextProductionIndex () - 208 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_57' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 211 212
  return inLexique->nextProductionIndex () - 210 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_58' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 213 214 215
  return inLexique->nextProductionIndex () - 212 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_59' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 216 217
  return inLexique->nextProductionIndex () - 215 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_60' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 218 219
  return inLexique->nextProductionIndex () - 217 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_astDeclaration::objectCompare (const GALGAS_astDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration::GALGAS_astDeclaration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration::GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_astDeclaration * p = (const cPtr_astDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDeclaration) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @astDeclaration class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_astDeclaration::cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mUserDefined (in_mUserDefined) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @astDeclaration type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclaration ("astDeclaration",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclaration::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astDeclaration result ;
  const GALGAS_astDeclaration * p = (const GALGAS_astDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                const GALGAS_stringset & inOperand4,
                                                const GALGAS_mainXibDescriptorList & inOperand5) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                                const GALGAS_stringset & inOperand4,
                                                                const GALGAS_mainXibDescriptorList & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletDeclarationList.objectCompare (inOperand.mProperty_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (inOperand.mProperty_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionDeclarationList.objectCompare (inOperand.mProperty_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_classMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_classMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_classMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassMap.objectCompare (inOperand.mProperty_mClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassMap.objectCompare (inOperand.mProperty_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationMap.objectCompare (inOperand.mProperty_mBindingSpecificationMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_semanticContext::getter_mClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_semanticContext::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_semanticContext::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractDeclarationAST * p = (const cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @abstractDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @abstractDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Abstract extension getter '@abstractDeclarationAST nodeKey'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_nodeKey> gExtensionGetterTable_abstractDeclarationAST_nodeKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_nodeKey (const int32_t inClassIndex,
                                   enterExtensionGetter_abstractDeclarationAST_nodeKey inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_nodeKey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_nodeKey (void) {
  gExtensionGetterTable_abstractDeclarationAST_nodeKey.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_nodeKey (NULL,
                                                           freeExtensionGetter_abstractDeclarationAST_nodeKey) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_nodeKey f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_nodeKey.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_nodeKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_nodeKey.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_nodeKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_nodeKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_firstAnalysisPhase (NULL,
                                                                      freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractDeclarationAST secondAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_secondAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@abstractDeclarationAST thirdAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                           extensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase,
                                                                      freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractDeclarationAST fourthAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_fourthAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase (void) {
  enterExtensionMethod_fourthAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_fourthAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_fourthAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsClass.objectCompare (p->mProperty_mIsClass) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientClassDeclarationAST::objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_bool & inAttribute_mIsClass
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    result = p->mProperty_mIsClass ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientClassDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@transientClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @transientClassDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  const GALGAS_transientClassDeclarationAST * p = (const GALGAS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumerationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@enumerationDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @enumerationDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumName.objectCompare (p->mProperty_mEnumName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantList.objectCompare (p->mProperty_mEnumConstantList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumForGeneration::objectCompare (const GALGAS_enumForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_new (const GALGAS_string & inAttribute_mEnumName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @enumForGeneration class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumForGeneration:" ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @enumForGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                          & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  const GALGAS_enumForGeneration * p = (const GALGAS_enumForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicClassDeclarationAST::objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_typeKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @atomicClassDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@atomicClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @atomicClassDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  const GALGAS_atomicClassDeclarationAST * p = (const GALGAS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_entityDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObsoleteEntityNames.objectCompare (p->mProperty_mObsoleteEntityNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_entityDeclarationAST::objectCompare (const GALGAS_entityDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_stringset::constructor_emptySet (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_bool & inAttribute_mIsAbstract,
                                                                          const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                          const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                          const GALGAS_stringset & inAttribute_mSignatureList,
                                                                          const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                          const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                          const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mObsoleteEntityNames ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_lstring & in_mSuperEntityName,
                                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                      const GALGAS_stringset & in_mSignatureList,
                                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                      const GALGAS_bool & in_mIsGraphicEntity,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@entityDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @entityDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  const GALGAS_entityDeclarationAST * p = (const GALGAS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

