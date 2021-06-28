#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_arrayControllerGeneration (void) ;

//---
  public : inline const class cPtr_arrayControllerGeneration * ptr (void) const { return (const cPtr_arrayControllerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_arrayControllerModelKind & inOperand3,
                                                                          const class GALGAS_string & inOperand4,
                                                                          const class GALGAS_bool & inOperand5
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerModelKind (class GALGAS_arrayControllerModelKind inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayControllerGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_string mProperty_mModelTypeName ;
  public : GALGAS_arrayControllerModelKind mProperty_mArrayControllerModelKind ;
  public : GALGAS_string mProperty_mElementTypeName ;
  public : GALGAS_bool mProperty_mElementTypeIsGraphic ;

//--- Constructor
  public : cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                           const GALGAS_lstring & in_mControllerName,
                                           const GALGAS_string & in_mModelTypeName,
                                           const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                           const GALGAS_string & in_mElementTypeName,
                                           const GALGAS_bool & in_mElementTypeIsGraphic
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerModelKind (GALGAS_arrayControllerModelKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_tableViewControllerGeneration (void) ;

//---
  public : inline const class cPtr_tableViewControllerGeneration * ptr (void) const { return (const cPtr_tableViewControllerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_tableViewControllerGeneration (const cPtr_tableViewControllerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_tableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                              const class GALGAS_tableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_tableViewControllerModelKind & inOperand6,
                                                                              const class GALGAS_string & inOperand7,
                                                                              const class GALGAS_bool & inOperand8,
                                                                              const class GALGAS__32_stringlist & inOperand9
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (class GALGAS__32_stringlist inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (class GALGAS_tableViewControllerBoundColumnListForGeneration inArgument0
                                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (class GALGAS_tableViewControllerModelKind inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (class GALGAS_tableViewControllerSortedColumnListForGeneration inArgument0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListForGeneration getter_mTableViewControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerModelKind getter_mTableViewControllerModelKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_mTableViewControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tableViewControllerGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_tableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public : GALGAS_tableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public : GALGAS_string mProperty_mModelTypeName ;
  public : GALGAS_tableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public : GALGAS_string mProperty_mElementTypeName ;
  public : GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public : GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public : cPtr_tableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                               const GALGAS_lstring & in_mControllerName,
                                               const GALGAS_string & in_mModelString,
                                               const GALGAS_tableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                               const GALGAS_tableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                               const GALGAS_string & in_mModelTypeName,
                                               const GALGAS_tableViewControllerModelKind & in_mTableViewControllerModelKind,
                                               const GALGAS_string & in_mElementTypeName,
                                               const GALGAS_bool & in_mElementTypeIsGraphic,
                                               const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListForGeneration getter_mTableViewControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_tableViewControllerBoundColumnListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerSortedColumnListForGeneration getter_mTableViewControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_tableViewControllerSortedColumnListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerModelKind getter_mTableViewControllerModelKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (GALGAS_tableViewControllerModelKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_autoLayoutTableViewControllerGeneration (void) ;

//---
  public : inline const class cPtr_autoLayoutTableViewControllerGeneration * ptr (void) const { return (const cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutTableViewControllerGeneration (const cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutTableViewControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutTableViewControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                        const class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                        const class GALGAS_string & inOperand5,
                                                                                        const class GALGAS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                        const class GALGAS_string & inOperand7,
                                                                                        const class GALGAS_bool & inOperand8,
                                                                                        const class GALGAS__32_stringlist & inOperand9
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (class GALGAS__32_stringlist inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inArgument0
                                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (class GALGAS_autoLayoutTableViewControllerModelKind inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inArgument0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_mTableViewControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerModelKind getter_mTableViewControllerModelKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_mTableViewControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public : GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public : GALGAS_string mProperty_mModelTypeName ;
  public : GALGAS_autoLayoutTableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public : GALGAS_string mProperty_mElementTypeName ;
  public : GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public : GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public : cPtr_autoLayoutTableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                         const GALGAS_lstring & in_mControllerName,
                                                         const GALGAS_string & in_mModelString,
                                                         const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                         const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                         const GALGAS_string & in_mModelTypeName,
                                                         const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                         const GALGAS_string & in_mElementTypeName,
                                                         const GALGAS_bool & in_mElementTypeIsGraphic,
                                                         const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_mTableViewControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_mTableViewControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerModelKind getter_mTableViewControllerModelKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (GALGAS_autoLayoutTableViewControllerModelKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XcodeProjectDescriptor struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_uint mProperty_mSequenceNumber ;

  public : GALGAS_string mProperty_mMainGroupReference ;

  public : GALGAS_stringlist mProperty_mMainGroupChildrenRefs ;

  public : GALGAS_string mProperty_mProjectObjectReference ;

  public : GALGAS_XCodeGroupList mProperty_mGroupList ;

  public : GALGAS_XCodeToolTargetList mProperty_mToolTargetList ;

  public : GALGAS_XCodeAppTargetList mProperty_mAppTargetList ;

  public : GALGAS__32_stringlist mProperty_mCppFileList ;

  public : GALGAS__32_stringlist mProperty_m_5F_M_5F_FileList ;

  public : GALGAS__32_stringlist mProperty_m_5F_MM_5F_FileList ;

  public : GALGAS__32_stringlist mProperty_m_5F_SwiftFileList ;

  public : GALGAS__32_stringlist mProperty_mFrameworkFileList ;

  public : GALGAS__32_stringlist mProperty_mHeaderFileList ;

  public : GALGAS_BuildFileList mProperty_mBuildFileList ;

  public : GALGAS_string mProperty_mDefaultConfigurationRef ;

  public : GALGAS_stringlist mProperty_mDefaultConfigurationSettingList ;

  public : GALGAS_string mProperty_mProjectBuildConfigurationRef ;

  public : GALGAS__32_stringlist mProperty_mInfoPlistFileList ;

  public : GALGAS__32_stringlist mProperty_mXIB_5F_fileList ;

  public : GALGAS__32_stringlist mProperty_mTIFF_5F_fileList ;

  public : GALGAS__32_stringlist mProperty_mICNS_5F_fileList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XcodeProjectDescriptor constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XcodeProjectDescriptor (const GALGAS_uint & in_mSequenceNumber,
                                          const GALGAS_string & in_mMainGroupReference,
                                          const GALGAS_stringlist & in_mMainGroupChildrenRefs,
                                          const GALGAS_string & in_mProjectObjectReference,
                                          const GALGAS_XCodeGroupList & in_mGroupList,
                                          const GALGAS_XCodeToolTargetList & in_mToolTargetList,
                                          const GALGAS_XCodeAppTargetList & in_mAppTargetList,
                                          const GALGAS__32_stringlist & in_mCppFileList,
                                          const GALGAS__32_stringlist & in_m_5F_M_5F_FileList,
                                          const GALGAS__32_stringlist & in_m_5F_MM_5F_FileList,
                                          const GALGAS__32_stringlist & in_m_5F_SwiftFileList,
                                          const GALGAS__32_stringlist & in_mFrameworkFileList,
                                          const GALGAS__32_stringlist & in_mHeaderFileList,
                                          const GALGAS_BuildFileList & in_mBuildFileList,
                                          const GALGAS_string & in_mDefaultConfigurationRef,
                                          const GALGAS_stringlist & in_mDefaultConfigurationSettingList,
                                          const GALGAS_string & in_mProjectBuildConfigurationRef,
                                          const GALGAS__32_stringlist & in_mInfoPlistFileList,
                                          const GALGAS__32_stringlist & in_mXIB_5F_fileList,
                                          const GALGAS__32_stringlist & in_mTIFF_5F_fileList,
                                          const GALGAS__32_stringlist & in_mICNS_5F_fileList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XcodeProjectDescriptor extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XcodeProjectDescriptor constructor_new (const class GALGAS_uint & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_stringlist & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_XCodeGroupList & inOperand4,
                                                                       const class GALGAS_XCodeToolTargetList & inOperand5,
                                                                       const class GALGAS_XCodeAppTargetList & inOperand6,
                                                                       const class GALGAS__32_stringlist & inOperand7,
                                                                       const class GALGAS__32_stringlist & inOperand8,
                                                                       const class GALGAS__32_stringlist & inOperand9,
                                                                       const class GALGAS__32_stringlist & inOperand10,
                                                                       const class GALGAS__32_stringlist & inOperand11,
                                                                       const class GALGAS__32_stringlist & inOperand12,
                                                                       const class GALGAS_BuildFileList & inOperand13,
                                                                       const class GALGAS_string & inOperand14,
                                                                       const class GALGAS_stringlist & inOperand15,
                                                                       const class GALGAS_string & inOperand16,
                                                                       const class GALGAS__32_stringlist & inOperand17,
                                                                       const class GALGAS__32_stringlist & inOperand18,
                                                                       const class GALGAS__32_stringlist & inOperand19,
                                                                       const class GALGAS__32_stringlist & inOperand20
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_mAppTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_mBuildFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mCppFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mDefaultConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mFrameworkFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_mGroupList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mHeaderFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mICNS_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mInfoPlistFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mMainGroupChildrenRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mMainGroupReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProjectBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProjectObjectReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSequenceNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mTIFF_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_mToolTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mXIB_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_m_5F_MM_5F_FileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_m_5F_M_5F_FileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_m_5F_SwiftFileList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XcodeProjectDescriptor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addTIFF_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor getReferenceKey'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      class GALGAS_string & out_outRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addInfoPlistFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addXIBFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addFrameworkFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inFileName,
                               class GALGAS_string & out_outFileRef,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSwiftFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inFileName,
                                   class GALGAS_string & out_outFileRef,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inFileName,
                                class GALGAS_string & out_outFileRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCppFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addBuildFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inFileReference,
                                   const class GALGAS_string constin_inFileName,
                                   class GALGAS_string & out_outBuildRef,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addToolTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inTargetName,
                                    const class GALGAS_string constin_inProductFileName,
                                    const class GALGAS_stringlist constin_inSourceList,
                                    const class GALGAS_stringlist constin_inToolFrameworksFileRefList,
                                    const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                    class GALGAS_string & out_outTargetRef,
                                    class GALGAS_string & out_outProductFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addAppTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inTargetName,
                                   const class GALGAS_string constin_inProductFileName,
                                   const class GALGAS_stringlist constin_inSourceList,
                                   const class GALGAS_stringlist constin_inFrameworksFileRefList,
                                   const class GALGAS_stringlist constin_inResourceFileBuildRefs,
                                   const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                   const class GALGAS_stringlist constin_inDependentTargetRefList,
                                   const class GALGAS__32_stringlist constin_inProductCopyList,
                                   const class GALGAS_string constin_inInfoPList,
                                   class GALGAS_string & out_outProductFileRef,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inGroupName,
                               const class GALGAS_string constin_inGroupPath,
                               const class GALGAS_stringlist constin_inChildrenRefs,
                               class GALGAS_string & out_outGroupRef,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroupWithFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inGroupName,
                                        const class GALGAS_string constin_inGroupPath,
                                        const class GALGAS_stringset constin_inFileNames,
                                        class GALGAS_stringlist & io_ioCppFileBuildRefs,
                                        class GALGAS_stringlist & io_ioMFileBuildRefs,
                                        class GALGAS_stringlist & io_ioMMFileBuildRefs,
                                        class GALGAS_stringlist & io_ioSwiftFileBuildRefs,
                                        class GALGAS_stringlist & io_ioFrameWorkFileBuildRefs,
                                        class GALGAS_stringlist & io_ioResourceFileBuildRefs,
                                        class GALGAS_string & out_outGroupRef,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addICNS_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                            const class GALGAS_string constin_inGroupRef,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const class GALGAS_stringlist constin_inSettingList,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GALGAS_XcodeProjectDescriptor inObject,
                                     const class GALGAS_string constin_inPath,
                                     const class GALGAS_string constin_inCacheFilePath,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_REF,
                                                                               const class GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const class GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const class GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const class GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const class GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const class GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const class GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const class GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const class GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_LOCATION_ARGS) ;

