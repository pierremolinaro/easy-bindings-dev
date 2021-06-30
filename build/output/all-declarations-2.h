#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mFunctionName ;

  public : GALGAS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameters ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & in_mFunctionName,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_mParameters (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @newVerticalStackViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_newVerticalStackViewGeneration : public GALGAS_abstractViewGeneration {
//--- Constructor
  public : GALGAS_newVerticalStackViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_newVerticalStackViewGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_newVerticalStackViewGeneration * ptr (void) const { return (const cPtr_newVerticalStackViewGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_newVerticalStackViewGeneration (const cPtr_newVerticalStackViewGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_newVerticalStackViewGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_newVerticalStackViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_newVerticalStackViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_newVerticalStackViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_newVerticalStackViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @newVerticalStackViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_newVerticalStackViewGeneration : public cPtr_abstractViewGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;

//--- Constructor
  public : cPtr_newVerticalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewInstructionGenerationList constructor_listWithValue (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList add_operation (const GALGAS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewInstructionGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractViewInstructionGeneration mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationList_2D_element constructor_new (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration : public GALGAS_abstractViewGeneration {
//--- Constructor
  public : GALGAS_computedVerticalViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_computedVerticalViewGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_computedVerticalViewGeneration * ptr (void) const { return (const cPtr_computedVerticalViewGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedVerticalViewGeneration (const cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedVerticalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedVerticalViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedVerticalViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedVerticalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_computedVerticalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutMultipleBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mBindingName,
                                                  const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutMultipleBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutMultipleBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList add_operation (const GALGAS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutMultipleBindingGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBindingName ;

  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutMultipleBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @hSplitViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_hSplitViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_hSplitViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_hSplitViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_hSplitViewInstructionGeneration * ptr (void) const { return (const cPtr_hSplitViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_hSplitViewInstructionGeneration (const cPtr_hSplitViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_hSplitViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_hSplitViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                                const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_hSplitViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_autoLayoutMultipleBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hSplitViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hSplitViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @hSplitViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_hSplitViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public : GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;

//--- Constructor
  public : cPtr_hSplitViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                 const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (GALGAS_autoLayoutMultipleBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_vStackViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_vStackViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_vStackViewInstructionGeneration * ptr (void) const { return (const cPtr_vStackViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_vStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_vStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                                const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_autoLayoutMultipleBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @vStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_vStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public : GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;

//--- Constructor
  public : cPtr_vStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                 const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList getter_mMultipleBindingGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (GALGAS_autoLayoutMultipleBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stackViewReferenceInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stackViewReferenceInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_stackViewReferenceInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_stackViewReferenceInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_stackViewReferenceInstructionGeneration * ptr (void) const { return (const cPtr_stackViewReferenceInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stackViewReferenceInstructionGeneration (const cPtr_stackViewReferenceInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stackViewReferenceInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_stackViewReferenceInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stackViewReferenceInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMStackViewName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mStackViewName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stackViewReferenceInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stackViewReferenceInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stackViewReferenceInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_stackViewReferenceInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mStackViewName ;

//--- Constructor
  public : cPtr_stackViewReferenceInstructionGeneration (const GALGAS_string & in_mStackViewName
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mStackViewName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStackViewName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_autoLayoutSpaceViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutSpaceViewInstructionGeneration * ptr (void) const { return (const cPtr_autoLayoutSpaceViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutSpaceViewInstructionGeneration (const cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutSpaceViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSpaceViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSpaceViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_autoLayoutSpaceViewInstructionGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSeparatorInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSeparatorInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_autoLayoutSeparatorInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutSeparatorInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutSeparatorInstructionGeneration * ptr (void) const { return (const cPtr_autoLayoutSeparatorInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutSeparatorInstructionGeneration (const cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutSeparatorInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutSeparatorInstructionGeneration constructor_new (const class GALGAS_bool & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setHorizontal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_horizontal (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutSeparatorInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSeparatorInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSeparatorInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public : cPtr_autoLayoutSeparatorInstructionGeneration (const GALGAS_bool & in_horizontal
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_horizontal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setHorizontal (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_autoLayoutLocalViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutLocalViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutLocalViewInstructionGeneration * ptr (void) const { return (const cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutLocalViewInstructionGeneration (const cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutLocalViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutLocalViewInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLocalView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutLocalViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutLocalViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mLocalView ;

//--- Constructor
  public : cPtr_autoLayoutLocalViewInstructionGeneration (const GALGAS_string & in_mLocalView
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLocalView (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutRegularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mBindingName,
                                                  const class GALGAS_boundObjectList & in_mBoundObjectList,
                                                  const class GALGAS_string & in_mBindingOptionsString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutRegularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_boundObjectList & inOperand1,
                                                                                                  const class GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutRegularBindingsGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_boundObjectList & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutRegularBindingsGenerationList add_operation (const GALGAS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_boundObjectList constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_boundObjectList & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_boundObjectList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_boundObjectList & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GALGAS_boundObjectList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_boundObjectList & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_boundObjectList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutRegularBindingsGenerationList ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutRegularBindingsGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBindingName ;

  public : GALGAS_boundObjectList mProperty_mBoundObjectList ;

  public : GALGAS_string mProperty_mBindingOptionsString ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_boundObjectList & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;

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
    kEnum_computed,
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
  public : static class GALGAS_propertyAccessibility constructor_computed (LOCATION_ARGS) ;

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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputed (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStored (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_computed () const ;

  public : VIRTUAL_IN_DEBUG bool optional_stored () const ;

  public : VIRTUAL_IN_DEBUG bool optional_transient (class GALGAS_bool & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyAccessibility class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @toManyRelationshipOptionAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipOptionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_toManyRelationshipOptionAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_hasOpposite,
    kEnum_hasDependance
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
  public : static GALGAS_toManyRelationshipOptionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipOptionAST constructor_hasDependance (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionAST constructor_hasOpposite (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionAST constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_lstring & outArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_hasDependance (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_hasOpposite (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipOptionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @toOneOppositeRelationship enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneOppositeRelationship : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_toOneOppositeRelationship (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_oppositeIsToOne,
    kEnum_oppositeIsToMany
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
  public : static GALGAS_toOneOppositeRelationship extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneOppositeRelationship constructor_none (LOCATION_ARGS) ;

  public : static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToMany (const class GALGAS_lstring & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToOne (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_oppositeIsToMany (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_oppositeIsToOne (class GALGAS_lstring & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_none () const ;

  public : VIRTUAL_IN_DEBUG bool optional_oppositeIsToMany (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_oppositeIsToOne (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneOppositeRelationship class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

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
//                           Phase 1: @autoLayoutViewGraphicControllerBindingGeneration enum                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewGraphicControllerBindingGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewGraphicControllerBindingGeneration (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_binding
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
  public : static GALGAS_autoLayoutViewGraphicControllerBindingGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_binding (const class GALGAS_string & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_binding (class GALGAS_string & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_binding (class GALGAS_string & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewGraphicControllerBindingGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutViewGraphicControllerBindingGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (const GALGAS_string & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mParameterName ;

  public : GALGAS_string mProperty_mParameterValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & in_mParameterName,
                                                                               const GALGAS_string & in_mParameterValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                            const class GALGAS_string & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generate (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const class GALGAS_string constin_inIndentation,
                               class GALGAS_string & io_ioStr,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractViewGeneration_generate) (const class cPtr_abstractViewGeneration * inObject,
                                                                                     const class GALGAS_string constinArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewGeneration_generate inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generate (const class cPtr_abstractViewGeneration * inObject,
                                                  const GALGAS_string constin_inViewName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractViewInstructionGeneration_generate) (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                                                const class GALGAS_string constinArgument0,
                                                                                                const class GALGAS_string constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewInstructionGeneration_generate inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generate (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                  const GALGAS_string constin_inName,
                                                  const GALGAS_string constin_inIndentation,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

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
//                                         Phase 1: @observablePropertyAST enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_rootProperty,
    kEnum_rootPropertyWithOption,
    kEnum_rootPropertyRelationship,
    kEnum_rootPropertyNone,
    kEnum_selfWithoutProperty,
    kEnum_selfProperty,
    kEnum_selfPropertyWithOption,
    kEnum_selfPropertyArray,
    kEnum_selfPropertyObject,
    kEnum_selfPropertyNone,
    kEnum_prefsProperty,
    kEnum_prefsPropertyWithOption,
    kEnum_selfControllerProperty,
    kEnum_selfControllerSecondaryProperty,
    kEnum_selfControllerAllProperties,
    kEnum_selfControllerOneProperty,
    kEnum_signatureProperty,
    kEnum_versionProperty,
    kEnum_versionShouldChangeProperty,
    kEnum_superProperty
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
  public : static GALGAS_observablePropertyAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyAST constructor_prefsProperty (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_prefsPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyRelationship (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerAllProperties (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerOneProperty (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerProperty (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerSecondaryProperty (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                                  const class GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyArray (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyObject (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfWithoutProperty (const class GALGAS_location & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_signatureProperty (const class GALGAS_location & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_superProperty (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_versionProperty (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_versionShouldChangeProperty (const class GALGAS_location & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_prefsProperty (class GALGAS_lstring & outArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_prefsPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                 class GALGAS_lstring & outArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyNone (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyRelationship (class GALGAS_lstring & outArgument0,
                                                                  class GALGAS_lstring & outArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerAllProperties (class GALGAS_lstring & outArgument0,
                                                                     class GALGAS_lstring & outArgument1,
                                                                     class GALGAS_lstring & outArgument2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerOneProperty (class GALGAS_lstring & outArgument0,
                                                                   class GALGAS_lstring & outArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerProperty (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerSecondaryProperty (class GALGAS_lstring & outArgument0,
                                                                         class GALGAS_lstring & outArgument1,
                                                                         class GALGAS_lstring & outArgument2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyArray (class GALGAS_lstring & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyNone (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyObject (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_lstring & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfWithoutProperty (class GALGAS_location & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_signatureProperty (class GALGAS_location & outArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_superProperty (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_versionProperty (class GALGAS_location & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_versionShouldChangeProperty (class GALGAS_location & outArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_prefsProperty (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_prefsPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                   class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_rootProperty (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_rootPropertyNone (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_rootPropertyRelationship (class GALGAS_lstring & outOperand0,
                                                                    class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_rootPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                  class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfControllerAllProperties (class GALGAS_lstring & outOperand0,
                                                                       class GALGAS_lstring & outOperand1,
                                                                       class GALGAS_lstring & outOperand2) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfControllerOneProperty (class GALGAS_lstring & outOperand0,
                                                                     class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfControllerProperty (class GALGAS_lstring & outOperand0,
                                                                  class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfControllerSecondaryProperty (class GALGAS_lstring & outOperand0,
                                                                           class GALGAS_lstring & outOperand1,
                                                                           class GALGAS_lstring & outOperand2) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfProperty (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfPropertyArray (class GALGAS_lstring & outOperand0,
                                                             class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfPropertyNone (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfPropertyObject (class GALGAS_lstring & outOperand0,
                                                              class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                  class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selfWithoutProperty (class GALGAS_location & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_signatureProperty (class GALGAS_location & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_superProperty (class GALGAS_lstring & outOperand0,
                                                         class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_versionProperty (class GALGAS_location & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_versionShouldChangeProperty (class GALGAS_location & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @observablePropertyAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyNone : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyArray : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyObject : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring & inAssociatedValue0,
                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyNone : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                        const GALGAS_lstring & inAssociatedValue1,
                                                                                        const GALGAS_lstring & inAssociatedValue2
                                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring & inAssociatedValue0,
                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_signatureProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_signatureProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_versionProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_superProperty (void) {}
} ;

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
                                                    const class GALGAS_bool & constinArgument0,
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
// Phase 2: @toManyRelationshipOptionAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_preferencesName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

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
// Phase 1: @computedPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_computedPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_computedPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_computedPropertyGenerationList constructor_listWithValue (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_computedPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_computedPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_computedPropertyGenerationList add_operation (const GALGAS_computedPropertyGenerationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_computedPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_computedPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_computedPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_computedPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_computedPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_computedPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_computedPropertyGenerationList ;
 
} ; // End of GALGAS_computedPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_computedPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_computedPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_computedPropertyGeneration (void) ;

//---
  public : inline const class cPtr_computedPropertyGeneration * ptr (void) const { return (const cPtr_computedPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_typeKind & inOperand2,
                                                                           const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                           const class GALGAS_bool & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const ;

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
 
} ; // End of GALGAS_computedPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public : cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
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
// Phase 1: @computedPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_computedPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_computedPropertyGenerationList_2D_element (const GALGAS_computedPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGenerationList_2D_element constructor_new (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computeRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computeRoutineGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_computeRoutineGeneration (void) ;

//---
  public : inline const class cPtr_computeRoutineGeneration * ptr (void) const { return (const cPtr_computeRoutineGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computeRoutineGeneration (const cPtr_computeRoutineGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computeRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computeRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_typeKind & inOperand2,
                                                                         const class GALGAS_transientDependencyListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computeRoutineGeneration & inOperand) const ;

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
 
} ; // End of GALGAS_computeRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computeRoutineGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_string mProperty_mTransientName ;
  public : GALGAS_typeKind mProperty_mTransientType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_computeRoutineGeneration (const GALGAS_string & in_mOwnerName,
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
                                                                  const class GALGAS_bool & constinArgument0,
                                                                  const class GALGAS_string & constinArgument1,
                                                                  const class GALGAS_string & constinArgument2,
                                                                  const class GALGAS_string & constinArgument3,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                    const class GALGAS_bool & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateAddObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateAddObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                             const class GALGAS_bool & constinArgument0,
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

