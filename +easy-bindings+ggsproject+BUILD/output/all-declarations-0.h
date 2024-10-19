#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS__32_lstringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GGS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      class Compiler * inCompiler
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
 
} ; // End of GGS__32_lstringlist_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE easyBindings_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_easyBindings_5F_lexique : public cToken {
  public: double mLexicalAttribute_floatValue ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_easyBindings_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_easyBindings_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_easyBindings_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_Identifier = 2 ;
  public: static const int32_t kToken__40_attribute = 3 ;
  public: static const int32_t kToken_bindingName = 4 ;
  public: static const int32_t kToken_controllerName = 5 ;
  public: static const int32_t kToken_viewName = 6 ;
  public: static const int32_t kToken_literal_5F_integer = 7 ;
  public: static const int32_t kToken_literal_5F_double = 8 ;
  public: static const int32_t kToken_literal_5F_string = 9 ;
  public: static const int32_t kToken_comment = 10 ;
  public: static const int32_t kToken_abstract = 11 ;
  public: static const int32_t kToken_action = 12 ;
  public: static const int32_t kToken_all = 13 ;
  public: static const int32_t kToken_arrayController = 14 ;
  public: static const int32_t kToken_autolayout = 15 ;
  public: static const int32_t kToken_autoLayoutDocument = 16 ;
  public: static const int32_t kToken_binding = 17 ;
  public: static const int32_t kToken_calledBy = 18 ;
  public: static const int32_t kToken_class = 19 ;
  public: static const int32_t kToken_classForSwift = 20 ;
  public: static const int32_t kToken_column = 21 ;
  public: static const int32_t kToken_computed = 22 ;
  public: static const int32_t kToken_configurator = 23 ;
  public: static const int32_t kToken_default = 24 ;
  public: static const int32_t kToken_dependsFrom = 25 ;
  public: static const int32_t kToken_divider = 26 ;
  public: static const int32_t kToken_enum = 27 ;
  public: static const int32_t kToken_editableColumn = 28 ;
  public: static const int32_t kToken_entity = 29 ;
  public: static const int32_t kToken_extern = 30 ;
  public: static const int32_t kToken_externDelegate = 31 ;
  public: static const int32_t kToken_externFunc = 32 ;
  public: static const int32_t kToken_func = 33 ;
  public: static const int32_t kToken_graphic = 34 ;
  public: static const int32_t kToken_graphviz = 35 ;
  public: static const int32_t kToken_gutter = 36 ;
  public: static const int32_t kToken_handlingOpposite = 37 ;
  public: static const int32_t kToken_hStack = 38 ;
  public: static const int32_t kToken_include = 39 ;
  public: static const int32_t kToken_inverse = 40 ;
  public: static const int32_t kToken_linker = 41 ;
  public: static const int32_t kToken_mainxib = 42 ;
  public: static const int32_t kToken_menuItem = 43 ;
  public: static const int32_t kToken_no = 44 ;
  public: static const int32_t kToken_newView = 45 ;
  public: static const int32_t kToken_none = 46 ;
  public: static const int32_t kToken_one = 47 ;
  public: static const int32_t kToken_outlet = 48 ;
  public: static const int32_t kToken_outletArray = 49 ;
  public: static const int32_t kToken_override = 50 ;
  public: static const int32_t kToken_prefs = 51 ;
  public: static const int32_t kToken_property = 52 ;
  public: static const int32_t kToken_proxy = 53 ;
  public: static const int32_t kToken_root = 54 ;
  public: static const int32_t kToken_selectionController = 55 ;
  public: static const int32_t kToken_self = 56 ;
  public: static const int32_t kToken_separator = 57 ;
  public: static const int32_t kToken_signature = 58 ;
  public: static const int32_t kToken_sortkey = 59 ;
  public: static const int32_t kToken_space = 60 ;
  public: static const int32_t kToken_stackView = 61 ;
  public: static const int32_t kToken_standalone = 62 ;
  public: static const int32_t kToken_struct = 63 ;
  public: static const int32_t kToken_super = 64 ;
  public: static const int32_t kToken_tableViewController = 65 ;
  public: static const int32_t kToken_toMany = 66 ;
  public: static const int32_t kToken_toOne = 67 ;
  public: static const int32_t kToken_transient = 68 ;
  public: static const int32_t kToken_typeView = 69 ;
  public: static const int32_t kToken_version = 70 ;
  public: static const int32_t kToken_vStack = 71 ;
  public: static const int32_t kToken_versionShouldChange = 72 ;
  public: static const int32_t kToken_view = 73 ;
  public: static const int32_t kToken_weak = 74 ;
  public: static const int32_t kToken_withVScroller = 75 ;
  public: static const int32_t kToken_xcodeproject = 76 ;
  public: static const int32_t kToken_yes = 77 ;
  public: static const int32_t kToken_enabled = 78 ;
  public: static const int32_t kToken_graphicController = 79 ;
  public: static const int32_t kToken_hidden = 80 ;
  public: static const int32_t kToken_tableValue = 81 ;
  public: static const int32_t kToken_run = 82 ;
  public: static const int32_t kToken__3A_ = 83 ;
  public: static const int32_t kToken__2C_ = 84 ;
  public: static const int32_t kToken__3B_ = 85 ;
  public: static const int32_t kToken__21_ = 86 ;
  public: static const int32_t kToken__5B_ = 87 ;
  public: static const int32_t kToken__5D_ = 88 ;
  public: static const int32_t kToken__7B_ = 89 ;
  public: static const int32_t kToken__7D_ = 90 ;
  public: static const int32_t kToken__28_ = 91 ;
  public: static const int32_t kToken__29_ = 92 ;
  public: static const int32_t kToken__2E_ = 93 ;
  public: static const int32_t kToken__7C_ = 94 ;
  public: static const int32_t kToken__26_ = 95 ;
  public: static const int32_t kToken__3C_ = 96 ;
  public: static const int32_t kToken__3E_ = 97 ;
  public: static const int32_t kToken__3C__3D_ = 98 ;
  public: static const int32_t kToken__3E__3D_ = 99 ;
  public: static const int32_t kToken__21__3D_ = 100 ;
  public: static const int32_t kToken__3D__3D_ = 101 ;
  public: static const int32_t kToken__5E_ = 102 ;
  public: static const int32_t kToken__2D_ = 103 ;
  public: static const int32_t kToken__3D_ = 104 ;

//--- Key words table 'lowerCaseKeyWordList'
  public: static int32_t search_into_lowerCaseKeyWordList (const String & inSearchedString) ;

