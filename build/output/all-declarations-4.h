#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerSortedColumnListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerSortedColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerSortedColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_tableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mColumnName,
                                                 const class GALGAS_propertyKind & in_mSortPropertyKind,
                                                 const class GALGAS_string & in_mObservablePropertyForSorting
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerSortedColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerSortedColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_tableViewControllerSortedColumnListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_propertyKind & inOperand1,
                                                                                                          const class GALGAS_string & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_propertyKind & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewControllerSortedColumnListForGeneration add_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_propertyKind constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_propertyKind & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_propertyKind & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_propertyKind & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyForSortingAtIndex (class GALGAS_string constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_propertyKind & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_propertyKind & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservablePropertyForSortingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mSortPropertyKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerSortedColumnListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tableViewControllerSortedColumnListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_tableViewControllerSortedColumnListForGeneration (const GALGAS_tableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GALGAS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerSortedColumnListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mColumnName ;
  public: inline GALGAS_string readProperty_mColumnName (void) const {
    return mProperty_mColumnName ;
  }

  public: GALGAS_propertyKind mProperty_mSortPropertyKind ;
  public: inline GALGAS_propertyKind readProperty_mSortPropertyKind (void) const {
    return mProperty_mSortPropertyKind ;
  }

  public: GALGAS_string mProperty_mObservablePropertyForSorting ;
  public: inline GALGAS_string readProperty_mObservablePropertyForSorting (void) const {
    return mProperty_mObservablePropertyForSorting ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMColumnName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnName = inValue ;
  }

  public: inline void setter_setMSortPropertyKind (const GALGAS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyKind = inValue ;
  }

  public: inline void setter_setMObservablePropertyForSorting (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyForSorting = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                              const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                              const GALGAS_string & in_mObservablePropertyForSorting) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_propertyKind & inOperand1,
                                                                                                           const class GALGAS_string & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerBoundColumnListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mEditable,
                                                 const class GALGAS_lstring & in_mPropertyName,
                                                 const class GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                 const class GALGAS_lstring & in_mSortPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListAST extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                                         const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                         const class GALGAS_lstring & inOperand3
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                     const class GALGAS_lstring & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerBoundColumnListAST add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnParameterListASTAtIndex (class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_mColumnParameterListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mEditableAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerBoundColumnListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerBoundColumnListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mEditable ;
  public: inline GALGAS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mColumnParameterListAST ;
  public: inline GALGAS_astAutoLayoutViewInstructionParameterList readProperty_mColumnParameterListAST (void) const {
    return mProperty_mColumnParameterListAST ;
  }

  public: GALGAS_lstring mProperty_mSortPropertyName ;
  public: inline GALGAS_lstring readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMColumnParameterListAST (const GALGAS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnParameterListAST = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element (const GALGAS_bool & in_mEditable,
                                                                             const GALGAS_lstring & in_mPropertyName,
                                                                             const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                             const GALGAS_lstring & in_mSortPropertyName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                                          const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                          const class GALGAS_lstring & inOperand3
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerAttributListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerAttributListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerAttributListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mAttributeName,
                                                 const class GALGAS_abstractDefaultValue & in_mAttributeValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerAttributListAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerAttributListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutTableViewControllerAttributListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_abstractDefaultValue & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerAttributListAST add_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_abstractDefaultValue constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_abstractDefaultValue & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_abstractDefaultValue & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_abstractDefaultValue & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractDefaultValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_abstractDefaultValue & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mAttributeValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerAttributListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerAttributListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerAttributListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutTableViewControllerAttributListAST ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerAttributListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerAttributListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerAttributListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_abstractDefaultValue mProperty_mAttributeValue ;
  public: inline GALGAS_abstractDefaultValue readProperty_mAttributeValue (void) const {
    return mProperty_mAttributeValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GALGAS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                                          const GALGAS_abstractDefaultValue & in_mAttributeValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_abstractDefaultValue & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerPropertyGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration (const class cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mModelString (void) const ;

  public: class GALGAS_string readProperty_mOwnerName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_string & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerPropertyGeneration : public cPtr_propertyGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mModelString ;
  public: GALGAS_string mProperty_mOwnerName ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                const GALGAS_string & in_mModelString,
                                                                const GALGAS_string & in_mOwnerName
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (const class GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & operator = (const class GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutTableViewControllerPropertyGeneration bang_autoLayoutTableViewControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                Phase 1: @autoLayoutTableViewControllerModelKind enum                                *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerModelKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_entityArray,
    kEnum_transientArray
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerModelKind extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerModelKind constructor_entityArray (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutTableViewControllerModelKind constructor_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerModelKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_entityArray () const ;

  public: VIRTUAL_IN_DEBUG bool optional_transientArray () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerModelKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mEditable,
                                                 const class GALGAS_string & in_mSortPropertyName,
                                                 const class GALGAS_string & in_mDisplayedPropertyName,
                                                 const class GALGAS_string & in_mColumnObjectTypeName,
                                                 const class GALGAS_string & in_mRunAction,
                                                 const class GALGAS__32_stringlist & in_mActualParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                                   const class GALGAS_string & inOperand4,
                                                                                                                   const class GALGAS__32_stringlist & inOperand5
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_string & inOperand4,
                                                     const class GALGAS__32_stringlist & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_string constinArgument4,
                                                      class GALGAS__32_stringlist constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 class GALGAS__32_stringlist & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_string & outArgument4,
                                                class GALGAS__32_stringlist & outArgument5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_string & outArgument4,
                                                      class GALGAS__32_stringlist & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterListAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnObjectTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDisplayedPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunActionAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS__32_stringlist & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_string & outArgument4,
                                             class GALGAS__32_stringlist & outArgument5,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mActualParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnObjectTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDisplayedPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mEditableAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mRunActionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSortPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GALGAS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mEditable ;
  public: inline GALGAS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GALGAS_string mProperty_mSortPropertyName ;
  public: inline GALGAS_string readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

  public: GALGAS_string mProperty_mDisplayedPropertyName ;
  public: inline GALGAS_string readProperty_mDisplayedPropertyName (void) const {
    return mProperty_mDisplayedPropertyName ;
  }

  public: GALGAS_string mProperty_mColumnObjectTypeName ;
  public: inline GALGAS_string readProperty_mColumnObjectTypeName (void) const {
    return mProperty_mColumnObjectTypeName ;
  }

  public: GALGAS_string mProperty_mRunAction ;
  public: inline GALGAS_string readProperty_mRunAction (void) const {
    return mProperty_mRunAction ;
  }

  public: GALGAS__32_stringlist mProperty_mActualParameterList ;
  public: inline GALGAS__32_stringlist readProperty_mActualParameterList (void) const {
    return mProperty_mActualParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

  public: inline void setter_setMDisplayedPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayedPropertyName = inValue ;
  }

  public: inline void setter_setMColumnObjectTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnObjectTypeName = inValue ;
  }

  public: inline void setter_setMRunAction (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunAction = inValue ;
  }

  public: inline void setter_setMActualParameterList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_bool & in_mEditable,
                                                                                       const GALGAS_string & in_mSortPropertyName,
                                                                                       const GALGAS_string & in_mDisplayedPropertyName,
                                                                                       const GALGAS_string & in_mColumnObjectTypeName,
                                                                                       const GALGAS_string & in_mRunAction,
                                                                                       const GALGAS__32_stringlist & in_mActualParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                                                    const class GALGAS_string & inOperand1,
                                                                                                                    const class GALGAS_string & inOperand2,
                                                                                                                    const class GALGAS_string & inOperand3,
                                                                                                                    const class GALGAS_string & inOperand4,
                                                                                                                    const class GALGAS__32_stringlist & inOperand5
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mColumnName,
                                                 const class GALGAS_propertyKind & in_mSortPropertyKind,
                                                 const class GALGAS_string & in_mObservablePropertyForSorting
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                                    const class GALGAS_propertyKind & inOperand1,
                                                                                                                    const class GALGAS_string & inOperand2
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_propertyKind & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration add_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_propertyKind constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_propertyKind & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_propertyKind & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_propertyKind & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyForSortingAtIndex (class GALGAS_string constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_propertyKind & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_propertyKind & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservablePropertyForSortingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mSortPropertyKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GALGAS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mColumnName ;
  public: inline GALGAS_string readProperty_mColumnName (void) const {
    return mProperty_mColumnName ;
  }

  public: GALGAS_propertyKind mProperty_mSortPropertyKind ;
  public: inline GALGAS_propertyKind readProperty_mSortPropertyKind (void) const {
    return mProperty_mSortPropertyKind ;
  }

  public: GALGAS_string mProperty_mObservablePropertyForSorting ;
  public: inline GALGAS_string readProperty_mObservablePropertyForSorting (void) const {
    return mProperty_mObservablePropertyForSorting ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMColumnName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnName = inValue ;
  }

  public: inline void setter_setMSortPropertyKind (const GALGAS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyKind = inValue ;
  }

  public: inline void setter_setMObservablePropertyForSorting (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyForSorting = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                                        const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                        const GALGAS_string & in_mObservablePropertyForSorting) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                                     const class GALGAS_propertyKind & inOperand1,
                                                                                                                     const class GALGAS_string & inOperand2
                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerPropertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_selectionControllerPropertyGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerPropertyGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selectionControllerPropertyGeneration (const class cPtr_selectionControllerPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_string readProperty_mModelControllerName (void) const ;

  public: class GALGAS_string readProperty_mModelControllerPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_string & inOperand2,
                                                                                     const class GALGAS_string & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectionControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectionControllerPropertyGeneration : public cPtr_propertyGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_string mProperty_mModelControllerName ;
  public: GALGAS_string mProperty_mModelControllerPropertyName ;

//--- Constructor
  public: cPtr_selectionControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                      const GALGAS_string & in_mOwnerName,
                                                      const GALGAS_string & in_mModelControllerName,
                                                      const GALGAS_string & in_mModelControllerPropertyName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectionControllerPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectionControllerPropertyGeneration_2D_weak (const class GALGAS_selectionControllerPropertyGeneration & inSource) ;

  public: GALGAS_selectionControllerPropertyGeneration_2D_weak & operator = (const class GALGAS_selectionControllerPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectionControllerPropertyGeneration bang_selectionControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectionControllerPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_selectionControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mOwnerName,
                                                 const class GALGAS_string & in_mSelectionControllerName,
                                                 const class GALGAS_string & in_mBoundControllerName,
                                                 const class GALGAS_string & in_mBoundControllerPropertyName,
                                                 const class GALGAS_string & in_mBaseTypeName,
                                                 const class GALGAS_string & in_mSelectionTypeName,
                                                 const class GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                 const class GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_selectionControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_string & inOperand1,
                                                                                          const class GALGAS_string & inOperand2,
                                                                                          const class GALGAS_string & inOperand3,
                                                                                          const class GALGAS_string & inOperand4,
                                                                                          const class GALGAS_string & inOperand5,
                                                                                          const class GALGAS_propertyMap & inOperand6,
                                                                                          const class GALGAS_propertyGenerationList & inOperand7
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_string & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     const class GALGAS_propertyMap & inOperand6,
                                                     const class GALGAS_propertyGenerationList & inOperand7
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_selectionControllerForGeneration add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_selectionControllerForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_string constinArgument4,
                                                      class GALGAS_string constinArgument5,
                                                      class GALGAS_propertyMap constinArgument6,
                                                      class GALGAS_propertyGenerationList constinArgument7,
                                                      class GALGAS_uint constinArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_propertyMap & outArgument6,
                                                 class GALGAS_propertyGenerationList & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_string & outArgument4,
                                                class GALGAS_string & outArgument5,
                                                class GALGAS_propertyMap & outArgument6,
                                                class GALGAS_propertyGenerationList & outArgument7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_string & outArgument4,
                                                      class GALGAS_string & outArgument5,
                                                      class GALGAS_propertyMap & outArgument6,
                                                      class GALGAS_propertyGenerationList & outArgument7,
                                                      class GALGAS_uint constinArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBaseTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                               class GALGAS_uint constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListAtIndex (class GALGAS_propertyGenerationList constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionObservablePropertyMapAtIndex (class GALGAS_propertyMap constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_propertyMap & outArgument6,
                                              class GALGAS_propertyGenerationList & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_string & outArgument4,
                                             class GALGAS_string & outArgument5,
                                             class GALGAS_propertyMap & outArgument6,
                                             class GALGAS_propertyGenerationList & outArgument7,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_selectionControllerForGeneration ;
 
} ; // End of GALGAS_selectionControllerForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_selectionControllerForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
  public: class GALGAS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_selectionControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: inline GALGAS_string readProperty_mOwnerName (void) const {
    return mProperty_mOwnerName ;
  }

  public: GALGAS_string mProperty_mSelectionControllerName ;
  public: inline GALGAS_string readProperty_mSelectionControllerName (void) const {
    return mProperty_mSelectionControllerName ;
  }

  public: GALGAS_string mProperty_mBoundControllerName ;
  public: inline GALGAS_string readProperty_mBoundControllerName (void) const {
    return mProperty_mBoundControllerName ;
  }

  public: GALGAS_string mProperty_mBoundControllerPropertyName ;
  public: inline GALGAS_string readProperty_mBoundControllerPropertyName (void) const {
    return mProperty_mBoundControllerPropertyName ;
  }

  public: GALGAS_string mProperty_mBaseTypeName ;
  public: inline GALGAS_string readProperty_mBaseTypeName (void) const {
    return mProperty_mBaseTypeName ;
  }

  public: GALGAS_string mProperty_mSelectionTypeName ;
  public: inline GALGAS_string readProperty_mSelectionTypeName (void) const {
    return mProperty_mSelectionTypeName ;
  }

  public: GALGAS_propertyMap mProperty_mSelectionObservablePropertyMap ;
  public: inline GALGAS_propertyMap readProperty_mSelectionObservablePropertyMap (void) const {
    return mProperty_mSelectionObservablePropertyMap ;
  }

  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GALGAS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_selectionControllerForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOwnerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOwnerName = inValue ;
  }

  public: inline void setter_setMSelectionControllerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerPropertyName = inValue ;
  }

  public: inline void setter_setMBaseTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseTypeName = inValue ;
  }

  public: inline void setter_setMSelectionTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionTypeName = inValue ;
  }

  public: inline void setter_setMSelectionObservablePropertyMap (const GALGAS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionObservablePropertyMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GALGAS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_selectionControllerForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & in_mOwnerName,
                                                              const GALGAS_string & in_mSelectionControllerName,
                                                              const GALGAS_string & in_mBoundControllerName,
                                                              const GALGAS_string & in_mBoundControllerPropertyName,
                                                              const GALGAS_string & in_mBaseTypeName,
                                                              const GALGAS_string & in_mSelectionTypeName,
                                                              const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                              const GALGAS_propertyGenerationList & in_mPropertyGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                           const class GALGAS_string & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_string & inOperand4,
                                                                                           const class GALGAS_string & inOperand5,
                                                                                           const class GALGAS_propertyMap & inOperand6,
                                                                                           const class GALGAS_propertyGenerationList & inOperand7
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDefaultValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDefaultValue_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractDefaultValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractDefaultValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractDefaultValue_2D_weak (const class GALGAS_abstractDefaultValue & inSource) ;

  public: GALGAS_abstractDefaultValue_2D_weak & operator = (const class GALGAS_abstractDefaultValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractDefaultValue bang_abstractDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDefaultValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractDefaultValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDefaultValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDefaultValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_integerAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_integerAsDefaultValue (const class cPtr_integerAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mValue (void) const ;

  public: class GALGAS_bool readProperty_mNegative (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_integerAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerAsDefaultValue constructor_new (const class GALGAS_luint & inOperand0,
                                                                     const class GALGAS_bool & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNegative (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_luint mProperty_mValue ;
  public: GALGAS_bool mProperty_mNegative ;

//--- Constructor
  public: cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue,
                                      const GALGAS_bool & in_mNegative
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerAsDefaultValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerAsDefaultValue_2D_weak : public GALGAS_abstractDefaultValue_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerAsDefaultValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerAsDefaultValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerAsDefaultValue_2D_weak (const class GALGAS_integerAsDefaultValue & inSource) ;

  public: GALGAS_integerAsDefaultValue_2D_weak & operator = (const class GALGAS_integerAsDefaultValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerAsDefaultValue bang_integerAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_integerAsDefaultValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerAsDefaultValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerAsDefaultValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerAsDefaultValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType) (const class cPtr_abstractDefaultValue * inObject,
                                                                                       const class GALGAS_typeKindList constinArgument0,
                                                                                       const class GALGAS_propertyMap constinArgument1,
                                                                                       class GALGAS_string & outArgument2,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (const class cPtr_abstractDefaultValue * inObject,
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typeKindList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeKindList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindList constructor_listWithValue (const class GALGAS_typeKind & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeKindList add_operation (const GALGAS_typeKindList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeKindList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typeKindList ;
 
} ; // End of GALGAS_typeKindList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_typeKindList : public cGenericAbstractEnumerator {
  public: cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeKindList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDefaultValue_enterDefaultValuePrecedence) (const class cPtr_abstractDefaultValue * inObject,
                                                                                           const class GALGAS_lstring constinArgument0,
                                                                                           class GALGAS_declarationPrecedenceGraph & ioArgument1,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterDefaultValuePrecedence (const int32_t inClassIndex,
                                                       extensionMethodSignature_abstractDefaultValue_enterDefaultValuePrecedence inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (const class cPtr_abstractDefaultValue * inObject,
                                                      const GALGAS_lstring constin_inNode,
                                                      GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind typeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typeName (const class GALGAS_typeKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isComparable' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isComparable (const class GALGAS_typeKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isGraphic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isGraphic (const class GALGAS_typeKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_typeKind mProperty_mType ;
  public: inline GALGAS_typeKind readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_typeKindList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindList_2D_element (const GALGAS_typeKind & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeKindList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKindList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind typeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typeName (const class GALGAS_propertyKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isTransient' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isTransient (const class GALGAS_propertyKind & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isComparable' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isComparable (const class GALGAS_propertyKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEntityType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isEntityType (const class GALGAS_propertyKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEnumType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isEnumType (const class GALGAS_propertyKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode) (const class cPtr_propertyGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_prefKeyDefinitionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_declarationInSelectionControllerCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_declarationInSelectionControllerCode (const int32_t inClassIndex,
                                                                enterExtensionGetter_propertyGeneration_declarationInSelectionControllerCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_bindPropertyInSelectionController) (const class cPtr_propertyGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_bindPropertyInSelectionController (const int32_t inClassIndex,
                                                             enterExtensionGetter_propertyGeneration_bindPropertyInSelectionController inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_propertyDeclarationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                const class GALGAS_bool constinArgument0,
                                                                                                const class GALGAS_stringset constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_propertyDeclarationCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_propertyDeclarationCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_propertyDeclarationCode (const class cPtr_propertyGeneration * inObject,
                                                                 const GALGAS_bool constin_inPreferences,
                                                                 const GALGAS_stringset constin_inOverriddenTransients,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_configurationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                          const class GALGAS_bool constinArgument0,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_configurationCode (const int32_t inClassIndex,
                                             enterExtensionGetter_propertyGeneration_configurationCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_configurationCode (const class cPtr_propertyGeneration * inObject,
                                                           const GALGAS_bool constin_inPreferences,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_initCode) (const class cPtr_propertyGeneration * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_initCode (const int32_t inClassIndex,
                                    enterExtensionGetter_propertyGeneration_initCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_initCode (const class cPtr_propertyGeneration * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_terminationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                        const class GALGAS_bool constinArgument0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_terminationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_terminationCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_terminationCode (const cPtr_propertyGeneration * inObject,
                                                         const GALGAS_bool constin_inPreferences,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (const int32_t inClassIndex,
                                                                 enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupRelationshipFromDictionaryCode (const int32_t inClassIndex,
                                                               enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_saveIntoDictionaryCode (const int32_t inClassIndex,
                                                  enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_objectAccessibilityCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) (const class cPtr_propertyGeneration * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCodeForSaveOperation (const int32_t inClassIndex,
                                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_populateExplorerWindowCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_populateExplorerWindowCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_propertyGeneration_populateExplorerWindowCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_clearObjectExplorerCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_resetToManyRelationships) (const class cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_resetToManyRelationships (const int32_t inClassIndex,
                                                    enterExtensionGetter_propertyGeneration_resetToManyRelationships inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientExternTypeList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientExternTypeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_transientExternTypeList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTypeName,
                                                 const class GALGAS_bool & in_mIsClass
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientExternTypeList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientExternTypeList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_transientExternTypeList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_transientExternTypeList add_operation (const GALGAS_transientExternTypeList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientExternTypeList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsClassAtIndex (class GALGAS_bool constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClassAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientExternTypeList ;
 
} ; // End of GALGAS_transientExternTypeList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientExternTypeList : public cGenericAbstractEnumerator {
  public: cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_transientExternTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientExternTypeList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientExternTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTypeName ;
  public: inline GALGAS_string readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_bool mProperty_mIsClass ;
  public: inline GALGAS_bool readProperty_mIsClass (void) const {
    return mProperty_mIsClass ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientExternTypeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_transientExternTypeList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMIsClass (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsClass = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_transientExternTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_transientExternTypeList_2D_element (const GALGAS_string & in_mTypeName,
                                                     const GALGAS_bool & in_mIsClass) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientExternTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientExternTypeList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientExternTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientExternTypeList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractFileGeneration_generateCode) (const class cPtr_abstractFileGeneration * inObject,
                                                                              const class GALGAS_string constinArgument0,
                                                                              class GALGAS_stringset & ioArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fileGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_fileGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fileGenerationList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fileGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_fileGenerationList constructor_listWithValue (const class GALGAS_abstractFileGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractFileGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fileGenerationList add_operation (const GALGAS_fileGenerationList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fileGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractFileGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractFileGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractFileGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractFileGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileGenerationAtIndex (class GALGAS_abstractFileGeneration constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractFileGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractFileGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractFileGeneration getter_mFileGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_fileGenerationList ;
 
} ; // End of GALGAS_fileGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_fileGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fileGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fileGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractFileGeneration mProperty_mFileGeneration ;
  public: inline GALGAS_abstractFileGeneration readProperty_mFileGeneration (void) const {
    return mProperty_mFileGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_fileGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileGeneration (const GALGAS_abstractFileGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileGeneration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fileGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & in_mFileGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fileGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fileGenerationList_2D_element constructor_new (const class GALGAS_abstractFileGeneration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fileGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeGroupList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mGroupReference,
                                                 const class GALGAS_string & in_mGroupName,
                                                 const class GALGAS_string & in_mGroupPath,
                                                 const class GALGAS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeGroupList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeGroupList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeGroupList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_stringlist & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeGroupList add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeGroupList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_stringlist constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_stringlist & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_stringlist & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_stringlist & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_stringlist & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_stringlist & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mChildrenRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeGroupList ;
 
} ; // End of GALGAS_XCodeGroupList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeGroupList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeGroupList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mGroupReference ;
  public: inline GALGAS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GALGAS_string mProperty_mGroupName ;
  public: inline GALGAS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GALGAS_string mProperty_mGroupPath ;
  public: inline GALGAS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GALGAS_stringlist mProperty_mChildrenRefs ;
  public: inline GALGAS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeGroupList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeGroupList_2D_element (const GALGAS_string & in_mGroupReference,
                                            const GALGAS_string & in_mGroupName,
                                            const GALGAS_string & in_mGroupPath,
                                            const GALGAS_stringlist & in_mChildrenRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeGroupList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeGroupList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_stringlist & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeGroupList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTargetRef,
                                                 const class GALGAS_string & in_mTargetName,
                                                 const class GALGAS_string & in_mProductFileReference,
                                                 const class GALGAS_string & in_mProductFileName,
                                                 const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const class GALGAS_string & in_mBuildPhaseRef,
                                                 const class GALGAS_string & in_mBuildConfigurationListRef,
                                                 const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GALGAS_string & in_mBuildConfigurationRef,
                                                 const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const class GALGAS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeToolTargetList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeToolTargetList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeToolTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_stringlist & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_string & inOperand6,
                                                                             const class GALGAS_stringlist & inOperand7,
                                                                             const class GALGAS_string & inOperand8,
                                                                             const class GALGAS_stringlist & inOperand9,
                                                                             const class GALGAS_string & inOperand10
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     const class GALGAS_string & inOperand6,
                                                     const class GALGAS_stringlist & inOperand7,
                                                     const class GALGAS_string & inOperand8,
                                                     const class GALGAS_stringlist & inOperand9,
                                                     const class GALGAS_string & inOperand10
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeToolTargetList add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeToolTargetList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_stringlist constinArgument4,
                                                      class GALGAS_string constinArgument5,
                                                      class GALGAS_string constinArgument6,
                                                      class GALGAS_stringlist constinArgument7,
                                                      class GALGAS_string constinArgument8,
                                                      class GALGAS_stringlist constinArgument9,
                                                      class GALGAS_string constinArgument10,
                                                      class GALGAS_uint constinArgument11,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_stringlist & outArgument4,
                                                class GALGAS_string & outArgument5,
                                                class GALGAS_string & outArgument6,
                                                class GALGAS_stringlist & outArgument7,
                                                class GALGAS_string & outArgument8,
                                                class GALGAS_stringlist & outArgument9,
                                                class GALGAS_string & outArgument10,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_stringlist & outArgument4,
                                                      class GALGAS_string & outArgument5,
                                                      class GALGAS_string & outArgument6,
                                                      class GALGAS_stringlist & outArgument7,
                                                      class GALGAS_string & outArgument8,
                                                      class GALGAS_stringlist & outArgument9,
                                                      class GALGAS_string & outArgument10,
                                                      class GALGAS_uint constinArgument11,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_stringlist & outArgument4,
                                             class GALGAS_string & outArgument5,
                                             class GALGAS_string & outArgument6,
                                             class GALGAS_stringlist & outArgument7,
                                             class GALGAS_string & outArgument8,
                                             class GALGAS_stringlist & outArgument9,
                                             class GALGAS_string & outArgument10,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeToolTargetList ;
 
} ; // End of GALGAS_XCodeToolTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeToolTargetList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeToolTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTargetRef ;
  public: inline GALGAS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GALGAS_string mProperty_mTargetName ;
  public: inline GALGAS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_string mProperty_mProductFileReference ;
  public: inline GALGAS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GALGAS_string mProperty_mProductFileName ;
  public: inline GALGAS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GALGAS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GALGAS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GALGAS_string mProperty_mBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationListRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GALGAS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GALGAS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GALGAS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GALGAS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeToolTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeToolTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeToolTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_stringlist & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_stringlist & inOperand7,
                                                                              const class GALGAS_string & inOperand8,
                                                                              const class GALGAS_stringlist & inOperand9,
                                                                              const class GALGAS_string & inOperand10
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeToolTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTargetRef,
                                                 const class GALGAS_string & in_mTargetName,
                                                 const class GALGAS_string & in_mProductFileReference,
                                                 const class GALGAS_string & in_mProductFileName,
                                                 const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const class GALGAS_string & in_mBuildPhaseRef,
                                                 const class GALGAS_string & in_mBuildConfigurationListRef,
                                                 const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GALGAS_string & in_mBuildConfigurationRef,
                                                 const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const class GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const class GALGAS__32_stringlist & in_mDependentTargets,
                                                 const class GALGAS_string & in_mResourceBuildRef,
                                                 const class GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                 const class GALGAS_string & in_mInfoPListFile
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeAppTargetList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeAppTargetList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeAppTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_stringlist & inOperand4,
                                                                            const class GALGAS_string & inOperand5,
                                                                            const class GALGAS_string & inOperand6,
                                                                            const class GALGAS_stringlist & inOperand7,
                                                                            const class GALGAS_string & inOperand8,
                                                                            const class GALGAS_stringlist & inOperand9,
                                                                            const class GALGAS_string & inOperand10,
                                                                            const class GALGAS__32_stringlist & inOperand11,
                                                                            const class GALGAS_string & inOperand12,
                                                                            const class GALGAS_stringlist & inOperand13,
                                                                            const class GALGAS_string & inOperand14
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     const class GALGAS_string & inOperand6,
                                                     const class GALGAS_stringlist & inOperand7,
                                                     const class GALGAS_string & inOperand8,
                                                     const class GALGAS_stringlist & inOperand9,
                                                     const class GALGAS_string & inOperand10,
                                                     const class GALGAS__32_stringlist & inOperand11,
                                                     const class GALGAS_string & inOperand12,
                                                     const class GALGAS_stringlist & inOperand13,
                                                     const class GALGAS_string & inOperand14
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeAppTargetList add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeAppTargetList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_stringlist constinArgument4,
                                                      class GALGAS_string constinArgument5,
                                                      class GALGAS_string constinArgument6,
                                                      class GALGAS_stringlist constinArgument7,
                                                      class GALGAS_string constinArgument8,
                                                      class GALGAS_stringlist constinArgument9,
                                                      class GALGAS_string constinArgument10,
                                                      class GALGAS__32_stringlist constinArgument11,
                                                      class GALGAS_string constinArgument12,
                                                      class GALGAS_stringlist constinArgument13,
                                                      class GALGAS_string constinArgument14,
                                                      class GALGAS_uint constinArgument15,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 class GALGAS__32_stringlist & outArgument11,
                                                 class GALGAS_string & outArgument12,
                                                 class GALGAS_stringlist & outArgument13,
                                                 class GALGAS_string & outArgument14,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_stringlist & outArgument4,
                                                class GALGAS_string & outArgument5,
                                                class GALGAS_string & outArgument6,
                                                class GALGAS_stringlist & outArgument7,
                                                class GALGAS_string & outArgument8,
                                                class GALGAS_stringlist & outArgument9,
                                                class GALGAS_string & outArgument10,
                                                class GALGAS__32_stringlist & outArgument11,
                                                class GALGAS_string & outArgument12,
                                                class GALGAS_stringlist & outArgument13,
                                                class GALGAS_string & outArgument14,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_stringlist & outArgument4,
                                                      class GALGAS_string & outArgument5,
                                                      class GALGAS_string & outArgument6,
                                                      class GALGAS_stringlist & outArgument7,
                                                      class GALGAS_string & outArgument8,
                                                      class GALGAS_stringlist & outArgument9,
                                                      class GALGAS_string & outArgument10,
                                                      class GALGAS__32_stringlist & outArgument11,
                                                      class GALGAS_string & outArgument12,
                                                      class GALGAS_stringlist & outArgument13,
                                                      class GALGAS_string & outArgument14,
                                                      class GALGAS_uint constinArgument15,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInfoPListFileAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              class GALGAS__32_stringlist & outArgument11,
                                              class GALGAS_string & outArgument12,
                                              class GALGAS_stringlist & outArgument13,
                                              class GALGAS_string & outArgument14,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_stringlist & outArgument4,
                                             class GALGAS_string & outArgument5,
                                             class GALGAS_string & outArgument6,
                                             class GALGAS_stringlist & outArgument7,
                                             class GALGAS_string & outArgument8,
                                             class GALGAS_stringlist & outArgument9,
                                             class GALGAS_string & outArgument10,
                                             class GALGAS__32_stringlist & outArgument11,
                                             class GALGAS_string & outArgument12,
                                             class GALGAS_stringlist & outArgument13,
                                             class GALGAS_string & outArgument14,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mDependentTargetsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mInfoPListFileAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mResourceBuildRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeAppTargetList ;
 
} ; // End of GALGAS_XCodeAppTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeAppTargetList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mInfoPListFile (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeAppTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTargetRef ;
  public: inline GALGAS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GALGAS_string mProperty_mTargetName ;
  public: inline GALGAS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_string mProperty_mProductFileReference ;
  public: inline GALGAS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GALGAS_string mProperty_mProductFileName ;
  public: inline GALGAS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GALGAS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GALGAS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GALGAS_string mProperty_mBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationListRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GALGAS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GALGAS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GALGAS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GALGAS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GALGAS__32_stringlist mProperty_mDependentTargets ;
  public: inline GALGAS__32_stringlist readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GALGAS_string mProperty_mResourceBuildRef ;
  public: inline GALGAS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GALGAS_stringlist mProperty_mResourceFileBuildRefs ;
  public: inline GALGAS_stringlist readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

  public: GALGAS_string mProperty_mInfoPListFile ;
  public: inline GALGAS_string readProperty_mInfoPListFile (void) const {
    return mProperty_mInfoPListFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeAppTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

  public: inline void setter_setMInfoPListFile (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPListFile = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & in_mTargetRef,
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
                                                const GALGAS_string & in_mInfoPListFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeAppTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeAppTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_stringlist & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_string & inOperand6,
                                                                             const class GALGAS_stringlist & inOperand7,
                                                                             const class GALGAS_string & inOperand8,
                                                                             const class GALGAS_stringlist & inOperand9,
                                                                             const class GALGAS_string & inOperand10,
                                                                             const class GALGAS__32_stringlist & inOperand11,
                                                                             const class GALGAS_string & inOperand12,
                                                                             const class GALGAS_stringlist & inOperand13,
                                                                             const class GALGAS_string & inOperand14
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeAppTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFileReference,
                                                 const class GALGAS_string & in_mFileName,
                                                 const class GALGAS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_BuildFileList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_BuildFileList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_string & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_BuildFileList add_operation (const GALGAS_BuildFileList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_BuildFileList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_BuildFileList : public cGenericAbstractEnumerator {
  public: cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_BuildFileList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFileReference ;
  public: inline GALGAS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GALGAS_string mProperty_mFileName ;
  public: inline GALGAS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GALGAS_string mProperty_mBuildReference ;
  public: inline GALGAS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_BuildFileList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_BuildFileList_2D_element (const GALGAS_string & in_mFileReference,
                                           const GALGAS_string & in_mFileName,
                                           const GALGAS_string & in_mBuildReference) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_BuildFileList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_BuildFileList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @mainXibElement enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_mainXibElement (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_text,
    kEnum_outlet
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mainXibElement extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mainXibElement constructor_outlet (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_mainXibElement constructor_text (const class GALGAS_lstring & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mainXibElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_outlet (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_text (class GALGAS_lstring & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_outlet (class GALGAS_lstring & outOperand0,
                                                 class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_text (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @mainXibElement enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_text : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_mainXibElement_text (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_outlet : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                       const GALGAS_lstring & inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_mainXibElement_outlet (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibLineDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_mainXibElement mProperty_mElement ;
  public: inline GALGAS_mainXibElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_mainXibLineDescriptorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_mainXibElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_mainXibLineDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mainXibLineDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mainXibLineDescriptorList_2D_element constructor_new (const class GALGAS_mainXibElement & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibLineDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mainXibDescriptorList generateCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateCode (const class GALGAS_mainXibDescriptorList & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

