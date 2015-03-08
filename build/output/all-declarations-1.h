#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @arrayControllerForGeneration list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mControllerName,
                                                  const class GALGAS_string & in_mObjectTypeName,
                                                  const class GALGAS_string & in_mTomanyRelationshipName,
                                                  const class GALGAS_string & in_mElementTypeName,
                                                  const class GALGAS_string & in_mTableViewOutletName,
                                                  const class GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_arrayControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 const class GALGAS_string & inOperand4,
                                                                                 const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_arrayControllerForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerForGeneration operator_concat (const GALGAS_arrayControllerForGeneration & inOperand
                                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerForGeneration add_operation (const GALGAS_arrayControllerForGeneration & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_string constinArgument4,
                                                         class GALGAS_arrayControllerBoundColumnListForGeneration constinArgument5,
                                                         class GALGAS_uint constinArgument6,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_string & outArgument4,
                                                    class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_string & outArgument4,
                                                         class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument5,
                                                         class GALGAS_uint constinArgument6,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration reader_mArrayControllerBoundColumnListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mElementTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObjectTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTableViewOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTomanyRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerForGeneration ;
 
} ; // End of GALGAS_arrayControllerForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerForGeneration (const GALGAS_arrayControllerForGeneration & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTomanyRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mElementTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTableViewOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerBoundColumnListForGeneration current_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @arrayControllerForGeneration_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mControllerName ;
  public : GALGAS_string mAttribute_mObjectTypeName ;
  public : GALGAS_string mAttribute_mTomanyRelationshipName ;
  public : GALGAS_string mAttribute_mElementTypeName ;
  public : GALGAS_string mAttribute_mTableViewOutletName ;
  public : GALGAS_arrayControllerBoundColumnListForGeneration mAttribute_mArrayControllerBoundColumnListForGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerForGeneration_2D_element (const GALGAS_string & in_mControllerName,
                                                           const GALGAS_string & in_mObjectTypeName,
                                                           const GALGAS_string & in_mTomanyRelationshipName,
                                                           const GALGAS_string & in_mElementTypeName,
                                                           const GALGAS_string & in_mTableViewOutletName,
                                                           const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4,
                                                                                  const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration reader_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObjectTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTableViewOutletName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTomanyRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @targetActionList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_targetActionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_targetActionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_targetActionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOutletName,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_string & in_mActionName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_targetActionList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_targetActionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_targetActionList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_targetActionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_targetActionList operator_concat (const GALGAS_targetActionList & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_targetActionList add_operation (const GALGAS_targetActionList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetActionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetActionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_targetActionList ;
 
} ; // End of GALGAS_targetActionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_targetActionList : public cGenericAbstractEnumerator {
  public : cEnumerator_targetActionList (const GALGAS_targetActionList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mActionName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_targetActionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetActionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @targetActionList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_targetActionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mOutletName ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_string mAttribute_mActionName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_targetActionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_targetActionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_targetActionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_targetActionList_2D_element (const GALGAS_string & in_mOutletName,
                                               const GALGAS_string & in_mTargetName,
                                               const GALGAS_string & in_mActionName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_targetActionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_targetActionList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_targetActionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_targetActionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetActionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @validationStubRoutineListForGeneration list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_validationStubRoutineListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_validationStubRoutineListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_validationStubRoutineListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mObjectTypeName,
                                                  const class GALGAS_string & in_mModelName,
                                                  const class GALGAS_string & in_mModelTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_validationStubRoutineListForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_validationStubRoutineListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_validationStubRoutineListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                           const class GALGAS_string & inOperand1,
                                                                                           const class GALGAS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_validationStubRoutineListForGeneration operator_concat (const GALGAS_validationStubRoutineListForGeneration & inOperand
                                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_validationStubRoutineListForGeneration add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mModelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObjectTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_validationStubRoutineListForGeneration ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_validationStubRoutineListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_validationStubRoutineListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @validationStubRoutineListForGeneration_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_validationStubRoutineListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mObjectTypeName ;
  public : GALGAS_string mAttribute_mModelName ;
  public : GALGAS_string mAttribute_mModelTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_validationStubRoutineListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & in_mObjectTypeName,
                                                                     const GALGAS_string & in_mModelName,
                                                                     const GALGAS_string & in_mModelTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_validationStubRoutineListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_validationStubRoutineListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                            const class GALGAS_string & inOperand1,
                                                                                            const class GALGAS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mModelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObjectTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @preferenceListForGeneration list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferenceListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_preferenceListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_preferenceListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mPreferenceName,
                                                  const class GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                  const class GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                  const class GALGAS_decoratedOutletMap & in_mOutletMap,
                                                  const class GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferenceListForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferenceListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_preferenceListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_attributeListForGeneration & inOperand1,
                                                                                const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                const class GALGAS_decoratedOutletMap & inOperand3,
                                                                                const class GALGAS_regularBindingsGenerationList & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_preferenceListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_attributeListForGeneration & inOperand1,
                                                      const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                      const class GALGAS_decoratedOutletMap & inOperand3,
                                                      const class GALGAS_regularBindingsGenerationList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_preferenceListForGeneration operator_concat (const GALGAS_preferenceListForGeneration & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_preferenceListForGeneration add_operation (const GALGAS_preferenceListForGeneration & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_attributeListForGeneration constinArgument1,
                                                         class GALGAS_transientDefinitionListForGeneration constinArgument2,
                                                         class GALGAS_decoratedOutletMap constinArgument3,
                                                         class GALGAS_regularBindingsGenerationList constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_attributeListForGeneration & outArgument1,
                                                    class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                    class GALGAS_decoratedOutletMap & outArgument3,
                                                    class GALGAS_regularBindingsGenerationList & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_attributeListForGeneration & outArgument1,
                                                   class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                   class GALGAS_decoratedOutletMap & outArgument3,
                                                   class GALGAS_regularBindingsGenerationList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_attributeListForGeneration & outArgument1,
                                                         class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                         class GALGAS_decoratedOutletMap & outArgument3,
                                                         class GALGAS_regularBindingsGenerationList & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_attributeListForGeneration & outArgument1,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                               class GALGAS_decoratedOutletMap & outArgument3,
                                               class GALGAS_regularBindingsGenerationList & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_attributeListForGeneration & outArgument1,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                              class GALGAS_decoratedOutletMap & outArgument3,
                                              class GALGAS_regularBindingsGenerationList & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPreferenceNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_mRegularBindingsGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_preferenceListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_preferenceListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_preferenceListForGeneration ;
 
} ; // End of GALGAS_preferenceListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_preferenceListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_preferenceListForGeneration (const GALGAS_preferenceListForGeneration & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mPreferenceName (LOCATION_ARGS) const ;
  public : class GALGAS_attributeListForGeneration current_mAttributeListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_transientDefinitionListForGeneration current_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedOutletMap current_mOutletMap (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingsGenerationList current_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_preferenceListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferenceListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @attributeListForGeneration list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_attributeListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_attributeListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType,
                                                  const class GALGAS_string & in_mAttributeName,
                                                  const class GALGAS_string & in_mDefaultValueInSwift,
                                                  const class GALGAS_bool & in_mNeedsValidation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeListForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_attributeListForGeneration constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_bool & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_attributeListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_attributeListForGeneration operator_concat (const GALGAS_attributeListForGeneration & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_attributeListForGeneration add_operation (const GALGAS_attributeListForGeneration & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValueInSwiftAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_attributeListForGeneration ;
 
} ; // End of GALGAS_attributeListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_attributeListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_attributeListForGeneration (const GALGAS_attributeListForGeneration & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValueInSwift (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNeedsValidation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_attributeListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @regularBindingsGenerationList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_regularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_regularBindingsGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_regularBindingsGenerationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOutletName,
                                                  const class GALGAS_string & in_mBindingName,
                                                  const class GALGAS_stringlist & in_mBoundObjectStringList,
                                                  const class GALGAS_string & in_mBindingOptionsString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_regularBindingsGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_regularBindingsGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_stringlist & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_regularBindingsGenerationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2,
                                                      const class GALGAS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList operator_concat (const GALGAS_regularBindingsGenerationList & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_stringlist constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_stringlist & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_stringlist & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_stringlist & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_stringlist & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBoundObjectStringListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingsGenerationList ;
 
} ; // End of GALGAS_regularBindingsGenerationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_regularBindingsGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBoundObjectStringList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_regularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @preferenceListForGeneration_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferenceListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mPreferenceName ;
  public : GALGAS_attributeListForGeneration mAttribute_mAttributeListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mDecoratedTransientListForGeneration ;
  public : GALGAS_decoratedOutletMap mAttribute_mOutletMap ;
  public : GALGAS_regularBindingsGenerationList mAttribute_mRegularBindingsGenerationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferenceListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_preferenceListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_preferenceListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_preferenceListForGeneration_2D_element (const GALGAS_string & in_mPreferenceName,
                                                          const GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                          const GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferenceListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferenceListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_attributeListForGeneration & inOperand1,
                                                                                 const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                 const class GALGAS_decoratedOutletMap & inOperand3,
                                                                                 const class GALGAS_regularBindingsGenerationList & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferenceListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPreferenceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_mRegularBindingsGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferenceListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferenceListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @documentListForGeneration list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_documentListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_documentListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_documentListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mDocumentName,
                                                  const class GALGAS_string & in_mRootEntityName,
                                                  const class GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                  const class GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                  const class GALGAS_decoratedOutletMap & in_mOutletMap,
                                                  const class GALGAS_arrayControllerForGeneration & in_mDocumentArrayControllerForGeneration,
                                                  const class GALGAS_targetActionList & in_mTargetActionList,
                                                  const class GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_documentListForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_documentListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_documentListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_attributeListForGeneration & inOperand2,
                                                                              const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                              const class GALGAS_decoratedOutletMap & inOperand4,
                                                                              const class GALGAS_arrayControllerForGeneration & inOperand5,
                                                                              const class GALGAS_targetActionList & inOperand6,
                                                                              const class GALGAS_regularBindingsGenerationList & inOperand7
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_documentListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_attributeListForGeneration & inOperand2,
                                                      const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                      const class GALGAS_decoratedOutletMap & inOperand4,
                                                      const class GALGAS_arrayControllerForGeneration & inOperand5,
                                                      const class GALGAS_targetActionList & inOperand6,
                                                      const class GALGAS_regularBindingsGenerationList & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_documentListForGeneration operator_concat (const GALGAS_documentListForGeneration & inOperand
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_documentListForGeneration add_operation (const GALGAS_documentListForGeneration & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_attributeListForGeneration constinArgument2,
                                                         class GALGAS_transientDefinitionListForGeneration constinArgument3,
                                                         class GALGAS_decoratedOutletMap constinArgument4,
                                                         class GALGAS_arrayControllerForGeneration constinArgument5,
                                                         class GALGAS_targetActionList constinArgument6,
                                                         class GALGAS_regularBindingsGenerationList constinArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_attributeListForGeneration & outArgument2,
                                                    class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                    class GALGAS_decoratedOutletMap & outArgument4,
                                                    class GALGAS_arrayControllerForGeneration & outArgument5,
                                                    class GALGAS_targetActionList & outArgument6,
                                                    class GALGAS_regularBindingsGenerationList & outArgument7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_attributeListForGeneration & outArgument2,
                                                   class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                   class GALGAS_decoratedOutletMap & outArgument4,
                                                   class GALGAS_arrayControllerForGeneration & outArgument5,
                                                   class GALGAS_targetActionList & outArgument6,
                                                   class GALGAS_regularBindingsGenerationList & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_attributeListForGeneration & outArgument2,
                                                         class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                         class GALGAS_decoratedOutletMap & outArgument4,
                                                         class GALGAS_arrayControllerForGeneration & outArgument5,
                                                         class GALGAS_targetActionList & outArgument6,
                                                         class GALGAS_regularBindingsGenerationList & outArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_attributeListForGeneration & outArgument2,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                               class GALGAS_decoratedOutletMap & outArgument4,
                                               class GALGAS_arrayControllerForGeneration & outArgument5,
                                               class GALGAS_targetActionList & outArgument6,
                                               class GALGAS_regularBindingsGenerationList & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_attributeListForGeneration & outArgument2,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                              class GALGAS_decoratedOutletMap & outArgument4,
                                              class GALGAS_arrayControllerForGeneration & outArgument5,
                                              class GALGAS_targetActionList & outArgument6,
                                              class GALGAS_regularBindingsGenerationList & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_mDocumentArrayControllerForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDocumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_mRegularBindingsGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRootEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetActionList reader_mTargetActionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_documentListForGeneration ;
 
} ; // End of GALGAS_documentListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_documentListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_documentListForGeneration (const GALGAS_documentListForGeneration & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mDocumentName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mRootEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_attributeListForGeneration current_mAttributeListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_transientDefinitionListForGeneration current_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedOutletMap current_mOutletMap (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerForGeneration current_mDocumentArrayControllerForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_targetActionList current_mTargetActionList (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingsGenerationList current_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_documentListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_documentListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @documentListForGeneration_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_documentListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mDocumentName ;
  public : GALGAS_string mAttribute_mRootEntityName ;
  public : GALGAS_attributeListForGeneration mAttribute_mAttributeListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mDecoratedTransientListForGeneration ;
  public : GALGAS_decoratedOutletMap mAttribute_mOutletMap ;
  public : GALGAS_arrayControllerForGeneration mAttribute_mDocumentArrayControllerForGeneration ;
  public : GALGAS_targetActionList mAttribute_mTargetActionList ;
  public : GALGAS_regularBindingsGenerationList mAttribute_mRegularBindingsGenerationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_documentListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_documentListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_documentListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_documentListForGeneration_2D_element (const GALGAS_string & in_mDocumentName,
                                                        const GALGAS_string & in_mRootEntityName,
                                                        const GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                        const GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                        const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                        const GALGAS_arrayControllerForGeneration & in_mDocumentArrayControllerForGeneration,
                                                        const GALGAS_targetActionList & in_mTargetActionList,
                                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_documentListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_documentListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_attributeListForGeneration & inOperand2,
                                                                               const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                               const class GALGAS_decoratedOutletMap & inOperand4,
                                                                               const class GALGAS_arrayControllerForGeneration & inOperand5,
                                                                               const class GALGAS_targetActionList & inOperand6,
                                                                               const class GALGAS_regularBindingsGenerationList & inOperand7
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_documentListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_mDocumentArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDocumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList reader_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetActionList reader_mTargetActionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_documentListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @entityListForGeneration list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_entityListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_entityListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mEntityName,
                                                  const class GALGAS_string & in_mSuperEntityName,
                                                  const class GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                  const class GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                  const class GALGAS_entityRelationshipListForGeneration & in_mDecoratedEntityRelationshipList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_entityListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_entityListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_attributeListForGeneration & inOperand2,
                                                                            const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                            const class GALGAS_entityRelationshipListForGeneration & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_entityListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_attributeListForGeneration & inOperand2,
                                                      const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                      const class GALGAS_entityRelationshipListForGeneration & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_entityListForGeneration operator_concat (const GALGAS_entityListForGeneration & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_entityListForGeneration add_operation (const GALGAS_entityListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_attributeListForGeneration constinArgument2,
                                                         class GALGAS_transientDefinitionListForGeneration constinArgument3,
                                                         class GALGAS_entityRelationshipListForGeneration constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_attributeListForGeneration & outArgument2,
                                                    class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                    class GALGAS_entityRelationshipListForGeneration & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_attributeListForGeneration & outArgument2,
                                                   class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                   class GALGAS_entityRelationshipListForGeneration & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_attributeListForGeneration & outArgument2,
                                                         class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                         class GALGAS_entityRelationshipListForGeneration & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_attributeListForGeneration & outArgument2,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                               class GALGAS_entityRelationshipListForGeneration & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_attributeListForGeneration & outArgument2,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                              class GALGAS_entityRelationshipListForGeneration & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityRelationshipListForGeneration reader_mDecoratedEntityRelationshipListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSuperEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_entityListForGeneration ;
 
} ; // End of GALGAS_entityListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_entityListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_entityListForGeneration (const GALGAS_entityListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSuperEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_attributeListForGeneration current_mAttributeListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_transientDefinitionListForGeneration current_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_entityRelationshipListForGeneration current_mDecoratedEntityRelationshipList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_entityListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @entityRelationshipListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityRelationshipListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_entityRelationshipListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_entityRelationshipListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mRelationshipName,
                                                  const class GALGAS_bool & in_mIsToMany,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mRelationshipType,
                                                  const class GALGAS_string & in_mOppositeRelationshipName,
                                                  const class GALGAS_bool & in_mOppositeRelationshipIsToMany
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityRelationshipListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_entityRelationshipListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_entityRelationshipListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_bool & inOperand1,
                                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                        const class GALGAS_string & inOperand3,
                                                                                        const class GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_entityRelationshipListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_entityRelationshipListForGeneration operator_concat (const GALGAS_entityRelationshipListForGeneration & inOperand
                                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_entityRelationshipListForGeneration add_operation (const GALGAS_entityRelationshipListForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToManyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOppositeRelationshipIsToManyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOppositeRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRelationshipTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityRelationshipListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityRelationshipListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_entityRelationshipListForGeneration ;
 
} ; // End of GALGAS_entityRelationshipListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_entityRelationshipListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_entityRelationshipListForGeneration (const GALGAS_entityRelationshipListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsToMany (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mRelationshipType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOppositeRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mOppositeRelationshipIsToMany (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_entityRelationshipListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityRelationshipListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @entityListForGeneration_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mEntityName ;
  public : GALGAS_string mAttribute_mSuperEntityName ;
  public : GALGAS_attributeListForGeneration mAttribute_mAttributeListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mDecoratedTransientListForGeneration ;
  public : GALGAS_entityRelationshipListForGeneration mAttribute_mDecoratedEntityRelationshipList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_entityListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_entityListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_entityListForGeneration_2D_element (const GALGAS_string & in_mEntityName,
                                                      const GALGAS_string & in_mSuperEntityName,
                                                      const GALGAS_attributeListForGeneration & in_mAttributeListForGeneration,
                                                      const GALGAS_transientDefinitionListForGeneration & in_mDecoratedTransientListForGeneration,
                                                      const GALGAS_entityRelationshipListForGeneration & in_mDecoratedEntityRelationshipList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_entityListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_attributeListForGeneration & inOperand2,
                                                                             const class GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                             const class GALGAS_entityRelationshipListForGeneration & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityRelationshipListForGeneration reader_mDecoratedEntityRelationshipList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSuperEntityName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @enumListForGeneration list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mEnumName,
                                                  const class GALGAS_lstringlist & in_mEnumConstantList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumListForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_enumListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_lstringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_enumListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumListForGeneration operator_concat (const GALGAS_enumListForGeneration & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumListForGeneration add_operation (const GALGAS_enumListForGeneration & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_lstringlist constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_lstringlist & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mEnumConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumListForGeneration ;
 
} ; // End of GALGAS_enumListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_enumListForGeneration (const GALGAS_enumListForGeneration & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mEnumName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @enumListForGeneration_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mEnumName ;
  public : GALGAS_lstringlist mAttribute_mEnumConstantList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumListForGeneration_2D_element (const GALGAS_string & in_mEnumName,
                                                    const GALGAS_lstringlist & in_mEnumConstantList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_lstringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mEnumConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @attributeListForGeneration_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;
  public : GALGAS_string mAttribute_mAttributeName ;
  public : GALGAS_string mAttribute_mDefaultValueInSwift ;
  public : GALGAS_bool mAttribute_mNeedsValidation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_attributeListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_attributeListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_attributeListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType,
                                                         const GALGAS_string & in_mAttributeName,
                                                         const GALGAS_string & in_mDefaultValueInSwift,
                                                         const GALGAS_bool & in_mNeedsValidation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeListForGeneration_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValueInSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @regularBindingsGenerationList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_regularBindingsGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mOutletName ;
  public : GALGAS_string mAttribute_mBindingName ;
  public : GALGAS_stringlist mAttribute_mBoundObjectStringList ;
  public : GALGAS_string mAttribute_mBindingOptionsString ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_regularBindingsGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_regularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_regularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & in_mOutletName,
                                                            const GALGAS_string & in_mBindingName,
                                                            const GALGAS_stringlist & in_mBoundObjectStringList,
                                                            const GALGAS_string & in_mBindingOptionsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_regularBindingsGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_stringlist & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBindingOptionsString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBoundObjectStringList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularBindingsGenerationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @controllerMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_controllerMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_controllerMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_controllerMap (const GALGAS_controllerMap & inSource) ;
  public : GALGAS_controllerMap & operator = (const GALGAS_controllerMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controllerMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_controllerMap constructor_mapWithMapToOverride (const class GALGAS_controllerMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_setMControllerClassNameForKey (class GALGAS_string constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerMap reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_controllerMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_controllerMap ;
 
} ; // End of GALGAS_controllerMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controllerMap : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerMap (const GALGAS_controllerMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mControllerClassName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@controllerMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_controllerMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mControllerClassName ;

//--- Constructor
  public : cMapElement_controllerMap (const GALGAS_lstring & inKey,
                                      const GALGAS_string & in_mControllerClassName
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controllerMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mControllerClassName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controllerMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controllerMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controllerMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controllerMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_string & in_mControllerClassName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controllerMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_string & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controllerMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerClassName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @preferencesPropertyArrayMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_preferencesPropertyArrayMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferencesPropertyArrayMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_preferencesPropertyArrayMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_preferencesPropertyArrayMap (const GALGAS_preferencesPropertyArrayMap & inSource) ;
  public : GALGAS_preferencesPropertyArrayMap & operator = (const GALGAS_preferencesPropertyArrayMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferencesPropertyArrayMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferencesPropertyArrayMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_preferencesPropertyArrayMap constructor_mapWithMapToOverride (const class GALGAS_preferencesPropertyArrayMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_setMControllerClassNameForKey (class GALGAS_string constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_preferencesPropertyArrayMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_preferencesPropertyArrayMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_preferencesPropertyArrayMap ;
 
} ; // End of GALGAS_preferencesPropertyArrayMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_preferencesPropertyArrayMap : public cGenericAbstractEnumerator {
  public : cEnumerator_preferencesPropertyArrayMap (const GALGAS_preferencesPropertyArrayMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mControllerClassName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_preferencesPropertyArrayMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesPropertyArrayMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@preferencesPropertyArrayMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_preferencesPropertyArrayMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mControllerClassName ;

//--- Constructor
  public : cMapElement_preferencesPropertyArrayMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mControllerClassName
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @preferencesPropertyArrayMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferencesPropertyArrayMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mControllerClassName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferencesPropertyArrayMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_preferencesPropertyArrayMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_preferencesPropertyArrayMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_preferencesPropertyArrayMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_string & in_mControllerClassName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferencesPropertyArrayMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferencesPropertyArrayMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferencesPropertyArrayMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mControllerClassName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesPropertyArrayMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesPropertyArrayMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @entityRelationshipListForGeneration_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityRelationshipListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mRelationshipName ;
  public : GALGAS_bool mAttribute_mIsToMany ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mRelationshipType ;
  public : GALGAS_string mAttribute_mOppositeRelationshipName ;
  public : GALGAS_bool mAttribute_mOppositeRelationshipIsToMany ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityRelationshipListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_entityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_entityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_entityRelationshipListForGeneration_2D_element (const GALGAS_string & in_mRelationshipName,
                                                                  const GALGAS_bool & in_mIsToMany,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mRelationshipType,
                                                                  const GALGAS_string & in_mOppositeRelationshipName,
                                                                  const GALGAS_bool & in_mOppositeRelationshipIsToMany) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityRelationshipListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_entityRelationshipListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1,
                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                         const class GALGAS_string & inOperand3,
                                                                                         const class GALGAS_bool & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityRelationshipListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOppositeRelationshipIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOppositeRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRelationshipType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityRelationshipListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityRelationshipListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @observablePropertyList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractObservablePropertyAST mAttribute_mObservableProperty ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_observablePropertyList_2D_element (const GALGAS_abstractObservablePropertyAST & in_mObservableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_observablePropertyList_2D_element constructor_new (const class GALGAS_abstractObservablePropertyAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mObservableProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @outletBindingModelList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletBindingModelList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
                                                  const class GALGAS_bool & in_mModelIsTransient,
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
  public : static GALGAS_outletBindingModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletBindingModelList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_location & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletBindingModelList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList operator_concat (const GALGAS_outletBindingModelList & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_location constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    class GALGAS_location & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_location & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_location & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelIsTransientAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingModelList ;
 
} ; // End of GALGAS_outletBindingModelList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletBindingModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mModelTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelIsTransient (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletBindingModelList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mModelTypeProxy ;
  public : GALGAS_bool mAttribute_mModelIsTransient ;
  public : GALGAS_location mAttribute_mErrorLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletBindingModelList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingModelList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
                                                     const GALGAS_bool & in_mModelIsTransient,
                                                     const GALGAS_location & in_mErrorLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletBindingModelList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_location & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelIsTransient (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingModelList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @controllerBindingOptionList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerBindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOptionName ;
  public : GALGAS_lstring mAttribute_mOptionTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controllerBindingOptionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controllerBindingOptionList_2D_element (void) ;

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
  public : static GALGAS_controllerBindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @outletClassBindingSpecificationModelList_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mModelTypeName ;
  public : GALGAS_bool mAttribute_mModelShouldBeWritableProperty ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

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
  public : static GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModelTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletClassBindingSpecificationList list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassBindingSpecificationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mIsUserDefined,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                  const class GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassBindingSpecificationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletClassBindingSpecificationList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                        const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                      const class GALGAS_controllerBindingOptionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationList operator_concat (const GALGAS_outletClassBindingSpecificationList & inOperand
                                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationList add_operation (const GALGAS_outletClassBindingSpecificationList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_bool constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_outletClassBindingSpecificationModelList constinArgument2,
                                                         class GALGAS_controllerBindingOptionList constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_bool & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                    class GALGAS_controllerBindingOptionList & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_bool & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                   class GALGAS_controllerBindingOptionList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_bool & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                         class GALGAS_controllerBindingOptionList & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                               class GALGAS_controllerBindingOptionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GALGAS_controllerBindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList reader_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsUserDefinedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList reader_mOutletClassBindingSpecificationModelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mIsUserDefined (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassBindingSpecificationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @outletClassBindingSpecificationList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassBindingSpecificationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mIsUserDefined ;
  public : GALGAS_lstring mAttribute_mBindingName ;
  public : GALGAS_outletClassBindingSpecificationModelList mAttribute_mOutletClassBindingSpecificationModelList ;
  public : GALGAS_controllerBindingOptionList mAttribute_mBindingOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassBindingSpecificationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_bool & in_mIsUserDefined,
                                                                  const GALGAS_lstring & in_mBindingName,
                                                                  const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                  const GALGAS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassBindingSpecificationList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                         const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList reader_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsUserDefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList reader_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bindingSpecificationMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_bindingSpecificationMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inSource) ;
  public : GALGAS_bindingSpecificationMap & operator = (const GALGAS_bindingSpecificationMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_bindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_bindingSpecificationMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_outletBindingSpecificationMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_outletBindingSpecificationMap constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMBindingMapForKey (class GALGAS_outletBindingSpecificationMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap reader_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationMap ;
 
} ; // End of GALGAS_bindingSpecificationMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outletBindingSpecificationMap map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_outletBindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) ;
  public : GALGAS_outletBindingSpecificationMap & operator = (const GALGAS_outletBindingSpecificationMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_outletBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_outletBindingSpecificationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                      const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_outletBindingSpecificationModelList constinArgument1,
                                                     class GALGAS_controllerBindingOptionDecoratedList constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMControllerBindingOptionDecoratedListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                                          class GALGAS_string constinArgument1,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOutletBindingSpecificationModelListForKey (class GALGAS_outletBindingSpecificationModelList constinArgument0,
                                                                                         class GALGAS_string constinArgument1,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationModelList & outArgument1,
                                                   class GALGAS_controllerBindingOptionDecoratedList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_mControllerBindingOptionDecoratedListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList reader_mOutletBindingSpecificationModelListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_outletBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationMap ;
 
} ; // End of GALGAS_outletBindingSpecificationMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletBindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionDecoratedList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@bindingSpecificationMap' map                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_outletBindingSpecificationMap mAttribute_mBindingMap ;

//--- Constructor
  public : cMapElement_bindingSpecificationMap (const GALGAS_lstring & inKey,
                                                const GALGAS_outletBindingSpecificationMap & in_mBindingMap
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @bindingSpecificationMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_outletBindingSpecificationMap mAttribute_mBindingMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_outletBindingSpecificationMap & in_mBindingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_outletBindingSpecificationMap & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap reader_mBindingMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingSpecificationMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @controllerBindingOptionDecoratedList list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerBindingOptionDecoratedList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionDecoratedList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controllerBindingOptionDecoratedList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionName,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionDecoratedList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controllerBindingOptionDecoratedList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_controllerBindingOptionDecoratedList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionDecoratedList operator_concat (const GALGAS_controllerBindingOptionDecoratedList & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionDecoratedList add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mOptionTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionDecoratedList ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controllerBindingOptionDecoratedList : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mOptionType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerBindingOptionDecoratedList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletBindingSpecificationModelList list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletBindingSpecificationModelList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
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
  public : static GALGAS_outletBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletBindingSpecificationModelList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                        const class GALGAS_bool & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingSpecificationModelList operator_concat (const GALGAS_outletBindingSpecificationModelList & inOperand
                                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingSpecificationModelList add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletBindingSpecificationModelList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mModelTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@outletBindingSpecificationMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_outletBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_outletBindingSpecificationModelList mAttribute_mOutletBindingSpecificationModelList ;
  public : GALGAS_controllerBindingOptionDecoratedList mAttribute_mControllerBindingOptionDecoratedList ;

//--- Constructor
  public : cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionDecoratedList
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletBindingSpecificationMap_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_outletBindingSpecificationModelList mAttribute_mOutletBindingSpecificationModelList ;
  public : GALGAS_controllerBindingOptionDecoratedList mAttribute_mControllerBindingOptionDecoratedList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                            const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionDecoratedList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                   const class GALGAS_controllerBindingOptionDecoratedList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_mControllerBindingOptionDecoratedList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList reader_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingSpecificationMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @outletBindingSpecificationModelList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mModelTypeProxy ;
  public : GALGAS_bool mAttribute_mModelShouldBeWritableProperty ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletBindingSpecificationModelList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
                                                                  const GALGAS_bool & in_mModelShouldBeWritableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingSpecificationModelList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @controllerBindingOptionDecoratedList_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerBindingOptionDecoratedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOptionName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mOptionType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controllerBindingOptionDecoratedList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_lstring & in_mOptionName,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionDecoratedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controllerBindingOptionDecoratedList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mOptionType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @bindingSpecificationListMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingSpecificationListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_outletClassBindingSpecificationList mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bindingSpecificationListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bindingSpecificationListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & in_key,
                                                          const GALGAS_outletClassBindingSpecificationList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingSpecificationListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_outletClassBindingSpecificationList & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList reader_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingSpecificationListMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputClassDependencyGraph ;

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputTransientDependencyGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'predefinedColors'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_predefinedColors (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'predefinedDates'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_predefinedDates (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'predefinedFonts'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_predefinedFonts (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'typeAnalysis'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_typeAnalysis (const class GALGAS_unifiedTypeMap constinArgument0,
                           const class GALGAS_outletClassMap constinArgument1,
                           const class GALGAS_bindingSpecificationMap constinArgument2,
                           class GALGAS_structForGeneration & outArgument3,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'unifiedTypeAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_unifiedTypeAnalysis (const class GALGAS_unifiedTypeMap constinArgument0,
                                  const class GALGAS_outletClassMap constinArgument1,
                                  const class GALGAS_bindingSpecificationMap constinArgument2,
                                  const class GALGAS_lstring constinArgument3,
                                  const class GALGAS_typeKind constinArgument4,
                                  const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                                  const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                                  const class GALGAS_decoratedAttributeMap constinArgument7,
                                  const class GALGAS_decoratedTransientMap constinArgument8,
                                  const class GALGAS_decoratedOutletMap constinArgument9,
                                  const class GALGAS_decoratedObservablePropertyMap constinArgument10,
                                  const class GALGAS_decoratedEntityRelationshipMap constinArgument11,
                                  const class GALGAS_decoratedObservablePropertyMap constinArgument12,
                                  const class GALGAS_actionMap constinArgument13,
                                  const class GALGAS_lstringlist constinArgument14,
                                  const class GALGAS_enumConstantMap constinArgument15,
                                  const class GALGAS_arrayControllerMap constinArgument16,
                                  class GALGAS_structForGeneration & ioArgument17,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structForGeneration struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structForGeneration : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_transientListForGeneration mAttribute_mTransientListForGeneration ;
  public : GALGAS_actionListForGeneration mAttribute_mActionListForGeneration ;
  public : GALGAS_preferenceListForGeneration mAttribute_mPreferenceListForGeneration ;
  public : GALGAS_documentListForGeneration mAttribute_mDocumentListForGeneration ;
  public : GALGAS_entityListForGeneration mAttribute_mEntityListForGeneration ;
  public : GALGAS_enumListForGeneration mAttribute_mEnumListForGeneration ;
  public : GALGAS_stringset mAttribute_mNeededOutletClasses ;
  public : GALGAS_stringset mAttribute_mControllerGenerationStringSet ;
  public : GALGAS_arrayControllerForGeneration mAttribute_mAllArrayControllerForGeneration ;
  public : GALGAS_validationStubRoutineListForGeneration mAttribute_mValidationStubRoutineListForGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_structForGeneration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_structForGeneration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_structForGeneration (const GALGAS_transientListForGeneration & in_mTransientListForGeneration,
                                       const GALGAS_actionListForGeneration & in_mActionListForGeneration,
                                       const GALGAS_preferenceListForGeneration & in_mPreferenceListForGeneration,
                                       const GALGAS_documentListForGeneration & in_mDocumentListForGeneration,
                                       const GALGAS_entityListForGeneration & in_mEntityListForGeneration,
                                       const GALGAS_enumListForGeneration & in_mEnumListForGeneration,
                                       const GALGAS_stringset & in_mNeededOutletClasses,
                                       const GALGAS_stringset & in_mControllerGenerationStringSet,
                                       const GALGAS_arrayControllerForGeneration & in_mAllArrayControllerForGeneration,
                                       const GALGAS_validationStubRoutineListForGeneration & in_mValidationStubRoutineListForGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structForGeneration constructor_new (const class GALGAS_transientListForGeneration & inOperand0,
                                                              const class GALGAS_actionListForGeneration & inOperand1,
                                                              const class GALGAS_preferenceListForGeneration & inOperand2,
                                                              const class GALGAS_documentListForGeneration & inOperand3,
                                                              const class GALGAS_entityListForGeneration & inOperand4,
                                                              const class GALGAS_enumListForGeneration & inOperand5,
                                                              const class GALGAS_stringset & inOperand6,
                                                              const class GALGAS_stringset & inOperand7,
                                                              const class GALGAS_arrayControllerForGeneration & inOperand8,
                                                              const class GALGAS_validationStubRoutineListForGeneration & inOperand9
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionListForGeneration reader_mActionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_mAllArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mControllerGenerationStringSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentListForGeneration reader_mDocumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneration reader_mEntityListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration reader_mEnumListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mNeededOutletClasses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_preferenceListForGeneration reader_mPreferenceListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientListForGeneration reader_mTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration reader_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract category reader '@abstractTransientDependencyAST buildDecoratedRepresentation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_abstractTransientDependencyForGeneration (*categoryReaderSignature_abstractTransientDependencyAST_buildDecoratedRepresentation) (const class cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                                                                                                                      class C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_buildDecoratedRepresentation (const int32_t inClassIndex,
                                                       categoryReaderSignature_abstractTransientDependencyAST_buildDecoratedRepresentation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractTransientDependencyForGeneration callCategoryReader_buildDecoratedRepresentation (const class cPtr_abstractTransientDependencyAST * inObject,
                                                                                                       const GALGAS_unifiedTypeMap_2D_proxy & constin_inRootEntityType,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Reader '@typeKind suitableForObservableProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_suitableForObservableProperty (const class GALGAS_typeKind & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@unifiedTypeMap-proxy swiftTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_swiftTypeName (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType) (const class cPtr_abstractDefaultValue * inObject,
                                                                                      const class GALGAS_unifiedTypeProxyList constinArgument0,
                                                                                      class GALGAS_string & outArgument1,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeDefaultValueType (const class cPtr_abstractDefaultValue * inObject,
                                                 const GALGAS_unifiedTypeProxyList constin_inAttributeActualTypeList,
                                                 GALGAS_string & out_outSwiftDefaultValueAsString,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Abstract category method '@abstractObservablePropertyAST analyzeBoundObservablePropertyForArrayControllerBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                               const class GALGAS_decoratedEntityRelationshipMap constinArgument0,
                                                                                                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                                                                                               class GALGAS_lstring & outArgument2,
                                                                                                                               class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (const int32_t inClassIndex,
                                                                                  categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                 const GALGAS_decoratedEntityRelationshipMap constin_inCurrentRelationshipMap,
                                                                                 GALGAS_unifiedTypeMap_2D_proxy & out_outRelationshipTypeProxy,
                                                                                 GALGAS_lstring & out_outBoundRootTomanyRelationshipName,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Abstract category method '@abstractTransientDependencyAST transientDependencySemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractTransientDependencyAST_transientDependencySemanticAnalysis) (const class cPtr_abstractTransientDependencyAST * inObject,
                                                                                                            const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                            const class GALGAS_lstring constinArgument1,
                                                                                                            const class GALGAS_decoratedObservablePropertyMap constinArgument2,
                                                                                                            const class GALGAS_arrayControllerMap constinArgument3,
                                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                            const class GALGAS_lstring constinArgument5,
                                                                                                            class GALGAS_transientDependencyListForGeneration & ioArgument6,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_transientDependencySemanticAnalysis (const int32_t inClassIndex,
                                                              categoryMethodSignature_abstractTransientDependencyAST_transientDependencySemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_transientDependencySemanticAnalysis (const class cPtr_abstractTransientDependencyAST * inObject,
                                                             const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                             const GALGAS_lstring constin_inTransientName,
                                                             const GALGAS_decoratedObservablePropertyMap constin_inAllObservablePropertyMap,
                                                             const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                             const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                             const GALGAS_lstring constin_inTransientPropertySignature,
                                                             GALGAS_transientDependencyListForGeneration & io_ioTransientDependencyListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'analyzeOutlets'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeOutlets (const class GALGAS_unifiedTypeMap constinArgument0,
                             const class GALGAS_outletClassMap constinArgument1,
                             const class GALGAS_bindingSpecificationMap constinArgument2,
                             const class GALGAS_lstring constinArgument3,
                             const class GALGAS_typeKind constinArgument4,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                             const class GALGAS_decoratedAttributeMap constinArgument7,
                             const class GALGAS_decoratedTransientMap constinArgument8,
                             const class GALGAS_decoratedOutletMap constinArgument9,
                             const class GALGAS_decoratedObservablePropertyMap constinArgument10,
                             const class GALGAS_decoratedEntityRelationshipMap constinArgument11,
                             const class GALGAS_decoratedObservablePropertyMap constinArgument12,
                             const class GALGAS_actionMap constinArgument13,
                             const class GALGAS_lstringlist constinArgument14,
                             const class GALGAS_enumConstantMap constinArgument15,
                             const class GALGAS_arrayControllerMap constinArgument16,
                             class GALGAS_structForGeneration & ioArgument17,
                             class GALGAS_regularBindingsGenerationList & outArgument18,
                             class GALGAS_targetActionList & outArgument19,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_enumGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'generateEnums'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateEnums (const class GALGAS_enumListForGeneration constinArgument0,
                            const class GALGAS_string constinArgument1,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'prefsGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_prefsGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_prefsGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'prefsGenerationTemplate preferencesInSwift'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferencesInSwift (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_PREFERENCES_5F_NAME,
                                                                              const class GALGAS_attributeListForGeneration & in_ATTRIBUTE_5F_LIST_5F_FOR_5F_GENERATION,
                                                                              const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                              const class GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                              const class GALGAS_preferencesPropertyArrayMap & in_ARRAY_5F_MAP,
                                                                              const class GALGAS_controllerMap & in_CONTROLLER_5F_MAP,
                                                                              const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Abstract category reader '@abstractTransientDependencyForGeneration generateActualParameterForComputeFunction'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractTransientDependencyForGeneration_generateActualParameterForComputeFunction) (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                                           class C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateActualParameterForComputeFunction (const int32_t inClassIndex,
                                                                    categoryReaderSignature_abstractTransientDependencyForGeneration_generateActualParameterForComputeFunction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateActualParameterForComputeFunction (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract category reader '@abstractTransientDependencyForGeneration generateAddObserverCall'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractTransientDependencyForGeneration_generateAddObserverCall) (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateAddObserverCall (const int32_t inClassIndex,
                                                  categoryReaderSignature_abstractTransientDependencyForGeneration_generateAddObserverCall inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateAddObserverCall (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy preferencesSwiftGetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_preferencesSwiftGetter (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy preferencesSwiftSetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_preferencesSwiftSetter (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                           const class GALGAS_string & constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generatePreferences'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePreferences (const class GALGAS_preferenceListForGeneration constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'entityGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_entityGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const class GALGAS_attributeListForGeneration & in_ATTRIBUTE_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_entityRelationshipListForGeneration & in_ENTITY_5F_CURRENT_5F_RELATIONSHIP_5F_LIST
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'entityGenerationTemplate entityFactoryImplementationFileInSwift'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityFactoryImplementationFileInSwift (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_entityListForGeneration & in_ENTITY_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Abstract category reader '@abstractTransientDependencyForGeneration generateRemoveObserverCall'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractTransientDependencyForGeneration_generateRemoveObserverCall) (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                            class C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateRemoveObserverCall (const int32_t inClassIndex,
                                                     categoryReaderSignature_abstractTransientDependencyForGeneration_generateRemoveObserverCall inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateRemoveObserverCall (const class cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@unifiedTypeMap-proxy transformForSavingInDictionary'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transformForSavingInDictionary (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                   const class GALGAS_string & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateEntities'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateEntities (const class GALGAS_entityListForGeneration constinArgument0,
                               const class GALGAS_string constinArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'documentGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_documentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_documentGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'documentGenerationTemplate documentImplementationInSwift'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_documentGenerationTemplate_documentImplementationInSwift (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                                            const class GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const class GALGAS_attributeListForGeneration & in_ATTRIBUTE_5F_LIST,
                                                                                            const class GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                            const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                                            const class GALGAS_targetActionList & in_TARGET_5F_ACTION_5F_LIST,
                                                                                            const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateDocuments'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateDocuments (const class GALGAS_documentListForGeneration constinArgument0,
                                const class GALGAS_string constinArgument1,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Filewrapper 'collectionControllerGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_collectionControllerGenerationTemplate ;
extern const char * gWrapperFileContent_1_collectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_collectionControllerGenerationTemplate ;
extern const cRegularFileWrapper gWrapperFile_1_collectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_collectionControllerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'collectionControllerGenerationTemplate arrayControllerImplementationInSwift'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_collectionControllerGenerationTemplate_arrayControllerImplementationInSwift (class C_Compiler * inCompiler,
                                                                                                               const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_RELATIONSHIP_5F_NAME,
                                                                                                               const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const class GALGAS_string & in_TABLE_5F_VIEW_5F_OUTLET_5F_NAME,
                                                                                                               const class GALGAS_arrayControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                               const class GALGAS_filewrapper & in_FILE_5F_WRAPPER
                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Reader '@unifiedTypeMap-proxy formatterStringForFormatPrinting'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_formatterStringForFormatPrinting (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@unifiedTypeMap-proxy transformerForTableViewAction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transformerForTableViewAction (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                  const class GALGAS_string & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateArrayControllers'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateArrayControllers (const class GALGAS_arrayControllerForGeneration constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Filewrapper 'outletClassGeneration'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_outletClassGeneration ;
extern const char * gWrapperFileContent_1_outletClassGeneration ;
extern const char * gWrapperFileContent_2_outletClassGeneration ;
extern const char * gWrapperFileContent_3_outletClassGeneration ;
extern const char * gWrapperFileContent_4_outletClassGeneration ;
extern const char * gWrapperFileContent_5_outletClassGeneration ;
extern const char * gWrapperFileContent_6_outletClassGeneration ;
extern const char * gWrapperFileContent_7_outletClassGeneration ;
extern const char * gWrapperFileContent_8_outletClassGeneration ;
extern const char * gWrapperFileContent_9_outletClassGeneration ;
extern const char * gWrapperFileContent_10_outletClassGeneration ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_1_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_2_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_3_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_4_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_5_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_6_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_7_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_8_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_9_outletClassGeneration ;
extern const cRegularFileWrapper gWrapperFile_10_outletClassGeneration ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

#endif
