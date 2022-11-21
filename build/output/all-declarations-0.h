#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE easyBindings_5F_lexique
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_easyBindings_5F_lexique : public cToken {
  public: double mLexicalAttribute_floatValue ;
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_easyBindings_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_easyBindings_5F_lexique : public C_Lexique {
//--- Constructors
  public: C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_easyBindings_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_Identifier,
   kToken__40_attribute,
   kToken_bindingName,
   kToken_controllerName,
   kToken_viewName,
   kToken_literal_5F_integer,
   kToken_literal_5F_double,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_abstract,
   kToken_action,
   kToken_all,
   kToken_arrayController,
   kToken_autolayout,
   kToken_autoLayoutDocument,
   kToken_binding,
   kToken_calledBy,
   kToken_class,
   kToken_classForSwift,
   kToken_column,
   kToken_computed,
   kToken_configurator,
   kToken_default,
   kToken_dependsFrom,
   kToken_enum,
   kToken_editableColumn,
   kToken_entity,
   kToken_extern,
   kToken_externDelegate,
   kToken_externFunc,
   kToken_func,
   kToken_graphic,
   kToken_graphviz,
   kToken_handlingOpposite,
   kToken_hSplit,
   kToken_hStack,
   kToken_include,
   kToken_inverse,
   kToken_linker,
   kToken_mainxib,
   kToken_menuItem,
   kToken_no,
   kToken_newView,
   kToken_none,
   kToken_one,
   kToken_outlet,
   kToken_outletArray,
   kToken_override,
   kToken_prefs,
   kToken_property,
   kToken_proxy,
   kToken_root,
   kToken_selectionController,
   kToken_self,
   kToken_separator,
   kToken_signature,
   kToken_sortkey,
   kToken_space,
   kToken_stackView,
   kToken_struct,
   kToken_super,
   kToken_tableViewController,
   kToken_toMany,
   kToken_toolbarItem,
   kToken_toOne,
   kToken_transient,
   kToken_version,
   kToken_vSplit,
   kToken_vStack,
   kToken_versionShouldChange,
   kToken_view,
   kToken_weak,
   kToken_xcodeproject,
   kToken_yes,
   kToken_enabled,
   kToken_graphicController,
   kToken_hidden,
   kToken_tableValue,
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
   kToken__3E_,
   kToken__3C__3D_,
   kToken__3E__3D_,
   kToken__21__3D_,
   kToken__3D__3D_,
   kToken__5E_,
   kToken__2D_,
   kToken__3D_} ;

//--- Key words table 'lowerCaseKeyWordList'
  public: static int16_t search_into_lowerCaseKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'reservedBindingNameKeyWordList'
  public: static int16_t search_into_reservedBindingNameKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: double attributeValue_floatValue (void) const ;
  public: C_String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected: virtual C_String indexingDirectory (void) const override  ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_easyBindings_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const override { return 102 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_declarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationListAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_declarationListAST constructor_listWithValue (const class GALGAS_abstractDeclarationAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_declarationListAST add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_declarationListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDeclarationAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDeclarationAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDeclarationAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDeclarationAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyDeclarationAtIndex (class GALGAS_abstractDeclarationAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDeclarationAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDeclarationAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDeclarationAST getter_mPropertyDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationListAST ;
 
} ; // End of GALGAS_declarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractDeclarationAST current_mPropertyDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_declarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDeclarationAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractDeclarationAST (const class cPtr_abstractDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mClassName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractDeclarationAST : public acStrongPtr_class {

//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_lstring mProperty_mClassName ;

//--- Constructor
  public: cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractDeclarationAST mProperty_mPropertyDeclaration ;
  public: inline GALGAS_abstractDeclarationAST readProperty_mPropertyDeclaration (void) const {
    return mProperty_mPropertyDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyDeclaration (const GALGAS_abstractDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationListAST_2D_element constructor_new (const class GALGAS_abstractDeclarationAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_outletClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOutletClassName,
                                                 const class GALGAS_lstring & in_mBindingName,
                                                 const class GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassBindingSpecificationList extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassBindingSpecificationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletClassBindingSpecificationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                             const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                     const class GALGAS_controllerBindingOptionList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationList add_operation (const GALGAS_outletClassBindingSpecificationList & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletClassBindingSpecificationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GALGAS_controllerBindingOptionList constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GALGAS_controllerBindingOptionList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GALGAS_controllerBindingOptionList & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GALGAS_controllerBindingOptionList & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_controllerBindingOptionList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GALGAS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GALGAS_uint constinArgument1,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GALGAS_controllerBindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GALGAS_controllerBindingOptionList & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GALGAS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletClassBindingSpecificationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_controllerBindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOptionName,
                                                 const class GALGAS_lstring & in_mOptionTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controllerBindingOptionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controllerBindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controllerBindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionList add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controllerBindingOptionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionList ;
 
} ; // End of GALGAS_controllerBindingOptionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controllerBindingOptionList : public cGenericAbstractEnumerator {
  public: cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controllerBindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationModelList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_outletClassBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mModelTypeName,
                                                 const class GALGAS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassBindingSpecificationModelList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletClassBindingSpecificationModelList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_bool & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationModelList add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletClassBindingSpecificationModelList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GALGAS_bool constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletClassBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOutletClassName ;
  public: inline GALGAS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GALGAS_lstring mProperty_mBindingName ;
  public: inline GALGAS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GALGAS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GALGAS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GALGAS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassBindingSpecificationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GALGAS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_lstring & in_mOutletClassName,
                                                                 const GALGAS_lstring & in_mBindingName,
                                                                 const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                 const GALGAS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassBindingSpecificationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassBindingSpecificationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                              const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOutletClassName,
                                                 const class GALGAS_lstring & in_mBindingName,
                                                 const class GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassBindingSpecificationList extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassBindingSpecificationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewClassBindingSpecificationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                     const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                     const class GALGAS_controllerBindingOptionList & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewClassBindingSpecificationList add_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GALGAS_controllerBindingOptionList constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GALGAS_controllerBindingOptionList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GALGAS_controllerBindingOptionList & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GALGAS_controllerBindingOptionList & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_controllerBindingOptionList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GALGAS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GALGAS_uint constinArgument1,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GALGAS_controllerBindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GALGAS_controllerBindingOptionList & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewClassBindingSpecificationList ;
 
} ; // End of GALGAS_autoLayoutViewClassBindingSpecificationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GALGAS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOutletClassName ;
  public: inline GALGAS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GALGAS_lstring mProperty_mBindingName ;
  public: inline GALGAS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GALGAS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GALGAS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GALGAS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GALGAS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (const GALGAS_lstring & in_mOutletClassName,
                                                                         const GALGAS_lstring & in_mBindingName,
                                                                         const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                         const GALGAS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                      const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutViewFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inSource) ;
  public: GALGAS_astAutoLayoutViewFunctionMap & operator = (const GALGAS_astAutoLayoutViewFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutViewFunctionMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutViewFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutViewFunctionMap constructor_mapWithMapToOverride (const class GALGAS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_autoLayoutClassParameterList & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_autoLayoutClassParameterList constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFomalParameterListForKey (class GALGAS_autoLayoutClassParameterList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mFomalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_autoLayoutClassParameterList & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_astAutoLayoutViewFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewFunctionMap ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astAutoLayoutViewFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutClassParameterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutClassParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutClassParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mParameterName,
                                                 const class GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutClassParameterList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutClassParameterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_autoLayoutClassParameterType & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutClassParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_autoLayoutClassParameterType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutClassParameterList add_operation (const GALGAS_autoLayoutClassParameterList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutClassParameterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_autoLayoutClassParameterType constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GALGAS_autoLayoutClassParameterType constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_autoLayoutClassParameterType & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_autoLayoutClassParameterType & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutClassParameterList ;
 
} ; // End of GALGAS_autoLayoutClassParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutClassParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutClassParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@astAutoLayoutViewFunctionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_autoLayoutClassParameterList mProperty_mFomalParameterList ;

//--- Constructor
  public: cMapElement_astAutoLayoutViewFunctionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_autoLayoutClassParameterList mProperty_mFomalParameterList ;
  public: inline GALGAS_autoLayoutClassParameterList readProperty_mFomalParameterList (void) const {
    return mProperty_mFomalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astAutoLayoutViewFunctionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFomalParameterList (const GALGAS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFomalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astAutoLayoutViewFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutViewFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutViewFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_autoLayoutClassParameterList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumerationFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEnumName,
                                                 const class GALGAS_lstring & in_mFunctionName,
                                                 const class GALGAS__32_lstringlist & in_mAssociationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationFunctionListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumerationFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS__32_lstringlist & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumerationFunctionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS__32_lstringlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumerationFunctionListAST add_operation (const GALGAS_enumerationFunctionListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_enumerationFunctionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS__32_lstringlist constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS__32_lstringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS__32_lstringlist & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS__32_lstringlist & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationListAtIndex (class GALGAS__32_lstringlist constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS__32_lstringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS__32_lstringlist & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumerationFunctionListAST ;
 
} ; // End of GALGAS_enumerationFunctionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumerationFunctionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumerationFunctionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEnumName ;
  public: inline GALGAS_lstring readProperty_mEnumName (void) const {
    return mProperty_mEnumName ;
  }

  public: GALGAS_lstring mProperty_mFunctionName ;
  public: inline GALGAS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS__32_lstringlist mProperty_mAssociationList ;
  public: inline GALGAS__32_lstringlist readProperty_mAssociationList (void) const {
    return mProperty_mAssociationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationFunctionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationFunctionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumName = inValue ;
  }

  public: inline void setter_setMFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMAssociationList (const GALGAS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumerationFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationFunctionListAST_2D_element (const GALGAS_lstring & in_mEnumName,
                                                        const GALGAS_lstring & in_mFunctionName,
                                                        const GALGAS__32_lstringlist & in_mAssociationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS__32_lstringlist & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationFunctionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_classMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_classMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_classMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_classMap (const GALGAS_classMap & inSource) ;
  public: GALGAS_classMap & operator = (const GALGAS_classMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_classMap constructor_mapWithMapToOverride (const class GALGAS_classMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_classKind & inOperand1,
                                                     const class GALGAS_propertyMap & inOperand2,
                                                     const class GALGAS_actionMap & inOperand3,
                                                     const class GALGAS_propertyGenerationList & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_classKind constinArgument1,
                                                  class GALGAS_propertyMap constinArgument2,
                                                  class GALGAS_actionMap constinArgument3,
                                                  class GALGAS_propertyGenerationList constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassKindForKey (class GALGAS_classKind constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListForKey (class GALGAS_propertyGenerationList constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyMapForKey (class GALGAS_propertyMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_classKind & outArgument1,
                                                  class GALGAS_propertyMap & outArgument2,
                                                  class GALGAS_actionMap & outArgument3,
                                                  class GALGAS_propertyGenerationList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_classKind getter_mClassKindForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mPropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_classMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_classKind & outOperand1,
                                                    class GALGAS_propertyMap & outOperand2,
                                                    class GALGAS_actionMap & outOperand3,
                                                    class GALGAS_propertyGenerationList & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_classMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_classMap ;
 
} ; // End of GALGAS_classMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_classMap : public cGenericAbstractEnumerator {
  public: cEnumerator_classMap (const GALGAS_classMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_classKind current_mClassKind (LOCATION_ARGS) const ;
  public: class GALGAS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;
  public: class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GALGAS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_classMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @classKind enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_classKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_prefs,
    kEnum_atomic,
    kEnum_document,
    kEnum_entity
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
  public: static GALGAS_classKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classKind constructor_atomic (const class GALGAS_typeKind & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_classKind constructor_document (const class GALGAS_lstring & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_classKind constructor_entity (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_bool & inOperand1,
                                                            const class GALGAS_bool & inOperand2,
                                                            const class GALGAS_bool & inOperand3
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_classKind constructor_prefs (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_atomic (class GALGAS_typeKind & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_document (class GALGAS_lstring & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_entity (class GALGAS_string & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAtomic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDocument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefs (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_atomic (class GALGAS_typeKind & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_document (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_entity (class GALGAS_string & outOperand0,
                                                 class GALGAS_bool & outOperand1,
                                                 class GALGAS_bool & outOperand2,
                                                 class GALGAS_bool & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_prefs () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_propertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_propertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_propertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGenerationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_propertyGenerationList constructor_listWithValue (const class GALGAS_propertyGeneration & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList add_operation (const GALGAS_propertyGenerationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_propertyGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_propertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyGenerationList ;
 
} ; // End of GALGAS_propertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_propertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyGenerationList (const GALGAS_propertyGenerationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_propertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_actionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_actionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_actionMap (const GALGAS_actionMap & inSource) ;
  public: GALGAS_actionMap & operator = (const GALGAS_actionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actionMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_actionMap constructor_mapWithMapToOverride (const class GALGAS_actionMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_actionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_actionMap ;
 
} ; // End of GALGAS_actionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyMap (const GALGAS_propertyMap & inSource) ;
  public: GALGAS_propertyMap & operator = (const GALGAS_propertyMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyMap constructor_mapWithMapToOverride (const class GALGAS_propertyMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertyKind & inOperand1,
                                                     const class GALGAS_actionMap & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyKind constinArgument1,
                                                  class GALGAS_actionMap constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsOverridingForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_propertyKind constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyKind & outArgument1,
                                                  class GALGAS_actionMap & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverridingForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertyKind & outOperand1,
                                                    class GALGAS_actionMap & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyMap ;
 
} ; // End of GALGAS_propertyMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsOverriding (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@classMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_classMap : public cMapElement {
//--- Map attributes
  public: GALGAS_classKind mProperty_mClassKind ;
  public: GALGAS_propertyMap mProperty_mPropertyMap ;
  public: GALGAS_actionMap mProperty_mActionMap ;
  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;

//--- Constructor
  public: cMapElement_classMap (const GALGAS_lstring & inKey,
                                const GALGAS_classKind & in_mClassKind,
                                const GALGAS_propertyMap & in_mPropertyMap,
                                const GALGAS_actionMap & in_mActionMap,
                                const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_classKind mProperty_mClassKind ;
  public: inline GALGAS_classKind readProperty_mClassKind (void) const {
    return mProperty_mClassKind ;
  }

  public: GALGAS_propertyMap mProperty_mPropertyMap ;
  public: inline GALGAS_propertyMap readProperty_mPropertyMap (void) const {
    return mProperty_mPropertyMap ;
  }

  public: GALGAS_actionMap mProperty_mActionMap ;
  public: inline GALGAS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GALGAS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_classMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMClassKind (const GALGAS_classKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassKind = inValue ;
  }

  public: inline void setter_setMPropertyMap (const GALGAS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyMap = inValue ;
  }

  public: inline void setter_setMActionMap (const GALGAS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GALGAS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_classMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_classMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_classKind & in_mClassKind,
                                      const GALGAS_propertyMap & in_mPropertyMap,
                                      const GALGAS_actionMap & in_mActionMap,
                                      const GALGAS_propertyGenerationList & in_mPropertyGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_classKind & inOperand1,
                                                                   const class GALGAS_propertyMap & inOperand2,
                                                                   const class GALGAS_actionMap & inOperand3,
                                                                   const class GALGAS_propertyGenerationList & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletClassMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_outletClassMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_outletClassMap (const GALGAS_outletClassMap & inSource) ;
  public: GALGAS_outletClassMap & operator = (const GALGAS_outletClassMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_outletClassMap constructor_mapWithMapToOverride (const class GALGAS_outletClassMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_bool & inOperand5,
                                                     const class GALGAS_bool & inOperand6,
                                                     const class GALGAS_bool & inOperand7,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  class GALGAS_bool constinArgument5,
                                                  class GALGAS_bool constinArgument6,
                                                  class GALGAS_bool constinArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GALGAS_bool constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GALGAS_bool constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_bool & outArgument5,
                                                  class GALGAS_bool & outArgument6,
                                                  class GALGAS_bool & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_bool & outOperand3,
                                                    class GALGAS_bool & outOperand4,
                                                    class GALGAS_bool & outOperand5,
                                                    class GALGAS_bool & outOperand6,
                                                    class GALGAS_bool & outOperand7) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_outletClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletClassMap ;
 
} ; // End of GALGAS_outletClassMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassMap : public cGenericAbstractEnumerator {
  public: cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletClassMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHandlesRunAction ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandleEnabledBinding ;
  public: GALGAS_bool mProperty_mHandleHiddenBinding ;
  public: GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mUserDefined ;

//--- Constructor
  public: cMapElement_outletClassMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lstring & in_mSuperClassName,
                                      const GALGAS_bool & in_mHandlesRunAction,
                                      const GALGAS_bool & in_mHandlesTableValueBinding,
                                      const GALGAS_bool & in_mHandleEnabledBinding,
                                      const GALGAS_bool & in_mHandleHiddenBinding,
                                      const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                      const GALGAS_bool & in_mUserDefined
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: inline GALGAS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GALGAS_bool mProperty_mHandlesRunAction ;
  public: inline GALGAS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GALGAS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GALGAS_bool mProperty_mHandleEnabledBinding ;
  public: inline GALGAS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GALGAS_bool mProperty_mHandleHiddenBinding ;
  public: inline GALGAS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GALGAS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GALGAS_bool mProperty_mUserDefined ;
  public: inline GALGAS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletClassMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lstring & in_mSuperClassName,
                                            const GALGAS_bool & in_mHandlesRunAction,
                                            const GALGAS_bool & in_mHandlesTableValueBinding,
                                            const GALGAS_bool & in_mHandleEnabledBinding,
                                            const GALGAS_bool & in_mHandleHiddenBinding,
                                            const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                            const GALGAS_bool & in_mUserDefined) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_bool & inOperand4,
                                                                         const class GALGAS_bool & inOperand5,
                                                                         const class GALGAS_bool & inOperand6,
                                                                         const class GALGAS_bool & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_bindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inSource) ;
  public: GALGAS_bindingSpecificationMap & operator = (const GALGAS_bindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_bindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_bindingSpecificationMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_outletBindingSpecificationMap & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_outletBindingSpecificationMap constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_outletBindingSpecificationMap & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GALGAS_outletBindingSpecificationMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_outletBindingSpecificationMap & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_outletBindingSpecificationMap & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_bindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationMap ;
 
} ; // End of GALGAS_bindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GALGAS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_bindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_outletBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) ;
  public: GALGAS_outletBindingSpecificationMap & operator = (const GALGAS_outletBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_outletBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_outletBindingSpecificationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                     const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_outletBindingSpecificationModelList constinArgument1,
                                                  class GALGAS_controllerBindingOptionDecoratedList constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GALGAS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GALGAS_string constinArgument1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_outletBindingSpecificationModelList & outArgument1,
                                                  class GALGAS_controllerBindingOptionDecoratedList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_outletBindingSpecificationModelList & outOperand1,
                                                    class GALGAS_controllerBindingOptionDecoratedList & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_outletBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationMap ;
 
} ; // End of GALGAS_outletBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mOutletSuperClassName ;
  public: GALGAS_outletBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructor
  public: cMapElement_bindingSpecificationMap (const GALGAS_lstring & inKey,
                                               const GALGAS_lstring & in_mOutletSuperClassName,
                                               const GALGAS_outletBindingSpecificationMap & in_mBindingMap
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mOutletSuperClassName ;
  public: inline GALGAS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GALGAS_outletBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GALGAS_outletBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GALGAS_outletBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_lstring & in_mOutletSuperClassName,
                                                     const GALGAS_outletBindingSpecificationMap & in_mBindingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_outletBindingSpecificationMap & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autolayoutViewClassMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutViewClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autolayoutViewClassMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inSource) ;
  public: GALGAS_autolayoutViewClassMap & operator = (const GALGAS_autolayoutViewClassMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutViewClassMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autolayoutViewClassMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autolayoutViewClassMap constructor_mapWithMapToOverride (const class GALGAS_autolayoutViewClassMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_bool & inOperand5,
                                                     const class GALGAS_bool & inOperand6,
                                                     const class GALGAS_bool & inOperand7,
                                                     const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                     const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  class GALGAS_bool constinArgument5,
                                                  class GALGAS_bool constinArgument6,
                                                  class GALGAS_bool constinArgument7,
                                                  class GALGAS_autoLayoutClassParameterList constinArgument8,
                                                  class GALGAS_astAutoLayoutViewFunctionMap constinArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMapForKey (class GALGAS_astAutoLayoutViewFunctionMap constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GALGAS_bool constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GALGAS_bool constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GALGAS_autoLayoutClassParameterList constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_bool & outArgument5,
                                                  class GALGAS_bool & outArgument6,
                                                  class GALGAS_bool & outArgument7,
                                                  class GALGAS_autoLayoutClassParameterList & outArgument8,
                                                  class GALGAS_astAutoLayoutViewFunctionMap & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autolayoutViewClassMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_bool & outOperand3,
                                                    class GALGAS_bool & outOperand4,
                                                    class GALGAS_bool & outOperand5,
                                                    class GALGAS_bool & outOperand6,
                                                    class GALGAS_bool & outOperand7,
                                                    class GALGAS_autoLayoutClassParameterList & outOperand8,
                                                    class GALGAS_astAutoLayoutViewFunctionMap & outOperand9) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_autolayoutViewClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autolayoutViewClassMap ;
 
} ; // End of GALGAS_autolayoutViewClassMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autolayoutViewClassMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autolayoutViewClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autolayoutViewClassMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHandlesRunAction ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandleEnabledBinding ;
  public: GALGAS_bool mProperty_mHandleHiddenBinding ;
  public: GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mUserDefined ;
  public: GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public: cMapElement_autolayoutViewClassMap (const GALGAS_lstring & inKey,
                                              const GALGAS_lstring & in_mSuperClassName,
                                              const GALGAS_bool & in_mHandlesRunAction,
                                              const GALGAS_bool & in_mHandlesTableValueBinding,
                                              const GALGAS_bool & in_mHandleEnabledBinding,
                                              const GALGAS_bool & in_mHandleHiddenBinding,
                                              const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                              const GALGAS_bool & in_mUserDefined,
                                              const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                              const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutViewClassMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: inline GALGAS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GALGAS_bool mProperty_mHandlesRunAction ;
  public: inline GALGAS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GALGAS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GALGAS_bool mProperty_mHandleEnabledBinding ;
  public: inline GALGAS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GALGAS_bool mProperty_mHandleHiddenBinding ;
  public: inline GALGAS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GALGAS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GALGAS_bool mProperty_mUserDefined ;
  public: inline GALGAS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

  public: GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: inline GALGAS_autoLayoutClassParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;
  public: inline GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const {
    return mProperty_mAutoLayoutViewFunctionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autolayoutViewClassMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autolayoutViewClassMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autolayoutViewClassMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autolayoutViewClassMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_bool & in_mHandlesRunAction,
                                                    const GALGAS_bool & in_mHandlesTableValueBinding,
                                                    const GALGAS_bool & in_mHandleEnabledBinding,
                                                    const GALGAS_bool & in_mHandleHiddenBinding,
                                                    const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                    const GALGAS_bool & in_mUserDefined,
                                                    const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                    const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutViewClassMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autolayoutViewClassMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4,
                                                                                 const class GALGAS_bool & inOperand5,
                                                                                 const class GALGAS_bool & inOperand6,
                                                                                 const class GALGAS_bool & inOperand7,
                                                                                 const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                 const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autolayoutViewClassMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autolayoutViewClassMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inSource) ;
  public: GALGAS_autoLayoutBindingSpecificationMap & operator = (const GALGAS_autoLayoutBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GALGAS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_autoLayoutViewBindingSpecificationMap & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutBindingSpecificationMap ;
 
} ; // End of GALGAS_autoLayoutBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public: GALGAS_autoLayoutViewBindingSpecificationMap & operator = (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                     const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_outletBindingSpecificationModelList constinArgument1,
                                                  class GALGAS_controllerBindingOptionDecoratedList constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GALGAS_outletBindingSpecificationModelList constinArgument0,
                                                                                      class GALGAS_string constinArgument1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_outletBindingSpecificationModelList & outArgument1,
                                                  class GALGAS_controllerBindingOptionDecoratedList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_outletBindingSpecificationModelList & outOperand1,
                                                    class GALGAS_controllerBindingOptionDecoratedList & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewBindingSpecificationMap ;
 
} ; // End of GALGAS_autoLayoutViewBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewBindingSpecificationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mOutletSuperClassName ;
  public: GALGAS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructor
  public: cMapElement_autoLayoutBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                         const GALGAS_lstring & in_mOutletSuperClassName,
                                                         const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mOutletSuperClassName ;
  public: inline GALGAS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GALGAS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GALGAS_autoLayoutViewBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                               const GALGAS_lstring & in_mOutletSuperClassName,
                                                               const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutBindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractDeclarationAST_2D_weak (const class GALGAS_abstractDeclarationAST & inSource) ;

  public: GALGAS_abstractDeclarationAST_2D_weak & operator = (const class GALGAS_abstractDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractDeclarationAST bang_abstractDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationPrecedenceGraph graph
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationPrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_declarationPrecedenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationPrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_declarationPrecedenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_abstractDeclarationAST inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_declarationListAST & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_declarationListAST & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_declarationListAST & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_declarationListAST & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_declarationListAST & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationPrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationPrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                             const class GALGAS_stringset & constinOperand1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationPrecedenceGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftDelegateList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftDelegateList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externSwiftDelegateList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mExternSwiftDelegateName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externSwiftDelegateList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externSwiftDelegateList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externSwiftDelegateList constructor_listWithValue (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externSwiftDelegateList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList add_operation (const GALGAS_externSwiftDelegateList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externSwiftDelegateList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftDelegateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftDelegateList ;
 
} ; // End of GALGAS_externSwiftDelegateList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftDelegateList : public cGenericAbstractEnumerator {
  public: cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externSwiftDelegateList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftDelegateList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftDelegateList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mExternSwiftDelegateName ;
  public: inline GALGAS_lstring readProperty_mExternSwiftDelegateName (void) const {
    return mProperty_mExternSwiftDelegateName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externSwiftDelegateList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externSwiftDelegateList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternSwiftDelegateName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftDelegateName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externSwiftDelegateList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & in_mExternSwiftDelegateName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externSwiftDelegateList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externSwiftDelegateList_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftDelegateList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftFunctionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftFunctionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externSwiftFunctionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mExternSwiftFunctionName,
                                                 const class GALGAS_lstring & in_mCallerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externSwiftFunctionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externSwiftFunctionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externSwiftFunctionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externSwiftFunctionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList add_operation (const GALGAS_externSwiftFunctionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externSwiftFunctionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCallerNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCallerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftFunctionList ;
 
} ; // End of GALGAS_externSwiftFunctionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftFunctionList : public cGenericAbstractEnumerator {
  public: cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externSwiftFunctionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftFunctionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftFunctionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mExternSwiftFunctionName ;
  public: inline GALGAS_lstring readProperty_mExternSwiftFunctionName (void) const {
    return mProperty_mExternSwiftFunctionName ;
  }

  public: GALGAS_lstring mProperty_mCallerName ;
  public: inline GALGAS_lstring readProperty_mCallerName (void) const {
    return mProperty_mCallerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externSwiftFunctionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externSwiftFunctionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternSwiftFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionName = inValue ;
  }

  public: inline void setter_setMCallerName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCallerName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externSwiftFunctionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                     const GALGAS_lstring & in_mCallerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externSwiftFunctionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externSwiftFunctionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftFunctionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_externFunctionMap (const GALGAS_externFunctionMap & inSource) ;
  public: GALGAS_externFunctionMap & operator = (const GALGAS_externFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_externFunctionMap constructor_mapWithMapToOverride (const class GALGAS_externFunctionMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_externFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_externFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externFunctionMap ;
 
} ; // End of GALGAS_externFunctionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externFunctionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externFunctionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_externFunctionMap (const GALGAS_lstring & inKey
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externFunctionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externFunctionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_transientClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_transientClassDeclarationAST (const class cPtr_transientClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsClass (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsClass (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {

//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsClass ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                             const GALGAS_bool & in_mIsClass
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientClassDeclarationAST_2D_weak (const class GALGAS_transientClassDeclarationAST & inSource) ;

  public: GALGAS_transientClassDeclarationAST_2D_weak & operator = (const class GALGAS_transientClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientClassDeclarationAST bang_transientClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mEnumConstantNameList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_lstringlist & in_mEnumConstantNameList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumerationDeclarationAST_2D_weak (const class GALGAS_enumerationDeclarationAST & inSource) ;

  public: GALGAS_enumerationDeclarationAST_2D_weak & operator = (const class GALGAS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumerationDeclarationAST bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public: GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumConstantMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                       const GALGAS_uint & in_mIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFunAssociationSortedList sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFunAssociationSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_enumFunAssociationSortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumFunAssociationSortedList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumFunAssociationSortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_enumFunAssociationSortedList constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                            const class GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumFunAssociationSortedList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumFunAssociationSortedList ;
 
} ; // End of GALGAS_enumFunAssociationSortedList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumFunAssociationSortedList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumFunAssociationSortedList (const GALGAS_enumFunAssociationSortedList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAssociatedString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumFunAssociationSortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFunAssociationSortedList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFunAssociationSortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_string mProperty_mAssociatedString ;
  public: inline GALGAS_string readProperty_mAssociatedString (void) const {
    return mProperty_mAssociatedString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumFunAssociationSortedList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumFunAssociationSortedList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumFunAssociationSortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumFunAssociationSortedList_2D_element (const GALGAS_uint & in_mIndex,
                                                          const GALGAS_string & in_mAssociatedString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumFunAssociationSortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumFunAssociationSortedList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                       const class GALGAS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumFunAssociationSortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumFunAssociationSortedList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFuncMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumFuncMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFuncMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_enumFuncMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_enumFuncMap (const GALGAS_enumFuncMap & inSource) ;
  public: GALGAS_enumFuncMap & operator = (const GALGAS_enumFuncMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumFuncMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumFuncMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_enumFuncMap constructor_mapWithMapToOverride (const class GALGAS_enumFuncMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_enumFunAssociationSortedList & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_enumFunAssociationSortedList constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationSortedListForKey (class GALGAS_enumFunAssociationSortedList constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_enumFunAssociationSortedList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumFunAssociationSortedList getter_mAssociationSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumFuncMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_enumFunAssociationSortedList & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_enumFuncMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumFuncMap ;
 
} ; // End of GALGAS_enumFuncMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumFuncMap : public cGenericAbstractEnumerator {
  public: cEnumerator_enumFuncMap (const GALGAS_enumFuncMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumFuncMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumFuncMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap : public cMapElement {
//--- Map attributes
  public: GALGAS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;

//--- Constructor
  public: cMapElement_enumFuncMap (const GALGAS_lstring & inKey,
                                   const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFuncMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFuncMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;
  public: inline GALGAS_enumFunAssociationSortedList readProperty_mAssociationSortedList (void) const {
    return mProperty_mAssociationSortedList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumFuncMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumFuncMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAssociationSortedList (const GALGAS_enumFunAssociationSortedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationSortedList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumFuncMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumFuncMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumFuncMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumFuncMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_enumFunAssociationSortedList & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumFuncMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumFuncMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFileGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractFileGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractFileGeneration (const class cPtr_abstractFileGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractFileGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractFileGeneration : public acStrongPtr_class {

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractFileGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFileGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractFileGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractFileGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractFileGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractFileGeneration_2D_weak (const class GALGAS_abstractFileGeneration & inSource) ;

  public: GALGAS_abstractFileGeneration_2D_weak & operator = (const class GALGAS_abstractFileGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractFileGeneration bang_abstractFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractFileGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractFileGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractFileGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractFileGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @typeKind enum                                               *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_boolType,
    kEnum_integerType,
    kEnum_uint_33__32_Type,
    kEnum_doubleType,
    kEnum_stringType,
    kEnum_dataType,
    kEnum_dateType,
    kEnum_fontType,
    kEnum_colorType,
    kEnum_bezierPathType,
    kEnum_bezierPathArrayType,
    kEnum_enumType,
    kEnum_entityType,
    kEnum_classType,
    kEnum_transientPropertyExternType
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
  public: static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeKind constructor_bezierPathArrayType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_bezierPathType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_boolType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_classType (const class GALGAS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_colorType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_dataType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_dateType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_doubleType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_entityType (const class GALGAS_string & inOperand0,
                                                               const class GALGAS_bool & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_enumType (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_enumConstantMap & inOperand1,
                                                             const class GALGAS_enumFuncMap & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_fontType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_integerType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_stringType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_transientPropertyExternType (const class GALGAS_string & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind constructor_uint_33__32_Type (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_classType (class GALGAS_string & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_entityType (class GALGAS_string & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_enumType (class GALGAS_string & outArgument0,
                                                 class GALGAS_enumConstantMap & outArgument1,
                                                 class GALGAS_enumFuncMap & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_transientPropertyExternType (class GALGAS_string & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBezierPathArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBezierPathType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isColorType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDataType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDateType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFontType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStringType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientPropertyExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUint_33__32_Type (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_bezierPathArrayType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_bezierPathType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_boolType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_classType (class GALGAS_string & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_colorType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_dataType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_dateType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_doubleType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_entityType (class GALGAS_string & outOperand0,
                                                     class GALGAS_bool & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_enumType (class GALGAS_string & outOperand0,
                                                   class GALGAS_enumConstantMap & outOperand1,
                                                   class GALGAS_enumFuncMap & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fontType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_integerType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_stringType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_transientPropertyExternType (class GALGAS_string & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_uint_33__32_Type () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @typeKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_enumType : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_enumConstantMap mAssociatedValue1 ;
  public: const GALGAS_enumFuncMap mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_enumType (const GALGAS_string inAssociatedValue0,
                                                   const GALGAS_enumConstantMap inAssociatedValue1,
                                                   const GALGAS_enumFuncMap inAssociatedValue2
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_enumType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_entityType : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_entityType (const GALGAS_string inAssociatedValue0,
                                                     const GALGAS_bool inAssociatedValue1
                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_entityType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_classType : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_classType (const GALGAS_string inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_classType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_transientPropertyExternType : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_transientPropertyExternType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_atomicClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicClassDeclarationAST (const class cPtr_atomicClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typeKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_typeKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicClassDeclarationAST : public cPtr_abstractDeclarationAST {

//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_typeKind mProperty_mKind ;

//--- Constructor
  public: cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_typeKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicClassDeclarationAST_2D_weak (const class GALGAS_atomicClassDeclarationAST & inSource) ;

  public: GALGAS_atomicClassDeclarationAST_2D_weak & operator = (const class GALGAS_atomicClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicClassDeclarationAST bang_atomicClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleStoredPropertyList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleStoredPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_simpleStoredPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mPropertyTypeName,
                                                 const class GALGAS_lstring & in_mPropertyName,
                                                 const class GALGAS_abstractDefaultValue & in_mDefaultValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleStoredPropertyList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_simpleStoredPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_simpleStoredPropertyList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_abstractDefaultValue & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_simpleStoredPropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_abstractDefaultValue & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList add_operation (const GALGAS_simpleStoredPropertyList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_simpleStoredPropertyList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_abstractDefaultValue constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_abstractDefaultValue & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_abstractDefaultValue & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_abstractDefaultValue & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_abstractDefaultValue & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_abstractDefaultValue & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_simpleStoredPropertyList ;
 
} ; // End of GALGAS_simpleStoredPropertyList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_simpleStoredPropertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_simpleStoredPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDefaultValue : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractDefaultValue (const class cPtr_abstractDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDefaultValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractDefaultValue : public acStrongPtr_class {

//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GALGAS_typeKindList inAttributeActualTypeList,
           const class GALGAS_propertyMap inPreferencesPropertyMap,
           class GALGAS_string & outSwiftDefaultValueAsString,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GALGAS_lstring inNode,
           class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties

//--- Constructor
  public: cPtr_abstractDefaultValue (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleStoredPropertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleStoredPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mPropertyTypeName ;
  public: inline GALGAS_lstring readProperty_mPropertyTypeName (void) const {
    return mProperty_mPropertyTypeName ;
  }

  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_abstractDefaultValue mProperty_mDefaultValue ;
  public: inline GALGAS_abstractDefaultValue readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_simpleStoredPropertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeName = inValue ;
  }

  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GALGAS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_simpleStoredPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & in_mPropertyTypeName,
                                                      const GALGAS_lstring & in_mPropertyName,
                                                      const GALGAS_abstractDefaultValue & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleStoredPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_simpleStoredPropertyList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_abstractDefaultValue & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleStoredPropertyList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_entityDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_entityDeclarationAST (const class cPtr_entityDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_lstring readProperty_mSuperEntityName (void) const ;

  public: class GALGAS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GALGAS_simpleStoredPropertyList readProperty_mSimpleStoredPropertyList (void) const ;

  public: class GALGAS_stringset readProperty_mSignatureList (void) const ;

  public: class GALGAS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GALGAS_lstringlist readProperty_mObsoleteEntityNames (void) const ;

  public: class GALGAS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GALGAS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GALGAS_lstringlist readProperty_mGraphicOptionArray (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_bool & inOperand3,
                                                                    const class GALGAS_simpleStoredPropertyList & inOperand4,
                                                                    const class GALGAS_stringset & inOperand5,
                                                                    const class GALGAS_lstringlist & inOperand6,
                                                                    const class GALGAS_lstringlist & inOperand7,
                                                                    const class GALGAS_bool & inOperand8,
                                                                    const class GALGAS_externSwiftDelegateList & inOperand9,
                                                                    const class GALGAS_lstringlist & inOperand10
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphicOptionArray (class GALGAS_lstringlist inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlingOpposite (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureList (class GALGAS_stringset inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (class GALGAS_simpleStoredPropertyList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {

//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_lstring mProperty_mSuperEntityName ;
  public: GALGAS_bool mProperty_mHandlingOpposite ;
  public: GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public: GALGAS_stringset mProperty_mSignatureList ;
  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: GALGAS_lstringlist mProperty_mObsoleteEntityNames ;
  public: GALGAS_bool mProperty_mIsGraphicEntity ;
  public: GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GALGAS_lstringlist mProperty_mGraphicOptionArray ;

//--- Constructor
  public: cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_bool & in_mIsAbstract,
                                     const GALGAS_lstring & in_mSuperEntityName,
                                     const GALGAS_bool & in_mHandlingOpposite,
                                     const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                     const GALGAS_stringset & in_mSignatureList,
                                     const GALGAS_lstringlist & in_mActionDeclarationList,
                                     const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                     const GALGAS_bool & in_mIsGraphicEntity,
                                     const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                     const GALGAS_lstringlist & in_mGraphicOptionArray
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_entityDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_entityDeclarationAST_2D_weak (const class GALGAS_entityDeclarationAST & inSource) ;

  public: GALGAS_entityDeclarationAST_2D_weak & operator = (const class GALGAS_entityDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_entityDeclarationAST bang_entityDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_propertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_propertyGeneration (const class cPtr_propertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGeneration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @propertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_propertyGeneration : public acStrongPtr_class {

//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GALGAS_string getter_objectAccessibilityCodeForSaveOperation (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter populateExplorerWindowCode
  public: virtual class GALGAS_string getter_populateExplorerWindowCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GALGAS_string getter_prefKeyDefinitionCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_stringset inOverriddenTransients,
           C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter resetToManyRelationships
  public: virtual class GALGAS_string getter_resetToManyRelationships (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter saveIntoDictionaryCode
  public: virtual class GALGAS_string getter_saveIntoDictionaryCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter setupAtomicPropertyFromDictionaryCode
  public: virtual class GALGAS_string getter_setupAtomicPropertyFromDictionaryCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GALGAS_string getter_setupRelationshipFromDictionaryCode (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GALGAS_string mProperty_mPropertyName ;

//--- Constructor
  public: cPtr_propertyGeneration (const GALGAS_string & in_mPropertyName
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_propertyGeneration mProperty_mProperty ;
  public: inline GALGAS_propertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_propertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyGenerationList_2D_element constructor_new (const class GALGAS_propertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_entityForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_entityForGeneration (const class cPtr_entityForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEntityName (void) const ;

  public: class GALGAS_string readProperty_mSuperEntityName (void) const ;

  public: class GALGAS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GALGAS_propertyGenerationList readProperty_mPropertyGenerationList (void) const ;

  public: class GALGAS_stringset readProperty_mSignatureSet (void) const ;

  public: class GALGAS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_stringset readProperty_mOverridenTransients (void) const ;

  public: class GALGAS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GALGAS_bool readProperty_mHasSubEntity (void) const ;

  public: class GALGAS_bool readProperty_mCanCopyAndPaste_5F_option (void) const ;

  public: class GALGAS_bool readProperty_mCannotBeDeleted_5F_option (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityForGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_propertyGenerationList & inOperand3,
                                                                   const class GALGAS_stringset & inOperand4,
                                                                   const class GALGAS_bool & inOperand5,
                                                                   const class GALGAS_bool & inOperand6,
                                                                   const class GALGAS_stringset & inOperand7,
                                                                   const class GALGAS_externSwiftDelegateList & inOperand8,
                                                                   const class GALGAS_bool & inOperand9,
                                                                   const class GALGAS_bool & inOperand10,
                                                                   const class GALGAS_bool & inOperand11
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCanCopyAndPaste_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCannotBeDeleted_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntityName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlingOpposite (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (class GALGAS_stringset inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (class GALGAS_propertyGenerationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureSet (class GALGAS_stringset inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mEntityName ;
  public: GALGAS_string mProperty_mSuperEntityName ;
  public: GALGAS_bool mProperty_mHandlingOpposite ;
  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: GALGAS_stringset mProperty_mSignatureSet ;
  public: GALGAS_bool mProperty_mIsGraphicEntity ;
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_stringset mProperty_mOverridenTransients ;
  public: GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GALGAS_bool mProperty_mHasSubEntity ;
  public: GALGAS_bool mProperty_mCanCopyAndPaste_5F_option ;
  public: GALGAS_bool mProperty_mCannotBeDeleted_5F_option ;

//--- Constructor
  public: cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                    const GALGAS_string & in_mSuperEntityName,
                                    const GALGAS_bool & in_mHandlingOpposite,
                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GALGAS_stringset & in_mSignatureSet,
                                    const GALGAS_bool & in_mIsGraphicEntity,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_stringset & in_mOverridenTransients,
                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                    const GALGAS_bool & in_mHasSubEntity,
                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_entityForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_entityForGeneration_2D_weak (const class GALGAS_entityForGeneration & inSource) ;

  public: GALGAS_entityForGeneration_2D_weak & operator = (const class GALGAS_entityForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_entityForGeneration bang_entityForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityListForGeneratingEBManagedObjectContext list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityListForGeneratingEBManagedObjectContext : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_entityListForGeneratingEBManagedObjectContext (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mEntityName,
                                                 const class GALGAS_lstringlist & in_mObsoleteEntityNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityListForGeneratingEBManagedObjectContext extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityListForGeneratingEBManagedObjectContext constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_entityListForGeneratingEBManagedObjectContext constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                       const class GALGAS_lstringlist & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_entityListForGeneratingEBManagedObjectContext add_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntityNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNamesAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObsoleteEntityNamesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_entityListForGeneratingEBManagedObjectContext ;
 
} ; // End of GALGAS_entityListForGeneratingEBManagedObjectContext class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_entityListForGeneratingEBManagedObjectContext : public cGenericAbstractEnumerator {
  public: cEnumerator_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityListForGeneratingEBManagedObjectContext_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mEntityName ;
  public: inline GALGAS_string readProperty_mEntityName (void) const {
    return mProperty_mEntityName ;
  }

  public: GALGAS_lstringlist mProperty_mObsoleteEntityNames ;
  public: inline GALGAS_lstringlist readProperty_mObsoleteEntityNames (void) const {
    return mProperty_mObsoleteEntityNames ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntityName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityName = inValue ;
  }

  public: inline void setter_setMObsoleteEntityNames (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObsoleteEntityNames = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & in_mEntityName,
                                                                           const GALGAS_lstringlist & in_mObsoleteEntityNames) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                        const class GALGAS_lstringlist & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_outletDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOutletTypeName,
                                                 const class GALGAS_lstring & in_mOutletName,
                                                 const class GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                 const class GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                 const class GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                 const class GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                 const class GALGAS_regularBindingList & in_mRegularBindingList,
                                                 const class GALGAS_graphicController & in_mGraphicController
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletDeclarationList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_tableValueBinding & inOperand2,
                                                                               const class GALGAS_runActionDescriptor & inOperand3,
                                                                               const class GALGAS_multipleBindingDescriptor & inOperand4,
                                                                               const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                               const class GALGAS_regularBindingList & inOperand6,
                                                                               const class GALGAS_graphicController & inOperand7
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_tableValueBinding & inOperand2,
                                                     const class GALGAS_runActionDescriptor & inOperand3,
                                                     const class GALGAS_multipleBindingDescriptor & inOperand4,
                                                     const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                     const class GALGAS_regularBindingList & inOperand6,
                                                     const class GALGAS_graphicController & inOperand7
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletDeclarationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_tableValueBinding constinArgument2,
                                                      class GALGAS_runActionDescriptor constinArgument3,
                                                      class GALGAS_multipleBindingDescriptor constinArgument4,
                                                      class GALGAS_multipleBindingDescriptor constinArgument5,
                                                      class GALGAS_regularBindingList constinArgument6,
                                                      class GALGAS_graphicController constinArgument7,
                                                      class GALGAS_uint constinArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_tableValueBinding & outArgument2,
                                                 class GALGAS_runActionDescriptor & outArgument3,
                                                 class GALGAS_multipleBindingDescriptor & outArgument4,
                                                 class GALGAS_multipleBindingDescriptor & outArgument5,
                                                 class GALGAS_regularBindingList & outArgument6,
                                                 class GALGAS_graphicController & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_tableValueBinding & outArgument2,
                                                class GALGAS_runActionDescriptor & outArgument3,
                                                class GALGAS_multipleBindingDescriptor & outArgument4,
                                                class GALGAS_multipleBindingDescriptor & outArgument5,
                                                class GALGAS_regularBindingList & outArgument6,
                                                class GALGAS_graphicController & outArgument7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_tableValueBinding & outArgument2,
                                                      class GALGAS_runActionDescriptor & outArgument3,
                                                      class GALGAS_multipleBindingDescriptor & outArgument4,
                                                      class GALGAS_multipleBindingDescriptor & outArgument5,
                                                      class GALGAS_regularBindingList & outArgument6,
                                                      class GALGAS_graphicController & outArgument7,
                                                      class GALGAS_uint constinArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphicControllerAtIndex (class GALGAS_graphicController constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingListAtIndex (class GALGAS_regularBindingList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunDescriptorAtIndex (class GALGAS_runActionDescriptor constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingDescriptorAtIndex (class GALGAS_tableValueBinding constinArgument0,
                                                                               class GALGAS_uint constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_tableValueBinding & outArgument2,
                                              class GALGAS_runActionDescriptor & outArgument3,
                                              class GALGAS_multipleBindingDescriptor & outArgument4,
                                              class GALGAS_multipleBindingDescriptor & outArgument5,
                                              class GALGAS_regularBindingList & outArgument6,
                                              class GALGAS_graphicController & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_tableValueBinding & outArgument2,
                                             class GALGAS_runActionDescriptor & outArgument3,
                                             class GALGAS_multipleBindingDescriptor & outArgument4,
                                             class GALGAS_multipleBindingDescriptor & outArgument5,
                                             class GALGAS_regularBindingList & outArgument6,
                                             class GALGAS_graphicController & outArgument7,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphicController getter_mGraphicControllerAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_mRegularBindingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor getter_mRunDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableValueBinding getter_mTableValueBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletDeclarationList ;
 
} ; // End of GALGAS_outletDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOutletTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_tableValueBinding current_mTableValueBindingDescriptor (LOCATION_ARGS) const ;
  public: class GALGAS_runActionDescriptor current_mRunDescriptor (LOCATION_ARGS) const ;
  public: class GALGAS_multipleBindingDescriptor current_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public: class GALGAS_multipleBindingDescriptor current_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public: class GALGAS_regularBindingList current_mRegularBindingList (LOCATION_ARGS) const ;
  public: class GALGAS_graphicController current_mGraphicController (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @graphicController enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphicController : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_graphicController (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_defined
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
  public: static GALGAS_graphicController extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphicController constructor_defined (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_graphicController constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphicController & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_defined (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefined (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_defined (class GALGAS_lstring & outOperand0,
                                                  class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphicController class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @graphicController enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_graphicController_defined : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring inAssociatedValue0,
                                                           const GALGAS_lstring inAssociatedValue1
                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_graphicController_defined (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractBooleanMultipleBindingExpressionAST (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @multipleBindingDescriptor enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_multipleBindingDescriptor (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noBinding,
    kEnum_binding
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
  public: static GALGAS_multipleBindingDescriptor extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multipleBindingDescriptor constructor_binding (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingDescriptor constructor_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multipleBindingDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_binding (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_binding (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_noBinding () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingDescriptor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @multipleBindingDescriptor enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_multipleBindingDescriptor_binding : public cEnumAssociatedValues {
  public: const GALGAS_abstractBooleanMultipleBindingExpressionAST mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST inAssociatedValue0
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_multipleBindingDescriptor_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @runActionDescriptor enum                                         *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_runActionDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_runActionDescriptor (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noAction,
    kEnum_action
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
  public: static GALGAS_runActionDescriptor extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_runActionDescriptor constructor_action (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_runActionDescriptor constructor_noAction (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_runActionDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_action (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoAction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_action (class GALGAS_lstring & outOperand0,
                                                 class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_noAction () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_runActionDescriptor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @runActionDescriptor enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_runActionDescriptor_action : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring inAssociatedValue0,
                                                            const GALGAS_lstring inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_runActionDescriptor_action (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @tableValueBinding enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableValueBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_tableValueBinding (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noTableValueBinding,
    kEnum_tableValueBinding
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
  public: static GALGAS_tableValueBinding extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableValueBinding constructor_noTableValueBinding (LOCATION_ARGS) ;

  public: static class GALGAS_tableValueBinding constructor_tableValueBinding (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_tableValueBinding (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoTableValueBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTableValueBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_noTableValueBinding () const ;

  public: VIRTUAL_IN_DEBUG bool optional_tableValueBinding (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableValueBinding class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @tableValueBinding enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_tableValueBinding_tableValueBinding : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_tableValueBinding_tableValueBinding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_regularBindingList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mBindingName,
                                                 const class GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                 const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_regularBindingList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularBindingList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_regularBindingList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_observablePropertyList & inOperand1,
                                                                            const class GALGAS_bindingOptionList & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_observablePropertyList & inOperand1,
                                                     const class GALGAS_bindingOptionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_regularBindingList add_operation (const GALGAS_regularBindingList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_regularBindingList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_observablePropertyList constinArgument1,
                                                      class GALGAS_bindingOptionList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_observablePropertyList & outArgument1,
                                                 class GALGAS_bindingOptionList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_observablePropertyList & outArgument1,
                                                class GALGAS_bindingOptionList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_observablePropertyList & outArgument1,
                                                      class GALGAS_bindingOptionList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_bindingOptionList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyListAtIndex (class GALGAS_observablePropertyList constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_observablePropertyList & outArgument1,
                                              class GALGAS_bindingOptionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_observablePropertyList & outArgument1,
                                             class GALGAS_bindingOptionList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mObservablePropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingList ;
 
} ; // End of GALGAS_regularBindingList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_regularBindingList : public cGenericAbstractEnumerator {
  public: cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public: class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_regularBindingList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOutletTypeName ;
  public: inline GALGAS_lstring readProperty_mOutletTypeName (void) const {
    return mProperty_mOutletTypeName ;
  }

  public: GALGAS_lstring mProperty_mOutletName ;
  public: inline GALGAS_lstring readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GALGAS_tableValueBinding mProperty_mTableValueBindingDescriptor ;
  public: inline GALGAS_tableValueBinding readProperty_mTableValueBindingDescriptor (void) const {
    return mProperty_mTableValueBindingDescriptor ;
  }

  public: GALGAS_runActionDescriptor mProperty_mRunDescriptor ;
  public: inline GALGAS_runActionDescriptor readProperty_mRunDescriptor (void) const {
    return mProperty_mRunDescriptor ;
  }

  public: GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: inline GALGAS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const {
    return mProperty_mEnabledBindingDescriptor ;
  }

  public: GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: inline GALGAS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const {
    return mProperty_mHiddenBindingDescriptor ;
  }

  public: GALGAS_regularBindingList mProperty_mRegularBindingList ;
  public: inline GALGAS_regularBindingList readProperty_mRegularBindingList (void) const {
    return mProperty_mRegularBindingList ;
  }

  public: GALGAS_graphicController mProperty_mGraphicController ;
  public: inline GALGAS_graphicController readProperty_mGraphicController (void) const {
    return mProperty_mGraphicController ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_outletDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletTypeName = inValue ;
  }

  public: inline void setter_setMOutletName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMTableValueBindingDescriptor (const GALGAS_tableValueBinding & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingDescriptor = inValue ;
  }

  public: inline void setter_setMRunDescriptor (const GALGAS_runActionDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunDescriptor = inValue ;
  }

  public: inline void setter_setMEnabledBindingDescriptor (const GALGAS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnabledBindingDescriptor = inValue ;
  }

  public: inline void setter_setMHiddenBindingDescriptor (const GALGAS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHiddenBindingDescriptor = inValue ;
  }

  public: inline void setter_setMRegularBindingList (const GALGAS_regularBindingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularBindingList = inValue ;
  }

  public: inline void setter_setMGraphicController (const GALGAS_graphicController & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphicController = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & in_mOutletTypeName,
                                                   const GALGAS_lstring & in_mOutletName,
                                                   const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                   const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                   const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                   const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                   const GALGAS_regularBindingList & in_mRegularBindingList,
                                                   const GALGAS_graphicController & in_mGraphicController) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_tableValueBinding & inOperand2,
                                                                                const class GALGAS_runActionDescriptor & inOperand3,
                                                                                const class GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                const class GALGAS_regularBindingList & inOperand6,
                                                                                const class GALGAS_graphicController & inOperand7
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerBindingListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerBindingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_arrayControllerBindingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mControllerName,
                                                 const class GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerBindingListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerBindingListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_arrayControllerBindingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_multipleBindingDescriptor & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arrayControllerBindingListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_multipleBindingDescriptor & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST add_operation (const GALGAS_arrayControllerBindingListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_arrayControllerBindingListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_multipleBindingDescriptor constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_multipleBindingDescriptor & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_multipleBindingDescriptor & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_multipleBindingDescriptor & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenSelectionViewBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                                        class GALGAS_uint constinArgument1,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_multipleBindingDescriptor & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_multipleBindingDescriptor & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenSelectionViewBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerBindingListAST ;
 
} ; // End of GALGAS_arrayControllerBindingListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_arrayControllerBindingListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GALGAS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_arrayControllerBindingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerBindingListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerBindingListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mControllerName ;
  public: inline GALGAS_lstring readProperty_mControllerName (void) const {
    return mProperty_mControllerName ;
  }

  public: GALGAS_multipleBindingDescriptor mProperty_mHiddenSelectionViewBindingDescriptor ;
  public: inline GALGAS_multipleBindingDescriptor readProperty_mHiddenSelectionViewBindingDescriptor (void) const {
    return mProperty_mHiddenSelectionViewBindingDescriptor ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_arrayControllerBindingListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMControllerName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerName = inValue ;
  }

  public: inline void setter_setMHiddenSelectionViewBindingDescriptor (const GALGAS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHiddenSelectionViewBindingDescriptor = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_arrayControllerBindingListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_arrayControllerBindingListAST_2D_element (const GALGAS_lstring & in_mControllerName,
                                                           const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerBindingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerBindingListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_multipleBindingDescriptor & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayControllerBindingListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerBindingListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astViewDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mViewName,
                                                 const class GALGAS_astAbstractViewDeclaration & in_mView
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astViewDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astViewDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astViewDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_astAbstractViewDeclaration & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astViewDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_astAbstractViewDeclaration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astViewDeclarationList add_operation (const GALGAS_astViewDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astViewDeclarationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_astAbstractViewDeclaration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewAtIndex (class GALGAS_astAbstractViewDeclaration constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_astAbstractViewDeclaration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_astAbstractViewDeclaration & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAbstractViewDeclaration getter_mViewAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mViewNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astViewDeclarationList ;
 
} ; // End of GALGAS_astViewDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astViewDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_astViewDeclarationList (const GALGAS_astViewDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mViewName (LOCATION_ARGS) const ;
  public: class GALGAS_astAbstractViewDeclaration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astViewDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_astAbstractViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astAbstractViewDeclaration (const class cPtr_astAbstractViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAbstractViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAbstractViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewDeclaration : public acStrongPtr_class {

//--- Extension method checkView
  public: virtual void method_checkView (const class GALGAS_string inViewName,
           const class GALGAS_autoLayoutViewDeclarationMap inViewDeclarationMap,
           const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesPropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inObservablePropertyMap,
           const class GALGAS_actionMap inActionMap,
           const class GALGAS_string inReceiverSwiftTypeName,
           const class GALGAS_classMap inClassMap,
           class GALGAS_implicitViewFunctionGenerationList & ioImplicitViewFunctionGenerationList,
           class GALGAS_autoLayoutConfiguratorMap & ioConfiguratorMap,
           class GALGAS_autoLayoutOutletMap & ioOutletMap,
           class GALGAS_abstractViewGeneration & outGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_astAbstractViewDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mViewName ;
  public: inline GALGAS_lstring readProperty_mViewName (void) const {
    return mProperty_mViewName ;
  }

  public: GALGAS_astAbstractViewDeclaration mProperty_mView ;
  public: inline GALGAS_astAbstractViewDeclaration readProperty_mView (void) const {
    return mProperty_mView ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_astViewDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMViewName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewName = inValue ;
  }

  public: inline void setter_setMView (const GALGAS_astAbstractViewDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mView = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astViewDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astViewDeclarationList_2D_element (const GALGAS_lstring & in_mViewName,
                                                    const GALGAS_astAbstractViewDeclaration & in_mView) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astViewDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astViewDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_astAbstractViewDeclaration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astViewDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astViewDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutToolbarItemList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutToolbarItemList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutToolbarItemList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astAutoLayoutToolbarItemList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutToolbarItemList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutToolbarItemList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutToolbarItemList constructor_listWithValue (const class GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutToolbarItemList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutToolbarItemList add_operation (const GALGAS_astAutoLayoutToolbarItemList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutToolbarItemList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astAutoLayoutToolbarItem constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMItemAtIndex (class GALGAS_astAutoLayoutToolbarItem constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItem getter_mItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutToolbarItemList ;
 
} ; // End of GALGAS_astAutoLayoutToolbarItemList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutToolbarItemList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_astAutoLayoutToolbarItem current_mItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astAutoLayoutToolbarItemList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewInstructionDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_astAbstractViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astAbstractViewInstructionDeclaration (const class cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAbstractViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public acStrongPtr_class {

//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GALGAS_autoLayoutViewDeclarationMap inViewDeclarationMap,
           const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesPropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inObservablePropertyMap,
           const class GALGAS_actionMap inActionMap,
           const class GALGAS_string inReceiverSwiftTypeName,
           const class GALGAS_classMap inClassMap,
           class GALGAS_implicitViewFunctionGenerationList & ioImplicitViewFunctionGenerationList,
           class GALGAS_autoLayoutConfiguratorMap & ioConfiguratorMap,
           class GALGAS_autoLayoutOutletMap & ioOutletMap,
           class GALGAS_abstractViewInstructionGeneration & outInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_astAbstractViewInstructionDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedViewInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astComputedViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedViewInstruction (const class cPtr_astComputedViewInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GALGAS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const ;

  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_tableValueBinding readProperty_mTableValueBinding (void) const ;

  public: class GALGAS_runActionDescriptor readProperty_mRunActionDescriptor (void) const ;

  public: class GALGAS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const ;

  public: class GALGAS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const ;

  public: class GALGAS_graphicController readProperty_mGraphicController (void) const ;

  public: class GALGAS_regularBindingList readProperty_mRegularBindingList (void) const ;

  public: class GALGAS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GALGAS_lstring readProperty_mOutletName (void) const ;

  public: class GALGAS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedViewInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedViewInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                          const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                          const class GALGAS_tableValueBinding & inOperand3,
                                                                          const class GALGAS_runActionDescriptor & inOperand4,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand6,
                                                                          const class GALGAS_graphicController & inOperand7,
                                                                          const class GALGAS_regularBindingList & inOperand8,
                                                                          const class GALGAS_lstring & inOperand9,
                                                                          const class GALGAS_lstring & inOperand10,
                                                                          const class GALGAS_bool & inOperand11
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptor (class GALGAS_multipleBindingDescriptor inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphicController (class GALGAS_graphicController inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptor (class GALGAS_multipleBindingDescriptor inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletIsArray (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_astAutoLayoutViewInstructionParameterList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingList (class GALGAS_regularBindingList inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunActionDescriptor (class GALGAS_runActionDescriptor inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBinding (class GALGAS_tableValueBinding inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @astAutoLayoutToolbarItem enum                                       *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutToolbarItem : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutToolbarItem (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_view,
    kEnum_space
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
  public: static GALGAS_astAutoLayoutToolbarItem extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutToolbarItem constructor_space (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutToolbarItem constructor_view (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_astComputedViewInstruction & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAutoLayoutToolbarItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_view (class GALGAS_lstring & outArgument0,
                                             class GALGAS_astComputedViewInstruction & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSpace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_space () const ;

  public: VIRTUAL_IN_DEBUG bool optional_view (class GALGAS_lstring & outOperand0,
                                               class GALGAS_astComputedViewInstruction & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutToolbarItem class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutToolbarItem ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @astAutoLayoutToolbarItem enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_astAutoLayoutToolbarItem_view : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_astComputedViewInstruction mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_astAutoLayoutToolbarItem_view (const GALGAS_lstring inAssociatedValue0,
                                                               const GALGAS_astComputedViewInstruction inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_astAutoLayoutToolbarItem_view (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutToolbarItemList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutToolbarItemList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_astAutoLayoutToolbarItem mProperty_mItem ;
  public: inline GALGAS_astAutoLayoutToolbarItem readProperty_mItem (void) const {
    return mProperty_mItem ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutToolbarItemList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMItem (const GALGAS_astAutoLayoutToolbarItem & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mItem = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astAutoLayoutToolbarItemList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astAutoLayoutToolbarItemList_2D_element (const GALGAS_astAutoLayoutToolbarItem & in_mItem) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutToolbarItemList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutToolbarItemList_2D_element constructor_new (const class GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutToolbarItemList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutOutletLinkerList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutOutletLinkerList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutOutletLinkerList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLinkerName,
                                                 const class GALGAS_lstringlist & in_mOutletNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutOutletLinkerList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutOutletLinkerList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutOutletLinkerList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstringlist & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutOutletLinkerList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutOutletLinkerList add_operation (const GALGAS_astAutoLayoutOutletLinkerList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutOutletLinkerList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLinkerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mOutletNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutOutletLinkerList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutOutletLinkerList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutOutletLinkerList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutOutletLinkerList ;
 
} ; // End of GALGAS_astAutoLayoutOutletLinkerList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutOutletLinkerList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutOutletLinkerList (const GALGAS_astAutoLayoutOutletLinkerList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astAutoLayoutOutletLinkerList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutOutletLinkerList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutOutletLinkerList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLinkerName ;
  public: inline GALGAS_lstring readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GALGAS_lstringlist mProperty_mOutletNameList ;
  public: inline GALGAS_lstringlist readProperty_mOutletNameList (void) const {
    return mProperty_mOutletNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astAutoLayoutOutletLinkerList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutOutletLinkerList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astAutoLayoutOutletLinkerList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astAutoLayoutOutletLinkerList_2D_element (const GALGAS_lstring & in_mLinkerName,
                                                           const GALGAS_lstringlist & in_mOutletNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutOutletLinkerList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutOutletLinkerList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAutoLayoutOutletLinkerList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutOutletLinkerList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2D_element ;

