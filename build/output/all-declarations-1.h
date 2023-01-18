#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentDeclarationAST (const class cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mMainViewName (void) const ;

  public: class GALGAS_outletDeclarationList readProperty_mOutletDeclarationList (void) const ;

  public: class GALGAS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GALGAS_arrayControllerBindingListAST readProperty_mArrayControllerBindingListAST (void) const ;

  public: class GALGAS_astViewDeclarationList readProperty_mViewDeclarationList (void) const ;

  public: class GALGAS_astAutoLayoutToolbarItemList readProperty_mAutoLayoutToolbarItemList (void) const ;

  public: class GALGAS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GALGAS_astAutoLayoutOutletLinkerList readProperty_mOutletLinkerList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_outletDeclarationList & inOperand3,
                                                                                const class GALGAS_lstringlist & inOperand4,
                                                                                const class GALGAS_arrayControllerBindingListAST & inOperand5,
                                                                                const class GALGAS_astViewDeclarationList & inOperand6,
                                                                                const class GALGAS_astAutoLayoutToolbarItemList & inOperand7,
                                                                                const class GALGAS_string & inOperand8,
                                                                                const class GALGAS_astAutoLayoutOutletLinkerList & inOperand9
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (class GALGAS_astAutoLayoutToolbarItemList inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerList (class GALGAS_astAutoLayoutOutletLinkerList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_astViewDeclarationList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {

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

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mMainViewName ;
  public: GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public: GALGAS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: GALGAS_astAutoLayoutToolbarItemList mProperty_mAutoLayoutToolbarItemList ;
  public: GALGAS_string mProperty_mCustomSuperClassName ;
  public: GALGAS_astAutoLayoutOutletLinkerList mProperty_mOutletLinkerList ;

//--- Constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                 const GALGAS_lstring & in_mRootEntityName,
                                                 const GALGAS_lstring & in_mMainViewName,
                                                 const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                 const GALGAS_lstringlist & in_mActionDeclarationList,
                                                 const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                 const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                 const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList,
                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                 const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
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
// Phase 1: @autoLayoutDocumentDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (const class GALGAS_autoLayoutDocumentDeclarationAST & inSource) ;

  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & operator = (const class GALGAS_autoLayoutDocumentDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDocumentDeclarationAST bang_autoLayoutDocumentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutOutletLinkerGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutOutletLinkerGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutOutletLinkerGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mLinkerName,
                                                 const class GALGAS__32_stringlist & in_mOutletNameAndTypeNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutOutletLinkerGenerationList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutOutletLinkerGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutOutletLinkerGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS__32_stringlist & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutOutletLinkerGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS__32_stringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutOutletLinkerGenerationList add_operation (const GALGAS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutOutletLinkerGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS__32_stringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS__32_stringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS__32_stringlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS__32_stringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAndTypeNameListAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS__32_stringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS__32_stringlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLinkerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mOutletNameAndTypeNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletLinkerGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletLinkerGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletLinkerGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutOutletLinkerGenerationList ;
 
} ; // End of GALGAS_autoLayoutOutletLinkerGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutOutletLinkerGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutOutletLinkerGenerationList (const GALGAS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GALGAS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutOutletLinkerGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutOutletLinkerGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutOutletLinkerGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mLinkerName ;
  public: inline GALGAS_string readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GALGAS__32_stringlist mProperty_mOutletNameAndTypeNameList ;
  public: inline GALGAS__32_stringlist readProperty_mOutletNameAndTypeNameList (void) const {
    return mProperty_mOutletNameAndTypeNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutOutletLinkerGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameAndTypeNameList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameAndTypeNameList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (const GALGAS_string & in_mLinkerName,
                                                                  const GALGAS__32_stringlist & in_mOutletNameAndTypeNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutOutletLinkerGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutOutletLinkerGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS__32_stringlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutOutletLinkerGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedOutletMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_decoratedOutletMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_decoratedOutletMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedOutletMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_decoratedOutletMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) ;
  public: GALGAS_decoratedOutletMap & operator = (const GALGAS_decoratedOutletMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedOutletMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedOutletMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedOutletMap constructor_mapWithMapToOverride (const class GALGAS_decoratedOutletMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletTypeNameForKey (class GALGAS_string constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutletTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_decoratedOutletMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_decoratedOutletMap ;
 
} ; // End of GALGAS_decoratedOutletMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedOutletMap : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedOutletMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@decoratedOutletMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_decoratedOutletMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mOutletTypeName ;

//--- Constructor
  public: cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                          const GALGAS_string & in_mOutletTypeName
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
// Phase 1: @decoratedOutletMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedOutletMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mOutletTypeName ;
  public: inline GALGAS_string readProperty_mOutletTypeName (void) const {
    return mProperty_mOutletTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedOutletMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedOutletMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedOutletMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_string & in_mOutletTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedOutletMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedOutletMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_string & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedOutletMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutOutletMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutOutletMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutOutletMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutOutletMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutOutletMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutOutletMap (const GALGAS_autoLayoutOutletMap & inSource) ;
  public: GALGAS_autoLayoutOutletMap & operator = (const GALGAS_autoLayoutOutletMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutOutletMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutOutletMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutOutletMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutOutletMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletTypeNameForKey (class GALGAS_string constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletIsArrayForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAutoLayoutOutletTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mOutletIsArrayForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutOutletMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutOutletMap ;
 
} ; // End of GALGAS_autoLayoutOutletMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutOutletMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutOutletMap (const GALGAS_autoLayoutOutletMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mOutletIsArray (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutOutletMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutOutletMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutOutletMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mAutoLayoutOutletTypeName ;
  public: GALGAS_bool mProperty_mOutletIsArray ;

//--- Constructor
  public: cMapElement_autoLayoutOutletMap (const GALGAS_lstring & inKey,
                                           const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                           const GALGAS_bool & in_mOutletIsArray
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
// Phase 1: @autoLayoutOutletMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutOutletMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mAutoLayoutOutletTypeName ;
  public: inline GALGAS_string readProperty_mAutoLayoutOutletTypeName (void) const {
    return mProperty_mAutoLayoutOutletTypeName ;
  }

  public: GALGAS_bool mProperty_mOutletIsArray ;
  public: inline GALGAS_bool readProperty_mOutletIsArray (void) const {
    return mProperty_mOutletIsArray ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutOutletMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutOutletMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAutoLayoutOutletTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutOutletTypeName = inValue ;
  }

  public: inline void setter_setMOutletIsArray (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletIsArray = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutOutletMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutOutletMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                 const GALGAS_bool & in_mOutletIsArray) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutOutletMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutOutletMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_bool & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutOutletMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutOutletMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionBindingListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionBindingListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_actionBindingListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mOutletName,
                                                 const class GALGAS_string & in_mTargetName,
                                                 const class GALGAS_string & in_mActionName,
                                                 const class GALGAS_string & in_mTargetTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actionBindingListForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionBindingListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_actionBindingListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_string & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration add_operation (const GALGAS_actionBindingListForGeneration & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_actionBindingListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mActionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actionBindingListForGeneration ;
 
} ; // End of GALGAS_actionBindingListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actionBindingListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mActionName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actionBindingListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionBindingListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionBindingListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mOutletName ;
  public: inline GALGAS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GALGAS_string mProperty_mTargetName ;
  public: inline GALGAS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_string mProperty_mActionName ;
  public: inline GALGAS_string readProperty_mActionName (void) const {
    return mProperty_mActionName ;
  }

  public: GALGAS_string mProperty_mTargetTypeName ;
  public: inline GALGAS_string readProperty_mTargetTypeName (void) const {
    return mProperty_mTargetTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actionBindingListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_actionBindingListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMActionName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionName = inValue ;
  }

  public: inline void setter_setMTargetTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_actionBindingListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & in_mOutletName,
                                                            const GALGAS_string & in_mTargetName,
                                                            const GALGAS_string & in_mActionName,
                                                            const GALGAS_string & in_mTargetTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actionBindingListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actionBindingListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_string & inOperand2,
                                                                                         const class GALGAS_string & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionBindingListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingsGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_regularBindingsGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mOutletName,
                                                 const class GALGAS_string & in_mBindingName,
                                                 const class GALGAS_boundObjectList & in_mBoundObjectList,
                                                 const class GALGAS_string & in_mBindingOptionsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_regularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularBindingsGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_regularBindingsGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_boundObjectList & inOperand2,
                                                                                       const class GALGAS_string & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_boundObjectList & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_regularBindingsGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_boundObjectList constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_boundObjectList & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_boundObjectList & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_boundObjectList & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GALGAS_boundObjectList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_boundObjectList & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_boundObjectList & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingsGenerationList ;
 
} ; // End of GALGAS_regularBindingsGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_regularBindingsGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_regularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boundObjectList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boundObjectList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_boundObjectList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_boundObjectList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mBoundObjectString,
                                                 const class GALGAS_propertyKind & in_mKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boundObjectList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boundObjectList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_boundObjectList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_propertyKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_boundObjectList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_propertyKind & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_boundObjectList add_operation (const GALGAS_boundObjectList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_boundObjectList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_propertyKind constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_propertyKind & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_propertyKind & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_propertyKind & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectStringAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_propertyKind & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_propertyKind & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundObjectStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_boundObjectList ;
 
} ; // End of GALGAS_boundObjectList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_boundObjectList : public cGenericAbstractEnumerator {
  public: cEnumerator_boundObjectList (const GALGAS_boundObjectList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mBoundObjectString (LOCATION_ARGS) const ;
  public: class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_boundObjectList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingsGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingsGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mOutletName ;
  public: inline GALGAS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GALGAS_string mProperty_mBindingName ;
  public: inline GALGAS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_boundObjectList mProperty_mBoundObjectList ;
  public: inline GALGAS_boundObjectList readProperty_mBoundObjectList (void) const {
    return mProperty_mBoundObjectList ;
  }

  public: GALGAS_string mProperty_mBindingOptionsString ;
  public: inline GALGAS_string readProperty_mBindingOptionsString (void) const {
    return mProperty_mBindingOptionsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_regularBindingsGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_regularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMBindingName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectList (const GALGAS_boundObjectList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectList = inValue ;
  }

  public: inline void setter_setMBindingOptionsString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionsString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_regularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & in_mOutletName,
                                                           const GALGAS_string & in_mBindingName,
                                                           const GALGAS_boundObjectList & in_mBoundObjectList,
                                                           const GALGAS_string & in_mBindingOptionsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_regularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularBindingsGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_boundObjectList & inOperand2,
                                                                                        const class GALGAS_string & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularBindingsGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multipleBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_multipleBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mOutletName,
                                                 const class GALGAS_string & in_mBindingName,
                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multipleBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multipleBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_multipleBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList add_operation (const GALGAS_multipleBindingGenerationList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_multipleBindingGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_multipleBindingGenerationList ;
 
} ; // End of GALGAS_multipleBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_multipleBindingGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_multipleBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionForGeneration : public acStrongPtr_class {

//--- Extension getter expressionString
  public: virtual class GALGAS_string getter_expressionString (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multipleBindingGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mOutletName ;
  public: inline GALGAS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GALGAS_string mProperty_mBindingName ;
  public: inline GALGAS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;
  public: inline GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBoundObjectExpression (void) const {
    return mProperty_mBoundObjectExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_multipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMBindingName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectExpression (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_multipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & in_mOutletName,
                                                           const GALGAS_string & in_mBindingName,
                                                           const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multipleBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multipleBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_tableViewBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTableValueBindingOutletName,
                                                 const class GALGAS_string & in_mTableValueBindingControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_tableViewBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewBindingGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                                   class GALGAS_uint constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                                               class GALGAS_uint constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTableValueBindingOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewBindingGenerationList ;
 
} ; // End of GALGAS_tableViewBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tableViewBindingGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_tableViewBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_string mProperty_mTableValueBindingOutletName ;
  public: inline GALGAS_string readProperty_mTableValueBindingOutletName (void) const {
    return mProperty_mTableValueBindingOutletName ;
  }

  public: GALGAS_string mProperty_mTableValueBindingControllerName ;
  public: inline GALGAS_string readProperty_mTableValueBindingControllerName (void) const {
    return mProperty_mTableValueBindingControllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tableViewBindingGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_tableViewBindingGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTableValueBindingOutletName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingOutletName = inValue ;
  }

  public: inline void setter_setMTableValueBindingControllerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingControllerName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_tableViewBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & in_mTableValueBindingOutletName,
                                                            const GALGAS_string & in_mTableValueBindingControllerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_string & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public: GALGAS_ebViewGraphicControllerBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mEBViewOutletName,
                                                 const class GALGAS_string & in_mArrayControllerControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ebViewGraphicControllerBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ebViewGraphicControllerBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ebViewGraphicControllerBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                      const class GALGAS_string & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerControllerNameAtIndex (class GALGAS_string constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewOutletNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mArrayControllerControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEBViewOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ebViewGraphicControllerBindingGenerationList ;
 
} ; // End of GALGAS_ebViewGraphicControllerBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ebViewGraphicControllerBindingGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_string mProperty_mEBViewOutletName ;
  public: inline GALGAS_string readProperty_mEBViewOutletName (void) const {
    return mProperty_mEBViewOutletName ;
  }

  public: GALGAS_string mProperty_mArrayControllerControllerName ;
  public: inline GALGAS_string readProperty_mArrayControllerControllerName (void) const {
    return mProperty_mArrayControllerControllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEBViewOutletName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEBViewOutletName = inValue ;
  }

  public: inline void setter_setMArrayControllerControllerName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArrayControllerControllerName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & in_mEBViewOutletName,
                                                                          const GALGAS_string & in_mArrayControllerControllerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                       const class GALGAS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @viewGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_viewGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_viewGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_viewGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mViewName,
                                                 const class GALGAS_abstractViewGeneration & in_mView
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_viewGenerationList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_viewGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_viewGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_abstractViewGeneration & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_viewGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_abstractViewGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_viewGenerationList add_operation (const GALGAS_viewGenerationList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_viewGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_abstractViewGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_abstractViewGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_abstractViewGeneration & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_abstractViewGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewAtIndex (class GALGAS_abstractViewGeneration constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_abstractViewGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_abstractViewGeneration & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractViewGeneration getter_mViewAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mViewNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_viewGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_viewGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_viewGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_viewGenerationList ;
 
} ; // End of GALGAS_viewGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_viewGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_viewGenerationList (const GALGAS_viewGenerationList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mViewName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractViewGeneration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_viewGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractViewGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractViewGeneration (const class cPtr_abstractViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractViewGeneration : public acStrongPtr_class {

//--- Extension getter generateViewBuilder
  public: virtual class GALGAS_string getter_generateViewBuilder (const class GALGAS_bool inPreferences,
           const class GALGAS_string inViewName,
           C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractViewGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @viewGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_viewGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mViewName ;
  public: inline GALGAS_string readProperty_mViewName (void) const {
    return mProperty_mViewName ;
  }

  public: GALGAS_abstractViewGeneration mProperty_mView ;
  public: inline GALGAS_abstractViewGeneration readProperty_mView (void) const {
    return mProperty_mView ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_viewGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMViewName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewName = inValue ;
  }

  public: inline void setter_setMView (const GALGAS_abstractViewGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mView = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_viewGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_viewGenerationList_2D_element (const GALGAS_string & in_mViewName,
                                                const GALGAS_abstractViewGeneration & in_mView) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_viewGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_viewGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_abstractViewGeneration & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_viewGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_viewGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutToolbarItemGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutToolbarItemGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutToolbarItemGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutToolbarItemGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_autoLayoutToolbarItemGeneration & in_mItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutToolbarItemGenerationList extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutToolbarItemGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutToolbarItemGenerationList constructor_listWithValue (const class GALGAS_autoLayoutToolbarItemGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutToolbarItemGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_autoLayoutToolbarItemGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutToolbarItemGenerationList add_operation (const GALGAS_autoLayoutToolbarItemGenerationList & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutToolbarItemGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_autoLayoutToolbarItemGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_autoLayoutToolbarItemGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_autoLayoutToolbarItemGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_autoLayoutToolbarItemGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMItemAtIndex (class GALGAS_autoLayoutToolbarItemGeneration constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_autoLayoutToolbarItemGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_autoLayoutToolbarItemGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutToolbarItemGeneration getter_mItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutToolbarItemGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutToolbarItemGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutToolbarItemGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutToolbarItemGenerationList ;
 
} ; // End of GALGAS_autoLayoutToolbarItemGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutToolbarItemGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGenerationList & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_autoLayoutToolbarItemGeneration current_mItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutToolbarItemGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractViewInstructionGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractViewInstructionGeneration (const class cPtr_abstractViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @autoLayoutToolbarItemGeneration enum                                   *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutToolbarItemGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutToolbarItemGeneration (void) ;

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
  public: static GALGAS_autoLayoutToolbarItemGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutToolbarItemGeneration constructor_space (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutToolbarItemGeneration constructor_view (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_abstractViewInstructionGeneration & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutToolbarItemGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_view (class GALGAS_string & outArgument0,
                                             class GALGAS_abstractViewInstructionGeneration & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSpace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_space () const ;

  public: VIRTUAL_IN_DEBUG bool optional_view (class GALGAS_string & outOperand0,
                                               class GALGAS_abstractViewInstructionGeneration & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutToolbarItemGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutToolbarItemGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutToolbarItemGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_abstractViewInstructionGeneration mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view (const GALGAS_string inAssociatedValue0,
                                                                      const GALGAS_abstractViewInstructionGeneration inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutToolbarItemGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutToolbarItemGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_autoLayoutToolbarItemGeneration mProperty_mItem ;
  public: inline GALGAS_autoLayoutToolbarItemGeneration readProperty_mItem (void) const {
    return mProperty_mItem ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMItem (const GALGAS_autoLayoutToolbarItemGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mItem = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutToolbarItemGenerationList_2D_element (const GALGAS_autoLayoutToolbarItemGeneration & in_mItem) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutToolbarItemGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutToolbarItemGenerationList_2D_element constructor_new (const class GALGAS_autoLayoutToolbarItemGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutToolbarItemGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitViewFunctionGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicitViewFunctionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_implicitViewFunctionGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_implicitViewFunctionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitViewFunctionGenerationList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicitViewFunctionGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_implicitViewFunctionGenerationList constructor_listWithValue (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_implicitViewFunctionGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_implicitViewFunctionGenerationList add_operation (const GALGAS_implicitViewFunctionGenerationList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_implicitViewFunctionGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitViewFunctionGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitViewFunctionGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitViewFunctionGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_implicitViewFunctionGenerationList ;
 
} ; // End of GALGAS_implicitViewFunctionGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_implicitViewFunctionGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_implicitViewFunctionGenerationList (const GALGAS_implicitViewFunctionGenerationList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_implicitViewFunctionGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractViewInstructionGeneration : public acStrongPtr_class {

//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractViewInstructionGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitViewFunctionGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicitViewFunctionGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GALGAS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_implicitViewFunctionGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_implicitViewFunctionGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_implicitViewFunctionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitViewFunctionGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicitViewFunctionGenerationList_2D_element constructor_new (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicitViewFunctionGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicitViewFunctionGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutConfiguratorMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutConfiguratorMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutConfiguratorMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutConfiguratorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutConfiguratorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutConfiguratorMap (const GALGAS_autoLayoutConfiguratorMap & inSource) ;
  public: GALGAS_autoLayoutConfiguratorMap & operator = (const GALGAS_autoLayoutConfiguratorMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutConfiguratorMap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutConfiguratorMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutConfiguratorMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutConfiguratorMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletTypeNameForKey (class GALGAS_string constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAutoLayoutOutletTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutConfiguratorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutConfiguratorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutConfiguratorMap ;
 
} ; // End of GALGAS_autoLayoutConfiguratorMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutConfiguratorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutConfiguratorMap (const GALGAS_autoLayoutConfiguratorMap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutConfiguratorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutConfiguratorMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutConfiguratorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mAutoLayoutOutletTypeName ;

//--- Constructor
  public: cMapElement_autoLayoutConfiguratorMap (const GALGAS_lstring & inKey,
                                                 const GALGAS_string & in_mAutoLayoutOutletTypeName
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
// Phase 1: @autoLayoutConfiguratorMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutConfiguratorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mAutoLayoutOutletTypeName ;
  public: inline GALGAS_string readProperty_mAutoLayoutOutletTypeName (void) const {
    return mProperty_mAutoLayoutOutletTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutConfiguratorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutConfiguratorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAutoLayoutOutletTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutOutletTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutConfiguratorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutConfiguratorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_string & in_mAutoLayoutOutletTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutConfiguratorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutConfiguratorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutConfiguratorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutConfiguratorMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentFileGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentFileGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentFileGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentFileGeneration (const class cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mDocumentName (void) const ;

  public: class GALGAS_string readProperty_mRootEntityName (void) const ;

  public: class GALGAS_string readProperty_mMainViewName (void) const ;

  public: class GALGAS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GALGAS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GALGAS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

  public: class GALGAS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GALGAS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GALGAS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GALGAS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GALGAS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GALGAS_viewGenerationList readProperty_mViewDeclarationList (void) const ;

  public: class GALGAS_autoLayoutToolbarItemGenerationList readProperty_mAutoLayoutToolbarItemGenerationList (void) const ;

  public: class GALGAS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GALGAS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GALGAS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GALGAS_autoLayoutOutletLinkerGenerationList readProperty_mOutletLinkerGenerationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentFileGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_propertyGenerationList & inOperand3,
                                                                                const class GALGAS_decoratedOutletMap & inOperand4,
                                                                                const class GALGAS_autoLayoutOutletMap & inOperand5,
                                                                                const class GALGAS_actionBindingListForGeneration & inOperand6,
                                                                                const class GALGAS_regularBindingsGenerationList & inOperand7,
                                                                                const class GALGAS_multipleBindingGenerationList & inOperand8,
                                                                                const class GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                const class GALGAS_viewGenerationList & inOperand11,
                                                                                const class GALGAS_autoLayoutToolbarItemGenerationList & inOperand12,
                                                                                const class GALGAS_implicitViewFunctionGenerationList & inOperand13,
                                                                                const class GALGAS_autoLayoutConfiguratorMap & inOperand14,
                                                                                const class GALGAS_string & inOperand15,
                                                                                const class GALGAS_autoLayoutOutletLinkerGenerationList & inOperand16
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletMap (class GALGAS_autoLayoutOutletMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemGenerationList (class GALGAS_autoLayoutToolbarItemGenerationList inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorMap (class GALGAS_autoLayoutConfiguratorMap inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (class GALGAS_propertyGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplicitViewFunctionGenerationList (class GALGAS_implicitViewFunctionGenerationList inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerGenerationList (class GALGAS_autoLayoutOutletLinkerGenerationList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (class GALGAS_actionBindingListForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_viewGenerationList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mDocumentName ;
  public: GALGAS_string mProperty_mRootEntityName ;
  public: GALGAS_string mProperty_mMainViewName ;
  public: GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GALGAS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GALGAS_autoLayoutToolbarItemGenerationList mProperty_mAutoLayoutToolbarItemGenerationList ;
  public: GALGAS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GALGAS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GALGAS_string mProperty_mCustomSuperClassName ;
  public: GALGAS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                 const GALGAS_string & in_mRootEntityName,
                                                 const GALGAS_string & in_mMainViewName,
                                                 const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                 const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                 const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
                                                 const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                 const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
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
// Phase 1: @autoLayoutDocumentFileGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentFileGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentFileGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak (const class GALGAS_autoLayoutDocumentFileGeneration & inSource) ;

  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak & operator = (const class GALGAS_autoLayoutDocumentFileGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentFileGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentFileGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentFileGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibDescriptorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_mainXibDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_mainXibLineDescriptorList & in_mLine
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mainXibDescriptorList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mainXibDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_mainXibDescriptorList constructor_listWithValue (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mainXibDescriptorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_mainXibDescriptorList add_operation (const GALGAS_mainXibDescriptorList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_mainXibDescriptorList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mainXibLineDescriptorList constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLineAtIndex (class GALGAS_mainXibLineDescriptorList constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_mLineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibDescriptorList ;
 
} ; // End of GALGAS_mainXibDescriptorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_mainXibDescriptorList : public cGenericAbstractEnumerator {
  public: cEnumerator_mainXibDescriptorList (const GALGAS_mainXibDescriptorList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_mainXibDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibLineDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_mainXibLineDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_mainXibElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mainXibLineDescriptorList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mainXibLineDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_mainXibLineDescriptorList constructor_listWithValue (const class GALGAS_mainXibElement & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mainXibElement & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_mainXibLineDescriptorList add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_mainXibLineDescriptorList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mainXibElement constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mainXibElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mainXibElement & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mainXibElement & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_mainXibElement constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_mainXibElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_mainXibElement & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibLineDescriptorList ;
 
} ; // End of GALGAS_mainXibLineDescriptorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_mainXibLineDescriptorList : public cGenericAbstractEnumerator {
  public: cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_mainXibLineDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibDescriptorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_mainXibLineDescriptorList mProperty_mLine ;
  public: inline GALGAS_mainXibLineDescriptorList readProperty_mLine (void) const {
    return mProperty_mLine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mainXibDescriptorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_mainXibDescriptorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLine (const GALGAS_mainXibLineDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLine = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_mainXibDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & in_mLine) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mainXibDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mainXibDescriptorList_2D_element constructor_new (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_prefsDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_prefsDeclarationAST (const class cPtr_prefsDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_prefDeclaration readProperty_mDeclaration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_prefDeclaration & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDeclaration (class GALGAS_prefDeclaration inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefDeclaration struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: inline GALGAS_outletDeclarationList readProperty_mOutletDeclarationList (void) const {
    return mProperty_mOutletDeclarationList ;
  }

  public: GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public: inline GALGAS_simpleStoredPropertyList readProperty_mSimpleStoredAttributeList (void) const {
    return mProperty_mSimpleStoredAttributeList ;
  }

  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: inline GALGAS_lstringlist readProperty_mActionDeclarationList (void) const {
    return mProperty_mActionDeclarationList ;
  }

  public: GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: inline GALGAS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const {
    return mProperty_mExternSwiftFunctionList ;
  }

  public: GALGAS_stringset mProperty_mSignatureList ;
  public: inline GALGAS_stringset readProperty_mSignatureList (void) const {
    return mProperty_mSignatureList ;
  }

  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GALGAS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GALGAS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: inline GALGAS_astViewDeclarationList readProperty_mViewDeclarationList (void) const {
    return mProperty_mViewDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_prefDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletDeclarationList (const GALGAS_outletDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletDeclarationList = inValue ;
  }

  public: inline void setter_setMSimpleStoredAttributeList (const GALGAS_simpleStoredPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleStoredAttributeList = inValue ;
  }

  public: inline void setter_setMActionDeclarationList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionDeclarationList = inValue ;
  }

  public: inline void setter_setMExternSwiftFunctionList (const GALGAS_externSwiftFunctionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionList = inValue ;
  }

  public: inline void setter_setMSignatureList (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureList = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GALGAS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMViewDeclarationList (const GALGAS_astViewDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewDeclarationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_prefDeclaration (void) ;

//--------------------------------- Native constructor
  public: GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                  const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                  const GALGAS_lstringlist & in_mActionDeclarationList,
                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                  const GALGAS_stringset & in_mSignatureList,
                                  const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                  const GALGAS_astViewDeclarationList & in_mViewDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefDeclaration extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefDeclaration constructor_new (const class GALGAS_outletDeclarationList & inOperand0,
                                                               const class GALGAS_simpleStoredPropertyList & inOperand1,
                                                               const class GALGAS_lstringlist & inOperand2,
                                                               const class GALGAS_externSwiftFunctionList & inOperand3,
                                                               const class GALGAS_stringset & inOperand4,
                                                               const class GALGAS_mainXibDescriptorList & inOperand5,
                                                               const class GALGAS_astViewDeclarationList & inOperand6
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

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

//--- Properties
  public: GALGAS_prefDeclaration mProperty_mDeclaration ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                    const GALGAS_prefDeclaration & in_mDeclaration
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
// Phase 1: @prefsDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_prefsDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefsDeclarationAST_2D_weak (const class GALGAS_prefsDeclarationAST & inSource) ;

  public: GALGAS_prefsDeclarationAST_2D_weak & operator = (const class GALGAS_prefsDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefsDeclarationAST bang_prefsDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @preferencesForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_preferencesForGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_preferencesForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_preferencesForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_preferencesForGeneration (const class cPtr_preferencesForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_propertyGenerationList readProperty_mPropertyListForGeneration (void) const ;

  public: class GALGAS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const ;

  public: class GALGAS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GALGAS_multipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_actionBindingListForGeneration readProperty_mActionBindingListForGeneration (void) const ;

  public: class GALGAS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GALGAS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const ;

  public: class GALGAS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GALGAS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GALGAS_viewGenerationList readProperty_mViewGenerationList (void) const ;

  public: class GALGAS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GALGAS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GALGAS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_preferencesForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_preferencesForGeneration constructor_new (const class GALGAS_propertyGenerationList & inOperand0,
                                                                        const class GALGAS_mainXibDescriptorList & inOperand1,
                                                                        const class GALGAS_regularBindingsGenerationList & inOperand2,
                                                                        const class GALGAS_multipleBindingGenerationList & inOperand3,
                                                                        const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                        const class GALGAS_decoratedOutletMap & inOperand5,
                                                                        const class GALGAS_externSwiftFunctionList & inOperand6,
                                                                        const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                        const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                        const class GALGAS_viewGenerationList & inOperand9,
                                                                        const class GALGAS_implicitViewFunctionGenerationList & inOperand10,
                                                                        const class GALGAS_autoLayoutConfiguratorMap & inOperand11,
                                                                        const class GALGAS_autoLayoutOutletMap & inOperand12
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionBindingListForGeneration (class GALGAS_actionBindingListForGeneration inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletMap (class GALGAS_autoLayoutOutletMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorMap (class GALGAS_autoLayoutConfiguratorMap inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionList (class GALGAS_externSwiftFunctionList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplicitViewFunctionGenerationList (class GALGAS_implicitViewFunctionGenerationList inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainXibDescriptorList (class GALGAS_mainXibDescriptorList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyListForGeneration (class GALGAS_propertyGenerationList inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewGenerationList (class GALGAS_viewGenerationList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @preferencesForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GALGAS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GALGAS_viewGenerationList mProperty_mViewGenerationList ;
  public: GALGAS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GALGAS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GALGAS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;

//--- Constructor
  public: cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                         const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                         const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                         const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                         const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                         const GALGAS_decoratedOutletMap & in_mOutletMap,
                                         const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                         const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                         const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                         const GALGAS_viewGenerationList & in_mViewGenerationList,
                                         const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                         const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                         const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap
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
// Phase 1: @preferencesForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_preferencesForGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_preferencesForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_preferencesForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_preferencesForGeneration_2D_weak (const class GALGAS_preferencesForGeneration & inSource) ;

  public: GALGAS_preferencesForGeneration_2D_weak & operator = (const class GALGAS_preferencesForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_preferencesForGeneration bang_preferencesForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_preferencesForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_preferencesForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_preferencesForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_preferencesForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @autoLayoutClassParameterType enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutClassParameterType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutClassParameterType (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_typeString,
    kEnum_typeStringArray,
    kEnum_typeInt,
    kEnum_typeBool,
    kEnum_typeView,
    kEnum_menuItem,
    kEnum_entity,
    kEnum_typeEnum
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
  public: static GALGAS_autoLayoutClassParameterType extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutClassParameterType constructor_entity (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_menuItem (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeBool (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeEnum (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeInt (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeString (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeStringArray (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutClassParameterType constructor_typeView (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutClassParameterType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_typeEnum (class GALGAS_lstring & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeEnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeStringArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_entity () const ;

  public: VIRTUAL_IN_DEBUG bool optional_menuItem () const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeBool () const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeEnum (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeInt () const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeString () const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeStringArray () const ;

  public: VIRTUAL_IN_DEBUG bool optional_typeView () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutClassParameterType class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutClassParameterType enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum (const GALGAS_lstring inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutClassParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutClassParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mParameterName ;
  public: inline GALGAS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GALGAS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GALGAS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutClassParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GALGAS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutClassParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutClassParameterList_2D_element (const GALGAS_lstring & in_mParameterName,
                                                          const GALGAS_autoLayoutClassParameterType & in_mParameterType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutClassParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutClassParameterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_autoLayoutClassParameterType & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutClassParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutClassParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutViewClassDeclarationAST (const class cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mUserDefined (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_bool readProperty_mHasRunAction (void) const ;

  public: class GALGAS_bool readProperty_mHasEnabled (void) const ;

  public: class GALGAS_bool readProperty_mHandlesTableValueBinding (void) const ;

  public: class GALGAS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;

  public: class GALGAS_bool readProperty_mHasHidden (void) const ;

  public: class GALGAS_autoLayoutClassParameterList readProperty_mParameterList (void) const ;

  public: class GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4,
                                                                                 const class GALGAS_bool & inOperand5,
                                                                                 const class GALGAS_bool & inOperand6,
                                                                                 const class GALGAS_bool & inOperand7,
                                                                                 const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                 const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (class GALGAS_astAutoLayoutViewFunctionMap inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_autoLayoutClassParameterList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {

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
  public: GALGAS_bool mProperty_mUserDefined ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHasRunAction ;
  public: GALGAS_bool mProperty_mHasEnabled ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mHasHidden ;
  public: GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_bool & in_mUserDefined,
                                                  const GALGAS_lstring & in_mSuperClassName,
                                                  const GALGAS_bool & in_mHasRunAction,
                                                  const GALGAS_bool & in_mHasEnabled,
                                                  const GALGAS_bool & in_mHandlesTableValueBinding,
                                                  const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                  const GALGAS_bool & in_mHasHidden,
                                                  const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                  const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
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
// Phase 1: @autoLayoutViewClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (const class GALGAS_autoLayoutViewClassDeclarationAST & inSource) ;

  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & operator = (const class GALGAS_autoLayoutViewClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutViewClassDeclarationAST bang_autoLayoutViewClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@autoLayoutClassParameterType string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_autoLayoutClassParameterType & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mModelTypeName ;
  public: inline GALGAS_lstring readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

  public: GALGAS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GALGAS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & in_mModelTypeName,
                                                                      const GALGAS_bool & in_mModelShouldBeWritableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassBindingSpecificationModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOptionName ;
  public: inline GALGAS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GALGAS_lstring mProperty_mOptionTypeName ;
  public: inline GALGAS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controllerBindingOptionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controllerBindingOptionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controllerBindingOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & in_mOptionName,
                                                         const GALGAS_lstring & in_mOptionTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controllerBindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controllerBindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionDecoratedList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionDecoratedList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_controllerBindingOptionDecoratedList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeKind & in_mOptionType,
                                                 const class GALGAS_lstring & in_mOptionName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controllerBindingOptionDecoratedList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controllerBindingOptionDecoratedList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controllerBindingOptionDecoratedList constructor_listWithValue (const class GALGAS_typeKind & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionDecoratedList add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controllerBindingOptionDecoratedList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mOptionTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionDecoratedList ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controllerBindingOptionDecoratedList : public cGenericAbstractEnumerator {
  public: cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controllerBindingOptionDecoratedList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_outletBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeKind & in_mModelType,
                                                 const class GALGAS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingSpecificationModelList extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletBindingSpecificationModelList constructor_listWithValue (const class GALGAS_typeKind & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0,
                                                     const class GALGAS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletBindingSpecificationModelList add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletBindingSpecificationModelList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GALGAS_bool constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mModelTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletBindingSpecificationModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutViewBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--- Constructor
  public: cMapElement_autoLayoutViewBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                             const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                             const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
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
// Phase 1: @autoLayoutViewBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: inline GALGAS_outletBindingSpecificationModelList readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;
  public: inline GALGAS_controllerBindingOptionDecoratedList readProperty_mControllerBindingOptionList (void) const {
    return mProperty_mControllerBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GALGAS_controllerBindingOptionDecoratedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                   const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                const class GALGAS_controllerBindingOptionDecoratedList & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewBindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_typeKind mProperty_mModelType ;
  public: inline GALGAS_typeKind readProperty_mModelType (void) const {
    return mProperty_mModelType ;
  }

  public: GALGAS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GALGAS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelType (const GALGAS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelType = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletBindingSpecificationModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & in_mModelType,
                                                                 const GALGAS_bool & in_mModelShouldBeWritableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingSpecificationModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingSpecificationModelList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public: GALGAS_typeKind mProperty_mOptionType ;
  public: inline GALGAS_typeKind readProperty_mOptionType (void) const {
    return mProperty_mOptionType ;
  }

  public: GALGAS_lstring mProperty_mOptionName ;
  public: inline GALGAS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionType (const GALGAS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionType = inValue ;
  }

  public: inline void setter_setMOptionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & in_mOptionType,
                                                                  const GALGAS_lstring & in_mOptionName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controllerBindingOptionDecoratedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controllerBindingOptionDecoratedList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controllerBindingOptionDecoratedList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewDeclaration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_astAbstractViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astAbstractViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astAbstractViewDeclaration_2D_weak (const class GALGAS_astAbstractViewDeclaration & inSource) ;

  public: GALGAS_astAbstractViewDeclaration_2D_weak & operator = (const class GALGAS_astAbstractViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astAbstractViewDeclaration bang_astAbstractViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAbstractViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAbstractViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAbstractViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionCallList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionCallList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutViewFunctionCallList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFunctionName,
                                                 const class GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutViewFunctionCallList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutViewFunctionCallList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutViewFunctionCallList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutViewFunctionCallList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList add_operation (const GALGAS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutViewFunctionCallList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewFunctionCallList ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionCallList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionCallList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astAutoLayoutViewFunctionCallList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewInstructionParameterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewInstructionParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutViewInstructionParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mParameterName,
                                                 const class GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                 const class GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutViewInstructionParameterList extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutViewInstructionParameterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astAutoLayoutViewInstructionParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                   const class GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_autoLayoutClassParameterType & inOperand1,
                                                     const class GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewInstructionParameterList add_operation (const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_autoLayoutClassParameterType constinArgument1,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                 class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                      class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_astAutoLayoutViewInstructionParameterValue constinArgument0,
                                                             class GALGAS_uint constinArgument1,
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
                                              class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_autoLayoutClassParameterType & outArgument1,
                                             class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterValue getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewInstructionParameterList ;
 
} ; // End of GALGAS_astAutoLayoutViewInstructionParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewInstructionParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GALGAS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionCallList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionCallList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: inline GALGAS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: inline GALGAS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astAutoLayoutViewFunctionCallList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astAutoLayoutViewFunctionCallList_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                               const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAutoLayoutViewFunctionCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAutoLayoutViewFunctionCallList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionCallList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astHorizontalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHorizontalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astHorizontalStackViewDeclaration (const class cPtr_astHorizontalStackViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHorizontalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHorizontalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHorizontalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public: cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
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
// Phase 1: @astHorizontalStackViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHorizontalStackViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak (const class GALGAS_astHorizontalStackViewDeclaration & inSource) ;

  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak & operator = (const class GALGAS_astHorizontalStackViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astHorizontalStackViewDeclaration bang_astHorizontalStackViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHorizontalStackViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHorizontalStackViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astVerticalStackViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVerticalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astVerticalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astVerticalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astVerticalStackViewDeclaration (const class cPtr_astVerticalStackViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astVerticalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astVerticalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astVerticalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVerticalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astVerticalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astVerticalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public: cPtr_astVerticalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
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
// Phase 1: @astVerticalStackViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVerticalStackViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astVerticalStackViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astVerticalStackViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astVerticalStackViewDeclaration_2D_weak (const class GALGAS_astVerticalStackViewDeclaration & inSource) ;

  public: GALGAS_astVerticalStackViewDeclaration_2D_weak & operator = (const class GALGAS_astVerticalStackViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astVerticalStackViewDeclaration bang_astVerticalStackViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astVerticalStackViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astVerticalStackViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astVerticalStackViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVerticalStackViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewInstructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astViewInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astViewInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astViewInstructionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astViewInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astViewInstructionList constructor_listWithValue (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astViewInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList add_operation (const GALGAS_astViewInstructionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astViewInstructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astAbstractViewInstructionDeclaration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_astAbstractViewInstructionDeclaration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astViewInstructionList ;
 
} ; // End of GALGAS_astViewInstructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astViewInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_astViewInstructionList (const GALGAS_astViewInstructionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astViewInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_astAbstractViewInstructionDeclaration mProperty_mInstruction ;
  public: inline GALGAS_astAbstractViewInstructionDeclaration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_astViewInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_astAbstractViewInstructionDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astViewInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astViewInstructionList_2D_element (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astViewInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astViewInstructionList_2D_element constructor_new (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astViewInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astViewInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astNewStackViewDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astNewStackViewDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_astNewStackViewDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_astNewStackViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInstanciedStackViewName,
                                                 const class GALGAS_lstring & in_mTypeStackViewName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astNewStackViewDeclarationList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astNewStackViewDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_astNewStackViewDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astNewStackViewDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_astNewStackViewDeclarationList add_operation (const GALGAS_astNewStackViewDeclarationList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astNewStackViewDeclarationList_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMInstanciedStackViewNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeStackViewNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInstanciedStackViewNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeStackViewNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astNewStackViewDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astNewStackViewDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astNewStackViewDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astNewStackViewDeclarationList ;
 
} ; // End of GALGAS_astNewStackViewDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astNewStackViewDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_astNewStackViewDeclarationList (const GALGAS_astNewStackViewDeclarationList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_astNewStackViewDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astNewStackViewDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astNewStackViewDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInstanciedStackViewName ;
  public: inline GALGAS_lstring readProperty_mInstanciedStackViewName (void) const {
    return mProperty_mInstanciedStackViewName ;
  }

  public: GALGAS_lstring mProperty_mTypeStackViewName ;
  public: inline GALGAS_lstring readProperty_mTypeStackViewName (void) const {
    return mProperty_mTypeStackViewName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astNewStackViewDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_astNewStackViewDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstanciedStackViewName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstanciedStackViewName = inValue ;
  }

  public: inline void setter_setMTypeStackViewName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeStackViewName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astNewStackViewDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astNewStackViewDeclarationList_2D_element (const GALGAS_lstring & in_mInstanciedStackViewName,
                                                            const GALGAS_lstring & in_mTypeStackViewName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astNewStackViewDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astNewStackViewDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astNewStackViewDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astNewStackViewDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedHorizontalViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedHorizontalViewDeclaration (const class cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedHorizontalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedHorizontalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                    const class GALGAS_astViewInstructionList & inOperand1,
                                                                                    const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNewStackViewDeclarationList (class GALGAS_astNewStackViewDeclarationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GALGAS_astViewInstructionList & in_mInstructionList,
                                                     const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
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
// Phase 1: @astComputedHorizontalViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedHorizontalViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak (const class GALGAS_astComputedHorizontalViewDeclaration & inSource) ;

  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak & operator = (const class GALGAS_astComputedHorizontalViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astComputedHorizontalViewDeclaration bang_astComputedHorizontalViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedHorizontalViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedHorizontalViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedVerticalViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedVerticalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astComputedVerticalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedVerticalViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedVerticalViewDeclaration (const class cPtr_astComputedVerticalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedVerticalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedVerticalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                  const class GALGAS_astViewInstructionList & inOperand1,
                                                                                  const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNewStackViewDeclarationList (class GALGAS_astNewStackViewDeclarationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedVerticalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedVerticalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedVerticalViewDeclaration : public cPtr_astAbstractViewDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_astComputedVerticalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                   const GALGAS_astViewInstructionList & in_mInstructionList,
                                                   const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
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
// Phase 1: @astComputedVerticalViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedVerticalViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astComputedVerticalViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedVerticalViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astComputedVerticalViewDeclaration_2D_weak (const class GALGAS_astComputedVerticalViewDeclaration & inSource) ;

  public: GALGAS_astComputedVerticalViewDeclaration_2D_weak & operator = (const class GALGAS_astComputedVerticalViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astComputedVerticalViewDeclaration bang_astComputedVerticalViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedVerticalViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedVerticalViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedVerticalViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedVerticalViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewInstructionDeclaration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_astAbstractViewInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astAbstractViewInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astAbstractViewInstructionDeclaration_2D_weak (const class GALGAS_astAbstractViewInstructionDeclaration & inSource) ;

  public: GALGAS_astAbstractViewInstructionDeclaration_2D_weak & operator = (const class GALGAS_astAbstractViewInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astAbstractViewInstructionDeclaration bang_astAbstractViewInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astAbstractViewInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astAbstractViewInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astAbstractViewInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astSeparatorInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astSeparatorInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astSeparatorInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astSeparatorInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astSeparatorInstructionDeclaration (const class cPtr_astSeparatorInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astSeparatorInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astSeparatorInstructionDeclaration constructor_new (const class GALGAS_bool & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astSeparatorInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setHorizontal (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astSeparatorInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astSeparatorInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astSeparatorInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_astSeparatorInstructionDeclaration (const GALGAS_bool & in_horizontal
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
// Phase 1: @astSeparatorInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astSeparatorInstructionDeclaration_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astSeparatorInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astSeparatorInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astSeparatorInstructionDeclaration_2D_weak (const class GALGAS_astSeparatorInstructionDeclaration & inSource) ;

  public: GALGAS_astSeparatorInstructionDeclaration_2D_weak & operator = (const class GALGAS_astSeparatorInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astSeparatorInstructionDeclaration bang_astSeparatorInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astSeparatorInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astSeparatorInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astSeparatorInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astSeparatorInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astDividerInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astDividerInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astDividerInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astDividerInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astDividerInstructionDeclaration (const class cPtr_astDividerInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astDividerInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astDividerInstructionDeclaration constructor_new (const class GALGAS_bool & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astDividerInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setHorizontal (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDividerInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astDividerInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astDividerInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_astDividerInstructionDeclaration (const GALGAS_bool & in_horizontal
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
// Phase 1: @astDividerInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astDividerInstructionDeclaration_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astDividerInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astDividerInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astDividerInstructionDeclaration_2D_weak (const class GALGAS_astDividerInstructionDeclaration & inSource) ;

  public: GALGAS_astDividerInstructionDeclaration_2D_weak & operator = (const class GALGAS_astDividerInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astDividerInstructionDeclaration bang_astDividerInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astDividerInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astDividerInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astDividerInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDividerInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @optionalHiddenBinding enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionalHiddenBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_optionalHiddenBinding (void) ;

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
  public: static GALGAS_optionalHiddenBinding extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalHiddenBinding constructor_binding (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_optionalHiddenBinding constructor_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalHiddenBinding & inOperand) const ;

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
 
} ; // End of GALGAS_optionalHiddenBinding class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @optionalHiddenBinding enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_optionalHiddenBinding_binding : public cEnumAssociatedValues {
  public: const GALGAS_abstractBooleanMultipleBindingExpressionAST mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_optionalHiddenBinding_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_optionalHiddenBinding_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHStackViewInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHStackViewInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astHStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astHStackViewInstructionDeclaration (const class cPtr_astHStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHStackViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHStackViewInstructionDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                   const class GALGAS_astViewInstructionList & inOperand1,
                                                                                   const class GALGAS_optionalHiddenBinding & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalHiddenBinding (class GALGAS_optionalHiddenBinding inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHStackViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;
  public: GALGAS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;

//--- Constructor
  public: cPtr_astHStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding
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
// Phase 1: @astHStackViewInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHStackViewInstructionDeclaration_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astHStackViewInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHStackViewInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astHStackViewInstructionDeclaration_2D_weak (const class GALGAS_astHStackViewInstructionDeclaration & inSource) ;

  public: GALGAS_astHStackViewInstructionDeclaration_2D_weak & operator = (const class GALGAS_astHStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astHStackViewInstructionDeclaration bang_astHStackViewInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHStackViewInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHStackViewInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHStackViewInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHStackViewInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astVStackViewInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVStackViewInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astVStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astVStackViewInstructionDeclaration (const class cPtr_astVStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astVStackViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astVStackViewInstructionDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                   const class GALGAS_astViewInstructionList & inOperand1,
                                                                                   const class GALGAS_optionalHiddenBinding & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalHiddenBinding (class GALGAS_optionalHiddenBinding inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVStackViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astVStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astVStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;
  public: GALGAS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;

//--- Constructor
  public: cPtr_astVStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding
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
// Phase 1: @astVStackViewInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVStackViewInstructionDeclaration_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astVStackViewInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astVStackViewInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astVStackViewInstructionDeclaration_2D_weak (const class GALGAS_astVStackViewInstructionDeclaration & inSource) ;

  public: GALGAS_astVStackViewInstructionDeclaration_2D_weak & operator = (const class GALGAS_astVStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astVStackViewInstructionDeclaration bang_astVStackViewInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astVStackViewInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astVStackViewInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astVStackViewInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVStackViewInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astSpaceViewInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astSpaceViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astSpaceViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astSpaceViewInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astSpaceViewInstruction (const class cPtr_astSpaceViewInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astSpaceViewInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astSpaceViewInstruction constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astSpaceViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astSpaceViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astSpaceViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_astSpaceViewInstruction (LOCATION_ARGS) ;

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
// Phase 1: @astSpaceViewInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astSpaceViewInstruction_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astSpaceViewInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astSpaceViewInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astSpaceViewInstruction_2D_weak (const class GALGAS_astSpaceViewInstruction & inSource) ;

  public: GALGAS_astSpaceViewInstruction_2D_weak & operator = (const class GALGAS_astSpaceViewInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astSpaceViewInstruction bang_astSpaceViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astSpaceViewInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astSpaceViewInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astSpaceViewInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astSpaceViewInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astLocalViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astLocalViewInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astLocalViewInstruction (const class cPtr_astLocalViewInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLocalView (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astLocalViewInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astLocalViewInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

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
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLocalView ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
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
// Phase 1: @astLocalViewInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astLocalViewInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astLocalViewInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astLocalViewInstruction_2D_weak (const class GALGAS_astLocalViewInstruction & inSource) ;

  public: GALGAS_astLocalViewInstruction_2D_weak & operator = (const class GALGAS_astLocalViewInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astLocalViewInstruction bang_astLocalViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astLocalViewInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astLocalViewInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ;

