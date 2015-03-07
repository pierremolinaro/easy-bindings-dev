#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*



#ifndef easyBindings_5F_lexique_CLASS_DEFINED
#define easyBindings_5F_lexique_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       T O K E N    C L A S S                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_easyBindings_5F_lexique : public cToken {
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_easyBindings_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_easyBindings_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_easyBindings_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_Identifier,
   kToken_bindingName,
   kToken_literal_5F_integer,
   kToken_literal_5F_double,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_action,
   kToken_array,
   kToken_arrayController,
   kToken_bind,
   kToken_binding,
   kToken_class,
   kToken_column,
   kToken_count,
   kToken_default,
   kToken_dependsFrom,
   kToken_document,
   kToken_enum,
   kToken_entity,
   kToken_include,
   kToken_inverse,
   kToken_nibClass,
   kToken_no,
   kToken_outlet,
   kToken_outletClass,
   kToken_preferences,
   kToken_property,
   kToken_root,
   kToken_self,
   kToken_signature,
   kToken_struct,
   kToken_to,
   kToken_toMany,
   kToken_toOne,
   kToken_transient,
   kToken_validates,
   kToken_yes,
   kToken_enabled,
   kToken_run,
   kToken__3A_,
   kToken__2C_,
   kToken__3B_,
   kToken__21_,
   kToken__5B_,
   kToken__5D_,
   kToken__7B_,
   kToken__7D_,
   kToken__28_,
   kToken__29_,
   kToken__2E_,
   kToken__7C_,
   kToken__26_,
   kToken__3C_,
   kToken__3E_} ;

