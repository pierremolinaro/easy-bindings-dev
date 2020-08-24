#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTableValueBindingOutletName,
                                                  const class GALGAS_string & in_mTableValueBindingControllerName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_string & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewBindingGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBindingControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                                    class GALGAS_uint constinArgument1,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBindingOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewBindingGenerationList ;
 
} ; // End of GALGAS_tableViewBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tableViewBindingGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewBindingGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewBindingGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTableValueBindingOutletName ;

  public : GALGAS_string mProperty_mTableValueBindingControllerName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tableViewBindingGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewBindingGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & in_mTableValueBindingOutletName,
                                                             const GALGAS_string & in_mTableValueBindingControllerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_string & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingOutletName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ebViewGraphicControllerBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ebViewGraphicControllerBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ebViewGraphicControllerBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mEBViewOutletName,
                                                  const class GALGAS_string & in_mArrayControllerControllerName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ebViewGraphicControllerBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ebViewGraphicControllerBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_ebViewGraphicControllerBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                       const class GALGAS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEBViewOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArrayControllerControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEBViewOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ebViewGraphicControllerBindingGenerationList ;
 
} ; // End of GALGAS_ebViewGraphicControllerBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ebViewGraphicControllerBindingGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ebViewGraphicControllerBindingGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mEBViewOutletName ;

  public : GALGAS_string mProperty_mArrayControllerControllerName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & in_mEBViewOutletName,
                                                                           const GALGAS_string & in_mArrayControllerControllerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                        const class GALGAS_string & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArrayControllerControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEBViewOutletName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibDescriptorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_mainXibLineDescriptorList mProperty_mLine ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mainXibDescriptorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_mainXibDescriptorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_mainXibDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & in_mLine) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mainXibDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibDescriptorList_2D_element constructor_new (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_mLine (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @preferencesForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_preferencesForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_preferencesForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferencesForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_preferencesForGeneration * ptr (void) const { return (const cPtr_preferencesForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferencesForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_preferencesForGeneration constructor_new (const class GALGAS_propertyGenerationList & inOperand0,
                                                                         const class GALGAS_mainXibDescriptorList & inOperand1,
                                                                         const class GALGAS_regularBindingsGenerationList & inOperand2,
                                                                         const class GALGAS_multipleBindingGenerationList & inOperand3,
                                                                         const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                         const class GALGAS_decoratedOutletMap & inOperand5,
                                                                         const class GALGAS_externSwiftFunctionList & inOperand6,
                                                                         const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                         const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionBindingListForGeneration (class GALGAS_actionBindingListForGeneration inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionList (class GALGAS_externSwiftFunctionList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMainXibDescriptorList (class GALGAS_mainXibDescriptorList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyListForGeneration (class GALGAS_propertyGenerationList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mActionBindingListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @preferencesForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public : GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public : GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public : GALGAS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public : GALGAS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public : GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public : GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public : GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;

//--- Constructor
  public : cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                          const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                          const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                          const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                          const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                          const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mPropertyListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyListForGeneration (GALGAS_propertyGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMainXibDescriptorList (GALGAS_mainXibDescriptorList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration getter_mActionBindingListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionBindingListForGeneration (GALGAS_actionBindingListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletMap (GALGAS_decoratedOutletMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionList (GALGAS_externSwiftFunctionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOptionName ;

  public : GALGAS_lstring mProperty_mOptionTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controllerBindingOptionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_controllerBindingOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & in_mOptionName,
                                                          const GALGAS_lstring & in_mOptionTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controllerBindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mModelTypeName ;

  public : GALGAS_bool mProperty_mModelShouldBeWritableProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & in_mModelTypeName,
                                                                       const GALGAS_bool & in_mModelShouldBeWritableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionDecoratedList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionDecoratedList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionDecoratedList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_typeKind & in_mOptionType,
                                                  const class GALGAS_lstring & in_mOptionName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionDecoratedList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controllerBindingOptionDecoratedList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controllerBindingOptionDecoratedList constructor_listWithValue (const class GALGAS_typeKind & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionDecoratedList add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controllerBindingOptionDecoratedList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mOptionTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionDecoratedList ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controllerBindingOptionDecoratedList : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerBindingOptionDecoratedList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationModelList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_typeKind & in_mModelType,
                                                  const class GALGAS_bool & in_mModelShouldBeWritableProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationModelList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletBindingSpecificationModelList constructor_listWithValue (const class GALGAS_typeKind & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingSpecificationModelList add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletBindingSpecificationModelList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mModelTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletBindingSpecificationModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public : GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--- Constructor
  public : cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;

  public : GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                            const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                         const class GALGAS_controllerBindingOptionDecoratedList & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_typeKind mProperty_mModelType ;

  public : GALGAS_bool mProperty_mModelShouldBeWritableProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & in_mModelType,
                                                                  const GALGAS_bool & in_mModelShouldBeWritableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0,
                                                                                               const class GALGAS_bool & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mModelType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingSpecificationModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionDecoratedList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionDecoratedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_typeKind mProperty_mOptionType ;

  public : GALGAS_lstring mProperty_mOptionName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & in_mOptionType,
                                                                   const GALGAS_lstring & in_mOptionName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionDecoratedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controllerBindingOptionDecoratedList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mOptionType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOptionName ;

  public : GALGAS_abstractDefaultValue mProperty_mOptionValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & in_mOptionName,
                                                const GALGAS_abstractDefaultValue & in_mOptionValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_abstractDefaultValue & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mOptionValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingOptionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mBindingName ;

  public : GALGAS_observablePropertyList mProperty_mObservablePropertyList ;

  public : GALGAS_bindingOptionList mProperty_mBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_regularBindingList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_regularBindingList_2D_element (const GALGAS_lstring & in_mBindingName,
                                                 const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                 const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_regularBindingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_observablePropertyList & inOperand1,
                                                                              const class GALGAS_bindingOptionList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mObservablePropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularBindingList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletBindingModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_propertyKind & in_mKind,
                                                  const class GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingModelList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletBindingModelList constructor_listWithValue (const class GALGAS_propertyKind & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyKind & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletBindingModelList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyKind constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyKind & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyKind & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyKind & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyKind & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyKind & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingModelList ;
 
} ; // End of GALGAS_outletBindingModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @propertyAccessibility enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyAccessibility : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyAccessibility (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_stored,
    kEnum_transient
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyAccessibility extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyAccessibility constructor_stored (LOCATION_ARGS) ;

  public : static class GALGAS_propertyAccessibility constructor_transient (const class GALGAS_bool & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyAccessibility & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_transient (class GALGAS_bool & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStored (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyAccessibility class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @propertyKind enum                                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_toMany,
    kEnum_toOne,
    kEnum_arrayController,
    kEnum_selectionController
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyKind extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyKind constructor_arrayController (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_property (const class GALGAS_typeKind & inOperand0,
                                                                  const class GALGAS_propertyAccessibility & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_selectionController (const class GALGAS_string & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_toMany (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_propertyAccessibility & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                const class GALGAS_toManyRelationshipOptionAST & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_toOne (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_propertyAccessibility & inOperand1,
                                                               const class GALGAS_bool & inOperand2,
                                                               const class GALGAS_toOneOppositeRelationship & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayController (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_typeKind & outArgument0,
                                                  class GALGAS_propertyAccessibility & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selectionController (class GALGAS_string & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_toMany (class GALGAS_lstring & outArgument0,
                                                class GALGAS_propertyAccessibility & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_toManyRelationshipOptionAST & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_toOne (class GALGAS_lstring & outArgument0,
                                               class GALGAS_propertyAccessibility & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_toOneOppositeRelationship & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_property : public cEnumAssociatedValues {
  public : const GALGAS_typeKind mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind & inAssociatedValue0,
                                                        const GALGAS_propertyAccessibility & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_property (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toMany : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_toManyRelationshipOptionAST mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                      const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_toManyRelationshipOptionAST & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_toMany (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toOne : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_toOneOppositeRelationship mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                     const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                     const GALGAS_bool & inAssociatedValue2,
                                                     const GALGAS_toOneOppositeRelationship & inAssociatedValue3
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_toOne (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_arrayController : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                               const GALGAS_bool & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_arrayController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_selectionController : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string & inAssociatedValue0
                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_selectionController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_propertyKind mProperty_mKind ;

  public : GALGAS_location mProperty_mErrorLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & in_mKind,
                                                     const GALGAS_location & in_mErrorLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingModelList_2D_element constructor_new (const class GALGAS_propertyKind & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boundObjectList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boundObjectList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBoundObjectString ;

  public : GALGAS_propertyKind mProperty_mKind ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_boundObjectList_2D_element (const GALGAS_string & in_mBoundObjectString,
                                              const GALGAS_propertyKind & in_mKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boundObjectList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boundObjectList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_propertyKind & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundObjectString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boundObjectList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_observablePropertyAST mProperty_mObservableProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & in_mObservableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyList_2D_element constructor_new (const class GALGAS_observablePropertyAST & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mObservableProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringForSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringForSelf (const class GALGAS_observablePropertyAST & inObject,
                                                        const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringFunctionArgument (const class GALGAS_observablePropertyAST & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_observablePropertyAST & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST location' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_location extensionGetter_location (const class GALGAS_observablePropertyAST & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const class GALGAS_observablePropertyAST inObject,
                                                const class GALGAS_propertyMap constin_inRootPropertyMap,
                                                const class GALGAS_semanticContext constin_inSemanticContext,
                                                const class GALGAS_propertyMap constin_inBoundModelPropertyMap,
                                                class GALGAS_propertyKind & out_outKind,
                                                class GALGAS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @classKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_atomic : public cEnumAssociatedValues {
  public : const GALGAS_typeKind mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_atomic (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_document : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_document (const GALGAS_lstring & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_document (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_entity : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_entity (const GALGAS_string & inAssociatedValue0,
                                                   const GALGAS_bool & inAssociatedValue1,
                                                   const GALGAS_bool & inAssociatedValue2
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_entity (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyAccessibility enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyAccessibility_transient : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool & inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyAccessibility_transient (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind swiftTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_propertyKind & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind swiftTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_typeKind & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_actionMap (const GALGAS_lstring & inKey
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_propertyKind mProperty_mKind ;
  public : GALGAS_actionMap mProperty_mActionMap ;
  public : GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public : cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                    const GALGAS_propertyKind & in_mKind,
                                    const GALGAS_actionMap & in_mActionMap,
                                    const GALGAS_bool & in_mIsOverriding
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_classMap mProperty_mClassMap ;

  public : GALGAS_outletClassMap mProperty_mOutletClassMap ;

  public : GALGAS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_classMap & in_mClassMap,
                                   const GALGAS_outletClassMap & in_mOutletClassMap,
                                   const GALGAS_bindingSpecificationMap & in_mBindingSpecificationMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_classMap & inOperand0,
                                                                const class GALGAS_outletClassMap & inOperand1,
                                                                const class GALGAS_bindingSpecificationMap & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_mBindingSpecificationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMap getter_mClassMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_mOutletClassMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_observablePropertyAST & in_mDependency,
                                                  const class GALGAS_string & in_mFunctionArgumentName,
                                                  const class GALGAS_string & in_mFunctionArgumentTypeString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDependencyListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientDependencyListForGeneration constructor_listWithValue (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_string & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientDependencyListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentTypeStringAtIndex (class GALGAS_string constinArgument0,
                                                                               class GALGAS_uint constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentTypeStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyListForGeneration ;
 
} ; // End of GALGAS_transientDependencyListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientDependencyListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDependencyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_observablePropertyAST mProperty_mDependency ;

  public : GALGAS_string mProperty_mFunctionArgumentName ;

  public : GALGAS_string mProperty_mFunctionArgumentTypeString ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & in_mDependency,
                                                                   const GALGAS_string & in_mFunctionArgumentName,
                                                                   const GALGAS_string & in_mFunctionArgumentTypeString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDependencyListForGeneration_2D_element constructor_new (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_string & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mDependency (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentTypeString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDependencyListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_transientPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientPropertyGenerationList constructor_listWithValue (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_transientPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientPropertyGenerationList add_operation (const GALGAS_transientPropertyGenerationList & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_transientPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_transientPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_transientPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_transientPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_transientPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientPropertyGenerationList ;
 
} ; // End of GALGAS_transientPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_transientPropertyGeneration (void) ;

//---
  public : inline const class cPtr_transientPropertyGeneration * ptr (void) const { return (const cPtr_transientPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_typeKind & inOperand2,
                                                                            const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public : cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                             const GALGAS_string & in_mClassName,
                                             const GALGAS_typeKind & in_mType,
                                             const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                             const GALGAS_bool & in_mGenerate
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_transientPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGenerationList_2D_element constructor_new (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration transientComputeFunctionCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_transientComputeFunctionCall (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                                  const class GALGAS_string & constinArgument0,
                                                                  const class GALGAS_string & constinArgument1,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateAddObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateAddObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateRemoveObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ptransientRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ptransientRoutineGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_ptransientRoutineGeneration (void) ;

//---
  public : inline const class cPtr_ptransientRoutineGeneration * ptr (void) const { return (const cPtr_ptransientRoutineGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ptransientRoutineGeneration (const cPtr_ptransientRoutineGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ptransientRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ptransientRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_typeKind & inOperand2,
                                                                            const class GALGAS_transientDependencyListForGeneration & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ptransientRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ptransientRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ptransientRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ptransientRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ptransientRoutineGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_string mProperty_mTransientName ;
  public : GALGAS_typeKind mProperty_mTransientType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_ptransientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                             const GALGAS_string & in_mTransientName,
                                             const GALGAS_typeKind & in_mTransientType,
                                             const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_toManyProxyGeneration (void) ;

//---
  public : inline const class cPtr_toManyProxyGeneration * ptr (void) const { return (const cPtr_toManyProxyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_proxyKind & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_string & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyTypeName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToManyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyProxyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_string mProperty_mToManyTypeName ;
  public : GALGAS_string mProperty_mObservedRelationshipName ;
  public : GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public : cPtr_toManyProxyGeneration (const GALGAS_string & in_mPropertyName,
                                       const GALGAS_proxyKind & in_mProxyKind,
                                       const GALGAS_string & in_mToManyTypeName,
                                       const GALGAS_string & in_mObservedRelationshipName,
                                       const GALGAS_string & in_mObservedPropertyName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mToManyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toManyProxyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_toManyProxyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGenerationList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toManyProxyGenerationList constructor_listWithValue (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toManyProxyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toManyProxyGenerationList add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toManyProxyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toManyProxyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toManyProxyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toManyProxyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_toManyProxyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_toManyProxyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toManyProxyGenerationList ;
 
} ; // End of GALGAS_toManyProxyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toManyProxyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toManyProxyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_toManyProxyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGenerationList_2D_element constructor_new (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyProxyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_atomicProxyGeneration (void) ;

//---
  public : inline const class cPtr_atomicProxyGeneration * ptr (void) const { return (const cPtr_atomicProxyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicProxyGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_proxyKind & inOperand1,
                                                                      const class GALGAS_typeKind & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_string & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicProxyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_string mProperty_mObservedRelationshipName ;
  public : GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public : cPtr_atomicProxyGeneration (const GALGAS_string & in_mPropertyName,
                                       const GALGAS_proxyKind & in_mProxyKind,
                                       const GALGAS_typeKind & in_mType,
                                       const GALGAS_string & in_mObservedRelationshipName,
                                       const GALGAS_string & in_mObservedPropertyName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