//--- Key words table 'reservedBindingNameKeyWordList'
  public: static int32_t search_into_reservedBindingNameKeyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: double attributeValue_floatValue (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_easyBindings_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 104 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_easyBindings_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_action_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GGS_stringset & ioArgument0,
                                                                      class GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GGS_lstring constinArgument0,
                                                                                  class GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GGS_lstring constinArgument0,
                                                                         class GGS_autoLayoutClassParameterList & outArgument1,
                                                                         class GGS_lstring & outArgument2,
                                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GGS_bindingOptionList & outArgument0,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                    class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                               class GGS_astComputedViewInstruction & outArgument1,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                         const class GGS_lstring constinArgument1,
                                                         class GGS_arrayControllerBindingListAST & ioArgument2,
                                                         class GGS_astDeclarationStruct & ioArgument3,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GGS_abstractDefaultValue & outArgument0,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GGS_externSwiftDelegateList & ioArgument0,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GGS_externSwiftFunctionList & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GGS_mainXibDescriptorList & ioArgument0,
                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GGS_mainXibLineDescriptorList & outArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GGS_observablePropertyAST & outArgument0,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GGS_tableValueBinding & outArgument0,
                                                 class GGS_runActionDescriptor & outArgument1,
                                                 class GGS_multipleBindingDescriptor & outArgument2,
                                                 class GGS_multipleBindingDescriptor & outArgument3,
                                                 class GGS_graphicController & outArgument4,
                                                 class GGS_regularBindingList & outArgument5,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                              class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GGS_outletDeclarationList & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                               class GGS_simpleStoredPropertyList & ioArgument1,
                                                               class GGS_stringset & ioArgument2,
                                                               class GGS_astDeclarationStruct & ioArgument3,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GGS_astViewDeclarationList & ioArgument0,
                                                            class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_astDeclarationStruct & ioArgument0,
                                               class GGS_location & outArgument1,
                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                      class GGS_stringset & ioArgument1,
                                                      class GGS_astDeclarationStruct & ioArgument2,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                     class GGS_astDeclarationStruct & ioArgument1,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                        const class GGS_lstring constinArgument1,
                                                        class GGS_astDeclarationStruct & ioArgument2,
                                                        class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GGS_stringset & ioArgument0,
                                                                   class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                   class GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (const class GGS_bool constinArgument0,
                                                           class GGS_stringset & ioArgument1,
                                                           class GGS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GGS_astViewInstructionList & ioArgument3,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GGS_lstring & ioArgument0,
                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument0,
                                                                   GGS_location & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GGS_externSwiftDelegateList & ioArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GGS_externSwiftFunctionList & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GGS_astDeclarationStruct & ioArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GGS_astDeclarationStruct & ioArgument0,
                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GGS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GGS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GGS_astDeclarationStruct & ioArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GGS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GGS_lstring constinArgument0,
                                                                                              GGS_autoLayoutClassParameterList & outArgument1,
                                                                                              GGS_lstring & outArgument2,
                                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GGS_lstring constinArgument0,
                                                                                                       GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GGS_stringset & ioArgument0,
                                                                                           GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_ (const GGS_bool constinArgument0,
                                                                                GGS_stringset & ioArgument1,
                                                                                GGS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GGS_astViewInstructionList & ioArgument3,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_ (GGS_stringset & ioArgument0,
                                                                                    GGS_astComputedViewInstruction & outArgument1,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_ (GGS_stringset & ioArgument0,
                                                                                        GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_ (GGS_outletDeclarationList & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_ (GGS_tableValueBinding & outArgument0,
                                                                      GGS_runActionDescriptor & outArgument1,
                                                                      GGS_multipleBindingDescriptor & outArgument2,
                                                                      GGS_multipleBindingDescriptor & outArgument3,
                                                                      GGS_graphicController & outArgument4,
                                                                      GGS_regularBindingList & outArgument5,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_ (GGS_observablePropertyAST & outArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_ (const GGS_lstring constinArgument0,
                                                                                    GGS_simpleStoredPropertyList & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i35_ (const GGS_lstring constinArgument0,
                                                                                    GGS_simpleStoredPropertyList & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i35_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i35_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i36_ (const GGS_lstring constinArgument0,
                                                                          GGS_astDeclarationStruct & ioArgument1,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i36_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i36_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i37_ (const GGS_lstring constinArgument0,
                                                                           GGS_stringset & ioArgument1,
                                                                           GGS_astDeclarationStruct & ioArgument2,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i37_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i37_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i38_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i38_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i38_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i39_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i39_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i39_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i40_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i40_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i40_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i41_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i41_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i41_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i46_ (GGS_bindingOptionList & outArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i46_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i46_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i50_ (GGS_abstractDefaultValue & outArgument0,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i50_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i50_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i51_ (GGS_lstring & ioArgument0,
                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i51_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i51_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i52_ (GGS_mainXibDescriptorList & ioArgument0,
                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i52_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i52_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i53_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i53_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i53_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBooleanMultipleBindingExpressionAST (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBooleanMultipleBindingExpressionAST init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractBooleanMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBooleanMultipleBindingExpressionAST_init (Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionAST (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractDeclarationAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractDeclarationAST (const class cPtr_abstractDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassName (void) const ;
  public: void setProperty_mClassName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractDeclarationAST init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractDeclarationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDeclarationAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractDeclarationAST_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_lstring mProperty_mClassName ;


//--- Default constructor
  public: cPtr_abstractDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractDeclarationAST (const GGS_lstring & in_mClassName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractDefaultValue : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractDefaultValue (const class cPtr_abstractDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractDefaultValue init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractDefaultValue extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDefaultValue : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractDefaultValue_init (Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GGS_lstring arg_inNode,
           class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_abstractDefaultValue (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andBooleanMultipleBindingExpressionAST (const class cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andBooleanMultipleBindingExpressionAST class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                  const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_andBooleanMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_arrayControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayControllerDeclarationAST (const class cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;
  public: void setProperty_mControllerName (const GGS_lstring & inValue) ;

  public: class GGS_arrayControllerBoundModelAST readProperty_mModel (void) const ;
  public: void setProperty_mModel (const GGS_arrayControllerBoundModelAST & inValue) ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;
  public: void setProperty_mToManyPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_arrayControllerDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBoundModelAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_arrayControllerBoundModelAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rootToManyRelationship,
    enum_selfToManyRelationship
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootToManyRelationship (class GGS_lstring & out_rootEntityName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBoundModelAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBoundModelAST class_func_rootToManyRelationship (const class GGS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_arrayControllerBoundModelAST class_func_selfToManyRelationship (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractRootToManyRelationship (class GGS_lstring & outArgument0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ getter_getRootToManyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfToManyRelationship (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_arrayControllerBoundModelAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayControllerDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                   const class GGS_lstring & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_arrayControllerBoundModelAST mProperty_mModel ;
  public: GGS_lstring mProperty_mToManyPropertyName ;


//--- Default constructor
  public: cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                              const GGS_lstring & in_mControllerName,
                                              const GGS_arrayControllerBoundModelAST & in_mModel,
                                              const GGS_lstring & in_mToManyPropertyName,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astAbstractViewDeclaration (const class cPtr_astAbstractViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAbstractViewDeclaration init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewDeclaration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astAbstractViewDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewDeclaration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewDeclaration_init (Compiler * inCompiler) ;


//--- Extension method checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_astAbstractViewDeclaration (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewInstructionDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astAbstractViewInstructionDeclaration (const class cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAbstractViewInstructionDeclaration init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astAbstractViewInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewInstructionDeclaration_init (Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_astAbstractViewInstructionDeclaration (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astComputedHorizontalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedHorizontalViewDeclaration (const class cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedHorizontalViewDeclaration init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                            const class GGS_astViewInstructionList & inOperand1,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedHorizontalViewDeclaration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedHorizontalViewDeclaration class_func_new (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                const class GGS_astViewInstructionList & inOperand1,
                                                                                const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astComputedHorizontalViewDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionCallList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionCallList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionCallList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionCallList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astAutoLayoutViewFunctionCallList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutViewFunctionCallList add_operation (const GGS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astAutoLayoutViewFunctionCallList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astAutoLayoutViewFunctionCallList ;
 
} ; // End of GGS_astAutoLayoutViewFunctionCallList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionCallList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList & inEnumeratedObject,
                                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionCallList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astNewStackViewDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astNewStackViewDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astNewStackViewDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astNewStackViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInstanciedStackViewName,
                                                 const class GGS_lstring & in_mTypeStackViewName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astNewStackViewDeclarationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astNewStackViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astNewStackViewDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astNewStackViewDeclarationList add_operation (const GGS_astNewStackViewDeclarationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstanciedStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInstanciedStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTypeStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astNewStackViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astNewStackViewDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astNewStackViewDeclarationList ;
 
} ; // End of GGS_astNewStackViewDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astNewStackViewDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astNewStackViewDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astViewInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astViewInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astViewInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewInstructionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astViewInstructionList class_func_listWithValue (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astViewInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astViewInstructionList add_operation (const GGS_astViewInstructionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astViewInstructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astViewInstructionList ;
 
} ; // End of GGS_astViewInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astViewInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_astViewInstructionList (const GGS_astViewInstructionList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewInstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedHorizontalViewDeclaration_init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                      const class GGS_astViewInstructionList & inOperand1,
                                                                      const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GGS_astViewInstructionList & in_mInstructionList,
                                                     const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedVerticalViewDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astComputedVerticalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedVerticalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedVerticalViewDeclaration (const class cPtr_astComputedVerticalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedVerticalViewDeclaration init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                  const class GGS_astViewInstructionList & inOperand3,
                                                                                  const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedVerticalViewDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedVerticalViewDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                              const class GGS_astViewInstructionList & inOperand3,
                                                                              const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astComputedVerticalViewDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedVerticalViewDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedVerticalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                            const class GGS_astViewInstructionList & inOperand3,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension method checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedVerticalViewDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                   const GGS_lstring & in_mConfiguratorName,
                                                   const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                   const GGS_astViewInstructionList & in_mInstructionList,
                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedViewInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astComputedViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedViewInstruction (const class cPtr_astComputedViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_tableValueBinding readProperty_mTableValueBinding (void) const ;

  public: class GGS_runActionDescriptor readProperty_mRunActionDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const ;

  public: class GGS_graphicController readProperty_mGraphicController (void) const ;

  public: class GGS_regularBindingList readProperty_mRegularBindingList (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_lstring readProperty_mOutletName (void) const ;

  public: class GGS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedViewInstruction init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                      const class GGS_tableValueBinding & inOperand3,
                                                                                                      const class GGS_runActionDescriptor & inOperand4,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                      const class GGS_graphicController & inOperand7,
                                                                                                      const class GGS_regularBindingList & inOperand8,
                                                                                                      const class GGS_lstring & inOperand9,
                                                                                                      const class GGS_lstring & inOperand10,
                                                                                                      const class GGS_bool & inOperand11,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedViewInstruction extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedViewInstruction class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                      const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                      const class GGS_tableValueBinding & inOperand3,
                                                                      const class GGS_runActionDescriptor & inOperand4,
                                                                      const class GGS_multipleBindingDescriptor & inOperand5,
                                                                      const class GGS_multipleBindingDescriptor & inOperand6,
                                                                      const class GGS_graphicController & inOperand7,
                                                                      const class GGS_regularBindingList & inOperand8,
                                                                      const class GGS_lstring & inOperand9,
                                                                      const class GGS_lstring & inOperand10,
                                                                      const class GGS_bool & inOperand11,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astComputedViewInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//--------------------------------------------------------------------------------------------------
//   enum graphicController
//--------------------------------------------------------------------------------------------------

class GGS_graphicController : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_graphicController (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_defined
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_defined (class GGS_lstring & out_controller,
                                                                class GGS_lstring & out_propertyName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphicController extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphicController class_func_defined (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_graphicController class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractDefined (class GGS_lstring & outArgument0,
                                                       class GGS_lstring & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_graphicController_2E_defined_3F_ getter_getDefined (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDefined (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_graphicController class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController ;

//--------------------------------------------------------------------------------------------------
//   enum multipleBindingDescriptor
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_multipleBindingDescriptor (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noBinding,
    enum_binding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_binding (class GGS_abstractBooleanMultipleBindingExpressionAST & out_expression) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingDescriptor extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingDescriptor class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_multipleBindingDescriptor class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingDescriptor_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_multipleBindingDescriptor class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ;

//--------------------------------------------------------------------------------------------------
//   enum runActionDescriptor
//--------------------------------------------------------------------------------------------------

class GGS_runActionDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_runActionDescriptor (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noAction,
    enum_action
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_action (class GGS_lstring & out_target,
                                                               class GGS_lstring & out_action) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_runActionDescriptor extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_runActionDescriptor class_func_action (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_runActionDescriptor class_func_noAction (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractAction (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_runActionDescriptor_2E_action_3F_ getter_getAction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoAction (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_runActionDescriptor class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

//--------------------------------------------------------------------------------------------------
//   enum tableValueBinding
//--------------------------------------------------------------------------------------------------

class GGS_tableValueBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_tableValueBinding (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noTableValueBinding,
    enum_tableValueBinding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_tableValueBinding (class GGS_lstring & out_controllerName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableValueBinding extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableValueBinding class_func_noTableValueBinding (LOCATION_ARGS) ;

  public: static class GGS_tableValueBinding class_func_tableValueBinding (const class GGS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractTableValueBinding (class GGS_lstring & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_tableValueBinding_2E_tableValueBinding_3F_ getter_getTableValueBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoTableValueBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTableValueBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_tableValueBinding class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewInstructionParameterList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_autoLayoutClassParameterType & in_mParameterType,
                                                 const class GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterList init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterList extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                               const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_autoLayoutClassParameterType & inOperand1,
                                                     const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutViewInstructionParameterList add_operation (const GGS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_autoLayoutClassParameterType constinArgument1,
                                               class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_autoLayoutClassParameterType constinArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_autoLayoutClassParameterType & outArgument1,
                                                 class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_autoLayoutClassParameterType & outArgument1,
                                                class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_autoLayoutClassParameterType & outArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GGS_astAutoLayoutViewInstructionParameterValue constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_autoLayoutClassParameterType & outArgument1,
                                              class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_autoLayoutClassParameterType & outArgument1,
                                             class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astAutoLayoutViewInstructionParameterList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astAutoLayoutViewInstructionParameterList ;
 
} ; // End of GGS_astAutoLayoutViewInstructionParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewInstructionParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject,
                                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewInstructionParameterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList list
//
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_regularBindingList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_regularBindingList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_observablePropertyList & in_mObservablePropertyList,
                                                 const class GGS_bindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularBindingList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularBindingList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_regularBindingList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_observablePropertyList & inOperand1,
                                                                        const class GGS_bindingOptionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_regularBindingList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_observablePropertyList & inOperand1,
                                                     const class GGS_bindingOptionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_regularBindingList add_operation (const GGS_regularBindingList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_observablePropertyList constinArgument1,
                                               class GGS_bindingOptionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_observablePropertyList constinArgument1,
                                                      class GGS_bindingOptionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_observablePropertyList & outArgument1,
                                                 class GGS_bindingOptionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_observablePropertyList & outArgument1,
                                                class GGS_bindingOptionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_observablePropertyList & outArgument1,
                                                      class GGS_bindingOptionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GGS_bindingOptionList constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyListAtIndex (class GGS_observablePropertyList constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_observablePropertyList & outArgument1,
                                              class GGS_bindingOptionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_observablePropertyList & outArgument1,
                                             class GGS_bindingOptionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyList getter_mObservablePropertyListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_regularBindingList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_regularBindingList ;
 
} ; // End of GGS_regularBindingList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_regularBindingList : public cGenericAbstractEnumerator {
  public: cEnumerator_regularBindingList (const GGS_regularBindingList & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public: class GGS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedViewInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                const class GGS_tableValueBinding & inOperand3,
                                                                                                const class GGS_runActionDescriptor & inOperand4,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                const class GGS_graphicController & inOperand7,
                                                                                                const class GGS_regularBindingList & inOperand8,
                                                                                                const class GGS_lstring & inOperand9,
                                                                                                const class GGS_lstring & inOperand10,
                                                                                                const class GGS_bool & inOperand11,
                                                                                                Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_tableValueBinding mProperty_mTableValueBinding ;
  public: GGS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: GGS_graphicController mProperty_mGraphicController ;
  public: GGS_regularBindingList mProperty_mRegularBindingList ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_lstring mProperty_mOutletName ;
  public: GGS_bool mProperty_mOutletIsArray ;


//--- Default constructor
  public: cPtr_astComputedViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedViewInstruction (const GGS_lstring & in_mAutoLayoutViewClassName,
                                           const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                           const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                           const GGS_tableValueBinding & in_mTableValueBinding,
                                           const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                           const GGS_graphicController & in_mGraphicController,
                                           const GGS_regularBindingList & in_mRegularBindingList,
                                           const GGS_lstring & in_mConfiguratorName,
                                           const GGS_lstring & in_mOutletName,
                                           const GGS_bool & in_mOutletIsArray,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astDividerInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astDividerInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astDividerInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astDividerInstructionDeclaration (const class cPtr_astDividerInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDividerInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDividerInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDividerInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astDividerInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astDividerInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astDividerInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astDividerInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astDividerInstructionDeclaration (const GGS_bool & in_horizontal,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astGutterInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astGutterInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astGutterInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astGutterInstructionDeclaration (const class cPtr_astGutterInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astGutterInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astGutterInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astGutterInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astGutterInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astGutterInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astGutterInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astGutterInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astGutterInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astGutterInstructionDeclaration (const GGS_bool & in_horizontal,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astHStackViewInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astHStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astHStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astHStackViewInstructionDeclaration (const class cPtr_astHStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astHStackViewInstructionDeclaration init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                               const class GGS_astViewInstructionList & inOperand1,
                                                                               const class GGS_optionalHiddenBinding & inOperand2,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astHStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astHStackViewInstructionDeclaration class_func_new (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                               const class GGS_astViewInstructionList & inOperand1,
                                                                               const class GGS_optionalHiddenBinding & inOperand2,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astHStackViewInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//   enum optionalHiddenBinding
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noBinding,
    enum_binding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_binding (class GGS_abstractBooleanMultipleBindingExpressionAST & out_hidden) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalHiddenBinding extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_optionalHiddenBinding class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_optionalHiddenBinding_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionalHiddenBinding class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHStackViewInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astHStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astHStackViewInstructionDeclaration_init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                         const class GGS_astViewInstructionList & inOperand1,
                                                                         const class GGS_optionalHiddenBinding & inOperand2,
                                                                         const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astHStackViewInstructionDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astLocalViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astLocalViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astLocalViewInstruction (const class cPtr_astLocalViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLocalView (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astLocalViewInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astLocalViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astLocalViewInstruction class_func_new (const class GGS_lstring & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astLocalViewInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astLocalViewInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astLocalViewInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLocalView ;


//--- Default constructor
  public: cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GGS_lstring & in_mLocalView,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astSeparatorInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astSeparatorInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSeparatorInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSeparatorInstructionDeclaration (const class cPtr_astSeparatorInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSeparatorInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSeparatorInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSeparatorInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astSeparatorInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astSeparatorInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astSeparatorInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSeparatorInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astSeparatorInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astSeparatorInstructionDeclaration (const GGS_bool & in_horizontal,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astSpaceViewInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astSpaceViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSpaceViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSpaceViewInstruction (const class cPtr_astSpaceViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSpaceViewInstruction init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSpaceViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSpaceViewInstruction class_func_new (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astSpaceViewInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astSpaceViewInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astSpaceViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSpaceViewInstruction_init (Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_astSpaceViewInstruction (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astVStackViewInstructionDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_astVStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astVStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astVStackViewInstructionDeclaration (const class cPtr_astVStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astVStackViewInstructionDeclaration init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                       const class GGS_astViewInstructionList & inOperand3,
                                                                                       const class GGS_optionalHiddenBinding & inOperand4,
                                                                                       const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astVStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astVStackViewInstructionDeclaration class_func_new (const class GGS_bool & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                               const class GGS_astViewInstructionList & inOperand3,
                                                                               const class GGS_optionalHiddenBinding & inOperand4,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astVStackViewInstructionDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astVStackViewInstructionDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_astVStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                 const class GGS_astViewInstructionList & inOperand3,
                                                                                 const class GGS_optionalHiddenBinding & inOperand4,
                                                                                 const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astVStackViewInstructionDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                    const GGS_lstring & in_mConfiguratorName,
                                                    const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyDeclarationAST (const class cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPropertyTypeName (void) const ;
  public: void setProperty_mPropertyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_lstring & inValue) ;

  public: class GGS_abstractDefaultValue readProperty_mDefaultValue (void) const ;
  public: void setProperty_mDefaultValue (const GGS_abstractDefaultValue & inValue) ;

  public: class GGS_bool readProperty_generateResetMethod (void) const ;
  public: void setProperty_generateResetMethod (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_generateDirectRead (void) const ;

  public: class GGS_bool readProperty_generateDirectAccess (void) const ;

  public: class GGS_bool readProperty_standalone (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyDeclarationAST init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const class GGS_lstring & inOperand0,
                                                                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                                                                           const class GGS_lstring & inOperand2,
                                                                                                                                                           const class GGS_abstractDefaultValue & inOperand3,
                                                                                                                                                           const class GGS_bool & inOperand4,
                                                                                                                                                           const class GGS_bool & inOperand5,
                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                           const class GGS_bool & inOperand7,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_abstractDefaultValue & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_bool & inOperand5,
                                                                        const class GGS_bool & inOperand6,
                                                                        const class GGS_bool & inOperand7,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_atomicPropertyDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicPropertyDeclarationAST_init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const class GGS_lstring & inOperand0,
                                                                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                                                                     const class GGS_abstractDefaultValue & inOperand3,
                                                                                                                                                     const class GGS_bool & inOperand4,
                                                                                                                                                     const class GGS_bool & inOperand5,
                                                                                                                                                     const class GGS_bool & inOperand6,
                                                                                                                                                     const class GGS_bool & inOperand7,
                                                                                                                                                     Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPropertyTypeName ;
  public: GGS_lstring mProperty_mPropertyName ;
  public: GGS_abstractDefaultValue mProperty_mDefaultValue ;
  public: GGS_bool mProperty_generateResetMethod ;
  public: GGS_bool mProperty_generateDirectRead ;
  public: GGS_bool mProperty_generateDirectAccess ;
  public: GGS_bool mProperty_standalone ;


//--- Default constructor
  public: cPtr_atomicPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_lstring & in_mPropertyTypeName,
                                             const GGS_lstring & in_mPropertyName,
                                             const GGS_abstractDefaultValue & in_mDefaultValue,
                                             const GGS_bool & in_generateResetMethod,
                                             const GGS_bool & in_generateDirectRead,
                                             const GGS_bool & in_generateDirectAccess,
                                             const GGS_bool & in_standalone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDocumentDeclarationAST (const class cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;

  public: class GGS_lstring readProperty_mMainViewName (void) const ;

  public: class GGS_outletDeclarationList readProperty_mOutletDeclarationList (void) const ;

  public: class GGS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GGS_arrayControllerBindingListAST readProperty_mArrayControllerBindingListAST (void) const ;

  public: class GGS_astViewDeclarationList readProperty_mViewDeclarationList (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS_astAutoLayoutOutletLinkerList readProperty_mOutletLinkerList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS_outletDeclarationList & inOperand3,
                                                                                                const class GGS_lstringlist & inOperand4,
                                                                                                const class GGS_arrayControllerBindingListAST & inOperand5,
                                                                                                const class GGS_astViewDeclarationList & inOperand6,
                                                                                                const class GGS_string & inOperand7,
                                                                                                const class GGS_astAutoLayoutOutletLinkerList & inOperand8,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentDeclarationAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_outletDeclarationList & inOperand3,
                                                                            const class GGS_lstringlist & inOperand4,
                                                                            const class GGS_arrayControllerBindingListAST & inOperand5,
                                                                            const class GGS_astViewDeclarationList & inOperand6,
                                                                            const class GGS_string & inOperand7,
                                                                            const class GGS_astAutoLayoutOutletLinkerList & inOperand8,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autoLayoutDocumentDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerBindingListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_arrayControllerBindingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mControllerName,
                                                 const class GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBindingListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBindingListAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBindingListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_arrayControllerBindingListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_multipleBindingDescriptor & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_arrayControllerBindingListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_multipleBindingDescriptor & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_arrayControllerBindingListAST add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_multipleBindingDescriptor constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_multipleBindingDescriptor constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_multipleBindingDescriptor & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_multipleBindingDescriptor & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_multipleBindingDescriptor & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenSelectionViewBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                                                        class GGS_uint constinArgument1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_multipleBindingDescriptor & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_multipleBindingDescriptor & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingDescriptor getter_mHiddenSelectionViewBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arrayControllerBindingListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_arrayControllerBindingListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_arrayControllerBindingListAST ;
 
} ; // End of GGS_arrayControllerBindingListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_arrayControllerBindingListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arrayControllerBindingListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutOutletLinkerList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinkerList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutOutletLinkerList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLinkerName,
                                                 const class GGS_lstringlist & in_mOutletNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutOutletLinkerList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutOutletLinkerList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutOutletLinkerList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutOutletLinkerList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstringlist & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astAutoLayoutOutletLinkerList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutOutletLinkerList add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameListAtIndex (class GGS_lstringlist constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mOutletNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutOutletLinkerList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astAutoLayoutOutletLinkerList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astAutoLayoutOutletLinkerList ;
 
} ; // End of GGS_astAutoLayoutOutletLinkerList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutOutletLinkerList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutOutletLinkerList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_astViewDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_astViewDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mViewName,
                                                 const class GGS_astAbstractViewDeclaration & in_mView
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewDeclarationList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewDeclarationList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_astViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_astAbstractViewDeclaration & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_astViewDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_astAbstractViewDeclaration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astViewDeclarationList add_operation (const GGS_astViewDeclarationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_astAbstractViewDeclaration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_astAbstractViewDeclaration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_astAbstractViewDeclaration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_astAbstractViewDeclaration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_astAbstractViewDeclaration & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewAtIndex (class GGS_astAbstractViewDeclaration constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_astAbstractViewDeclaration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_astAbstractViewDeclaration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAbstractViewDeclaration getter_mViewAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astViewDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astViewDeclarationList ;
 
} ; // End of GGS_astViewDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astViewDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_astViewDeclarationList (const GGS_astViewDeclarationList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_astAbstractViewDeclaration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_outletDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_outletDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_outletDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletTypeName,
                                                 const class GGS_lstring & in_mOutletName,
                                                 const class GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                 const class GGS_runActionDescriptor & in_mRunDescriptor,
                                                 const class GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                 const class GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                 const class GGS_regularBindingList & in_mRegularBindingList,
                                                 const class GGS_graphicController & in_mGraphicController
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletDeclarationList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletDeclarationList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_outletDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_tableValueBinding & inOperand2,
                                                                           const class GGS_runActionDescriptor & inOperand3,
                                                                           const class GGS_multipleBindingDescriptor & inOperand4,
                                                                           const class GGS_multipleBindingDescriptor & inOperand5,
                                                                           const class GGS_regularBindingList & inOperand6,
                                                                           const class GGS_graphicController & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_outletDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_tableValueBinding & inOperand2,
                                                     const class GGS_runActionDescriptor & inOperand3,
                                                     const class GGS_multipleBindingDescriptor & inOperand4,
                                                     const class GGS_multipleBindingDescriptor & inOperand5,
                                                     const class GGS_regularBindingList & inOperand6,
                                                     const class GGS_graphicController & inOperand7
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletDeclarationList add_operation (const GGS_outletDeclarationList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_tableValueBinding constinArgument2,
                                               class GGS_runActionDescriptor constinArgument3,
                                               class GGS_multipleBindingDescriptor constinArgument4,
                                               class GGS_multipleBindingDescriptor constinArgument5,
                                               class GGS_regularBindingList constinArgument6,
                                               class GGS_graphicController constinArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_tableValueBinding constinArgument2,
                                                      class GGS_runActionDescriptor constinArgument3,
                                                      class GGS_multipleBindingDescriptor constinArgument4,
                                                      class GGS_multipleBindingDescriptor constinArgument5,
                                                      class GGS_regularBindingList constinArgument6,
                                                      class GGS_graphicController constinArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_tableValueBinding & outArgument2,
                                                 class GGS_runActionDescriptor & outArgument3,
                                                 class GGS_multipleBindingDescriptor & outArgument4,
                                                 class GGS_multipleBindingDescriptor & outArgument5,
                                                 class GGS_regularBindingList & outArgument6,
                                                 class GGS_graphicController & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_tableValueBinding & outArgument2,
                                                class GGS_runActionDescriptor & outArgument3,
                                                class GGS_multipleBindingDescriptor & outArgument4,
                                                class GGS_multipleBindingDescriptor & outArgument5,
                                                class GGS_regularBindingList & outArgument6,
                                                class GGS_graphicController & outArgument7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_tableValueBinding & outArgument2,
                                                      class GGS_runActionDescriptor & outArgument3,
                                                      class GGS_multipleBindingDescriptor & outArgument4,
                                                      class GGS_multipleBindingDescriptor & outArgument5,
                                                      class GGS_regularBindingList & outArgument6,
                                                      class GGS_graphicController & outArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                                            class GGS_uint constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphicControllerAtIndex (class GGS_graphicController constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingListAtIndex (class GGS_regularBindingList constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunDescriptorAtIndex (class GGS_runActionDescriptor constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingDescriptorAtIndex (class GGS_tableValueBinding constinArgument0,
                                                                               class GGS_uint constinArgument1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_tableValueBinding & outArgument2,
                                              class GGS_runActionDescriptor & outArgument3,
                                              class GGS_multipleBindingDescriptor & outArgument4,
                                              class GGS_multipleBindingDescriptor & outArgument5,
                                              class GGS_regularBindingList & outArgument6,
                                              class GGS_graphicController & outArgument7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_tableValueBinding & outArgument2,
                                             class GGS_runActionDescriptor & outArgument3,
                                             class GGS_multipleBindingDescriptor & outArgument4,
                                             class GGS_multipleBindingDescriptor & outArgument5,
                                             class GGS_regularBindingList & outArgument6,
                                             class GGS_graphicController & outArgument7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingDescriptor getter_mEnabledBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphicController getter_mGraphicControllerAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingDescriptor getter_mHiddenBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingList getter_mRegularBindingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_runActionDescriptor getter_mRunDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_tableValueBinding getter_mTableValueBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_outletDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_outletDeclarationList ;
 
} ; // End of GGS_outletDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletDeclarationList (const GGS_outletDeclarationList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_tableValueBinding current_mTableValueBindingDescriptor (LOCATION_ARGS) const ;
  public: class GGS_runActionDescriptor current_mRunDescriptor (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public: class GGS_regularBindingList current_mRegularBindingList (LOCATION_ARGS) const ;
  public: class GGS_graphicController current_mGraphicController (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_outletDeclarationList & inOperand3,
                                                                                          const class GGS_lstringlist & inOperand4,
                                                                                          const class GGS_arrayControllerBindingListAST & inOperand5,
                                                                                          const class GGS_astViewDeclarationList & inOperand6,
                                                                                          const class GGS_string & inOperand7,
                                                                                          const class GGS_astAutoLayoutOutletLinkerList & inOperand8,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mMainViewName ;
  public: GGS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: GGS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public: GGS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS_astAutoLayoutOutletLinkerList mProperty_mOutletLinkerList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (const GGS_lstring & in_mClassName,
                                                 const GGS_lstring & in_mRootEntityName,
                                                 const GGS_lstring & in_mMainViewName,
                                                 const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                 const GGS_lstringlist & in_mActionDeclarationList,
                                                 const GGS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                 const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerDeclarationAST (const class cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;

  public: class GGS_bool readProperty_mIsRoot (void) const ;

  public: class GGS_lstring readProperty_mRootEntityName (void) const ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerDeclarationAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                                   const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_lstring & inOperand4,
                                                                                       const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                       const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autoLayoutTableViewControllerDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerAttributListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mAttributeName,
                                                 const class GGS_abstractDefaultValue & in_mAttributeValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerAttributListAST init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerAttributListAST extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerAttributListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerAttributListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_abstractDefaultValue & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_abstractDefaultValue & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerAttributListAST add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_abstractDefaultValue constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_abstractDefaultValue constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_abstractDefaultValue & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_abstractDefaultValue & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_abstractDefaultValue & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_abstractDefaultValue & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_abstractDefaultValue & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mAttributeValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerAttributListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutTableViewControllerAttributListAST ;
 
} ; // End of GGS_autoLayoutTableViewControllerAttributListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerAttributListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mEditable,
                                                 const class GGS_lstring & in_mPropertyName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                 const class GGS_lstring & in_mSortPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerBoundColumnListAST class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                     const class GGS_lstring & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bool & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                     const class GGS_lstring & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerBoundColumnListAST add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnParameterListASTAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterList getter_mColumnParameterListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
 
} ; // End of GGS_autoLayoutTableViewControllerBoundColumnListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutTableViewControllerBoundColumnListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
                                                                                             const class GGS_lstring & inOperand4,
                                                                                             const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                             const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_bool mProperty_mIsRoot ;
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mToManyPropertyName ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public: GGS_autoLayoutTableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mControllerName,
                                                            const GGS_bool & in_mIsRoot,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mToManyPropertyName,
                                                            const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                            const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutViewClassDeclarationAST (const class cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mUserDefined (void) const ;
  public: void setProperty_mUserDefined (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;
  public: void setProperty_mSuperClassName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;
  public: void setProperty_mHasRunAction (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;
  public: void setProperty_mHasEnabled (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;
  public: void setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;
  public: void setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;
  public: void setProperty_mHasHidden (const GGS_bool & inValue) ;

  public: class GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const ;
  public: void setProperty_mParameterList (const GGS_autoLayoutClassParameterList & inValue) ;

  public: class GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;
  public: void setProperty_mAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassDeclarationAST init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_bool & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     const class GGS_bool & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassDeclarationAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bool & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_bool & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             const class GGS_bool & inOperand5,
                                                                             const class GGS_bool & inOperand6,
                                                                             const class GGS_bool & inOperand7,
                                                                             const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                             const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autoLayoutViewClassDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutClassParameterList list
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_autoLayoutClassParameterType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_autoLayoutClassParameterType & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutClassParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_autoLayoutClassParameterType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutClassParameterList add_operation (const GGS_autoLayoutClassParameterList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_autoLayoutClassParameterType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_autoLayoutClassParameterType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_autoLayoutClassParameterType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_autoLayoutClassParameterType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_autoLayoutClassParameterType & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_autoLayoutClassParameterType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_autoLayoutClassParameterType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutClassParameterList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutClassParameterList ;
 
} ; // End of GGS_autoLayoutClassParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutClassParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutClassParameterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) ;
  public: GGS_astAutoLayoutViewFunctionMap & operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewFunctionMap class_func_mapWithMapToOverride (const class GGS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_autoLayoutClassParameterList & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_astAutoLayoutViewFunctionMap add_operation (const GGS_astAutoLayoutViewFunctionMap & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_autoLayoutClassParameterList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFomalParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_autoLayoutClassParameterList & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_mFomalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_astAutoLayoutViewFunctionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GGS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_astAutoLayoutViewFunctionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_astAutoLayoutViewFunctionMap ;
 
} ; // End of GGS_astAutoLayoutViewFunctionMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@astAutoLayoutViewFunctionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap : public cMapElement {
//--- Map attributes
  public: GGS_autoLayoutClassParameterList mProperty_mFomalParameterList ;

//--- Constructors
  public: cMapElement_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap_2E_element & inValue
                                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_astAutoLayoutViewFunctionMap (const GGS_lstring & inKey,
                                                    const GGS_autoLayoutClassParameterList & in_mFomalParameterList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_bool & inOperand3,
                                                                                               const class GGS_bool & inOperand4,
                                                                                               const class GGS_bool & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_bool & inOperand7,
                                                                                               const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                               const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                               Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;
  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;


//--- Default constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_bool & in_mUserDefined,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mHasRunAction,
                                                  const GGS_bool & in_mHasEnabled,
                                                  const GGS_bool & in_mHandlesTableValueBinding,
                                                  const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                  const GGS_bool & in_mHasHidden,
                                                  const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                  const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_boolAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolAsDefaultValue (const class cPtr_boolAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbool readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lbool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolAsDefaultValue init_21_ (const class GGS_lbool & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolAsDefaultValue extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolAsDefaultValue class_func_new (const class GGS_lbool & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolAsDefaultValue_init_21_ (const class GGS_lbool & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbool mProperty_mValue ;


//--- Default constructor
  public: cPtr_boolAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolAsDefaultValue (const GGS_lbool & in_mValue,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_comparisonMultipleBindingExpressionAST (const class cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_multipleBindingComparisonAST readProperty_mOperator (void) const ;
  public: void setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonMultipleBindingExpressionAST init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                              const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonMultipleBindingExpressionAST class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                  const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                                  const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_comparisonMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//   enum multipleBindingComparisonAST
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingComparisonAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_multipleBindingComparisonAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_notEqual,
    enum_lower,
    enum_lowerOrEqual,
    enum_greater,
    enum_greaterOrEqual
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingComparisonAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingComparisonAST class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_multipleBindingComparisonAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonMultipleBindingExpressionAST_init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                        const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                        const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_multipleBindingComparisonAST & in_mOperator,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyTypeName (void) const ;
  public: void setProperty_mComputedPropertyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyName (void) const ;
  public: void setProperty_mComputedPropertyName (const GGS_lstring & inValue) ;

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_observablePropertyList & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedPropertyDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_lstring & inOperand3,
                                                                          const class GGS_observablePropertyList & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_computedPropertyDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList list
//
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_observablePropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_observablePropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_observablePropertyAST & in_mObservableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_observablePropertyList class_func_listWithValue (const class GGS_observablePropertyAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_observablePropertyList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_observablePropertyAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_observablePropertyList add_operation (const GGS_observablePropertyList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_observablePropertyAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_observablePropertyAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_observablePropertyAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_observablePropertyAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_observablePropertyAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_observablePropertyAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST getter_mObservablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_observablePropertyList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_observablePropertyList ;
 
} ; // End of GGS_observablePropertyList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_observablePropertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_observablePropertyList (const GGS_observablePropertyList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_observablePropertyList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedPropertyDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_observablePropertyList & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mComputedPropertyTypeName ;
  public: GGS_lstring mProperty_mComputedPropertyName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                               const GGS_lstring & in_mRootEntityName,
                                               const GGS_lstring & in_mComputedPropertyTypeName,
                                               const GGS_lstring & in_mComputedPropertyName,
                                               const GGS_observablePropertyList & in_mDependencyList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_doubleAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_doubleAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_doubleAsDefaultValue (const class cPtr_doubleAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ldouble readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_ldouble & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_doubleAsDefaultValue init_21_ (const class GGS_ldouble & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_doubleAsDefaultValue extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_doubleAsDefaultValue class_func_new (const class GGS_ldouble & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_doubleAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @doubleAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void doubleAsDefaultValue_init_21_ (const class GGS_ldouble & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ldouble mProperty_mValue ;


//--- Default constructor
  public: cPtr_doubleAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_doubleAsDefaultValue (const GGS_ldouble & in_mValue,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_entityDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_entityDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_entityDeclarationAST (const class cPtr_entityDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_lstring readProperty_mSuperEntityName (void) const ;

  public: class GGS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GGS_simpleStoredPropertyList readProperty_mSimpleStoredPropertyList (void) const ;

  public: class GGS_stringset readProperty_mSignatureList (void) const ;

  public: class GGS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GGS_lstringlist readProperty_mObsoleteEntityNames (void) const ;

  public: class GGS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GGS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GGS_lstringlist readProperty_mGraphicOptionArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityDeclarationAST init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_simpleStoredPropertyList & inOperand4,
                                                                                            const class GGS_stringset & inOperand5,
                                                                                            const class GGS_lstringlist & inOperand6,
                                                                                            const class GGS_lstringlist & inOperand7,
                                                                                            const class GGS_bool & inOperand8,
                                                                                            const class GGS_externSwiftDelegateList & inOperand9,
                                                                                            const class GGS_lstringlist & inOperand10,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                const class GGS_lstring & inOperand2,
                                                                const class GGS_bool & inOperand3,
                                                                const class GGS_simpleStoredPropertyList & inOperand4,
                                                                const class GGS_stringset & inOperand5,
                                                                const class GGS_lstringlist & inOperand6,
                                                                const class GGS_lstringlist & inOperand7,
                                                                const class GGS_bool & inOperand8,
                                                                const class GGS_externSwiftDelegateList & inOperand9,
                                                                const class GGS_lstringlist & inOperand10,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_entityDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftDelegateList list
//
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftDelegateList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_externSwiftDelegateList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mExternSwiftDelegateName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externSwiftDelegateList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externSwiftDelegateList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externSwiftDelegateList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_externSwiftDelegateList class_func_listWithValue (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_externSwiftDelegateList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externSwiftDelegateList add_operation (const GGS_externSwiftDelegateList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mExternSwiftDelegateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftDelegateList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftDelegateList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftDelegateList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_externSwiftDelegateList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externSwiftDelegateList ;
 
} ; // End of GGS_externSwiftDelegateList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftDelegateList : public cGenericAbstractEnumerator {
  public: cEnumerator_externSwiftDelegateList (const GGS_externSwiftDelegateList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftDelegateList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleStoredPropertyList list
//
//--------------------------------------------------------------------------------------------------

class GGS_simpleStoredPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_simpleStoredPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mPropertyTypeName,
                                                 const class GGS_lstring & in_mPropertyName,
                                                 const class GGS_abstractDefaultValue & in_mDefaultValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_simpleStoredPropertyList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_simpleStoredPropertyList extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_simpleStoredPropertyList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_simpleStoredPropertyList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_abstractDefaultValue & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_simpleStoredPropertyList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_abstractDefaultValue & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_simpleStoredPropertyList add_operation (const GGS_simpleStoredPropertyList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_abstractDefaultValue constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_abstractDefaultValue constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_abstractDefaultValue & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_abstractDefaultValue & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_abstractDefaultValue & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_abstractDefaultValue & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_abstractDefaultValue & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mDefaultValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_simpleStoredPropertyList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_simpleStoredPropertyList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_simpleStoredPropertyList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_simpleStoredPropertyList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_simpleStoredPropertyList ;
 
} ; // End of GGS_simpleStoredPropertyList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_simpleStoredPropertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_simpleStoredPropertyList (const GGS_simpleStoredPropertyList & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_simpleStoredPropertyList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS_simpleStoredPropertyList & inOperand4,
                                                                                      const class GGS_stringset & inOperand5,
                                                                                      const class GGS_lstringlist & inOperand6,
                                                                                      const class GGS_lstringlist & inOperand7,
                                                                                      const class GGS_bool & inOperand8,
                                                                                      const class GGS_externSwiftDelegateList & inOperand9,
                                                                                      const class GGS_lstringlist & inOperand10,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_lstring mProperty_mSuperEntityName ;
  public: GGS_bool mProperty_mHandlingOpposite ;
  public: GGS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public: GGS_stringset mProperty_mSignatureList ;
  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: GGS_lstringlist mProperty_mObsoleteEntityNames ;
  public: GGS_bool mProperty_mIsGraphicEntity ;
  public: GGS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GGS_lstringlist mProperty_mGraphicOptionArray ;


//--- Default constructor
  public: cPtr_entityDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_entityDeclarationAST (const GGS_lstring & in_mClassName,
                                     const GGS_bool & in_mIsAbstract,
                                     const GGS_lstring & in_mSuperEntityName,
                                     const GGS_bool & in_mHandlingOpposite,
                                     const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                     const GGS_stringset & in_mSignatureList,
                                     const GGS_lstringlist & in_mActionDeclarationList,
                                     const GGS_lstringlist & in_mObsoleteEntityNames,
                                     const GGS_bool & in_mIsGraphicEntity,
                                     const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                     const GGS_lstringlist & in_mGraphicOptionArray,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mEnumConstantNameList (void) const ;

  public: class GGS_bool readProperty_mCaseIterable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDeclarationAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstringlist & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstringlist & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumerationDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumerationDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumerationDeclarationAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstringlist & inOperand1,
                                                           const class GGS_bool & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstringlist mProperty_mEnumConstantNameList ;
  public: GGS_bool mProperty_mCaseIterable ;


//--- Default constructor
  public: cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_lstringlist & in_mEnumConstantNameList,
                                          const GGS_bool & in_mCaseIterable,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_identifierAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_identifierAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_identifierAsDefaultValue (const class cPtr_identifierAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_identifierAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_identifierAsDefaultValue extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_identifierAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_identifierAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @identifierAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void identifierAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mValue ;


//--- Default constructor
  public: cPtr_identifierAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_identifierAsDefaultValue (const GGS_lstring & in_mValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_integerAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_integerAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_integerAsDefaultValue (const class cPtr_integerAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_luint & inValue) ;

  public: class GGS_bool readProperty_mNegative (void) const ;
  public: void setProperty_mNegative (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerAsDefaultValue init_21__21_ (const class GGS_luint & inOperand0,
                                                         const class GGS_bool & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerAsDefaultValue extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerAsDefaultValue class_func_new (const class GGS_luint & inOperand0,
                                                                 const class GGS_bool & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_integerAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerAsDefaultValue_init_21__21_ (const class GGS_luint & inOperand0,
                                                   const class GGS_bool & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;
  public: GGS_bool mProperty_mNegative ;


//--- Default constructor
  public: cPtr_integerAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerAsDefaultValue (const GGS_luint & in_mValue,
                                      const GGS_bool & in_mNegative,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_literalIntMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalIntMultipleBindingExpressionAST (const class cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalIntMultipleBindingExpressionAST init_21_ (const class GGS_luint & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalIntMultipleBindingExpressionAST class_func_new (const class GGS_luint & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_literalIntMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalIntMultipleBindingExpressionAST_init_21_ (const class GGS_luint & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GGS_luint & in_mValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_negateBooleanMultipleBindingExpressionAST (const class cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mBinding (void) const ;
  public: void setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_negateBooleanMultipleBindingExpressionAST init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_negateBooleanMultipleBindingExpressionAST class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_negateBooleanMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void negateBooleanMultipleBindingExpressionAST_init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mBinding ;


//--- Default constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyInMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyInMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_observablePropertyInMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_observablePropertyInMultipleBindingExpressionAST (const class cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_observablePropertyAST readProperty_mProperty (void) const ;
  public: void setProperty_mProperty (const GGS_observablePropertyAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyInMultipleBindingExpressionAST init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyInMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyInMultipleBindingExpressionAST class_func_new (const class GGS_observablePropertyAST & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_observablePropertyInMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//   enum observablePropertyAST
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rootProperty,
    enum_rootPropertyWithOption,
    enum_rootPropertyRelationship,
    enum_rootPropertyNone,
    enum_selfWithoutProperty,
    enum_selfProperty,
    enum_selfPropertyWithOption,
    enum_selfPropertyArray,
    enum_selfPropertyObject,
    enum_selfPropertyNone,
    enum_prefsProperty,
    enum_prefsPropertyWithOption,
    enum_selfControllerProperty,
    enum_selfControllerSecondaryProperty,
    enum_selfControllerAllProperties,
    enum_selfControllerOneProperty,
    enum_signatureProperty,
    enum_versionProperty,
    enum_versionShouldChangeProperty,
    enum_superProperty,
    enum_superPropertyWithDefaultValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                               class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyRelationship (class GGS_lstring & out_relationshipName,
                                                                                 class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyNone (class GGS_lstring & out_relationshipName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfWithoutProperty (class GGS_location & out_issueLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                               class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyArray (class GGS_lstring & out_propertyName,
                                                                          class GGS_lstring & out_elementPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyObject (class GGS_lstring & out_propertyName,
                                                                           class GGS_lstring & out_elementPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyNone (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_prefsProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_prefsPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                                class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerProperty (class GGS_lstring & out_controllerName,
                                                                               class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerSecondaryProperty (class GGS_lstring & out_controllerName,
                                                                                        class GGS_lstring & out_propertyName,
                                                                                        class GGS_lstring & out_secondaryPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerAllProperties (class GGS_lstring & out_controllerName,
                                                                                    class GGS_lstring & out_propertyName,
                                                                                    class GGS_lstring & out_secondaryPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerOneProperty (class GGS_lstring & out_controllerName,
                                                                                  class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_signatureProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_versionProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_versionShouldChangeProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_superProperty (class GGS_lstring & out_superEntityName,
                                                                      class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_superPropertyWithDefaultValue (class GGS_lstring & out_superEntityName,
                                                                                      class GGS_lstring & out_propertyName,
                                                                                      class GGS_abstractDefaultValue & out_defaultValue) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST class_func_prefsProperty (const class GGS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_prefsPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootProperty (const class GGS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyNone (const class GGS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyRelationship (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerAllProperties (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_lstring & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerOneProperty (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerProperty (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerSecondaryProperty (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_lstring & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfProperty (const class GGS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyArray (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyNone (const class GGS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyObject (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfWithoutProperty (const class GGS_location & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_signatureProperty (const class GGS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_superProperty (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_superPropertyWithDefaultValue (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_abstractDefaultValue & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_versionProperty (const class GGS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_versionShouldChangeProperty (const class GGS_location & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractPrefsProperty (class GGS_lstring & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractPrefsPropertyWithOption (class GGS_lstring & outArgument0,
                                                                       class GGS_lstring & outArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRootProperty (class GGS_lstring & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRootPropertyNone (class GGS_lstring & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRootPropertyRelationship (class GGS_lstring & outArgument0,
                                                                        class GGS_lstring & outArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRootPropertyWithOption (class GGS_lstring & outArgument0,
                                                                      class GGS_lstring & outArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfControllerAllProperties (class GGS_lstring & outArgument0,
                                                                           class GGS_lstring & outArgument1,
                                                                           class GGS_lstring & outArgument2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfControllerOneProperty (class GGS_lstring & outArgument0,
                                                                         class GGS_lstring & outArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfControllerProperty (class GGS_lstring & outArgument0,
                                                                      class GGS_lstring & outArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfControllerSecondaryProperty (class GGS_lstring & outArgument0,
                                                                               class GGS_lstring & outArgument1,
                                                                               class GGS_lstring & outArgument2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfProperty (class GGS_lstring & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfPropertyArray (class GGS_lstring & outArgument0,
                                                                 class GGS_lstring & outArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfPropertyNone (class GGS_lstring & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfPropertyObject (class GGS_lstring & outArgument0,
                                                                  class GGS_lstring & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfPropertyWithOption (class GGS_lstring & outArgument0,
                                                                      class GGS_lstring & outArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelfWithoutProperty (class GGS_location & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSignatureProperty (class GGS_location & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSuperProperty (class GGS_lstring & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSuperPropertyWithDefaultValue (class GGS_lstring & outArgument0,
                                                                             class GGS_lstring & outArgument1,
                                                                             class GGS_abstractDefaultValue & outArgument2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractVersionProperty (class GGS_location & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractVersionShouldChangeProperty (class GGS_location & outArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_prefsProperty_3F_ getter_getPrefsProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ getter_getPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_rootProperty_3F_ getter_getRootProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ getter_getRootPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ getter_getRootPropertyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ getter_getRootPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ getter_getSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ getter_getSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ getter_getSelfControllerProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ getter_getSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfProperty_3F_ getter_getSelfProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ getter_getSelfPropertyArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ getter_getSelfPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ getter_getSelfPropertyObject (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ getter_getSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ getter_getSelfWithoutProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_signatureProperty_3F_ getter_getSignatureProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_superProperty_3F_ getter_getSuperProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ getter_getSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_versionProperty_3F_ getter_getVersionProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ getter_getVersionShouldChangeProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_observablePropertyAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyInMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_observablePropertyInMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void observablePropertyInMultipleBindingExpressionAST_init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_observablePropertyAST mProperty_mProperty ;


//--- Default constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (const GGS_observablePropertyAST & in_mProperty,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orBooleanMultipleBindingExpressionAST (const class cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orBooleanMultipleBindingExpressionAST class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                 const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orBooleanMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                      const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_outletClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outletClassDeclarationAST (const class cPtr_outletClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mUserDefined (void) const ;
  public: void setProperty_mUserDefined (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;
  public: void setProperty_mSuperClassName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;
  public: void setProperty_mHasRunAction (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;
  public: void setProperty_mHasEnabled (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;
  public: void setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;
  public: void setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;
  public: void setProperty_mHasHidden (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassDeclarationAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_lstring & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     const class GGS_bool & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS_bool & inOperand6,
                                                                                     const class GGS_bool & inOperand7,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_bool & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     const class GGS_bool & inOperand6,
                                                                     const class GGS_bool & inOperand7,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outletClassDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               const class GGS_bool & inOperand4,
                                                                               const class GGS_bool & inOperand5,
                                                                               const class GGS_bool & inOperand6,
                                                                               const class GGS_bool & inOperand7,
                                                                               Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;


//--- Default constructor
  public: cPtr_outletClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outletClassDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_bool & in_mUserDefined,
                                          const GGS_lstring & in_mSuperClassName,
                                          const GGS_bool & in_mHasRunAction,
                                          const GGS_bool & in_mHasEnabled,
                                          const GGS_bool & in_mHandlesTableValueBinding,
                                          const GGS_bool & in_mHandlesGraphicControllerBinding,
                                          const GGS_bool & in_mHasHidden,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefsAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_prefsAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefsAsDefaultValue (const class cPtr_prefsAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPrefPropertyName (void) const ;
  public: void setProperty_mPrefPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefsAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsAsDefaultValue extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prefsAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GGS_lstring arg_inNode,
           class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPrefPropertyName ;


//--- Default constructor
  public: cPtr_prefsAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefsAsDefaultValue (const GGS_lstring & in_mPrefPropertyName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_proxyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_proxyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_proxyDeclarationAST (const class cPtr_proxyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_lstring readProperty_mProxyTypeName (void) const ;
  public: void setProperty_mProxyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mProxyName (void) const ;
  public: void setProperty_mProxyName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_proxyDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_proxyKind & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_lstring & inOperand3,
                                                                       const class GGS_lstring & inOperand4,
                                                                       const class GGS_lstring & inOperand5,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_proxyDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               const class GGS_lstring & inOperand3,
                                                               const class GGS_lstring & inOperand4,
                                                               const class GGS_lstring & inOperand5,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_proxyDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum proxyKind
//--------------------------------------------------------------------------------------------------

class GGS_proxyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_proxyKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_propertyProxy,
    enum_toManyProxy
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_proxyKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyKind class_func_propertyProxy (LOCATION_ARGS) ;

  public: static class GGS_proxyKind class_func_toManyProxy (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_proxyKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @proxyDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void proxyDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_lstring & inOperand2,
                                                                 const class GGS_lstring & inOperand3,
                                                                 const class GGS_lstring & inOperand4,
                                                                 const class GGS_lstring & inOperand5,
                                                                 Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_lstring mProperty_mProxyTypeName ;
  public: GGS_lstring mProperty_mProxyName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_lstring mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_proxyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_proxyDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_proxyKind & in_mProxyKind,
                                    const GGS_lstring & in_mProxyTypeName,
                                    const GGS_lstring & in_mProxyName,
                                    const GGS_lstring & in_mToOneRelationshipName,
                                    const GGS_lstring & in_mPropertyName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectionControllerDeclarationAST (const class cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSelectionControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerPropertyName (void) const ;

  public: class GGS_lstring readProperty_mSelectionEntityName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_lstring & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_lstring & inOperand3,
                                                                             const class GGS_lstring & inOperand4,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selectionControllerDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectionControllerDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_lstring & inOperand4,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSelectionControllerName ;
  public: GGS_lstring mProperty_mModelControllerName ;
  public: GGS_lstring mProperty_mModelControllerPropertyName ;
  public: GGS_lstring mProperty_mSelectionEntityName ;


//--- Default constructor
  public: cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectionControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_lstring & in_mSelectionControllerName,
                                                  const GGS_lstring & in_mModelControllerName,
                                                  const GGS_lstring & in_mModelControllerPropertyName,
                                                  const GGS_lstring & in_mSelectionEntityName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_stringAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_stringAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_stringAsDefaultValue (const class cPtr_stringAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringAsDefaultValue extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_stringAsDefaultValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringAsDefaultValue class
//
//--------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mValue ;


//--- Default constructor
  public: cPtr_stringAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringAsDefaultValue (const GGS_lstring & in_mValue,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyRelationshipAST (const class cPtr_toManyRelationshipAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GGS_lstring readProperty_mToManyRelationshipName (void) const ;

  public: class GGS_toManyRelationshipOptionAST readProperty_mOption (void) const ;

  public: class GGS_bool readProperty_mCustomStore (void) const ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectAccess (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectRead (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_bool & inOperand5,
                                                                                 const class GGS_bool & inOperand6,
                                                                                 const class GGS_bool & inOperand7,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipAST class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_lstring & inOperand2,
                                                                 const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                 const class GGS_bool & inOperand4,
                                                                 const class GGS_bool & inOperand5,
                                                                 const class GGS_bool & inOperand6,
                                                                 const class GGS_bool & inOperand7,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_toManyRelationshipAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//--------------------------------------------------------------------------------------------------
//   enum toManyRelationshipOptionAST
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_hasOpposite,
    enum_hasDependance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasOpposite (class GGS_lstring & out_oppositeName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasDependance (class GGS_lstring & out_masterPropertyName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionAST class_func_hasDependance (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_hasOpposite (const class GGS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractHasDependance (class GGS_lstring & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractHasOpposite (class GGS_lstring & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ getter_getHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ getter_getHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_toManyRelationshipOptionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyRelationshipAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                           const class GGS_bool & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           const class GGS_bool & inOperand6,
                                                                           const class GGS_bool & inOperand7,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDestinationEntityName ;
  public: GGS_lstring mProperty_mToManyRelationshipName ;
  public: GGS_toManyRelationshipOptionAST mProperty_mOption ;
  public: GGS_bool mProperty_mCustomStore ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mGenerateDirectAccess ;
  public: GGS_bool mProperty_mGenerateDirectRead ;


//--- Default constructor
  public: cPtr_toManyRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyRelationshipAST (const GGS_lstring & in_mClassName,
                                      const GGS_lstring & in_mDestinationEntityName,
                                      const GGS_lstring & in_mToManyRelationshipName,
                                      const GGS_toManyRelationshipOptionAST & in_mOption,
                                      const GGS_bool & in_mCustomStore,
                                      const GGS_bool & in_mUsedForSignature,
                                      const GGS_bool & in_mGenerateDirectAccess,
                                      const GGS_bool & in_mGenerateDirectRead,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_toOneRelationshipAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_toOneRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toOneRelationshipAST (const class cPtr_toOneRelationshipAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDestinationEntityName (void) const ;
  public: void setProperty_mDestinationEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_toOneOppositeRelationship readProperty_mOpposite (void) const ;
  public: void setProperty_mOpposite (const GGS_toOneOppositeRelationship & inValue) ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;
  public: void setProperty_mUsedForSignature (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mWeak (void) const ;
  public: void setProperty_mWeak (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOneRelationshipAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_toOneOppositeRelationship & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_bool & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneRelationshipAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneRelationshipAST class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_lstring & inOperand2,
                                                                const class GGS_toOneOppositeRelationship & inOperand3,
                                                                const class GGS_bool & inOperand4,
                                                                const class GGS_bool & inOperand5,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_toOneRelationshipAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//--------------------------------------------------------------------------------------------------
//   enum toOneOppositeRelationship
//--------------------------------------------------------------------------------------------------

class GGS_toOneOppositeRelationship : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toOneOppositeRelationship (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_oppositeIsToOne,
    enum_oppositeIsToMany
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_oppositeIsToOne (class GGS_lstring & out_oppositeRelationshipName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_oppositeIsToMany (class GGS_lstring & out_oppositeRelationshipName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneOppositeRelationship extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toOneOppositeRelationship class_func_none (LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToMany (const class GGS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToOne (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractOppositeIsToMany (class GGS_lstring & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOppositeIsToOne (class GGS_lstring & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ getter_getOppositeIsToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ getter_getOppositeIsToOne (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_toOneOppositeRelationship class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOneRelationshipAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toOneRelationshipAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_toOneOppositeRelationship & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  const class GGS_bool & inOperand5,
                                                                  Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDestinationEntityName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mWeak ;


//--- Default constructor
  public: cPtr_toOneRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toOneRelationshipAST (const GGS_lstring & in_mClassName,
                                     const GGS_lstring & in_mDestinationEntityName,
                                     const GGS_lstring & in_mToOneRelationshipName,
                                     const GGS_toOneOppositeRelationship & in_mOpposite,
                                     const GGS_bool & in_mUsedForSignature,
                                     const GGS_bool & in_mWeak,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_transientClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientClassDeclarationAST (const class cPtr_transientClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsClass (void) const ;
  public: void setProperty_mIsClass (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientClassDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientClassDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientClassDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_transientClassDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientClassDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientClassDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsClass ;


//--- Default constructor
  public: cPtr_transientClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_bool & in_mIsClass,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_transientDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientDeclarationAST (const class cPtr_transientDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientTypeName (void) const ;
  public: void setProperty_mTransientTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientName (void) const ;
  public: void setProperty_mTransientName (const GGS_lstring & inValue) ;

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

  public: class GGS_bool readProperty_mIsOverriding (void) const ;
  public: void setProperty_mIsOverriding (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_observablePropertyList & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_lstring & inOperand3,
                                                                   const class GGS_observablePropertyList & inOperand4,
                                                                   const class GGS_bool & inOperand5,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_transientDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS_observablePropertyList & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mTransientTypeName ;
  public: GGS_lstring mProperty_mTransientName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;
  public: GGS_bool mProperty_mIsOverriding ;


//--- Default constructor
  public: cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                        const GGS_lstring & in_mRootEntityName,
                                        const GGS_lstring & in_mTransientTypeName,
                                        const GGS_lstring & in_mTransientName,
                                        const GGS_observablePropertyList & in_mDependencyList,
                                        const GGS_bool & in_mIsOverriding,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorBooleanMultipleBindingExpressionAST (const class cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorBooleanMultipleBindingExpressionAST class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                  const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_xorBooleanMultipleBindingExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xorBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum astAutoLayoutViewInstructionParameterValue
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_string,
    enum_menuItem,
    enum_enumFunc,
    enum_viewFunc,
    enum_entity
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_string (class GGS_string & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_menuItem (class GGS_string & out_title,
                                                                 class GGS_runActionDescriptor & out_run,
                                                                 class GGS_multipleBindingDescriptor & out_enabled) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumFunc (class GGS_lstring & out_enumTypeName,
                                                                 class GGS_lstring & out_enumFuncName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_viewFunc (class GGS_astAbstractViewInstructionDeclaration & out_instruction) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entity (class GGS_lstring & out_entityName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_entity (const class GGS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_enumFunc (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_menuItem (const class GGS_string & inOperand0,
                                                                                           const class GGS_runActionDescriptor & inOperand1,
                                                                                           const class GGS_multipleBindingDescriptor & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_string (const class GGS_string & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_astAutoLayoutViewInstructionParameterValue class_func_viewFunc (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractEntity (class GGS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumFunc (class GGS_lstring & outArgument0,
                                                        class GGS_lstring & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractMenuItem (class GGS_string & outArgument0,
                                                        class GGS_runActionDescriptor & outArgument1,
                                                        class GGS_multipleBindingDescriptor & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractString (class GGS_string & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractViewFunc (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ getter_getEnumFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ getter_getMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ getter_getViewFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumFunc (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isViewFunc (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astAutoLayoutViewInstructionParameterValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutClassParameterType
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_typeString,
    enum_typeStringArray,
    enum_typeInt,
    enum_typeBool,
    enum_typeView,
    enum_menuItem,
    enum_entity,
    enum_typeEnum
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_typeEnum (class GGS_lstring & out_name) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterType extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterType class_func_entity (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_menuItem (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeBool (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeEnum (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeInt (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeString (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeStringArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutClassParameterType class_func_typeView (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractTypeEnum (class GGS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ getter_getTypeEnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeEnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeStringArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTypeView (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autoLayoutClassParameterType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;

//--------------------------------------------------------------------------------------------------
//   enum mainXibElement
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_mainXibElement (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_text,
    enum_outlet
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_text (class GGS_lstring & out_text) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outlet (class GGS_lstring & out_outletType,
                                                               class GGS_lstring & out_outletName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibElement extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibElement class_func_outlet (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_mainXibElement class_func_text (const class GGS_lstring & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractOutlet (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractText (class GGS_lstring & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement_2E_outlet_3F_ getter_getOutlet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement_2E_text_3F_ getter_getText (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_mainXibElement class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ;

//--------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_preferencesName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GGS_lstringlist & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GGS_stringset & ioArgument0,
                                                                   GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GGS_lstring inArgument0,
                                                                               GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GGS_lstring inArgument0,
                                                                      GGS_autoLayoutClassParameterList & outArgument1,
                                                                      GGS_lstring & outArgument2,
                                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public: virtual void nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GGS_bindingOptionList & outArgument0,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                 Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                            GGS_astComputedViewInstruction & outArgument1,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GGS_lstring inArgument0,
                                                      const GGS_lstring inArgument1,
                                                      GGS_arrayControllerBindingListAST & ioArgument2,
                                                      GGS_astDeclarationStruct & ioArgument3,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GGS_abstractDefaultValue & outArgument0,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GGS_externSwiftDelegateList & ioArgument0,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GGS_externSwiftFunctionList & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GGS_mainXibDescriptorList & ioArgument0,
                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public: virtual void nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GGS_observablePropertyAST & outArgument0,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GGS_tableValueBinding & outArgument0,
                                              GGS_runActionDescriptor & outArgument1,
                                              GGS_multipleBindingDescriptor & outArgument2,
                                              GGS_multipleBindingDescriptor & outArgument3,
                                              GGS_graphicController & outArgument4,
                                              GGS_regularBindingList & outArgument5,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                           Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GGS_outletDeclarationList & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GGS_lstring inArgument0,
                                                            GGS_simpleStoredPropertyList & ioArgument1,
                                                            GGS_stringset & ioArgument2,
                                                            GGS_astDeclarationStruct & ioArgument3,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GGS_astViewDeclarationList & ioArgument0,
                                                         Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_astDeclarationStruct & ioArgument0,
                                            GGS_location & outArgument1,
                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_astDeclarationStruct & ioArgument0,
                                                  GGS_location & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_astDeclarationStruct & ioArgument0,
                                                    GGS_location & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GGS_lstring inArgument0,
                                                   GGS_stringset & ioArgument1,
                                                   GGS_astDeclarationStruct & ioArgument2,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GGS_lstring inArgument0,
                                                  GGS_astDeclarationStruct & ioArgument1,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GGS_lstring inArgument0,
                                                     const GGS_lstring inArgument1,
                                                     GGS_astDeclarationStruct & ioArgument2,
                                                     Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GGS_stringset & ioArgument0,
                                                                GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (const GGS_bool inArgument0,
                                                        GGS_stringset & ioArgument1,
                                                        GGS_astNewStackViewDeclarationList & ioArgument2,
                                                        GGS_astViewInstructionList & ioArgument3,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public: virtual void nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_xcode_5F_project_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_xcode_5F_project_ (GGS_lstring & ioArgument0,
                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

  public: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletClassName,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GGS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecificationList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassBindingSpecificationList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassBindingSpecificationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_lstring & inOperand1,
                                                                                                 const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                 const class GGS_controllerBindingOptionList & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                     const class GGS_controllerBindingOptionList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewClassBindingSpecificationList add_operation (const GGS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                               class GGS_controllerBindingOptionList constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GGS_controllerBindingOptionList constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GGS_controllerBindingOptionList & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GGS_controllerBindingOptionList & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GGS_controllerBindingOptionList & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GGS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GGS_controllerBindingOptionList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GGS_controllerBindingOptionList & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutViewClassBindingSpecificationList ;
 
} ; // End of GGS_autoLayoutViewClassBindingSpecificationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject,
                                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_bindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_bindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionName,
                                                 const class GGS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingOptionList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingOptionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_bindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_bindingOptionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_abstractDefaultValue & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bindingOptionList add_operation (const GGS_bindingOptionList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_abstractDefaultValue constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_abstractDefaultValue constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_abstractDefaultValue & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_abstractDefaultValue & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_abstractDefaultValue & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_abstractDefaultValue & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_abstractDefaultValue & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mOptionValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_bindingOptionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_bindingOptionList ;
 
} ; // End of GGS_bindingOptionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_bindingOptionList : public cGenericAbstractEnumerator {
  public: cEnumerator_bindingOptionList (const GGS_bindingOptionList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_controllerBindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionName,
                                                 const class GGS_lstring & in_mOptionTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_controllerBindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_controllerBindingOptionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_controllerBindingOptionList add_operation (const GGS_controllerBindingOptionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_controllerBindingOptionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controllerBindingOptionList ;
 
} ; // End of GGS_controllerBindingOptionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controllerBindingOptionList : public cGenericAbstractEnumerator {
  public: cEnumerator_controllerBindingOptionList (const GGS_controllerBindingOptionList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_declarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_declarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_declarationListAST class_func_listWithValue (const class GGS_abstractDeclarationAST & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_declarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_declarationListAST add_operation (const GGS_declarationListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractDeclarationAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractDeclarationAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractDeclarationAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractDeclarationAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyDeclarationAtIndex (class GGS_abstractDeclarationAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractDeclarationAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractDeclarationAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractDeclarationAST getter_mPropertyDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_declarationListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_declarationListAST ;
 
} ; // End of GGS_declarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_declarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_abstractDeclarationAST current_mPropertyDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_enumerationFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mEnumName,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS__32_lstringlist & in_mAssociationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationFunctionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_enumerationFunctionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__32_lstringlist & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_enumerationFunctionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS__32_lstringlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_enumerationFunctionListAST add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS__32_lstringlist constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS__32_lstringlist constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS__32_lstringlist & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS__32_lstringlist & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS__32_lstringlist & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationListAtIndex (class GGS__32_lstringlist constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS__32_lstringlist & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS__32_lstringlist & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_mAssociationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mEnumNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumerationFunctionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_enumerationFunctionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_enumerationFunctionListAST ;
 
} ; // End of GGS_enumerationFunctionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_enumerationFunctionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftFunctionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftFunctionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_externSwiftFunctionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mExternSwiftFunctionName,
                                                 const class GGS_lstring & in_mCallerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externSwiftFunctionList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externSwiftFunctionList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externSwiftFunctionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_externSwiftFunctionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_externSwiftFunctionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externSwiftFunctionList add_operation (const GGS_externSwiftFunctionList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCallerNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mCallerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mExternSwiftFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftFunctionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftFunctionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externSwiftFunctionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_externSwiftFunctionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externSwiftFunctionList ;
 
} ; // End of GGS_externSwiftFunctionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftFunctionList : public cGenericAbstractEnumerator {
  public: cEnumerator_externSwiftFunctionList (const GGS_externSwiftFunctionList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftFunctionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibDescriptorList list
//
//--------------------------------------------------------------------------------------------------

class GGS_mainXibDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_mainXibDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_mainXibLineDescriptorList & in_mLine
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibDescriptorList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibDescriptorList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibDescriptorList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_mainXibDescriptorList class_func_listWithValue (const class GGS_mainXibLineDescriptorList & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_mainXibDescriptorList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_mainXibLineDescriptorList & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_mainXibDescriptorList add_operation (const GGS_mainXibDescriptorList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_mainXibLineDescriptorList constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_mainXibLineDescriptorList constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_mainXibLineDescriptorList & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_mainXibLineDescriptorList & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_mainXibLineDescriptorList & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLineAtIndex (class GGS_mainXibLineDescriptorList constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_mainXibLineDescriptorList & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_mainXibLineDescriptorList & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_mainXibLineDescriptorList getter_mLineAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_mainXibDescriptorList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_mainXibDescriptorList ;
 
} ; // End of GGS_mainXibDescriptorList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_mainXibDescriptorList : public cGenericAbstractEnumerator {
  public: cEnumerator_mainXibDescriptorList (const GGS_mainXibDescriptorList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibDescriptorList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList list
//
//--------------------------------------------------------------------------------------------------

class GGS_mainXibLineDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_mainXibLineDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_mainXibElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibLineDescriptorList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibLineDescriptorList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibLineDescriptorList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_mainXibLineDescriptorList class_func_listWithValue (const class GGS_mainXibElement & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_mainXibLineDescriptorList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_mainXibElement & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_mainXibLineDescriptorList add_operation (const GGS_mainXibLineDescriptorList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_mainXibElement constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_mainXibElement constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_mainXibElement & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_mainXibElement & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_mainXibElement & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_mainXibElement constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_mainXibElement & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_mainXibElement & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibLineDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibLineDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibLineDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_mainXibLineDescriptorList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_mainXibLineDescriptorList ;
 
} ; // End of GGS_mainXibLineDescriptorList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_mainXibLineDescriptorList : public cGenericAbstractEnumerator {
  public: cEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibLineDescriptorList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletClassName,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GGS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_outletClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                         const class GGS_controllerBindingOptionList & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_outletClassBindingSpecificationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                     const class GGS_controllerBindingOptionList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletClassBindingSpecificationList add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                               class GGS_controllerBindingOptionList constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GGS_controllerBindingOptionList constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GGS_controllerBindingOptionList & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GGS_controllerBindingOptionList & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GGS_controllerBindingOptionList & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GGS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GGS_controllerBindingOptionList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GGS_controllerBindingOptionList & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_outletClassBindingSpecificationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_outletClassBindingSpecificationList ;
 
} ; // End of GGS_outletClassBindingSpecificationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationModelList list
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mModelTypeName,
                                                 const class GGS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationModelList init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationModelList extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationModelList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_outletClassBindingSpecificationModelList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_outletClassBindingSpecificationModelList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletClassBindingSpecificationModelList add_operation (const GGS_outletClassBindingSpecificationModelList & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GGS_bool constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_outletClassBindingSpecificationModelList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_outletClassBindingSpecificationModelList ;
 
} ; // End of GGS_outletClassBindingSpecificationModelList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefDeclaration struct
//
//--------------------------------------------------------------------------------------------------

class GGS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: inline GGS_outletDeclarationList readProperty_mOutletDeclarationList (void) const {
    return mProperty_mOutletDeclarationList ;
  }

  public: GGS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public: inline GGS_simpleStoredPropertyList readProperty_mSimpleStoredAttributeList (void) const {
    return mProperty_mSimpleStoredAttributeList ;
  }

  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: inline GGS_lstringlist readProperty_mActionDeclarationList (void) const {
    return mProperty_mActionDeclarationList ;
  }

  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: inline GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const {
    return mProperty_mExternSwiftFunctionList ;
  }

  public: GGS_stringset mProperty_mSignatureList ;
  public: inline GGS_stringset readProperty_mSignatureList (void) const {
    return mProperty_mSignatureList ;
  }

  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GGS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: inline GGS_astViewDeclarationList readProperty_mViewDeclarationList (void) const {
    return mProperty_mViewDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_prefDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletDeclarationList (const GGS_outletDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletDeclarationList = inValue ;
  }

  public: inline void setter_setMSimpleStoredAttributeList (const GGS_simpleStoredPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleStoredAttributeList = inValue ;
  }

  public: inline void setter_setMActionDeclarationList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionDeclarationList = inValue ;
  }

  public: inline void setter_setMExternSwiftFunctionList (const GGS_externSwiftFunctionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionList = inValue ;
  }

  public: inline void setter_setMSignatureList (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureList = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GGS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMViewDeclarationList (const GGS_astViewDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewDeclarationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_prefDeclaration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prefDeclaration (const GGS_outletDeclarationList & in_mOutletDeclarationList,
                               const GGS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                               const GGS_lstringlist & in_mActionDeclarationList,
                               const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                               const GGS_stringset & in_mSignatureList,
                               const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                               const GGS_astViewDeclarationList & in_mViewDeclarationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefDeclaration init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefDeclaration extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefDeclaration class_func_new (Compiler * inCompiler
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
 
} ; // End of GGS_prefDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astDeclarationStruct struct
//
//--------------------------------------------------------------------------------------------------

class GGS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationListAST mProperty_mUnifiedDeclarationList ;
  public: inline GGS_declarationListAST readProperty_mUnifiedDeclarationList (void) const {
    return mProperty_mUnifiedDeclarationList ;
  }

  public: GGS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;
  public: inline GGS_outletClassBindingSpecificationList readProperty_mBindingSpecificationListMap (void) const {
    return mProperty_mBindingSpecificationListMap ;
  }

  public: GGS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;
  public: inline GGS_autoLayoutViewClassBindingSpecificationList readProperty_mAutoLayoutBindingSpecificationList (void) const {
    return mProperty_mAutoLayoutBindingSpecificationList ;
  }

  public: GGS_prefDeclaration mProperty_mPreferences ;
  public: inline GGS_prefDeclaration readProperty_mPreferences (void) const {
    return mProperty_mPreferences ;
  }

  public: GGS_lstring mProperty_mXcodeProject ;
  public: inline GGS_lstring readProperty_mXcodeProject (void) const {
    return mProperty_mXcodeProject ;
  }

  public: GGS_lstringlist mProperty_mGraphvizList ;
  public: inline GGS_lstringlist readProperty_mGraphvizList (void) const {
    return mProperty_mGraphvizList ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutVStackFunctionMap (void) const {
    return mProperty_mAutoLayoutVStackFunctionMap ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutHStackFunctionMap (void) const {
    return mProperty_mAutoLayoutHStackFunctionMap ;
  }

  public: GGS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;
  public: inline GGS_enumerationFunctionListAST readProperty_mEnumerationFunctionListAST (void) const {
    return mProperty_mEnumerationFunctionListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astDeclarationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUnifiedDeclarationList (const GGS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedDeclarationList = inValue ;
  }

  public: inline void setter_setMBindingSpecificationListMap (const GGS_outletClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationListMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationList = inValue ;
  }

  public: inline void setter_setMPreferences (const GGS_prefDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreferences = inValue ;
  }

  public: inline void setter_setMXcodeProject (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXcodeProject = inValue ;
  }

  public: inline void setter_setMGraphvizList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphvizList = inValue ;
  }

  public: inline void setter_setMAutoLayoutVStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutVStackFunctionMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutHStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutHStackFunctionMap = inValue ;
  }

  public: inline void setter_setMEnumerationFunctionListAST (const GGS_enumerationFunctionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationFunctionListAST = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_astDeclarationStruct (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astDeclarationStruct (const GGS_declarationListAST & in_mUnifiedDeclarationList,
                                    const GGS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                    const GGS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                    const GGS_prefDeclaration & in_mPreferences,
                                    const GGS_lstring & in_mXcodeProject,
                                    const GGS_lstringlist & in_mGraphvizList,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                    const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDeclarationStruct init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDeclarationStruct extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDeclarationStruct class_func_new (Compiler * inCompiler
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
 
} ; // End of GGS_astDeclarationStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_mainXibLineDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mainXibElement mProperty_mElement ;
  public: inline GGS_mainXibElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibLineDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_mainXibElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_mainXibLineDescriptorList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibElement & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibLineDescriptorList_2E_element init_21_ (const class GGS_mainXibElement & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibLineDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibLineDescriptorList_2E_element class_func_new (const class GGS_mainXibElement & inOperand0,
                                                                                class Compiler * inCompiler
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
 
} ; // End of GGS_mainXibLineDescriptorList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractDeclarationAST mProperty_mPropertyDeclaration ;
  public: inline GGS_abstractDeclarationAST readProperty_mPropertyDeclaration (void) const {
    return mProperty_mPropertyDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyDeclaration (const GGS_abstractDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_declarationListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & in_mPropertyDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationListAST_2E_element init_21_ (const class GGS_abstractDeclarationAST & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationListAST_2E_element class_func_new (const class GGS_abstractDeclarationAST & inOperand0,
                                                                         class Compiler * inCompiler
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
 
} ; // End of GGS_declarationListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_outletClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassBindingSpecificationList_2E_element (const GGS_lstring & in_mOutletClassName,
                                                              const GGS_lstring & in_mBindingName,
                                                              const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                              const GGS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                          const class GGS_controllerBindingOptionList & inOperand3,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                          const class GGS_controllerBindingOptionList & inOperand3,
                                                                                          class Compiler * inCompiler
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
 
} ; // End of GGS_outletClassBindingSpecificationList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecificationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_lstring & in_mOutletClassName,
                                                                      const GGS_lstring & in_mBindingName,
                                                                      const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                      const GGS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                  const class GGS_controllerBindingOptionList & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassBindingSpecificationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                  const class GGS_controllerBindingOptionList & inOperand3,
                                                                                                  class Compiler * inCompiler
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
 
} ; // End of GGS_autoLayoutViewClassBindingSpecificationList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mFomalParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mFomalParameterList (void) const {
    return mProperty_mFomalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFomalParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFomalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS_autoLayoutClassParameterList & in_mFomalParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterList & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_autoLayoutClassParameterList & inOperand1,
                                                                                   class Compiler * inCompiler
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
 
} ; // End of GGS_astAutoLayoutViewFunctionMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: astAutoLayoutViewFunctionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewFunctionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mEnumName ;
  public: inline GGS_lstring readProperty_mEnumName (void) const {
    return mProperty_mEnumName ;
  }

  public: GGS_lstring mProperty_mFunctionName ;
  public: inline GGS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS__32_lstringlist mProperty_mAssociationList ;
  public: inline GGS__32_lstringlist readProperty_mAssociationList (void) const {
    return mProperty_mAssociationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationFunctionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumName = inValue ;
  }

  public: inline void setter_setMFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMAssociationList (const GGS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_enumerationFunctionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & in_mEnumName,
                                                     const GGS_lstring & in_mFunctionName,
                                                     const GGS__32_lstringlist & in_mAssociationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__32_lstringlist & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationFunctionListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS__32_lstringlist & inOperand2,
                                                                                 class Compiler * inCompiler
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
 
} ; // End of GGS_enumerationFunctionListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_classMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_classMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_classMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_classMap (void) ;

//--------------------------------- Handle copy
  public: GGS_classMap (const GGS_classMap & inSource) ;
  public: GGS_classMap & operator = (const GGS_classMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_classMap class_func_mapWithMapToOverride (const class GGS_classMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_classKind & inOperand1,
                                                     const class GGS_propertyMap & inOperand2,
                                                     const class GGS_actionMap & inOperand3,
                                                     const class GGS_propertyGenerationList & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_classMap add_operation (const GGS_classMap & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_classKind constinArgument1,
                                                  class GGS_propertyMap constinArgument2,
                                                  class GGS_actionMap constinArgument3,
                                                  class GGS_propertyGenerationList constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GGS_actionMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassKindForKey (class GGS_classKind constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListForKey (class GGS_propertyGenerationList constinArgument0,
                                                                         class GGS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyMapForKey (class GGS_propertyMap constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_classKind & outArgument1,
                                                  class GGS_propertyMap & outArgument2,
                                                  class GGS_actionMap & outArgument3,
                                                  class GGS_propertyGenerationList & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_actionMap getter_mActionMapForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind getter_mClassKindForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_mPropertyGenerationListForKey (const class GGS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_mPropertyMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_classMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_classMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GGS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_classMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_classMap ;
 
} ; // End of GGS_classMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_classMap : public cGenericAbstractEnumerator {
  public: cEnumerator_classMap (const GGS_classMap & inEnumeratedObject,
                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_classKind current_mClassKind (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;
  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_classMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap ;

//--------------------------------------------------------------------------------------------------
//   enum classKind
//--------------------------------------------------------------------------------------------------

class GGS_classKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_classKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_prefs,
    enum_atomic,
    enum_document,
    enum_entity
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_atomic (class GGS_typeKind & out_kind) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_document (class GGS_lstring & out_rootEntityName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entity (class GGS_string & out_superEntityName,
                                                               class GGS_bool & out_isGraphic,
                                                               class GGS_bool & out_isAbstract,
                                                               class GGS_bool & out_handlingOpposite) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classKind class_func_atomic (const class GGS_typeKind & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_document (const class GGS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_entity (const class GGS_string & inOperand0,
                                                        const class GGS_bool & inOperand1,
                                                        const class GGS_bool & inOperand2,
                                                        const class GGS_bool & inOperand3
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_classKind class_func_prefs (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractAtomic (class GGS_typeKind & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractDocument (class GGS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEntity (class GGS_string & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_atomic_3F_ getter_getAtomic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_document_3F_ getter_getDocument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_classKind_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAtomic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDocument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrefs (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGenerationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_propertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_propertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_propertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGenerationList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGenerationList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_propertyGenerationList class_func_listWithValue (const class GGS_propertyGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_propertyGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_propertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyGenerationList add_operation (const GGS_propertyGenerationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_propertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_propertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_propertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_propertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_propertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_propertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_propertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_propertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_propertyGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyGenerationList ;
 
} ; // End of GGS_propertyGenerationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyGenerationList (const GGS_propertyGenerationList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_propertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actionMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_actionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_actionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_actionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_actionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_actionMap (const GGS_actionMap & inSource) ;
  public: GGS_actionMap & operator = (const GGS_actionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionMap init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionMap extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_actionMap class_func_mapWithMapToOverride (const class GGS_actionMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actionMap add_operation (const GGS_actionMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_actionMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_actionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_actionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actionMap ;
 
} ; // End of GGS_actionMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_actionMap (const GGS_actionMap & inEnumeratedObject,
                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GGS_propertyMap (const GGS_propertyMap & inSource) ;
  public: GGS_propertyMap & operator = (const GGS_propertyMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_propertyKind & inOperand1,
                                                     const class GGS_actionMap & inOperand2,
                                                     const class GGS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyMap add_operation (const GGS_propertyMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyKind constinArgument1,
                                                  class GGS_actionMap constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GGS_actionMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsOverridingForKey (class GGS_bool constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GGS_propertyKind constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyKind & outArgument1,
                                                  class GGS_actionMap & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_actionMap getter_mActionMapForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsOverridingForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mKindForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_propertyMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyMap ;
 
} ; // End of GGS_propertyMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const GGS_propertyMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsOverriding (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@classMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_classMap : public cMapElement {
//--- Map attributes
  public: GGS_classKind mProperty_mClassKind ;
  public: GGS_propertyMap mProperty_mPropertyMap ;
  public: GGS_actionMap mProperty_mActionMap ;
  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;

//--- Constructors
  public: cMapElement_classMap (const GGS_classMap_2E_element & inValue
                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_classMap (const GGS_lstring & inKey,
                                const GGS_classKind & in_mClassKind,
                                const GGS_propertyMap & in_mPropertyMap,
                                const GGS_actionMap & in_mActionMap,
                                const GGS_propertyGenerationList & in_mPropertyGenerationList
                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_classMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_classKind mProperty_mClassKind ;
  public: inline GGS_classKind readProperty_mClassKind (void) const {
    return mProperty_mClassKind ;
  }

  public: GGS_propertyMap mProperty_mPropertyMap ;
  public: inline GGS_propertyMap readProperty_mPropertyMap (void) const {
    return mProperty_mPropertyMap ;
  }

  public: GGS_actionMap mProperty_mActionMap ;
  public: inline GGS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMClassKind (const GGS_classKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassKind = inValue ;
  }

  public: inline void setter_setMPropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyMap = inValue ;
  }

  public: inline void setter_setMActionMap (const GGS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GGS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_classMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_classKind & in_mClassKind,
                                   const GGS_propertyMap & in_mPropertyMap,
                                   const GGS_actionMap & in_mActionMap,
                                   const GGS_propertyGenerationList & in_mPropertyGenerationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_classKind & inOperand1,
                                                                   const class GGS_propertyMap & inOperand2,
                                                                   const class GGS_actionMap & inOperand3,
                                                                   const class GGS_propertyGenerationList & inOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMap_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_classKind & inOperand1,
                                                               const class GGS_propertyMap & inOperand2,
                                                               const class GGS_actionMap & inOperand3,
                                                               const class GGS_propertyGenerationList & inOperand4,
                                                               class Compiler * inCompiler
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
 
} ; // End of GGS_classMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_classMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classMap_2E_element_3F_ (const GGS_classMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_classMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletClassMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_outletClassMap (void) ;

//--------------------------------- Handle copy
  public: GGS_outletClassMap (const GGS_outletClassMap & inSource) ;
  public: GGS_outletClassMap & operator = (const GGS_outletClassMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_outletClassMap class_func_mapWithMapToOverride (const class GGS_outletClassMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_bool & inOperand3,
                                                     const class GGS_bool & inOperand4,
                                                     const class GGS_bool & inOperand5,
                                                     const class GGS_bool & inOperand6,
                                                     const class GGS_bool & inOperand7,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletClassMap add_operation (const GGS_outletClassMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  class GGS_bool constinArgument5,
                                                  class GGS_bool constinArgument6,
                                                  class GGS_bool constinArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  class GGS_bool & outArgument5,
                                                  class GGS_bool & outArgument6,
                                                  class GGS_bool & outArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_outletClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_outletClassMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_outletClassMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_outletClassMap ;
 
} ; // End of GGS_outletClassMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletClassMap : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassMap (const GGS_outletClassMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletClassMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHandlesRunAction ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: GGS_bool mProperty_mUserDefined ;

//--- Constructors
  public: cMapElement_outletClassMap (const GGS_outletClassMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_outletClassMap (const GGS_lstring & inKey,
                                      const GGS_lstring & in_mSuperClassName,
                                      const GGS_bool & in_mHandlesRunAction,
                                      const GGS_bool & in_mHandlesTableValueBinding,
                                      const GGS_bool & in_mHandleEnabledBinding,
                                      const GGS_bool & in_mHandleHiddenBinding,
                                      const GGS_bool & in_mHandleGraphicControllerBinding,
                                      const GGS_bool & in_mUserDefined
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mSuperClassName ;
  public: inline GGS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GGS_bool mProperty_mHandlesRunAction ;
  public: inline GGS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GGS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: inline GGS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: inline GGS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GGS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GGS_bool mProperty_mUserDefined ;
  public: inline GGS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_outletClassMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mSuperClassName,
                                         const GGS_bool & in_mHandlesRunAction,
                                         const GGS_bool & in_mHandlesTableValueBinding,
                                         const GGS_bool & in_mHandleEnabledBinding,
                                         const GGS_bool & in_mHandleHiddenBinding,
                                         const GGS_bool & in_mHandleGraphicControllerBinding,
                                         const GGS_bool & in_mUserDefined) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassMap_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     const class GGS_bool & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS_bool & inOperand6,
                                                                                     const class GGS_bool & inOperand7,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_bool & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     const class GGS_bool & inOperand6,
                                                                     const class GGS_bool & inOperand7,
                                                                     class Compiler * inCompiler
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
 
} ; // End of GGS_outletClassMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: outletClassMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_outletClassMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_outletClassMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_outletClassMap_2E_element_3F_ (const GGS_outletClassMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_outletClassMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_outletClassMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_outletClassMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bindingSpecificationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) ;
  public: GGS_bindingSpecificationMap & operator = (const GGS_bindingSpecificationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingSpecificationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_bindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_bindingSpecificationMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_outletBindingSpecificationMap & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bindingSpecificationMap add_operation (const GGS_bindingSpecificationMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_outletBindingSpecificationMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_outletBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GGS_outletBindingSpecificationMap constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_outletBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_bindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_bindingSpecificationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_bindingSpecificationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_bindingSpecificationMap ;
 
} ; // End of GGS_bindingSpecificationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_bindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_outletBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) ;
  public: GGS_outletBindingSpecificationMap & operator = (const GGS_outletBindingSpecificationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_outletBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_outletBindingSpecificationMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                     const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletBindingSpecificationMap add_operation (const GGS_outletBindingSpecificationMap & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList constinArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GGS_string constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList & outArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_outletBindingSpecificationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_outletBindingSpecificationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_outletBindingSpecificationMap ;
 
} ; // End of GGS_outletBindingSpecificationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bindingSpecificationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: GGS_outletBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructors
  public: cMapElement_bindingSpecificationMap (const GGS_bindingSpecificationMap_2E_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_bindingSpecificationMap (const GGS_lstring & inKey,
                                               const GGS_lstring & in_mOutletSuperClassName,
                                               const GGS_outletBindingSpecificationMap & in_mBindingMap
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_outletBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_outletBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_outletBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_bindingSpecificationMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_lstring & in_mOutletSuperClassName,
                                                  const GGS_outletBindingSpecificationMap & in_mBindingMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_outletBindingSpecificationMap & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingSpecificationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_outletBindingSpecificationMap & inOperand2,
                                                                              class Compiler * inCompiler
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
 
} ; // End of GGS_bindingSpecificationMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bindingSpecificationMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bindingSpecificationMap_2E_element_3F_ (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bindingSpecificationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bindingSpecificationMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autolayoutViewClassMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap (void) ;

//--------------------------------- Handle copy
  public: GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) ;
  public: GGS_autolayoutViewClassMap & operator = (const GGS_autolayoutViewClassMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutViewClassMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autolayoutViewClassMap class_func_mapWithMapToOverride (const class GGS_autolayoutViewClassMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_bool & inOperand3,
                                                     const class GGS_bool & inOperand4,
                                                     const class GGS_bool & inOperand5,
                                                     const class GGS_bool & inOperand6,
                                                     const class GGS_bool & inOperand7,
                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autolayoutViewClassMap add_operation (const GGS_autolayoutViewClassMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  class GGS_bool constinArgument5,
                                                  class GGS_bool constinArgument6,
                                                  class GGS_bool constinArgument7,
                                                  class GGS_autoLayoutClassParameterList constinArgument8,
                                                  class GGS_astAutoLayoutViewFunctionMap constinArgument9,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMapForKey (class GGS_astAutoLayoutViewFunctionMap constinArgument0,
                                                                            class GGS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  class GGS_bool & outArgument4,
                                                  class GGS_bool & outArgument5,
                                                  class GGS_bool & outArgument6,
                                                  class GGS_bool & outArgument7,
                                                  class GGS_autoLayoutClassParameterList & outArgument8,
                                                  class GGS_astAutoLayoutViewFunctionMap & outArgument9,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GGS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutClassParameterList getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autolayoutViewClassMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutViewClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autolayoutViewClassMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GGS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autolayoutViewClassMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autolayoutViewClassMap ;
 
} ; // End of GGS_autolayoutViewClassMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autolayoutViewClassMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autolayoutViewClassMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHandlesRunAction ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructors
  public: cMapElement_autolayoutViewClassMap (const GGS_autolayoutViewClassMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_autolayoutViewClassMap (const GGS_lstring & inKey,
                                              const GGS_lstring & in_mSuperClassName,
                                              const GGS_bool & in_mHandlesRunAction,
                                              const GGS_bool & in_mHandlesTableValueBinding,
                                              const GGS_bool & in_mHandleEnabledBinding,
                                              const GGS_bool & in_mHandleHiddenBinding,
                                              const GGS_bool & in_mHandleGraphicControllerBinding,
                                              const GGS_bool & in_mUserDefined,
                                              const GGS_autoLayoutClassParameterList & in_mParameterList,
                                              const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mSuperClassName ;
  public: inline GGS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GGS_bool mProperty_mHandlesRunAction ;
  public: inline GGS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GGS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: inline GGS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: inline GGS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GGS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GGS_bool mProperty_mUserDefined ;
  public: inline GGS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const {
    return mProperty_mAutoLayoutViewFunctionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_autolayoutViewClassMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_lstring & in_mSuperClassName,
                                                 const GGS_bool & in_mHandlesRunAction,
                                                 const GGS_bool & in_mHandlesTableValueBinding,
                                                 const GGS_bool & in_mHandleEnabledBinding,
                                                 const GGS_bool & in_mHandleHiddenBinding,
                                                 const GGS_bool & in_mHandleGraphicControllerBinding,
                                                 const GGS_bool & in_mUserDefined,
                                                 const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                 const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap_2E_element init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     const class GGS_bool & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutViewClassMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             const class GGS_bool & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             const class GGS_bool & inOperand5,
                                                                             const class GGS_bool & inOperand6,
                                                                             const class GGS_bool & inOperand7,
                                                                             const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                             const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                             class Compiler * inCompiler
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
 
} ; // End of GGS_autolayoutViewClassMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: autolayoutViewClassMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autolayoutViewClassMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autolayoutViewClassMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autolayoutViewClassMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutBindingSpecificationMap & operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutBindingSpecificationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutBindingSpecificationMap add_operation (const GGS_autoLayoutBindingSpecificationMap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GGS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutBindingSpecificationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                              const GGS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutBindingSpecificationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutBindingSpecificationMap ;
 
} ; // End of GGS_autoLayoutBindingSpecificationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inEnumeratedObject,
                                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutViewBindingSpecificationMap & operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewBindingSpecificationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                     const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewBindingSpecificationMap add_operation (const GGS_autoLayoutViewBindingSpecificationMap & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList constinArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GGS_string constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_outletBindingSpecificationModelList & outArgument1,
                                                  class GGS_controllerBindingOptionDecoratedList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewBindingSpecificationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                  const GGS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutViewBindingSpecificationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_autoLayoutViewBindingSpecificationMap ;
 
} ; // End of GGS_autoLayoutViewBindingSpecificationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutBindingSpecificationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: GGS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructors
  public: cMapElement_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap_2E_element & inValue
                                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_autoLayoutBindingSpecificationMap (const GGS_lstring & inKey,
                                                         const GGS_lstring & in_mOutletSuperClassName,
                                                         const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_autoLayoutViewBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_autoLayoutViewBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_autoLayoutBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_lstring & in_mOutletSuperClassName,
                                                            const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutBindingSpecificationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                                                        class Compiler * inCompiler
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
 
} ; // End of GGS_autoLayoutBindingSpecificationMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: autoLayoutBindingSpecificationMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutBindingSpecificationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;

