#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @actionListForGeneration list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_actionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_actionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mClassName,
                                                  const class GALGAS_string & in_mActionName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_actionListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_actionListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_actionListForGeneration operator_concat (const GALGAS_actionListForGeneration & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_actionListForGeneration add_operation (const GALGAS_actionListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actionListForGeneration ;
 
} ; // End of GALGAS_actionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_actionListForGeneration (const GALGAS_actionListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mClassName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mActionName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @actionListForGeneration_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mClassName ;
  public : GALGAS_string mAttribute_mActionName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_actionListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_actionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_actionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actionListForGeneration_2D_element (const GALGAS_string & in_mClassName,
                                                      const GALGAS_string & in_mActionName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actionListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mClassName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @arrayControllerBoundColumnListForGeneration list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerBoundColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerBoundColumnListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mColumnName,
                                                  const class GALGAS_string & in_mColumnOutletTypeName,
                                                  const class GALGAS_string & in_mObservablePropertyName,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mPropertyType,
                                                  const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerBoundColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_arrayControllerBoundColumnListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                                const class GALGAS_bindingOptionList & inOperand4
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_arrayControllerBoundColumnListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                      const class GALGAS_bindingOptionList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListForGeneration operator_concat (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand
                                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListForGeneration add_operation (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                         class GALGAS_bindingOptionList constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                    class GALGAS_bindingOptionList & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                   class GALGAS_bindingOptionList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                         class GALGAS_bindingOptionList & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                               class GALGAS_bindingOptionList & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                              class GALGAS_bindingOptionList & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mColumnOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservablePropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mPropertyTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerBoundColumnListForGeneration ;
 
} ; // End of GALGAS_arrayControllerBoundColumnListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerBoundColumnListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mColumnOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mObservablePropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mPropertyType (LOCATION_ARGS) const ;
  public : class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerBoundColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @arrayControllerBoundColumnListForGeneration_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerBoundColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mColumnName ;
  public : GALGAS_string mAttribute_mColumnOutletTypeName ;
  public : GALGAS_string mAttribute_mObservablePropertyName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mPropertyType ;
  public : GALGAS_bindingOptionList mAttribute_mBindingOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerBoundColumnListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                          const GALGAS_string & in_mColumnOutletTypeName,
                                                                          const GALGAS_string & in_mObservablePropertyName,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mPropertyType,
                                                                          const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerBoundColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                                 const class GALGAS_bindingOptionList & inOperand4
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mColumnOutletTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservablePropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerBoundColumnListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;

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
                                                  const class GALGAS_stringlist & in_mControllerInstanciationStringList
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
                                                                                const class GALGAS_stringlist & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_preferenceListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_attributeListForGeneration & inOperand1,
                                                      const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                      const class GALGAS_decoratedOutletMap & inOperand3,
                                                      const class GALGAS_stringlist & inOperand4
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
                                                         class GALGAS_stringlist constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_attributeListForGeneration & outArgument1,
                                                    class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                    class GALGAS_decoratedOutletMap & outArgument3,
                                                    class GALGAS_stringlist & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_attributeListForGeneration & outArgument1,
                                                   class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                   class GALGAS_decoratedOutletMap & outArgument3,
                                                   class GALGAS_stringlist & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_attributeListForGeneration & outArgument1,
                                                         class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                         class GALGAS_decoratedOutletMap & outArgument3,
                                                         class GALGAS_stringlist & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_attributeListForGeneration & outArgument1,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                               class GALGAS_decoratedOutletMap & outArgument3,
                                               class GALGAS_stringlist & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_attributeListForGeneration & outArgument1,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                              class GALGAS_decoratedOutletMap & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mControllerInstanciationStringListAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_stringlist current_mControllerInstanciationStringList (LOCATION_ARGS) const ;
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
//                                   @preferenceListForGeneration_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferenceListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mPreferenceName ;
  public : GALGAS_attributeListForGeneration mAttribute_mAttributeListForGeneration ;
  public : GALGAS_transientDefinitionListForGeneration mAttribute_mDecoratedTransientListForGeneration ;
  public : GALGAS_decoratedOutletMap mAttribute_mOutletMap ;
  public : GALGAS_stringlist mAttribute_mControllerInstanciationStringList ;


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
                                                          const GALGAS_stringlist & in_mControllerInstanciationStringList) ;

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
                                                                                 const class GALGAS_stringlist & inOperand4
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

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mControllerInstanciationStringList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPreferenceName (LOCATION_ARGS) const ;


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
                                                  const class GALGAS_stringlist & in_mControllerInstanciationStringList,
                                                  const class GALGAS_arrayControllerForGeneration & in_mDocumentArrayControllerForGeneration,
                                                  const class GALGAS_targetActionList & in_mTargetActionList
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
                                                                              const class GALGAS_stringlist & inOperand5,
                                                                              const class GALGAS_arrayControllerForGeneration & inOperand6,
                                                                              const class GALGAS_targetActionList & inOperand7
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
                                                      const class GALGAS_stringlist & inOperand5,
                                                      const class GALGAS_arrayControllerForGeneration & inOperand6,
                                                      const class GALGAS_targetActionList & inOperand7
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
                                                         class GALGAS_stringlist constinArgument5,
                                                         class GALGAS_arrayControllerForGeneration constinArgument6,
                                                         class GALGAS_targetActionList constinArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_attributeListForGeneration & outArgument2,
                                                    class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                    class GALGAS_decoratedOutletMap & outArgument4,
                                                    class GALGAS_stringlist & outArgument5,
                                                    class GALGAS_arrayControllerForGeneration & outArgument6,
                                                    class GALGAS_targetActionList & outArgument7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_attributeListForGeneration & outArgument2,
                                                   class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                   class GALGAS_decoratedOutletMap & outArgument4,
                                                   class GALGAS_stringlist & outArgument5,
                                                   class GALGAS_arrayControllerForGeneration & outArgument6,
                                                   class GALGAS_targetActionList & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_attributeListForGeneration & outArgument2,
                                                         class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                                         class GALGAS_decoratedOutletMap & outArgument4,
                                                         class GALGAS_stringlist & outArgument5,
                                                         class GALGAS_arrayControllerForGeneration & outArgument6,
                                                         class GALGAS_targetActionList & outArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_attributeListForGeneration & outArgument2,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                               class GALGAS_decoratedOutletMap & outArgument4,
                                               class GALGAS_stringlist & outArgument5,
                                               class GALGAS_arrayControllerForGeneration & outArgument6,
                                               class GALGAS_targetActionList & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_attributeListForGeneration & outArgument2,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument3,
                                              class GALGAS_decoratedOutletMap & outArgument4,
                                              class GALGAS_stringlist & outArgument5,
                                              class GALGAS_arrayControllerForGeneration & outArgument6,
                                              class GALGAS_targetActionList & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeListForGeneration reader_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mControllerInstanciationStringListAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_stringlist current_mControllerInstanciationStringList (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerForGeneration current_mDocumentArrayControllerForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_targetActionList current_mTargetActionList (LOCATION_ARGS) const ;
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
  public : GALGAS_stringlist mAttribute_mControllerInstanciationStringList ;
  public : GALGAS_arrayControllerForGeneration mAttribute_mDocumentArrayControllerForGeneration ;
  public : GALGAS_targetActionList mAttribute_mTargetActionList ;


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
                                                        const GALGAS_stringlist & in_mControllerInstanciationStringList,
                                                        const GALGAS_arrayControllerForGeneration & in_mDocumentArrayControllerForGeneration,
                                                        const GALGAS_targetActionList & in_mTargetActionList) ;

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
                                                                               const class GALGAS_stringlist & inOperand5,
                                                                               const class GALGAS_arrayControllerForGeneration & inOperand6,
                                                                               const class GALGAS_targetActionList & inOperand7
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

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mControllerInstanciationStringList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_mDecoratedTransientListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration reader_mDocumentArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDocumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mOutletMap (LOCATION_ARGS) const ;

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
//                                             @outletGenerationList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletGenerationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOutletName,
                                                  const class GALGAS_string & in_mOutletType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletGenerationList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletGenerationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletGenerationList operator_concat (const GALGAS_outletGenerationList & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletGenerationList add_operation (const GALGAS_outletGenerationList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletGenerationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletGenerationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletGenerationList ;
 
} ; // End of GALGAS_outletGenerationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletGenerationList (const GALGAS_outletGenerationList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOutletType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletGenerationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @outletGenerationList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mOutletName ;
  public : GALGAS_string mAttribute_mOutletType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletGenerationList_2D_element (const GALGAS_string & in_mOutletName,
                                                   const GALGAS_string & in_mOutletType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_string & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutletType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletGenerationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletGenerationList_2D_element ;

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
//                                             @templateControllerMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_templateControllerMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_templateControllerMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateControllerMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_templateControllerMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_templateControllerMap (const GALGAS_templateControllerMap & inSource) ;
  public : GALGAS_templateControllerMap & operator = (const GALGAS_templateControllerMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateControllerMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateControllerMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_templateControllerMap constructor_mapWithMapToOverride (const class GALGAS_templateControllerMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_controllerBindingOptionDecoratedList & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_string constinArgument1,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                     class GALGAS_lstring constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     class GALGAS_controllerBindingOptionDecoratedList constinArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMControllerBindingOptionDecoratedListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                                          class GALGAS_string constinArgument1,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMModelSelectorForKey (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMModelShouldBeWritablePropertyForKey (class GALGAS_bool constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMModelTypeProxyForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTemplateStringForKey (class GALGAS_string constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_controllerBindingOptionDecoratedList & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_mControllerBindingOptionDecoratedListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModelSelectorForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritablePropertyForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTemplateStringForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateControllerMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_templateControllerMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_templateControllerMap ;
 
} ; // End of GALGAS_templateControllerMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_templateControllerMap : public cGenericAbstractEnumerator {
  public : cEnumerator_templateControllerMap (const GALGAS_templateControllerMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTemplateString (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mModelTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mModelSelector (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionDecoratedList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateControllerMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateControllerMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@templateControllerMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_templateControllerMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mTemplateString ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mModelTypeProxy ;
  public : GALGAS_lstring mAttribute_mModelSelector ;
  public : GALGAS_bool mAttribute_mModelShouldBeWritableProperty ;
  public : GALGAS_controllerBindingOptionDecoratedList mAttribute_mControllerBindingOptionDecoratedList ;

//--- Constructor
  public : cMapElement_templateControllerMap (const GALGAS_lstring & inKey,
                                              const GALGAS_string & in_mTemplateString,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
                                              const GALGAS_lstring & in_mModelSelector,
                                              const GALGAS_bool & in_mModelShouldBeWritableProperty,
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
//                                      @templateControllerMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateControllerMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mTemplateString ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mModelTypeProxy ;
  public : GALGAS_lstring mAttribute_mModelSelector ;
  public : GALGAS_bool mAttribute_mModelShouldBeWritableProperty ;
  public : GALGAS_controllerBindingOptionDecoratedList mAttribute_mControllerBindingOptionDecoratedList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateControllerMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateControllerMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateControllerMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateControllerMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_string & in_mTemplateString,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mModelTypeProxy,
                                                    const GALGAS_lstring & in_mModelSelector,
                                                    const GALGAS_bool & in_mModelShouldBeWritableProperty,
                                                    const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionDecoratedList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateControllerMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateControllerMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
                                                                           const class GALGAS_controllerBindingOptionDecoratedList & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateControllerMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList reader_mControllerBindingOptionDecoratedList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModelSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mModelTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateControllerMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateControllerMap_2D_element ;


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
                           const class GALGAS_templateControllerMap constinArgument2,
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
                                  const class GALGAS_templateControllerMap constinArgument2,
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
                                  const class GALGAS_bindingList constinArgument14,
                                  const class GALGAS_lstringlist constinArgument15,
                                  const class GALGAS_enumConstantMap constinArgument16,
                                  const class GALGAS_arrayControllerMap constinArgument17,
                                  class GALGAS_structForGeneration & ioArgument18,
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
//                            @abstractBooleanMultipleBindingExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractBooleanMultipleBindingExpressionForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'controllerTemplates'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_controllerTemplates ;
extern const char * gWrapperFileContent_1_controllerTemplates ;
extern const char * gWrapperFileContent_2_controllerTemplates ;
extern const char * gWrapperFileContent_3_controllerTemplates ;
extern const char * gWrapperFileContent_4_controllerTemplates ;
extern const char * gWrapperFileContent_5_controllerTemplates ;
extern const char * gWrapperFileContent_6_controllerTemplates ;
extern const char * gWrapperFileContent_7_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_controllerTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_controllerTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'controllerTemplates enabledBindingGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controllerTemplates_enabledBindingGeneration (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_OUTLET_5F_PROPRIETARY_5F_CLASS_5F_NAME,
                                                                                const class GALGAS_string & in_OUTLET_5F_NAME,
                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_ENABLE_5F_EXPRESSION
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedObjectList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                     class C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedObjectList (const int32_t inClassIndex,
                                             categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedObjectList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

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
//     Abstract category method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForEnabledBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding) (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                        const class GALGAS_string constinArgument0,
                                                                                                                        const class GALGAS_unifiedTypeMap constinArgument1,
                                                                                                                        const class GALGAS_arrayControllerMap constinArgument2,
                                                                                                                        const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                                        const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                                        class GALGAS_uint & ioArgument5,
                                                                                                                        class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument6,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpressionForEnabledBinding (const int32_t inClassIndex,
                                                             categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpressionForEnabledBinding (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                            const GALGAS_string constin_inSelfTypeName,
                                                            const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                            const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                            const GALGAS_decoratedObservablePropertyMap constin_inCurrentObservablePropertyMap,
                                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                            GALGAS_uint & io_ioIndex,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                            C_Compiler * inCompiler
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
//      Abstract category method '@abstractObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                      const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                                      const class GALGAS_arrayControllerMap constinArgument1,
                                                                                                                      const class GALGAS_lstring constinArgument2,
                                                                                                                      const class GALGAS_string constinArgument3,
                                                                                                                      const class GALGAS_decoratedObservablePropertyMap constinArgument4,
                                                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                                                                                                                      class GALGAS_string & ioArgument6,
                                                                                                                      class GALGAS_unifiedTypeProxySelectorList & ioArgument7,
                                                                                                                      class GALGAS__32_stringlist & ioArgument8,
                                                                                                                      class GALGAS_stringlist & ioArgument9,
                                                                                                                      class GALGAS_bool & outArgument10,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (const int32_t inClassIndex,
                                                                         categoryMethodSignature_abstractObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                        const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                        const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                                        const GALGAS_lstring constin_inSelectorName,
                                                                        const GALGAS_string constin_inCurrentTypeName,
                                                                        const GALGAS_decoratedObservablePropertyMap constin_inObservablePropertyMap,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                                        GALGAS_string & io_ioControllerSignature,
                                                                        GALGAS_unifiedTypeProxySelectorList & io_ioBoundPropertyTypeList,
                                                                        GALGAS__32_stringlist & io_ioTypePropertyNameList,
                                                                        GALGAS_stringlist & io_ioBoundObjectNameList,
                                                                        GALGAS_bool & out_outModelIsTransient,
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
                                                                              const class GALGAS_stringlist & in_CONTROLLER_5F_INSTANCIATION_5F_STRINGLIST
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
//                            Category Reader '@unifiedTypeMap-proxy swiftTypeUndoArgument'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_swiftTypeUndoArgument (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                          class C_Compiler * inCompiler
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
//                    Category Reader '@unifiedTypeMap-proxy transformerForRegisterUndoWithTarget'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transformerForRegisterUndoWithTarget (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                         const class GALGAS_string & constinArgument0,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Reader '@unifiedTypeMap-proxy transformerForUndo'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transformerForUndo (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                       const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@unifiedTypeMap-proxy valueAccessorForExplorerWindow'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_valueAccessorForExplorerWindow (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
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
                                                                                            const class GALGAS_stringlist & in_CONTROLLER_5F_INSTANCIATION_5F_LIST,
                                                                                            const class GALGAS_arrayControllerForGeneration & in_ARRAY_5F_CONTROLLER_5F_LIST,
                                                                                            const class GALGAS_targetActionList & in_TARGET_5F_ACTION_5F_LIST
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

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_outletClassGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateOutletClasses'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateOutletClasses (const class GALGAS_stringset constinArgument0,
                                    const class GALGAS_string constinArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration enableExpressionString'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_enableExpressionString) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                     class C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_enableExpressionString (const int32_t inClassIndex,
                                                 categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_enableExpressionString inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_enableExpressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedModelNameList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelNameList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                        class C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedModelNameList (const int32_t inClassIndex,
                                                categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelNameList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedModelNameList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                             class C_Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedObjectTypeNameList (const int32_t inClassIndex,
                                                     categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_observedObjectTypeNameList (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildControllerTemplateMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControllerTemplateMap (const class GALGAS_unifiedTypeMap constinArgument0,
                                         const class GALGAS_controllerTemplateList constinArgument1,
                                         class GALGAS_templateControllerMap & outArgument2,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateControllerClasses'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateControllerClasses (const class GALGAS_stringset constinArgument0,
                                        const class GALGAS_string constinArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'buildTransientDependencyGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTransientDependencyGraph (const class GALGAS_unifiedTypeMap constinArgument0,
                                            const class GALGAS_string constinArgument1,
                                            class GALGAS_transientDependencyGraphNodeInfoList & outArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@abstractObservablePropertyAST propertySignature'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_lstring (*categoryReaderSignature_abstractObservablePropertyAST_propertySignature) (const class cPtr_abstractObservablePropertyAST * inObject,
                                                                                                         const class GALGAS_string & constinArgument0,
                                                                                                         const class GALGAS_string & constinArgument1,
                                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument2,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_propertySignature (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractObservablePropertyAST_propertySignature inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring callCategoryReader_propertySignature (const class cPtr_abstractObservablePropertyAST * inObject,
                                                           const GALGAS_string & constin_inKind,
                                                           const GALGAS_string & constin_inSelfTypeName,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & constin_inRootypeProxy,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Category Reader '@typeKind kindName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_kindName (const class GALGAS_typeKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@abstractTransientDependencyAST buildTransientDependencyGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractTransientDependencyAST_buildTransientDependencyGraph) (const class cPtr_abstractTransientDependencyAST * inObject,
                                                                                                      const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                      class GALGAS_transientDependencyGraph & ioArgument1,
                                                                                                      const class GALGAS_lstring constinArgument2,
                                                                                                      const class GALGAS_decoratedObservablePropertyMap constinArgument3,
                                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                                      const class GALGAS_arrayControllerMap constinArgument5,
                                                                                                      const class GALGAS_lstring constinArgument6,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTransientDependencyGraph (const int32_t inClassIndex,
                                                        categoryMethodSignature_abstractTransientDependencyAST_buildTransientDependencyGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTransientDependencyGraph (const class cPtr_abstractTransientDependencyAST * inObject,
                                                       const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                                       const GALGAS_lstring constin_inTransientName,
                                                       const GALGAS_decoratedObservablePropertyMap constin_inLocalObservablePropertyMap,
                                                       const GALGAS_unifiedTypeMap_2D_proxy constin_inRootEntityType,
                                                       const GALGAS_arrayControllerMap constin_inArrayControllerMap,
                                                       const GALGAS_lstring constin_inTransientPropertySignature,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generateTransients'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTransients (const class GALGAS_string constinArgument0,
                                 const class GALGAS_transientDependencyGraphNodeInfoList constinArgument1,
                                 const class GALGAS_transientListForGeneration constinArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Filewrapper 'transientManager'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_4_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_5_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_6_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_7_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_8_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_9_transientManager ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'transientManager applicationInSwift'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_transientManager_applicationInSwift (class C_Compiler * inCompiler,
                                                                       const class GALGAS_transientDependencyGraphNodeInfoList & in_PROPERTY_5F_LIST,
                                                                       const class GALGAS_stringlist & in_TRANSIENT_5F_LIST
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'transientManager transientComputationFunctionFile'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_KIND_5F_NAME,
                                                                                     const class GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const class GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & in_TRANSIENT_5F_TYPE
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy transientReturnTypeName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_transientReturnTypeName (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateActions'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateActions (const class GALGAS_string constinArgument0,
                              const class GALGAS_actionListForGeneration constinArgument1,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'actionGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_9_actionGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'actionGenerationTemplate actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const class GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateValidationRoutineStubs (const class GALGAS_string constinArgument0,
                                             const class GALGAS_validationStubRoutineListForGeneration constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_4_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_5_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_6_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_7_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_8_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_9_validationStubExtension ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'predefinedOutletClasses'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_6_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_7_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_8_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_9_predefinedOutletClasses ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

#endif