//--- Key words table 'lowerCaseKeyWordList'
  public : static int16_t search_into_lowerCaseKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'reservedBindingNameKeyWordList'
  public : static int16_t search_into_reservedBindingNameKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : double attributeValue_floatValue (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 55 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_easyBindings_5F_lexique & inToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @astDeclarationList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_astDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_astDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_astDeclarationList constructor_listWithValue (const class GALGAS_astDeclaration & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_astDeclarationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_astDeclarationList operator_concat (const GALGAS_astDeclarationList & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astDeclarationList add_operation (const GALGAS_astDeclarationList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_astDeclaration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_astDeclaration & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_astDeclaration & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_astDeclaration & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_astDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_astDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration reader_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astDeclarationList ;
 
} ; // End of GALGAS_astDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_astDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_astDeclarationList (const GALGAS_astDeclarationList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_astDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @astDeclaration class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_astDeclaration (void) ;

//---
  public : inline const class cPtr_astDeclaration * ptr (void) const { return (const cPtr_astDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclaration extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @astDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_astDeclaration : public acPtr_class {
//--- Attributes
  public : GALGAS_bool mAttribute_mUserDefined ;

//--- Constructor
  public : cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUserDefined (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @astDeclarationList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_astDeclaration mAttribute_mDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_astDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationList_2D_element (const GALGAS_astDeclaration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_astDeclarationList_2D_element constructor_new (const class GALGAS_astDeclaration & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration reader_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @cursorList list                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_cursorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_cursorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_cursorList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mCursorName,
                                                  const class GALGAS_ldouble & in_mHotSpotX,
                                                  const class GALGAS_ldouble & in_mHotSpotY
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_cursorList extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_cursorList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_cursorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_ldouble & inOperand1,
                                                               const class GALGAS_ldouble & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_cursorList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_ldouble & inOperand1,
                                                      const class GALGAS_ldouble & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_cursorList operator_concat (const GALGAS_cursorList & inOperand
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_cursorList add_operation (const GALGAS_cursorList & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_ldouble constinArgument1,
                                                         class GALGAS_ldouble constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_ldouble & outArgument1,
                                                    class GALGAS_ldouble & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_ldouble & outArgument1,
                                                   class GALGAS_ldouble & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_ldouble & outArgument1,
                                                         class GALGAS_ldouble & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_ldouble & outArgument1,
                                               class GALGAS_ldouble & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_ldouble & outArgument1,
                                              class GALGAS_ldouble & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCursorNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mHotSpotXAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mHotSpotYAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_cursorList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_cursorList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_cursorList ;
 
} ; // End of GALGAS_cursorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_cursorList : public cGenericAbstractEnumerator {
  public : cEnumerator_cursorList (const GALGAS_cursorList & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mCursorName (LOCATION_ARGS) const ;
  public : class GALGAS_ldouble current_mHotSpotX (LOCATION_ARGS) const ;
  public : class GALGAS_ldouble current_mHotSpotY (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_cursorList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_cursorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @cursorList_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_cursorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mCursorName ;
  public : GALGAS_ldouble mAttribute_mHotSpotX ;
  public : GALGAS_ldouble mAttribute_mHotSpotY ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_cursorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_cursorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_cursorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_cursorList_2D_element (const GALGAS_lstring & in_mCursorName,
                                         const GALGAS_ldouble & in_mHotSpotX,
                                         const GALGAS_ldouble & in_mHotSpotY) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_cursorList_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_cursorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_ldouble & inOperand1,
                                                                const class GALGAS_ldouble & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_cursorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCursorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mHotSpotX (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mHotSpotY (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_cursorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_cursorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @outletClassDeclarationList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mUserDefined,
                                                  const class GALGAS_lstring & in_mOutletClassName,
                                                  const class GALGAS_bool & in_mHasRunAction,
                                                  const class GALGAS_bool & in_mHasEnabled
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletClassDeclarationList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_bool & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletClassDeclarationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassDeclarationList operator_concat (const GALGAS_outletClassDeclarationList & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassDeclarationList add_operation (const GALGAS_outletClassDeclarationList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_bool constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_bool & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_bool & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_bool & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasEnabledAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasRunActionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUserDefinedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassDeclarationList ;
 
} ; // End of GALGAS_outletClassDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassDeclarationList (const GALGAS_outletClassDeclarationList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasEnabled (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @outletClassDeclarationList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mUserDefined ;
  public : GALGAS_lstring mAttribute_mOutletClassName ;
  public : GALGAS_bool mAttribute_mHasRunAction ;
  public : GALGAS_bool mAttribute_mHasEnabled ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletClassDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & in_mUserDefined,
                                                         const GALGAS_lstring & in_mOutletClassName,
                                                         const GALGAS_bool & in_mHasRunAction,
                                                         const GALGAS_bool & in_mHasEnabled) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassDeclarationList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typeKind enum                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_classType,
    kEnum_controllerClassType,
    kEnum_documentType,
    kEnum_entityType,
    kEnum_enumType,
    kEnum_nibClassType,
    kEnum_outletClassType,
    kEnum_preferencesType,
    kEnum_protocolType,
    kEnum_structType,
    kEnum_boolType,
    kEnum_integerType,
    kEnum_uintegerType,
    kEnum_doubleType,
    kEnum_stringType,
    kEnum_colorType,
    kEnum_dataType,
    kEnum_dateType,
    kEnum_fontType,
    kEnum_imageType,
    kEnum_menuType,
    kEnum_bezierPathType
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeKind constructor_bezierPathType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_boolType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_classType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_colorType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_controllerClassType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_dataType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_dateType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_documentType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_doubleType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_entityType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_enumType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_fontType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_imageType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_integerType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_menuType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_nibClassType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_outletClassType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_preferencesType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_protocolType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_stringType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_structType (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_uintegerType (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBezierPathType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isColorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isControllerClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDataType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDateType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDocumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEntityType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isFontType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isImageType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIntegerType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMenuType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNibClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isOutletClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPreferencesType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isProtocolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStructType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isUintegerType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @outletDeclarationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOutletType,
                                                  const class GALGAS_lstring & in_mOutletName,
                                                  const class GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                  const class GALGAS_enabledBindingDescriptor & in_mEnabledBindingDescriptor,
                                                  const class GALGAS_regularBindingList & in_mRegularBindingList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_runActionDescriptor & inOperand2,
                                                                          const class GALGAS_enabledBindingDescriptor & inOperand3,
                                                                          const class GALGAS_regularBindingList & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletDeclarationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_runActionDescriptor & inOperand2,
                                                      const class GALGAS_enabledBindingDescriptor & inOperand3,
                                                      const class GALGAS_regularBindingList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList operator_concat (const GALGAS_outletDeclarationList & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_runActionDescriptor constinArgument2,
                                                         class GALGAS_enabledBindingDescriptor constinArgument3,
                                                         class GALGAS_regularBindingList constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_runActionDescriptor & outArgument2,
                                                    class GALGAS_enabledBindingDescriptor & outArgument3,
                                                    class GALGAS_regularBindingList & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_runActionDescriptor & outArgument2,
                                                   class GALGAS_enabledBindingDescriptor & outArgument3,
                                                   class GALGAS_regularBindingList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_runActionDescriptor & outArgument2,
                                                         class GALGAS_enabledBindingDescriptor & outArgument3,
                                                         class GALGAS_regularBindingList & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_runActionDescriptor & outArgument2,
                                               class GALGAS_enabledBindingDescriptor & outArgument3,
                                               class GALGAS_regularBindingList & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_runActionDescriptor & outArgument2,
                                              class GALGAS_enabledBindingDescriptor & outArgument3,
                                              class GALGAS_regularBindingList & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enabledBindingDescriptor reader_mEnabledBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_mRegularBindingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor reader_mRunDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletDeclarationList ;
 
} ; // End of GALGAS_outletDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOutletType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_runActionDescriptor current_mRunDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_enabledBindingDescriptor current_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingList current_mRegularBindingList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @abstractBooleanMultipleBindingExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_abstractBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_abstractBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @abstractBooleanMultipleBindingExpressionAST class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractBooleanMultipleBindingExpressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enabledBindingDescriptor enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enabledBindingDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_enabledBindingDescriptor (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noEnabledBinding,
    kEnum_enabledBinding
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
  public : static GALGAS_enabledBindingDescriptor extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enabledBindingDescriptor constructor_enabledBinding (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public : static GALGAS_enabledBindingDescriptor constructor_noEnabledBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enabledBindingDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEnabledBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoEnabledBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enabledBindingDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enabledBindingDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @enabledBindingDescriptor enum, associated values                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_enabledBindingDescriptor_enabledBinding : public cEnumAssociatedValues {
  public : const GALGAS_abstractBooleanMultipleBindingExpressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_enabledBindingDescriptor_enabledBinding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_enabledBindingDescriptor_enabledBinding (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @runActionDescriptor enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_runActionDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_runActionDescriptor (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noAction,
    kEnum_action
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
  public : static GALGAS_runActionDescriptor extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_runActionDescriptor constructor_action (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public : static GALGAS_runActionDescriptor constructor_noAction (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_runActionDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoAction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_runActionDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @runActionDescriptor enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_runActionDescriptor_action : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                             const GALGAS_lstring & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_runActionDescriptor_action (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @regularBindingList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_regularBindingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_regularBindingList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_regularBindingList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                  const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_regularBindingList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_regularBindingList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_observablePropertyList & inOperand1,
                                                                       const class GALGAS_bindingOptionList & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_regularBindingList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_observablePropertyList & inOperand1,
                                                      const class GALGAS_bindingOptionList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingList operator_concat (const GALGAS_regularBindingList & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingList add_operation (const GALGAS_regularBindingList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_observablePropertyList constinArgument1,
                                                         class GALGAS_bindingOptionList constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_observablePropertyList & outArgument1,
                                                    class GALGAS_bindingOptionList & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_observablePropertyList & outArgument1,
                                                   class GALGAS_bindingOptionList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_observablePropertyList & outArgument1,
                                                         class GALGAS_bindingOptionList & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_observablePropertyList & outArgument1,
                                               class GALGAS_bindingOptionList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_observablePropertyList & outArgument1,
                                              class GALGAS_bindingOptionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList reader_mObservablePropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingList ;
 
} ; // End of GALGAS_regularBindingList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_regularBindingList : public cGenericAbstractEnumerator {
  public : cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public : class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_regularBindingList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletDeclarationList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOutletType ;
  public : GALGAS_lstring mAttribute_mOutletName ;
  public : GALGAS_runActionDescriptor mAttribute_mRunDescriptor ;
  public : GALGAS_enabledBindingDescriptor mAttribute_mEnabledBindingDescriptor ;
  public : GALGAS_regularBindingList mAttribute_mRegularBindingList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_outletDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & in_mOutletType,
                                                    const GALGAS_lstring & in_mOutletName,
                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                    const GALGAS_enabledBindingDescriptor & in_mEnabledBindingDescriptor,
                                                    const GALGAS_regularBindingList & in_mRegularBindingList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_runActionDescriptor & inOperand2,
                                                                           const class GALGAS_enabledBindingDescriptor & inOperand3,
                                                                           const class GALGAS_regularBindingList & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enabledBindingDescriptor reader_mEnabledBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_mRegularBindingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor reader_mRunDescriptor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @attributeList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_attributeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_attributeList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mAttributeTypeName,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                  const class GALGAS_bool & in_mNeedsValidation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_attributeList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_abstractDefaultValue & inOperand2,
                                                                  const class GALGAS_bool & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_attributeList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_abstractDefaultValue & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_attributeList operator_concat (const GALGAS_attributeList & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_attributeList add_operation (const GALGAS_attributeList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_abstractDefaultValue constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_abstractDefaultValue & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_abstractDefaultValue & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_abstractDefaultValue & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_abstractDefaultValue & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_abstractDefaultValue & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_attributeList ;
 
} ; // End of GALGAS_attributeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_attributeList : public cGenericAbstractEnumerator {
  public : cEnumerator_attributeList (const GALGAS_attributeList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mAttributeTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNeedsValidation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_attributeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractDefaultValue : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDefaultValue (void) ;

//---
  public : inline const class cPtr_abstractDefaultValue * ptr (void) const { return (const cPtr_abstractDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractDefaultValue : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDefaultValue (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @attributeList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mAttributeTypeName ;
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_abstractDefaultValue mAttribute_mDefaultValue ;
  public : GALGAS_bool mAttribute_mNeedsValidation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_attributeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_attributeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_attributeList_2D_element (const GALGAS_lstring & in_mAttributeTypeName,
                                            const GALGAS_lstring & in_mAttributeName,
                                            const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                            const GALGAS_bool & in_mNeedsValidation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_abstractDefaultValue & inOperand2,
                                                                   const class GALGAS_bool & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @relationshipList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_relationshipList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_relationshipList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_relationshipList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mIsToMany,
                                                  const class GALGAS_lstring & in_mDestinationEntityName,
                                                  const class GALGAS_lstring & in_mRelationshipName,
                                                  const class GALGAS_lstring & in_mInverseRelationshipName,
                                                  const class GALGAS_bool & in_mInverseRelationIsToMany
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_relationshipList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_relationshipList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_relationshipList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_lstring & inOperand3,
                                                                     const class GALGAS_bool & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_relationshipList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_relationshipList operator_concat (const GALGAS_relationshipList & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_relationshipList add_operation (const GALGAS_relationshipList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_bool constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_bool & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_bool & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_bool & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDestinationEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mInverseRelationIsToManyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInverseRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToManyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_relationshipList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_relationshipList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_relationshipList ;
 
} ; // End of GALGAS_relationshipList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_relationshipList : public cGenericAbstractEnumerator {
  public : cEnumerator_relationshipList (const GALGAS_relationshipList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mIsToMany (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mDestinationEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInverseRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mInverseRelationIsToMany (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_relationshipList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_relationshipList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @relationshipList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_relationshipList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mIsToMany ;
  public : GALGAS_lstring mAttribute_mDestinationEntityName ;
  public : GALGAS_lstring mAttribute_mRelationshipName ;
  public : GALGAS_lstring mAttribute_mInverseRelationshipName ;
  public : GALGAS_bool mAttribute_mInverseRelationIsToMany ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_relationshipList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_relationshipList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_relationshipList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_relationshipList_2D_element (const GALGAS_bool & in_mIsToMany,
                                               const GALGAS_lstring & in_mDestinationEntityName,
                                               const GALGAS_lstring & in_mRelationshipName,
                                               const GALGAS_lstring & in_mInverseRelationshipName,
                                               const GALGAS_bool & in_mInverseRelationIsToMany) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_relationshipList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_relationshipList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_lstring & inOperand3,
                                                                      const class GALGAS_bool & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_relationshipList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mInverseRelationIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInverseRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_relationshipList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_relationshipList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @classArrayList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classArrayList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_classArrayList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_classArrayList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mElementClassName,
                                                  const class GALGAS_lstring & in_mArrayName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classArrayList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classArrayList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_classArrayList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_classArrayList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_classArrayList operator_concat (const GALGAS_classArrayList & inOperand
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_classArrayList add_operation (const GALGAS_classArrayList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mArrayNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mElementClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classArrayList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classArrayList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_classArrayList ;
 
} ; // End of GALGAS_classArrayList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_classArrayList : public cGenericAbstractEnumerator {
  public : cEnumerator_classArrayList (const GALGAS_classArrayList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mElementClassName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mArrayName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_classArrayList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classArrayList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @classArrayList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classArrayList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mElementClassName ;
  public : GALGAS_lstring mAttribute_mArrayName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classArrayList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_classArrayList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_classArrayList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classArrayList_2D_element (const GALGAS_lstring & in_mElementClassName,
                                             const GALGAS_lstring & in_mArrayName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classArrayList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classArrayList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classArrayList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mArrayName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mElementClassName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classArrayList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classArrayList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @transientList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTransientTypeName,
                                                  const class GALGAS_lstring & in_mTransientName,
                                                  const class GALGAS_dependanceList & in_mDependencyList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_transientList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_dependanceList & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_transientList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_dependanceList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientList operator_concat (const GALGAS_transientList & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientList add_operation (const GALGAS_transientList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_dependanceList constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_dependanceList & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_dependanceList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_dependanceList & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_dependanceList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_dependanceList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_mDependencyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientList ;
 
} ; // End of GALGAS_transientList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientList (const GALGAS_transientList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTransientTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransientName (LOCATION_ARGS) const ;
  public : class GALGAS_dependanceList current_mDependencyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @dependanceList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dependanceList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_dependanceList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_dependanceList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractTransientDependencyAST & in_mDependency
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dependanceList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dependanceList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_dependanceList constructor_listWithValue (const class GALGAS_abstractTransientDependencyAST & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_dependanceList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractTransientDependencyAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_dependanceList operator_concat (const GALGAS_dependanceList & inOperand
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_dependanceList add_operation (const GALGAS_dependanceList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractTransientDependencyAST constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractTransientDependencyAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractTransientDependencyAST & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractTransientDependencyAST & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractTransientDependencyAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractTransientDependencyAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractTransientDependencyAST reader_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_dependanceList ;
 
} ; // End of GALGAS_dependanceList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_dependanceList : public cGenericAbstractEnumerator {
  public : cEnumerator_dependanceList (const GALGAS_dependanceList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractTransientDependencyAST current_mDependency (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_dependanceList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dependanceList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @transientList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTransientTypeName ;
  public : GALGAS_lstring mAttribute_mTransientName ;
  public : GALGAS_dependanceList mAttribute_mDependencyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientList_2D_element (const GALGAS_lstring & in_mTransientTypeName,
                                            const GALGAS_lstring & in_mTransientName,
                                            const GALGAS_dependanceList & in_mDependencyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_dependanceList & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @arrayControllerDeclarationListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mControllerName,
                                                  const class GALGAS_abstractObservablePropertyAST & in_mBoundModel,
                                                  const class GALGAS_lstring & in_mTableViewOutletName,
                                                  const class GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_arrayControllerDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_arrayControllerBoundColumnListAST & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_arrayControllerDeclarationListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_arrayControllerBoundColumnListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerDeclarationListAST operator_concat (const GALGAS_arrayControllerDeclarationListAST & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerDeclarationListAST add_operation (const GALGAS_arrayControllerDeclarationListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_abstractObservablePropertyAST constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_arrayControllerBoundColumnListAST constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractObservablePropertyAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractObservablePropertyAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_mArrayControllerBoundColumnListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mBoundModelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTableViewOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerDeclarationListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerDeclarationListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerDeclarationListAST ;
 
} ; // End of GALGAS_arrayControllerDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerDeclarationListAST (const GALGAS_arrayControllerDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractObservablePropertyAST current_mBoundModel (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTableViewOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerBoundColumnListAST current_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractObservablePropertyAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractObservablePropertyAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractObservablePropertyAST (void) ;

//---
  public : inline const class cPtr_abstractObservablePropertyAST * ptr (void) const { return (const cPtr_abstractObservablePropertyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractObservablePropertyAST (const cPtr_abstractObservablePropertyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractObservablePropertyAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractObservablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractObservablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractObservablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @abstractObservablePropertyAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractObservablePropertyAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractObservablePropertyAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @arrayControllerBoundColumnListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerBoundColumnListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerBoundColumnListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mColumnName,
                                                  const class GALGAS_lstring & in_mColumnOutletTypeName,
                                                  const class GALGAS_lstring & in_mObservablePropertyName,
                                                  const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerBoundColumnListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_arrayControllerBoundColumnListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_bindingOptionList & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_arrayControllerBoundColumnListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_bindingOptionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListAST operator_concat (const GALGAS_arrayControllerBoundColumnListAST & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListAST add_operation (const GALGAS_arrayControllerBoundColumnListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_bindingOptionList constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_bindingOptionList & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_bindingOptionList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_bindingOptionList & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_bindingOptionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mColumnOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mObservablePropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerBoundColumnListAST ;
 
} ; // End of GALGAS_arrayControllerBoundColumnListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerBoundColumnListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mColumnOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mObservablePropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerBoundColumnListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @arrayControllerDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mControllerName ;
  public : GALGAS_abstractObservablePropertyAST mAttribute_mBoundModel ;
  public : GALGAS_lstring mAttribute_mTableViewOutletName ;
  public : GALGAS_arrayControllerBoundColumnListAST mAttribute_mArrayControllerBoundColumnListAST ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerDeclarationListAST_2D_element (const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_abstractObservablePropertyAST & in_mBoundModel,
                                                                const GALGAS_lstring & in_mTableViewOutletName,
                                                                const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_arrayControllerBoundColumnListAST & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mBoundModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTableViewOutletName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @bindingOptionList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_bindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_bindingOptionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionName,
                                                  const class GALGAS_abstractDefaultValue & in_mOptionValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingOptionList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_bindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_bindingOptionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_bindingOptionList operator_concat (const GALGAS_bindingOptionList & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_bindingOptionList add_operation (const GALGAS_bindingOptionList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_abstractDefaultValue constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_abstractDefaultValue & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_abstractDefaultValue & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_abstractDefaultValue & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractDefaultValue & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractDefaultValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mOptionValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingOptionList ;
 
} ; // End of GALGAS_bindingOptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingOptionList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOptionName ;
  public : GALGAS_abstractDefaultValue mAttribute_mOptionValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bindingOptionList_2D_element (void) ;

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
  public : static GALGAS_bindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mOptionValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingOptionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bindingList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_bindingList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_bindingList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSelectorName,
                                                  const class GALGAS_abstractObservablePropertyAST & in_mObservableProperty,
                                                  const class GALGAS_lstring & in_mOutletName,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_bindingList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                const class GALGAS_lstring & inOperand2,
                                                                const class GALGAS_lstring & inOperand3,
                                                                const class GALGAS_bindingOptionList & inOperand4
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_bindingList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bindingOptionList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_bindingList operator_concat (const GALGAS_bindingList & inOperand
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_bindingList add_operation (const GALGAS_bindingList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_abstractObservablePropertyAST constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_bindingOptionList constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    class GALGAS_bindingOptionList & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_bindingOptionList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_bindingOptionList & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractObservablePropertyAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_bindingOptionList & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractObservablePropertyAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bindingOptionList & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mObservablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSelectorNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingList ;
 
} ; // End of GALGAS_bindingList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingList : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingList (const GALGAS_bindingList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSelectorName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractObservablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @bindingList_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSelectorName ;
  public : GALGAS_abstractObservablePropertyAST mAttribute_mObservableProperty ;
  public : GALGAS_lstring mAttribute_mOutletName ;
  public : GALGAS_lstring mAttribute_mBindingName ;
  public : GALGAS_bindingOptionList mAttribute_mBindingOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bindingList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingList_2D_element (const GALGAS_lstring & in_mSelectorName,
                                          const GALGAS_abstractObservablePropertyAST & in_mObservableProperty,
                                          const GALGAS_lstring & in_mOutletName,
                                          const GALGAS_lstring & in_mBindingName,
                                          const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_bindingOptionList & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mObservableProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSelectorName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @structFieldASTList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structFieldASTList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_structFieldASTList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_structFieldASTList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFieldTypeName,
                                                  const class GALGAS_lstring & in_mFieldName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldASTList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structFieldASTList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_structFieldASTList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_structFieldASTList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_structFieldASTList operator_concat (const GALGAS_structFieldASTList & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_structFieldASTList add_operation (const GALGAS_structFieldASTList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFieldTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structFieldASTList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structFieldASTList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_structFieldASTList ;
 
} ; // End of GALGAS_structFieldASTList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_structFieldASTList : public cGenericAbstractEnumerator {
  public : cEnumerator_structFieldASTList (const GALGAS_structFieldASTList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFieldTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFieldName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_structFieldASTList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldASTList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @structFieldASTList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structFieldASTList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFieldTypeName ;
  public : GALGAS_lstring mAttribute_mFieldName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structFieldASTList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_structFieldASTList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_structFieldASTList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_structFieldASTList_2D_element (const GALGAS_lstring & in_mFieldTypeName,
                                                 const GALGAS_lstring & in_mFieldName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldASTList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structFieldASTList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldASTList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFieldName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFieldTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldASTList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldASTList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractTransientDependencyAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractTransientDependencyAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractTransientDependencyAST (void) ;

//---
  public : inline const class cPtr_abstractTransientDependencyAST * ptr (void) const { return (const cPtr_abstractTransientDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractTransientDependencyAST (const cPtr_abstractTransientDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractTransientDependencyAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractTransientDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractTransientDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractTransientDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @abstractTransientDependencyAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractTransientDependencyAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractTransientDependencyAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @dependanceList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dependanceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractTransientDependencyAST mAttribute_mDependency ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_dependanceList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_dependanceList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_dependanceList_2D_element (const GALGAS_abstractTransientDependencyAST & in_mDependency) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dependanceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dependanceList_2D_element constructor_new (const class GALGAS_abstractTransientDependencyAST & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dependanceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractTransientDependencyAST reader_mDependency (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dependanceList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dependanceList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @arrayControllerBoundColumnListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerBoundColumnListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mColumnName ;
  public : GALGAS_lstring mAttribute_mColumnOutletTypeName ;
  public : GALGAS_lstring mAttribute_mObservablePropertyName ;
  public : GALGAS_bindingOptionList mAttribute_mBindingOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerBoundColumnListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerBoundColumnListAST_2D_element (const GALGAS_lstring & in_mColumnName,
                                                                const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                const GALGAS_lstring & in_mObservablePropertyName,
                                                                const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerBoundColumnListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_bindingOptionList & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mColumnOutletTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mObservablePropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerBoundColumnListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @defaultValueList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_defaultValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_defaultValueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_defaultValueList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDefaultValue & in_mDefaultValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultValueList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_defaultValueList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_defaultValueList constructor_listWithValue (const class GALGAS_abstractDefaultValue & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_defaultValueList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDefaultValue & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_defaultValueList operator_concat (const GALGAS_defaultValueList & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_defaultValueList add_operation (const GALGAS_defaultValueList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractDefaultValue & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractDefaultValue & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractDefaultValue & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDefaultValue & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDefaultValue & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_defaultValueList ;
 
} ; // End of GALGAS_defaultValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_defaultValueList : public cGenericAbstractEnumerator {
  public : cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_defaultValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @defaultValueList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_defaultValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractDefaultValue mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_defaultValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_defaultValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_defaultValueList_2D_element constructor_new (const class GALGAS_abstractDefaultValue & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultValueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultValueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'easyBindings_syntax' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_action_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_controller_5F_declaration_ (class GALGAS_arrayControllerDeclarationListAST & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_declaration_ (class GALGAS_classArrayList & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_ (class GALGAS_attributeList & ioArgument0,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_specification_ (const class GALGAS_bool constinArgument0,
                                                         class GALGAS_bindingSpecificationListMap & ioArgument1,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                     class GALGAS_astDeclarationStruct & ioArgument1,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_count_5F_option_ (class GALGAS_bool & outArgument0,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_count_5F_option_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                        class GALGAS_astDeclarationStruct & ioArgument1,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                      class GALGAS_astDeclarationStruct & ioArgument1,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                    class GALGAS_astDeclarationStruct & ioArgument1,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_ (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_outletClassDeclarationList & ioArgument1,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                           class GALGAS_astDeclarationStruct & ioArgument1,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (const class GALGAS_bool constinArgument0,
                                                class GALGAS_astDeclarationStruct & ioArgument1,
                                                class GALGAS_location & outArgument2,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_ (class GALGAS_transientList & ioArgument0,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (const GALGAS_bool constinArgument0,
                                                                    GALGAS_astDeclarationStruct & ioArgument1,
                                                                    GALGAS_location & outArgument2,
                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_count_5F_option_i1_ (GALGAS_bool & outArgument0,
                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_count_5F_option_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i2_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i3_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i4_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i5_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i6_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i7_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (const GALGAS_bool constinArgument0,
                                                                               GALGAS_astDeclarationStruct & ioArgument1,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_declaration_i9_ (GALGAS_classArrayList & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i10_ (GALGAS_arrayControllerDeclarationListAST & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i11_ (GALGAS_bindingOptionList & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i12_ (const GALGAS_bool constinArgument0,
                                                                             GALGAS_astDeclarationStruct & ioArgument1,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i13_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i14_ (const GALGAS_bool constinArgument0,
                                                                          GALGAS_astDeclarationStruct & ioArgument1,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_attribute_5F_declaration_i15_ (GALGAS_attributeList & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_attribute_5F_declaration_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i16_ (GALGAS_transientList & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i17_ (GALGAS_abstractObservablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i18_ (GALGAS_abstractObservablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i19_ (GALGAS_abstractObservablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i20_ (GALGAS_abstractObservablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i21_ (const GALGAS_bool constinArgument0,
                                                                           GALGAS_astDeclarationStruct & ioArgument1,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i22_ (const GALGAS_bool constinArgument0,
                                                                         GALGAS_astDeclarationStruct & ioArgument1,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i23_ (const GALGAS_bool constinArgument0,
                                                                                    GALGAS_outletClassDeclarationList & ioArgument1,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i24_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_specification_i25_ (const GALGAS_bool constinArgument0,
                                                                              GALGAS_bindingSpecificationListMap & ioArgument1,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_specification_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @andBooleanMultipleBindingExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_andBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_andBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @andBooleanMultipleBindingExpressionAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @arrayControllerObservablePropertyAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerObservablePropertyAST : public GALGAS_abstractObservablePropertyAST {
//--- Constructor
  public : GALGAS_arrayControllerObservablePropertyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerObservablePropertyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayControllerObservablePropertyAST * ptr (void) const { return (const cPtr_arrayControllerObservablePropertyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerObservablePropertyAST (const cPtr_arrayControllerObservablePropertyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerObservablePropertyAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerObservablePropertyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerObservablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mArrayControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mArrayControllerObservablePropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerObservablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @arrayControllerObservablePropertyAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayControllerObservablePropertyAST : public cPtr_abstractObservablePropertyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mArrayControllerName ;
  public : GALGAS_lstring mAttribute_mArrayControllerObservablePropertyName ;

//--- Constructor
  public : cPtr_arrayControllerObservablePropertyAST (const GALGAS_lstring & in_mArrayControllerName,
                                                      const GALGAS_lstring & in_mArrayControllerObservablePropertyName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mArrayControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mArrayControllerObservablePropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @boolAsDefaultValue class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_boolAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_boolAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolAsDefaultValue * ptr (void) const { return (const cPtr_boolAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_boolAsDefaultValue constructor_new (const class GALGAS_lbool & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbool reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @boolAsDefaultValue class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lbool mAttribute_mValue ;

//--- Constructor
  public : cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbool reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @doubleAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_doubleAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_doubleAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_doubleAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_doubleAsDefaultValue * ptr (void) const { return (const cPtr_doubleAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_doubleAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_doubleAsDefaultValue constructor_new (const class GALGAS_ldouble & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doubleAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @doubleAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_ldouble mAttribute_mValue ;

//--- Constructor
  public : cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @enumDeclaration class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_enumDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumDeclaration * ptr (void) const { return (const cPtr_enumDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumDeclaration (const cPtr_enumDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumDeclaration extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                          const class GALGAS_lstring & inOperand1,
                                                          const class GALGAS_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mEnumConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEnumTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @enumDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mEnumTypeName ;
  public : GALGAS_lstringlist mAttribute_mEnumConstantNameList ;

//--- Constructor
  public : cPtr_enumDeclaration (const GALGAS_bool & in_mUserDefined,
                                 const GALGAS_lstring & in_mEnumTypeName,
                                 const GALGAS_lstringlist & in_mEnumConstantNameList
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mEnumTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mEnumConstantNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @identifierAsDefaultValue class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_identifierAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_identifierAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_identifierAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_identifierAsDefaultValue * ptr (void) const { return (const cPtr_identifierAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_identifierAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_identifierAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @identifierAsDefaultValue class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mAttribute_mValue ;

//--- Constructor
  public : cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @integerAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_integerAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerAsDefaultValue * ptr (void) const { return (const cPtr_integerAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerAsDefaultValue constructor_new (const class GALGAS_luint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @integerAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_luint mAttribute_mValue ;

//--- Constructor
  public : cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listAsDefaultValue class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_listAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listAsDefaultValue * ptr (void) const { return (const cPtr_listAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listAsDefaultValue (const cPtr_listAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listAsDefaultValue constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_defaultValueList & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList reader_mDefaultValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mStartLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @listAsDefaultValue class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_location mAttribute_mStartLocation ;
  public : GALGAS_defaultValueList mAttribute_mDefaultValueList ;

//--- Constructor
  public : cPtr_listAsDefaultValue (const GALGAS_location & in_mStartLocation,
                                    const GALGAS_defaultValueList & in_mDefaultValueList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mStartLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_defaultValueList reader_mDefaultValueList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @negateBooleanMultipleBindingExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_negateBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_negateBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_negateBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_negateBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_negateBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @negateBooleanMultipleBindingExpressionAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mAttribute_mBinding ;

//--- Constructor
  public : cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @observablePropertyAsEnableBindingExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyAsEnableBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_observablePropertyAsEnableBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_observablePropertyAsEnableBindingExpressionAST * ptr (void) const { return (const cPtr_observablePropertyAsEnableBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_observablePropertyAsEnableBindingExpressionAST (const cPtr_observablePropertyAsEnableBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyAsEnableBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_observablePropertyAsEnableBindingExpressionAST constructor_new (const class GALGAS_abstractObservablePropertyAST & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAsEnableBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAsEnableBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsEnableBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @observablePropertyAsEnableBindingExpressionAST class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_observablePropertyAsEnableBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractObservablePropertyAST mAttribute_mProperty ;

//--- Constructor
  public : cPtr_observablePropertyAsEnableBindingExpressionAST (const GALGAS_abstractObservablePropertyAST & in_mProperty
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractObservablePropertyAST reader_mProperty (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @orBooleanMultipleBindingExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_orBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_orBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @orBooleanMultipleBindingExpressionAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @preferenceObservablePropertyAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_preferenceObservablePropertyAST : public GALGAS_abstractObservablePropertyAST {
//--- Constructor
  public : GALGAS_preferenceObservablePropertyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_preferenceObservablePropertyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_preferenceObservablePropertyAST * ptr (void) const { return (const cPtr_preferenceObservablePropertyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_preferenceObservablePropertyAST (const cPtr_preferenceObservablePropertyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_preferenceObservablePropertyAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_preferenceObservablePropertyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_preferenceObservablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPreferenceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPreferenceObservablePropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferenceObservablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferenceObservablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @preferenceObservablePropertyAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_preferenceObservablePropertyAST : public cPtr_abstractObservablePropertyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPreferenceName ;
  public : GALGAS_lstring mAttribute_mPreferenceObservablePropertyName ;

//--- Constructor
  public : cPtr_preferenceObservablePropertyAST (const GALGAS_lstring & in_mPreferenceName,
                                                 const GALGAS_lstring & in_mPreferenceObservablePropertyName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPreferenceName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPreferenceObservablePropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @rootObservablePropertyAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_rootObservablePropertyAST : public GALGAS_abstractObservablePropertyAST {
//--- Constructor
  public : GALGAS_rootObservablePropertyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_rootObservablePropertyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_rootObservablePropertyAST * ptr (void) const { return (const cPtr_rootObservablePropertyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_rootObservablePropertyAST (const cPtr_rootObservablePropertyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_rootObservablePropertyAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_rootObservablePropertyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_rootObservablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRootObservablePropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rootObservablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rootObservablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @rootObservablePropertyAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_rootObservablePropertyAST : public cPtr_abstractObservablePropertyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRootObservablePropertyName ;
  public : GALGAS_bool mAttribute_mNamesCountOption ;

//--- Constructor
  public : cPtr_rootObservablePropertyAST (const GALGAS_lstring & in_mRootObservablePropertyName,
                                           const GALGAS_bool & in_mNamesCountOption
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRootObservablePropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @selfObservablePropertyAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfObservablePropertyAST : public GALGAS_abstractObservablePropertyAST {
//--- Constructor
  public : GALGAS_selfObservablePropertyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfObservablePropertyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfObservablePropertyAST * ptr (void) const { return (const cPtr_selfObservablePropertyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfObservablePropertyAST (const cPtr_selfObservablePropertyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfObservablePropertyAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfObservablePropertyAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfObservablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSelfObservablePropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfObservablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfObservablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @selfObservablePropertyAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfObservablePropertyAST : public cPtr_abstractObservablePropertyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSelfObservablePropertyName ;

//--- Constructor
  public : cPtr_selfObservablePropertyAST (const GALGAS_lstring & in_mSelfObservablePropertyName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSelfObservablePropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @stringAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_stringAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_stringAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_stringAsDefaultValue * ptr (void) const { return (const cPtr_stringAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stringAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_stringAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @stringAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mAttribute_mValue ;

//--- Constructor
  public : cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @transientControllerDependencyAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientControllerDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientControllerDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientControllerDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientControllerDependencyAST * ptr (void) const { return (const cPtr_transientControllerDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientControllerDependencyAST (const cPtr_transientControllerDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientControllerDependencyAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientControllerDependencyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientControllerDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientControllerDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientControllerDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @transientControllerDependencyAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientControllerDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mControllerName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientControllerDependencyAST (const GALGAS_lstring & in_mControllerName,
                                                  const GALGAS_lstring & in_mMasterName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @transientLocalDependencyAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientLocalDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientLocalDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientLocalDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientLocalDependencyAST * ptr (void) const { return (const cPtr_transientLocalDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientLocalDependencyAST (const cPtr_transientLocalDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientLocalDependencyAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientLocalDependencyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_bool & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientLocalDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientLocalDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientLocalDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @transientLocalDependencyAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientLocalDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMasterName ;
  public : GALGAS_bool mAttribute_mNamesCountOption ;

//--- Constructor
  public : cPtr_transientLocalDependencyAST (const GALGAS_lstring & in_mMasterName,
                                             const GALGAS_bool & in_mNamesCountOption
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @transientPreferenceDependencyAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientPreferenceDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientPreferenceDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientPreferenceDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientPreferenceDependencyAST * ptr (void) const { return (const cPtr_transientPreferenceDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientPreferenceDependencyAST (const cPtr_transientPreferenceDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPreferenceDependencyAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientPreferenceDependencyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPreferenceDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPreferencesName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPreferenceDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPreferenceDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @transientPreferenceDependencyAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientPreferenceDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPreferencesName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientPreferenceDependencyAST (const GALGAS_lstring & in_mPreferencesName,
                                                  const GALGAS_lstring & in_mMasterName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPreferencesName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @transientRootDependencyAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientRootDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootDependencyAST * ptr (void) const { return (const cPtr_transientRootDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootDependencyAST (const cPtr_transientRootDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootDependencyAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootDependencyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @transientRootDependencyAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMasterName ;
  public : GALGAS_bool mAttribute_mNamesCountOption ;

//--- Constructor
  public : cPtr_transientRootDependencyAST (const GALGAS_lstring & in_mMasterName,
                                            const GALGAS_bool & in_mNamesCountOption
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNamesCountOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @transientRootRelationshipDependencyAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootRelationshipDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientRootRelationshipDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootRelationshipDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootRelationshipDependencyAST * ptr (void) const { return (const cPtr_transientRootRelationshipDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootRelationshipDependencyAST (const cPtr_transientRootRelationshipDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootRelationshipDependencyAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootRelationshipDependencyAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootRelationshipDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootRelationshipDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootRelationshipDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @transientRootRelationshipDependencyAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootRelationshipDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRelationshipName ;
  public : GALGAS_lstring mAttribute_mMasterName ;

//--- Constructor
  public : cPtr_transientRootRelationshipDependencyAST (const GALGAS_lstring & in_mRelationshipName,
                                                        const GALGAS_lstring & in_mMasterName
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMasterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @transientRootSignDependencyAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientRootSignDependencyAST : public GALGAS_abstractTransientDependencyAST {
//--- Constructor
  public : GALGAS_transientRootSignDependencyAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientRootSignDependencyAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientRootSignDependencyAST * ptr (void) const { return (const cPtr_transientRootSignDependencyAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRootSignDependencyAST (const cPtr_transientRootSignDependencyAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRootSignDependencyAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientRootSignDependencyAST constructor_new (const class GALGAS_location & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRootSignDependencyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRootSignDependencyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRootSignDependencyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @transientRootSignDependencyAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientRootSignDependencyAST : public cPtr_abstractTransientDependencyAST {
//--- Attributes
  public : GALGAS_location mAttribute_mDeclarationLocation ;

//--- Constructor
  public : cPtr_transientRootSignDependencyAST (const GALGAS_location & in_mDeclarationLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeDeclaration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_unifiedTypeDeclaration (void) ;

//---
  public : inline const class cPtr_unifiedTypeDeclaration * ptr (void) const { return (const cPtr_unifiedTypeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unifiedTypeDeclaration (const cPtr_unifiedTypeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeDeclaration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_typeKind & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_outletDeclarationList & inOperand4,
                                                                 const class GALGAS_lstring & inOperand5,
                                                                 const class GALGAS_attributeList & inOperand6,
                                                                 const class GALGAS_relationshipList & inOperand7,
                                                                 const class GALGAS_classArrayList & inOperand8,
                                                                 const class GALGAS_transientList & inOperand9,
                                                                 const class GALGAS_lstringlist & inOperand10,
                                                                 const class GALGAS_arrayControllerDeclarationListAST & inOperand11
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unifiedTypeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerDeclarationListAST reader_mArrayControllerDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classArrayList reader_mArrayList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeList reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList reader_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_relationshipList reader_mRelationshipList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSuperTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientList reader_mTransientList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind reader_mTypeKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @unifiedTypeDeclaration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unifiedTypeDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_typeKind mAttribute_mTypeKind ;
  public : GALGAS_lstring mAttribute_mSuperTypeName ;
  public : GALGAS_outletDeclarationList mAttribute_mOutletDeclarationList ;
  public : GALGAS_lstring mAttribute_mRootEntityName ;
  public : GALGAS_attributeList mAttribute_mAttributeList ;
  public : GALGAS_relationshipList mAttribute_mRelationshipList ;
  public : GALGAS_classArrayList mAttribute_mArrayList ;
  public : GALGAS_transientList mAttribute_mTransientList ;
  public : GALGAS_lstringlist mAttribute_mActionDeclarationList ;
  public : GALGAS_arrayControllerDeclarationListAST mAttribute_mArrayControllerDeclarationListAST ;

//--- Constructor
  public : cPtr_unifiedTypeDeclaration (const GALGAS_bool & in_mUserDefined,
                                        const GALGAS_lstring & in_mTypeName,
                                        const GALGAS_typeKind & in_mTypeKind,
                                        const GALGAS_lstring & in_mSuperTypeName,
                                        const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                        const GALGAS_lstring & in_mRootEntityName,
                                        const GALGAS_attributeList & in_mAttributeList,
                                        const GALGAS_relationshipList & in_mRelationshipList,
                                        const GALGAS_classArrayList & in_mArrayList,
                                        const GALGAS_transientList & in_mTransientList,
                                        const GALGAS_lstringlist & in_mActionDeclarationList,
                                        const GALGAS_arrayControllerDeclarationListAST & in_mArrayControllerDeclarationListAST
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind reader_mTypeKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSuperTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList reader_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_attributeList reader_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_relationshipList reader_mRelationshipList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_classArrayList reader_mArrayList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientList reader_mTransientList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerDeclarationListAST reader_mArrayControllerDeclarationListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR easyBindings_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'array_controller_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_array_5F_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_array_5F_controller_5F_declaration_ (GALGAS_arrayControllerDeclarationListAST & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'array_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_array_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_array_5F_declaration_ (GALGAS_classArrayList & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_attribute_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_attribute_5F_declaration_ (GALGAS_attributeList & ioArgument0,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_specification_ (const GALGAS_bool inArgument0,
                                                      GALGAS_bindingSpecificationListMap & ioArgument1,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_class_5F_declaration_ (const GALGAS_bool inArgument0,
                                                  GALGAS_astDeclarationStruct & ioArgument1,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'count_option' non terminal
//--- 'parse' label
  public : virtual void nt_count_5F_option_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_count_5F_option_ (GALGAS_bool & outArgument0,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_document_5F_declaration_ (const GALGAS_bool inArgument0,
                                                     GALGAS_astDeclarationStruct & ioArgument1,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_entity_5F_declaration_ (const GALGAS_bool inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_declaration_ (const GALGAS_bool inArgument0,
                                                 GALGAS_astDeclarationStruct & ioArgument1,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public : virtual void nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public : virtual void nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_observable_5F_property_ (GALGAS_abstractObservablePropertyAST & outArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_class_5F_declaration_ (const GALGAS_bool inArgument0,
                                                            GALGAS_outletClassDeclarationList & ioArgument1,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_preferences_5F_declaration_ (const GALGAS_bool inArgument0,
                                                        GALGAS_astDeclarationStruct & ioArgument1,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (const GALGAS_bool inArgument0,
                                             GALGAS_astDeclarationStruct & ioArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   const GALGAS_bool inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     const GALGAS_bool inArgument0,
                                                     GALGAS_astDeclarationStruct & ioArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_transient_5F_declaration_ (GALGAS_transientList & ioArgument0,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

  public : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controllerBindingOptionList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controllerBindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controllerBindingOptionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionName,
                                                  const class GALGAS_lstring & in_mOptionTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controllerBindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_controllerBindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_controllerBindingOptionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionList operator_concat (const GALGAS_controllerBindingOptionList & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionList add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionList ;
 
} ; // End of GALGAS_controllerBindingOptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controllerBindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerBindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @observablePropertyList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_observablePropertyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractObservablePropertyAST & in_mObservableProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_observablePropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_observablePropertyList constructor_listWithValue (const class GALGAS_abstractObservablePropertyAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_observablePropertyList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractObservablePropertyAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList operator_concat (const GALGAS_observablePropertyList & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList add_operation (const GALGAS_observablePropertyList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractObservablePropertyAST constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractObservablePropertyAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mObservablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_observablePropertyList ;
 
} ; // End of GALGAS_observablePropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_observablePropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractObservablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_observablePropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @outletClassBindingSpecificationModelList list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassBindingSpecificationModelList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mModelTypeName,
                                                  const class GALGAS_bool & in_mModelShouldBeWritableProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationModelList extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_outletClassBindingSpecificationModelList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationModelList operator_concat (const GALGAS_outletClassBindingSpecificationModelList & inOperand
                                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationModelList add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingSpecificationListMap list map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingSpecificationListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationListMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bindingSpecificationListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                      const class GALGAS_controllerBindingOptionList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList reader_listForKey (const class GALGAS_string & constinOperand0
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationListMap ;
 
} ; // End of GALGAS_bindingSpecificationListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingSpecificationListMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingSpecificationListMap (const GALGAS_bindingSpecificationListMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_outletClassBindingSpecificationList current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingSpecificationListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @astDeclarationStruct struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_astDeclarationList mAttribute_mDeclarationList ;
  public : GALGAS_cursorList mAttribute_mCursorList ;
  public : GALGAS_outletClassDeclarationList mAttribute_mOutletClassDeclarationList ;
  public : GALGAS_bindingSpecificationListMap mAttribute_mControllerTemplateList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astDeclarationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationStruct (const GALGAS_astDeclarationList & in_mDeclarationList,
                                        const GALGAS_cursorList & in_mCursorList,
                                        const GALGAS_outletClassDeclarationList & in_mOutletClassDeclarationList,
                                        const GALGAS_bindingSpecificationListMap & in_mControllerTemplateList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_astDeclarationStruct constructor_new (const class GALGAS_astDeclarationList & inOperand0,
                                                               const class GALGAS_cursorList & inOperand1,
                                                               const class GALGAS_outletClassDeclarationList & inOperand2,
                                                               const class GALGAS_bindingSpecificationListMap & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationListMap reader_mControllerTemplateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_cursorList reader_mCursorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList reader_mDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList reader_mOutletClassDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeProxyList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeProxyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeProxyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_unifiedTypeProxyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeProxyList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeProxyList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_unifiedTypeProxyList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_unifiedTypeProxyList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeProxyList operator_concat (const GALGAS_unifiedTypeProxyList & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeProxyList add_operation (const GALGAS_unifiedTypeProxyList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeProxyList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeProxyList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeProxyList ;
 
} ; // End of GALGAS_unifiedTypeProxyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeProxyList : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeProxyList (const GALGAS_unifiedTypeProxyList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_unifiedTypeProxyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeProxyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @unifiedTypeMap_2D_proxy map proxy                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap reader_mActionMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerMap reader_mArrayControllerMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedEntityRelationshipMap reader_mCurrentRelationshipMap (C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedAttributeMap reader_mDecoratedAttributeMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mDecoratedOutletMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTransientMap reader_mDecoratedTransientMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mEnumConstantList (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap reader_mEnumConstantMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedObservablePropertyMap reader_mObservablePropertyMap (C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRootEntityType (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSuperType (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind reader_mTypeKind (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @unifiedTypeProxyList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeProxyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_unifiedTypeProxyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeProxyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_unifiedTypeProxyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_unifiedTypeProxyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeProxyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeProxyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unifiedTypeProxyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeProxyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeProxyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @arrayControllerMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_arrayControllerMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_arrayControllerMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_arrayControllerMap (const GALGAS_arrayControllerMap & inSource) ;
  public : GALGAS_arrayControllerMap & operator = (const GALGAS_arrayControllerMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_arrayControllerMap constructor_mapWithMapToOverride (const class GALGAS_arrayControllerMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_arrayControllerBoundColumnListAST & inOperand3,
                                                      const class GALGAS_actionMap & inOperand4,
                                                      const class GALGAS_decoratedObservablePropertyMap & inOperand5,
                                                      const class GALGAS_lstring & inOperand6,
                                                      const class GALGAS_string & inOperand7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_abstractObservablePropertyAST constinArgument1,
                                                     class GALGAS_lstring constinArgument2,
                                                     class GALGAS_arrayControllerBoundColumnListAST constinArgument3,
                                                     class GALGAS_actionMap constinArgument4,
                                                     class GALGAS_decoratedObservablePropertyMap constinArgument5,
                                                     class GALGAS_lstring constinArgument6,
                                                     class GALGAS_string constinArgument7,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMArrayControllerBoundColumnListASTForKey (class GALGAS_arrayControllerBoundColumnListAST constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMArrayControllerTypeNameForKey (class GALGAS_string constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMBoundModelForKey (class GALGAS_abstractObservablePropertyAST constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMObservablePropertyMapForKey (class GALGAS_decoratedObservablePropertyMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMPropertySignatureForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTableViewOutletNameForKey (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_abstractObservablePropertyAST & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_arrayControllerBoundColumnListAST & outArgument3,
                                                   class GALGAS_actionMap & outArgument4,
                                                   class GALGAS_decoratedObservablePropertyMap & outArgument5,
                                                   class GALGAS_lstring & outArgument6,
                                                   class GALGAS_string & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap reader_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_mArrayControllerBoundColumnListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArrayControllerTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mBoundModelForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedObservablePropertyMap reader_mObservablePropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPropertySignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTableViewOutletNameForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_arrayControllerMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_arrayControllerMap ;
 
} ; // End of GALGAS_arrayControllerMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerMap : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerMap (const GALGAS_arrayControllerMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_abstractObservablePropertyAST current_mBoundModel (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTableViewOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerBoundColumnListAST current_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedObservablePropertyMap current_mObservablePropertyMap (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPropertySignature (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArrayControllerTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @actionMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_actionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_actionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_actionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_actionMap (const GALGAS_actionMap & inSource) ;
  public : GALGAS_actionMap & operator = (const GALGAS_actionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_actionMap constructor_mapWithMapToOverride (const class GALGAS_actionMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_actionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_actionMap ;
 
} ; // End of GALGAS_actionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedObservablePropertyMap map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_decoratedObservablePropertyMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedObservablePropertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_decoratedObservablePropertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_decoratedObservablePropertyMap (const GALGAS_decoratedObservablePropertyMap & inSource) ;
  public : GALGAS_decoratedObservablePropertyMap & operator = (const GALGAS_decoratedObservablePropertyMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedObservablePropertyMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedObservablePropertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_decoratedObservablePropertyMap constructor_mapWithMapToOverride (const class GALGAS_decoratedObservablePropertyMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     class GALGAS_lstring constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsCollectionForKey (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsTransientForKey (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMPropertySignatureForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMPropertyTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsCollectionForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTransientForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPropertySignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mPropertyTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedObservablePropertyMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_decoratedObservablePropertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedObservablePropertyMap ;
 
} ; // End of GALGAS_decoratedObservablePropertyMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedObservablePropertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedObservablePropertyMap (const GALGAS_decoratedObservablePropertyMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mPropertyType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsTransient (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPropertySignature (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsCollection (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedObservablePropertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@arrayControllerMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_arrayControllerMap : public cMapElement {
//--- Map attributes
  public : GALGAS_abstractObservablePropertyAST mAttribute_mBoundModel ;
  public : GALGAS_lstring mAttribute_mTableViewOutletName ;
  public : GALGAS_arrayControllerBoundColumnListAST mAttribute_mArrayControllerBoundColumnListAST ;
  public : GALGAS_actionMap mAttribute_mActionMap ;
  public : GALGAS_decoratedObservablePropertyMap mAttribute_mObservablePropertyMap ;
  public : GALGAS_lstring mAttribute_mPropertySignature ;
  public : GALGAS_string mAttribute_mArrayControllerTypeName ;

//--- Constructor
  public : cMapElement_arrayControllerMap (const GALGAS_lstring & inKey,
                                           const GALGAS_abstractObservablePropertyAST & in_mBoundModel,
                                           const GALGAS_lstring & in_mTableViewOutletName,
                                           const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                           const GALGAS_actionMap & in_mActionMap,
                                           const GALGAS_decoratedObservablePropertyMap & in_mObservablePropertyMap,
                                           const GALGAS_lstring & in_mPropertySignature,
                                           const GALGAS_string & in_mArrayControllerTypeName
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
//                                        @arrayControllerMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_abstractObservablePropertyAST mAttribute_mBoundModel ;
  public : GALGAS_lstring mAttribute_mTableViewOutletName ;
  public : GALGAS_arrayControllerBoundColumnListAST mAttribute_mArrayControllerBoundColumnListAST ;
  public : GALGAS_actionMap mAttribute_mActionMap ;
  public : GALGAS_decoratedObservablePropertyMap mAttribute_mObservablePropertyMap ;
  public : GALGAS_lstring mAttribute_mPropertySignature ;
  public : GALGAS_string mAttribute_mArrayControllerTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_abstractObservablePropertyAST & in_mBoundModel,
                                                 const GALGAS_lstring & in_mTableViewOutletName,
                                                 const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                                 const GALGAS_actionMap & in_mActionMap,
                                                 const GALGAS_decoratedObservablePropertyMap & in_mObservablePropertyMap,
                                                 const GALGAS_lstring & in_mPropertySignature,
                                                 const GALGAS_string & in_mArrayControllerTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayControllerMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_arrayControllerBoundColumnListAST & inOperand3,
                                                                        const class GALGAS_actionMap & inOperand4,
                                                                        const class GALGAS_decoratedObservablePropertyMap & inOperand5,
                                                                        const class GALGAS_lstring & inOperand6,
                                                                        const class GALGAS_string & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap reader_mActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST reader_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArrayControllerTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractObservablePropertyAST reader_mBoundModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedObservablePropertyMap reader_mObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPropertySignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTableViewOutletName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@actionMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @actionMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_actionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@decoratedObservablePropertyMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedObservablePropertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mPropertyType ;
  public : GALGAS_bool mAttribute_mIsTransient ;
  public : GALGAS_lstring mAttribute_mPropertySignature ;
  public : GALGAS_bool mAttribute_mIsCollection ;

//--- Constructor
  public : cMapElement_decoratedObservablePropertyMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mPropertyType,
                                                       const GALGAS_bool & in_mIsTransient,
                                                       const GALGAS_lstring & in_mPropertySignature,
                                                       const GALGAS_bool & in_mIsCollection
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
//                                  @decoratedObservablePropertyMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedObservablePropertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mPropertyType ;
  public : GALGAS_bool mAttribute_mIsTransient ;
  public : GALGAS_lstring mAttribute_mPropertySignature ;
  public : GALGAS_bool mAttribute_mIsCollection ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedObservablePropertyMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedObservablePropertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedObservablePropertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedObservablePropertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mPropertyType,
                                                             const GALGAS_bool & in_mIsTransient,
                                                             const GALGAS_lstring & in_mPropertySignature,
                                                             const GALGAS_bool & in_mIsCollection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedObservablePropertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedObservablePropertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedObservablePropertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsCollection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTransient (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPropertySignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedObservablePropertyMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedObservablePropertyMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedAttributeMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_decoratedAttributeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedAttributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_decoratedAttributeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_decoratedAttributeMap (const GALGAS_decoratedAttributeMap & inSource) ;
  public : GALGAS_decoratedAttributeMap & operator = (const GALGAS_decoratedAttributeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedAttributeMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedAttributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_decoratedAttributeMap constructor_mapWithMapToOverride (const class GALGAS_decoratedAttributeMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_abstractDefaultValue & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     class GALGAS_abstractDefaultValue constinArgument2,
                                                     class GALGAS_bool constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAttributeTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDefaultValueForKey (class GALGAS_abstractDefaultValue constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMNeedsValidationForKey (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_abstractDefaultValue & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidationForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedAttributeMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_decoratedAttributeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedAttributeMap ;
 
} ; // End of GALGAS_decoratedAttributeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedAttributeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedAttributeMap (const GALGAS_decoratedAttributeMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeType (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNeedsValidation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedAttributeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedEntityRelationshipMap map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedEntityRelationshipMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_decoratedEntityRelationshipMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedEntityRelationshipMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_decoratedEntityRelationshipMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_decoratedEntityRelationshipMap (const GALGAS_decoratedEntityRelationshipMap & inSource) ;
  public : GALGAS_decoratedEntityRelationshipMap & operator = (const GALGAS_decoratedEntityRelationshipMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedEntityRelationshipMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedEntityRelationshipMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_decoratedEntityRelationshipMap constructor_mapWithMapToOverride (const class GALGAS_decoratedEntityRelationshipMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_bool constinArgument1,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                     class GALGAS_lstring constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsToManyForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOppositeRelationshipNameForKey (class GALGAS_lstring constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRelationshipTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToManyForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOppositeRelationshipNameForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRelationshipTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedEntityRelationshipMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_decoratedEntityRelationshipMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedEntityRelationshipMap ;
 
} ; // End of GALGAS_decoratedEntityRelationshipMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedEntityRelationshipMap : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedEntityRelationshipMap (const GALGAS_decoratedEntityRelationshipMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsToMany (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mRelationshipType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOppositeRelationshipName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedEntityRelationshipMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedEntityRelationshipMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @decoratedOutletMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedOutletMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_decoratedOutletMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedOutletMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_decoratedOutletMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) ;
  public : GALGAS_decoratedOutletMap & operator = (const GALGAS_decoratedOutletMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedOutletMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedOutletMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_decoratedOutletMap constructor_mapWithMapToOverride (const class GALGAS_decoratedOutletMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_runActionDescriptor & inOperand2,
                                                      const class GALGAS_enabledBindingDescriptor & inOperand3,
                                                      const class GALGAS_regularBindingList & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     class GALGAS_runActionDescriptor constinArgument2,
                                                     class GALGAS_enabledBindingDescriptor constinArgument3,
                                                     class GALGAS_regularBindingList constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnabledBindingDescriptorForKey (class GALGAS_enabledBindingDescriptor constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOutletTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRegularBindingListForKey (class GALGAS_regularBindingList constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRunActionDescriptorForKey (class GALGAS_runActionDescriptor constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_runActionDescriptor & outArgument2,
                                                   class GALGAS_enabledBindingDescriptor & outArgument3,
                                                   class GALGAS_regularBindingList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enabledBindingDescriptor reader_mEnabledBindingDescriptorForKey (const class GALGAS_string & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_mRegularBindingListForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor reader_mRunActionDescriptorForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_decoratedOutletMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedOutletMap ;
 
} ; // End of GALGAS_decoratedOutletMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedOutletMap : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_runActionDescriptor current_mRunActionDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_enabledBindingDescriptor current_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingList current_mRegularBindingList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedOutletMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedTransientMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedTransientMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_decoratedTransientMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTransientMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_decoratedTransientMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_decoratedTransientMap (const GALGAS_decoratedTransientMap & inSource) ;
  public : GALGAS_decoratedTransientMap & operator = (const GALGAS_decoratedTransientMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTransientMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedTransientMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_decoratedTransientMap constructor_mapWithMapToOverride (const class GALGAS_decoratedTransientMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_dependanceList & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     class GALGAS_lstring constinArgument2,
                                                     class GALGAS_dependanceList constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDependencyListForKey (class GALGAS_dependanceList constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTransientSignatureForKey (class GALGAS_lstring constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTransientTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_dependanceList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_mDependencyListForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTransientMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_decoratedTransientMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedTransientMap ;
 
} ; // End of GALGAS_decoratedTransientMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedTransientMap : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedTransientMap (const GALGAS_decoratedTransientMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTransientType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransientSignature (LOCATION_ARGS) const ;
  public : class GALGAS_dependanceList current_mDependencyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedTransientMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTransientMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumConstantMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public : GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_typeKind constinArgument1,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                     class GALGAS_decoratedAttributeMap constinArgument4,
                                                     class GALGAS_decoratedTransientMap constinArgument5,
                                                     class GALGAS_decoratedOutletMap constinArgument6,
                                                     class GALGAS_decoratedObservablePropertyMap constinArgument7,
                                                     class GALGAS_decoratedEntityRelationshipMap constinArgument8,
                                                     class GALGAS_actionMap constinArgument9,
                                                     class GALGAS_lstringlist constinArgument10,
                                                     class GALGAS_enumConstantMap constinArgument11,
                                                     class GALGAS_arrayControllerMap constinArgument12,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMArrayControllerMapForKey (class GALGAS_arrayControllerMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMCurrentRelationshipMapForKey (class GALGAS_decoratedEntityRelationshipMap constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDecoratedAttributeMapForKey (class GALGAS_decoratedAttributeMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDecoratedOutletMapForKey (class GALGAS_decoratedOutletMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDecoratedTransientMapForKey (class GALGAS_decoratedTransientMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumConstantListForKey (class GALGAS_lstringlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumConstantMapForKey (class GALGAS_enumConstantMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMObservablePropertyMapForKey (class GALGAS_decoratedObservablePropertyMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRootEntityTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSuperTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTypeKindForKey (class GALGAS_typeKind constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind & outArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                   class GALGAS_decoratedAttributeMap & outArgument4,
                                                   class GALGAS_decoratedTransientMap & outArgument5,
                                                   class GALGAS_decoratedOutletMap & outArgument6,
                                                   class GALGAS_decoratedObservablePropertyMap & outArgument7,
                                                   class GALGAS_decoratedEntityRelationshipMap & outArgument8,
                                                   class GALGAS_actionMap & outArgument9,
                                                   class GALGAS_lstringlist & outArgument10,
                                                   class GALGAS_enumConstantMap & outArgument11,
                                                   class GALGAS_arrayControllerMap & outArgument12,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap reader_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerMap reader_mArrayControllerMapForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedEntityRelationshipMap reader_mCurrentRelationshipMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedAttributeMap reader_mDecoratedAttributeMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap reader_mDecoratedOutletMapForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTransientMap reader_mDecoratedTransientMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mEnumConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap reader_mEnumConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedObservablePropertyMap reader_mObservablePropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRootEntityTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSuperTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind reader_mTypeKindForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mTypeKind (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mSuperType (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mRootEntityType (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedAttributeMap current_mDecoratedAttributeMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedTransientMap current_mDecoratedTransientMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedOutletMap current_mDecoratedOutletMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedObservablePropertyMap current_mObservablePropertyMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedEntityRelationshipMap current_mCurrentRelationshipMap (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_enumConstantMap current_mEnumConstantMap (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerMap current_mArrayControllerMap (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_typeKind mAttribute_mTypeKind ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSuperType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mRootEntityType ;
  public : GALGAS_decoratedAttributeMap mAttribute_mDecoratedAttributeMap ;
  public : GALGAS_decoratedTransientMap mAttribute_mDecoratedTransientMap ;
  public : GALGAS_decoratedOutletMap mAttribute_mDecoratedOutletMap ;
  public : GALGAS_decoratedObservablePropertyMap mAttribute_mObservablePropertyMap ;
  public : GALGAS_decoratedEntityRelationshipMap mAttribute_mCurrentRelationshipMap ;
  public : GALGAS_actionMap mAttribute_mActionMap ;
  public : GALGAS_lstringlist mAttribute_mEnumConstantList ;
  public : GALGAS_enumConstantMap mAttribute_mEnumConstantMap ;
  public : GALGAS_arrayControllerMap mAttribute_mArrayControllerMap ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_typeKind & in_mTypeKind,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperType,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mRootEntityType,
                                       const GALGAS_decoratedAttributeMap & in_mDecoratedAttributeMap,
                                       const GALGAS_decoratedTransientMap & in_mDecoratedTransientMap,
                                       const GALGAS_decoratedOutletMap & in_mDecoratedOutletMap,
                                       const GALGAS_decoratedObservablePropertyMap & in_mObservablePropertyMap,
                                       const GALGAS_decoratedEntityRelationshipMap & in_mCurrentRelationshipMap,
                                       const GALGAS_actionMap & in_mActionMap,
                                       const GALGAS_lstringlist & in_mEnumConstantList,
                                       const GALGAS_enumConstantMap & in_mEnumConstantMap,
                                       const GALGAS_arrayControllerMap & in_mArrayControllerMap
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
//                                  Class for element of '@decoratedAttributeMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedAttributeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;
  public : GALGAS_abstractDefaultValue mAttribute_mDefaultValue ;
  public : GALGAS_bool mAttribute_mNeedsValidation ;

//--- Constructor
  public : cMapElement_decoratedAttributeMap (const GALGAS_lstring & inKey,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType,
                                              const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                              const GALGAS_bool & in_mNeedsValidation
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
//                                      @decoratedAttributeMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedAttributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;
  public : GALGAS_abstractDefaultValue mAttribute_mDefaultValue ;
  public : GALGAS_bool mAttribute_mNeedsValidation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedAttributeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedAttributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedAttributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType,
                                                    const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                    const GALGAS_bool & in_mNeedsValidation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedAttributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedAttributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                           const class GALGAS_abstractDefaultValue & inOperand2,
                                                                           const class GALGAS_bool & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedAttributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue reader_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsValidation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAttributeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAttributeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@decoratedTransientMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedTransientMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTransientType ;
  public : GALGAS_lstring mAttribute_mTransientSignature ;
  public : GALGAS_dependanceList mAttribute_mDependencyList ;

//--- Constructor
  public : cMapElement_decoratedTransientMap (const GALGAS_lstring & inKey,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                              const GALGAS_lstring & in_mTransientSignature,
                                              const GALGAS_dependanceList & in_mDependencyList
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
//                                      @decoratedTransientMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTransientMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTransientType ;
  public : GALGAS_lstring mAttribute_mTransientSignature ;
  public : GALGAS_dependanceList mAttribute_mDependencyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedTransientMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedTransientMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedTransientMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedTransientMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                                    const GALGAS_lstring & in_mTransientSignature,
                                                    const GALGAS_dependanceList & in_mDependencyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTransientMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedTransientMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_dependanceList & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedTransientMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceList reader_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedTransientMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTransientMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@decoratedOutletMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedOutletMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mOutletTypeName ;
  public : GALGAS_runActionDescriptor mAttribute_mRunActionDescriptor ;
  public : GALGAS_enabledBindingDescriptor mAttribute_mEnabledBindingDescriptor ;
  public : GALGAS_regularBindingList mAttribute_mRegularBindingList ;

//--- Constructor
  public : cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & in_mOutletTypeName,
                                           const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GALGAS_enabledBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GALGAS_regularBindingList & in_mRegularBindingList
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
//                                        @decoratedOutletMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedOutletMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mOutletTypeName ;
  public : GALGAS_runActionDescriptor mAttribute_mRunActionDescriptor ;
  public : GALGAS_enabledBindingDescriptor mAttribute_mEnabledBindingDescriptor ;
  public : GALGAS_regularBindingList mAttribute_mRegularBindingList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedOutletMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedOutletMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lstring & in_mOutletTypeName,
                                                 const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                 const GALGAS_enabledBindingDescriptor & in_mEnabledBindingDescriptor,
                                                 const GALGAS_regularBindingList & in_mRegularBindingList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedOutletMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedOutletMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_runActionDescriptor & inOperand2,
                                                                        const class GALGAS_enabledBindingDescriptor & inOperand3,
                                                                        const class GALGAS_regularBindingList & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enabledBindingDescriptor reader_mEnabledBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutletTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList reader_mRegularBindingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor reader_mRunActionDescriptor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedOutletMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@decoratedEntityRelationshipMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_decoratedEntityRelationshipMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsToMany ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mRelationshipType ;
  public : GALGAS_lstring mAttribute_mOppositeRelationshipName ;

//--- Constructor
  public : cMapElement_decoratedEntityRelationshipMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_bool & in_mIsToMany,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mRelationshipType,
                                                       const GALGAS_lstring & in_mOppositeRelationshipName
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
//                                  @decoratedEntityRelationshipMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedEntityRelationshipMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_bool mAttribute_mIsToMany ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mRelationshipType ;
  public : GALGAS_lstring mAttribute_mOppositeRelationshipName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedEntityRelationshipMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedEntityRelationshipMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedEntityRelationshipMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedEntityRelationshipMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_bool & in_mIsToMany,
                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mRelationshipType,
                                                             const GALGAS_lstring & in_mOppositeRelationshipName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedEntityRelationshipMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decoratedEntityRelationshipMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedEntityRelationshipMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOppositeRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mRelationshipType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedEntityRelationshipMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedEntityRelationshipMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@enumConstantMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_enumConstantMap (const GALGAS_lstring & inKey
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
//                                         @enumConstantMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @dependanceListForGeneration list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dependanceListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_dependanceListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_dependanceListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractTransientDependencyForGeneration & in_mDependency
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dependanceListForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dependanceListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_dependanceListForGeneration constructor_listWithValue (const class GALGAS_abstractTransientDependencyForGeneration & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_dependanceListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractTransientDependencyForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_dependanceListForGeneration operator_concat (const GALGAS_dependanceListForGeneration & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_dependanceListForGeneration add_operation (const GALGAS_dependanceListForGeneration & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractTransientDependencyForGeneration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractTransientDependencyForGeneration & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractTransientDependencyForGeneration & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractTransientDependencyForGeneration & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractTransientDependencyForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractTransientDependencyForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractTransientDependencyForGeneration reader_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_dependanceListForGeneration ;
 
} ; // End of GALGAS_dependanceListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_dependanceListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_dependanceListForGeneration (const GALGAS_dependanceListForGeneration & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractTransientDependencyForGeneration current_mDependency (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_dependanceListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dependanceListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractTransientDependencyForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractTransientDependencyForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractTransientDependencyForGeneration (void) ;

//---
  public : inline const class cPtr_abstractTransientDependencyForGeneration * ptr (void) const { return (const cPtr_abstractTransientDependencyForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractTransientDependencyForGeneration (const cPtr_abstractTransientDependencyForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractTransientDependencyForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractTransientDependencyForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractTransientDependencyForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractTransientDependencyForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @abstractTransientDependencyForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractTransientDependencyForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractTransientDependencyForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @dependanceListForGeneration_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dependanceListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractTransientDependencyForGeneration mAttribute_mDependency ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_dependanceListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_dependanceListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_dependanceListForGeneration_2D_element (const GALGAS_abstractTransientDependencyForGeneration & in_mDependency) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dependanceListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dependanceListForGeneration_2D_element constructor_new (const class GALGAS_abstractTransientDependencyForGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dependanceListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractTransientDependencyForGeneration reader_mDependency (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dependanceListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dependanceListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientDefinitionListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDefinitionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDefinitionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDefinitionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTransientName,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                                  const class GALGAS_lstring & in_mTransientSignature,
                                                  const class GALGAS_dependanceListForGeneration & in_mDependencyList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDefinitionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDefinitionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_transientDefinitionListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                         const class GALGAS_dependanceListForGeneration & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_transientDefinitionListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_dependanceListForGeneration & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDefinitionListForGeneration operator_concat (const GALGAS_transientDefinitionListForGeneration & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDefinitionListForGeneration add_operation (const GALGAS_transientDefinitionListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_dependanceListForGeneration constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_dependanceListForGeneration & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_dependanceListForGeneration & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_dependanceListForGeneration & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_dependanceListForGeneration & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_dependanceListForGeneration & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceListForGeneration reader_mDependencyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTransientNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDefinitionListForGeneration ;
 
} ; // End of GALGAS_transientDefinitionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientDefinitionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDefinitionListForGeneration (const GALGAS_transientDefinitionListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTransientName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTransientType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransientSignature (LOCATION_ARGS) const ;
  public : class GALGAS_dependanceListForGeneration current_mDependencyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDefinitionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDefinitionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @transientDefinitionListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDefinitionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTransientName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTransientType ;
  public : GALGAS_lstring mAttribute_mTransientSignature ;
  public : GALGAS_dependanceListForGeneration mAttribute_mDependencyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientDefinitionListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & in_mTransientName,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                                                   const GALGAS_lstring & in_mTransientSignature,
                                                                   const GALGAS_dependanceListForGeneration & in_mDependencyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDefinitionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDefinitionListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                          const class GALGAS_dependanceListForGeneration & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDefinitionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_dependanceListForGeneration reader_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransientSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDefinitionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @regularBindingList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_regularBindingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mBindingName ;
  public : GALGAS_observablePropertyList mAttribute_mObservablePropertyList ;
  public : GALGAS_bindingOptionList mAttribute_mBindingOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_regularBindingList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_regularBindingList_2D_element (void) ;

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
  public : static GALGAS_regularBindingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_observablePropertyList & inOperand1,
                                                                        const class GALGAS_bindingOptionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList reader_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList reader_mObservablePropertyList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularBindingList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @outletClassMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_outletClassMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_outletClassMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_outletClassMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_outletClassMap (const GALGAS_outletClassMap & inSource) ;
  public : GALGAS_outletClassMap & operator = (const GALGAS_outletClassMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_outletClassMap constructor_mapWithMapToOverride (const class GALGAS_outletClassMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_bool constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHandlesRunActionForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_outletClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletClassMap ;
 
} ; // End of GALGAS_outletClassMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassMap : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@outletClassMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_outletClassMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mHandlesRunAction ;

//--- Constructor
  public : cMapElement_outletClassMap (const GALGAS_lstring & inKey,
                                       const GALGAS_bool & in_mHandlesRunAction
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
//                                          @outletClassMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_bool mAttribute_mHandlesRunAction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_bool & in_mHandlesRunAction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outletClassMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHandlesRunAction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientDependencyGraphNodeInfoList list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyGraphNodeInfoList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDependencyGraphNodeInfoList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDependencyGraphNodeInfoList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSignature,
                                                  const class GALGAS_bool & in_mIsTransient
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyGraphNodeInfoList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDependencyGraphNodeInfoList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_transientDependencyGraphNodeInfoList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_transientDependencyGraphNodeInfoList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyGraphNodeInfoList operator_concat (const GALGAS_transientDependencyGraphNodeInfoList & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyGraphNodeInfoList add_operation (const GALGAS_transientDependencyGraphNodeInfoList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTransientAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyGraphNodeInfoList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyGraphNodeInfoList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyGraphNodeInfoList ;
 
} ; // End of GALGAS_transientDependencyGraphNodeInfoList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientDependencyGraphNodeInfoList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDependencyGraphNodeInfoList (const GALGAS_transientDependencyGraphNodeInfoList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsTransient (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDependencyGraphNodeInfoList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyGraphNodeInfoList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @transientDependencyGraphNodeInfoList_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyGraphNodeInfoList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mSignature ;
  public : GALGAS_bool mAttribute_mIsTransient ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientDependencyGraphNodeInfoList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientDependencyGraphNodeInfoList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientDependencyGraphNodeInfoList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientDependencyGraphNodeInfoList_2D_element (const GALGAS_string & in_mSignature,
                                                                   const GALGAS_bool & in_mIsTransient) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyGraphNodeInfoList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDependencyGraphNodeInfoList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_bool & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDependencyGraphNodeInfoList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTransient (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDependencyGraphNodeInfoList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyGraphNodeInfoList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @transientDependencyGraph graph                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_transientDependencyGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyGraph extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDependencyGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_addNode (class GALGAS_lstring inArgument0,
                                                   class GALGAS_string inArgument1,
                                                   class GALGAS_bool inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_transientDependencyGraphNodeInfoList & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_transientDependencyGraphNodeInfoList & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_transientDependencyGraphNodeInfoList & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_transientDependencyGraphNodeInfoList & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_transientDependencyGraphNodeInfoList & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_transientDependencyGraphNodeInfoList & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_accessibleNodesFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyGraph reader_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyGraph reader_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                            const class GALGAS_stringset & constinOperand1,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDependencyGraph class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientDependencyListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDependencyListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSwiftTypeNameForComputeFunctionFormalArgument,
                                                  const class GALGAS_string & in_mComputeFunctionFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDependencyListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_transientDependencyListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_string & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration operator_concat (const GALGAS_transientDependencyListForGeneration & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mComputeFunctionFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSwiftTypeNameForComputeFunctionFormalArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyListForGeneration ;
 
} ; // End of GALGAS_transientDependencyListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientDependencyListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSwiftTypeNameForComputeFunctionFormalArgument (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComputeFunctionFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDependencyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @transientDependencyListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mSwiftTypeNameForComputeFunctionFormalArgument ;
  public : GALGAS_string mAttribute_mComputeFunctionFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientDependencyListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_string & in_mSwiftTypeNameForComputeFunctionFormalArgument,
                                                                   const GALGAS_string & in_mComputeFunctionFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientDependencyListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_string & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mComputeFunctionFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSwiftTypeNameForComputeFunctionFormalArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDependencyListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @transientListForGeneration list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTransientSignature,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                                  const class GALGAS_transientDependencyListForGeneration & in_mTransientDependencyListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientListForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_transientListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                               const class GALGAS_transientDependencyListForGeneration & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_transientListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_transientDependencyListForGeneration & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientListForGeneration operator_concat (const GALGAS_transientListForGeneration & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientListForGeneration add_operation (const GALGAS_transientListForGeneration & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                         class GALGAS_transientDependencyListForGeneration constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                    class GALGAS_transientDependencyListForGeneration & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_transientDependencyListForGeneration & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                         class GALGAS_transientDependencyListForGeneration & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_transientDependencyListForGeneration & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_transientDependencyListForGeneration & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration reader_mTransientDependencyListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTransientSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientListForGeneration ;
 
} ; // End of GALGAS_transientListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientListForGeneration (const GALGAS_transientListForGeneration & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTransientSignature (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTransientType (LOCATION_ARGS) const ;
  public : class GALGAS_transientDependencyListForGeneration current_mTransientDependencyListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @transientListForGeneration_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTransientSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTransientType ;
  public : GALGAS_transientDependencyListForGeneration mAttribute_mTransientDependencyListForGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientListForGeneration_2D_element (const GALGAS_string & in_mTransientSignature,
                                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mTransientType,
                                                         const GALGAS_transientDependencyListForGeneration & in_mTransientDependencyListForGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_transientListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const class GALGAS_transientDependencyListForGeneration & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration reader_mTransientDependencyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTransientSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientListForGeneration_2D_element ;

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

#endif
