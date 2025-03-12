#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutBindingSpecificationMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutBindingSpecificationMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap map
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
  friend class UpEnumerator_autoLayoutBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewBindingSpecificationMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewBindingSpecificationMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap map
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
  friend class UpEnumerator_autoLayoutViewBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutViewBindingSpecificationMap ;
 
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
// Phase 1: @autoLayoutBindingSpecificationMap_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_lstring & in_mOutletSuperClassName,
                                                            const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

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
 
} ;

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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractDeclarationAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDeclarationAST_2E_weak (const class GGS_abstractDeclarationAST & inSource) ;

  public: GGS_abstractDeclarationAST_2E_weak & operator = (const class GGS_abstractDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDeclarationAST_2E_weak init_nil (void) {
    GGS_abstractDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDeclarationAST bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractDeclarationAST unwrappedValue (void) const {
    GGS_abstractDeclarationAST result ;
    if (isValid ()) {
      const cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationPrecedenceGraph graph
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationPrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_declarationPrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationPrecedenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationPrecedenceGraph extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationPrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_abstractDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_declarationListAST & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_declarationListAST & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_declarationListAST & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_declarationListAST & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_declarationListAST & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_declarationListAST & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_declarationListAST & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationPrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationPrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                          const class GGS_stringset & constinOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externSwiftDelegateList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftDelegateList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mExternSwiftDelegateName ;
  public: inline GGS_lstring readProperty_mExternSwiftDelegateName (void) const {
    return mProperty_mExternSwiftDelegateName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externSwiftDelegateList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternSwiftDelegateName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftDelegateName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externSwiftDelegateList_2E_element (const GGS_lstring & in_mExternSwiftDelegateName) ;

//--------------------------------- Copy constructor
  public: GGS_externSwiftDelegateList_2E_element (const GGS_externSwiftDelegateList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externSwiftDelegateList_2E_element & operator = (const GGS_externSwiftDelegateList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externSwiftDelegateList_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externSwiftDelegateList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externSwiftDelegateList_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externSwiftFunctionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftFunctionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mExternSwiftFunctionName ;
  public: inline GGS_lstring readProperty_mExternSwiftFunctionName (void) const {
    return mProperty_mExternSwiftFunctionName ;
  }

  public: GGS_lstring mProperty_mCallerName ;
  public: inline GGS_lstring readProperty_mCallerName (void) const {
    return mProperty_mCallerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externSwiftFunctionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternSwiftFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionName = inValue ;
  }

  public: inline void setter_setMCallerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCallerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externSwiftFunctionList_2E_element (const GGS_lstring & in_mExternSwiftFunctionName,
                                                  const GGS_lstring & in_mCallerName) ;

//--------------------------------- Copy constructor
  public: GGS_externSwiftFunctionList_2E_element (const GGS_externSwiftFunctionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externSwiftFunctionList_2E_element & operator = (const GGS_externSwiftFunctionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externSwiftFunctionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externSwiftFunctionList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externSwiftFunctionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externFunctionMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_externFunctionMap (const class GGS_externFunctionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externFunctionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externFunctionMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_externFunctionMap (const class GGS_externFunctionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externFunctionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap ;

//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_externFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_externFunctionMap (const GGS_externFunctionMap & inSource) ;
  public: GGS_externFunctionMap & operator = (const GGS_externFunctionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_externFunctionMap class_func_mapWithMapToOverride (const class GGS_externFunctionMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externFunctionMap add_operation (const GGS_externFunctionMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_externFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_externFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_externFunctionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_externFunctionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_externFunctionMap ;
  friend class DownEnumerator_externFunctionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externFunctionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_externFunctionMap (const GGS_externFunctionMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_externFunctionMap (const GGS_lstring & inKey
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
// Phase 1: @externFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externFunctionMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_externFunctionMap_2E_element (const GGS_externFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externFunctionMap_2E_element & operator = (const GGS_externFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: externFunctionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_externFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_externFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_externFunctionMap_2E_element_3F_ (const GGS_externFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_externFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_externFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_externFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_transientClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_transientClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_transientClassDeclarationAST_2E_weak (const class GGS_transientClassDeclarationAST & inSource) ;

  public: GGS_transientClassDeclarationAST_2E_weak & operator = (const class GGS_transientClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_transientClassDeclarationAST_2E_weak init_nil (void) {
    GGS_transientClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_transientClassDeclarationAST bang_transientClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_transientClassDeclarationAST unwrappedValue (void) const {
    GGS_transientClassDeclarationAST result ;
    if (isValid ()) {
      const cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_transientClassDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_transientClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumerationDeclarationAST_2E_weak (const class GGS_enumerationDeclarationAST & inSource) ;

  public: GGS_enumerationDeclarationAST_2E_weak & operator = (const class GGS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumerationDeclarationAST_2E_weak init_nil (void) {
    GGS_enumerationDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumerationDeclarationAST bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enumerationDeclarationAST unwrappedValue (void) const {
    GGS_enumerationDeclarationAST result ;
    if (isValid ()) {
      const cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_enumerationDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_enumConstantMap (const class GGS_enumConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_enumConstantMap (const class GGS_enumConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_enumConstantMap (const GGS_enumConstantMap & inSource) ;
  public: GGS_enumConstantMap & operator = (const GGS_enumConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_enumConstantMap class_func_mapWithMapToOverride (const class GGS_enumConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_enumConstantMap add_operation (const GGS_enumConstantMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_enumConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_enumConstantMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_enumConstantMap ;
  friend class DownEnumerator_enumConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumConstantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mIndex ;

//--- Constructors
  public: cMapElement_enumConstantMap (const GGS_enumConstantMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_enumConstantMap (const GGS_lstring & inKey,
                                       const GGS_uint & in_mIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumConstantMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_enumConstantMap_2E_element (const GGS_enumConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumConstantMap_2E_element & operator = (const GGS_enumConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumConstantMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: enumConstantMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_enumConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_enumConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_enumConstantMap_2E_element_3F_ (const GGS_enumConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_enumConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_enumConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_enumConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumConstantMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumFunAssociationSortedList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_enumFunAssociationSortedList (const class GGS_enumFunAssociationSortedList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAssociatedString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumFunAssociationSortedList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumFunAssociationSortedList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_enumFunAssociationSortedList (const class GGS_enumFunAssociationSortedList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAssociatedString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumFunAssociationSortedList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList sorted list
//--------------------------------------------------------------------------------------------------

class GGS_enumFunAssociationSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GGS_enumFunAssociationSortedList (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFunAssociationSortedList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFunAssociationSortedList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFunAssociationSortedList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_enumFunAssociationSortedList class_func_sortedListWithValue (const class GGS_uint & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_enumFunAssociationSortedList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_uint & inOperand0,
                                                     const class GGS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_uint inArgument0,
                                               class GGS_string inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_enumFunAssociationSortedList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_enumFunAssociationSortedList ;
  friend class DownEnumerator_enumFunAssociationSortedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFunAssociationSortedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumFunAssociationSortedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_string mProperty_mAssociatedString ;
  public: inline GGS_string readProperty_mAssociatedString (void) const {
    return mProperty_mAssociatedString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumFunAssociationSortedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumFunAssociationSortedList_2E_element (const GGS_uint & in_mIndex,
                                                       const GGS_string & in_mAssociatedString) ;

//--------------------------------- Copy constructor
  public: GGS_enumFunAssociationSortedList_2E_element (const GGS_enumFunAssociationSortedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumFunAssociationSortedList_2E_element & operator = (const GGS_enumFunAssociationSortedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFunAssociationSortedList_2E_element init_21__21_ (const class GGS_uint & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFunAssociationSortedList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFunAssociationSortedList_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFunAssociationSortedList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumFuncMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_enumFuncMap (const class GGS_enumFuncMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumFuncMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_enumFuncMap (const class GGS_enumFuncMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumFuncMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_enumFuncMap (void) ;

//--------------------------------- Handle copy
  public: GGS_enumFuncMap (const GGS_enumFuncMap & inSource) ;
  public: GGS_enumFuncMap & operator = (const GGS_enumFuncMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFuncMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFuncMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFuncMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_enumFuncMap class_func_mapWithMapToOverride (const class GGS_enumFuncMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_enumFunAssociationSortedList & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_enumFuncMap add_operation (const GGS_enumFuncMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_enumFunAssociationSortedList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociationSortedListForKey (class GGS_enumFunAssociationSortedList constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_enumFunAssociationSortedList & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_enumFunAssociationSortedList getter_mAssociationSortedListForKey (const class GGS_string & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumFuncMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_enumFuncMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_enumFuncMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_enumFuncMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_enumFuncMap ;
  friend class DownEnumerator_enumFuncMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumFuncMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap : public cMapElement {
//--- Map attributes
  public: GGS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;

//--- Constructors
  public: cMapElement_enumFuncMap (const GGS_enumFuncMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_enumFuncMap (const GGS_lstring & inKey,
                                   const GGS_enumFunAssociationSortedList & in_mAssociationSortedList
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;
  public: inline GGS_enumFunAssociationSortedList readProperty_mAssociationSortedList (void) const {
    return mProperty_mAssociationSortedList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumFuncMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAssociationSortedList (const GGS_enumFunAssociationSortedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationSortedList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumFuncMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_enumFunAssociationSortedList & in_mAssociationSortedList) ;

//--------------------------------- Copy constructor
  public: GGS_enumFuncMap_2E_element (const GGS_enumFuncMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumFuncMap_2E_element & operator = (const GGS_enumFuncMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumFuncMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_enumFunAssociationSortedList & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumFuncMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumFuncMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_enumFunAssociationSortedList & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFuncMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: enumFuncMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_enumFuncMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_enumFuncMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_enumFuncMap_2E_element_3F_ (const GGS_enumFuncMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_enumFuncMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_enumFuncMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_enumFuncMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumFuncMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFileGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractFileGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractFileGeneration (const class cPtr_abstractFileGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractFileGeneration init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractFileGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractFileGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractFileGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractFileGeneration_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractFileGeneration (Compiler * inCompiler
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
// Phase 1: @abstractFileGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractFileGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractFileGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractFileGeneration_2E_weak (const class GGS_abstractFileGeneration & inSource) ;

  public: GGS_abstractFileGeneration_2E_weak & operator = (const class GGS_abstractFileGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractFileGeneration_2E_weak init_nil (void) {
    GGS_abstractFileGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractFileGeneration bang_abstractFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractFileGeneration unwrappedValue (void) const {
    GGS_abstractFileGeneration result ;
    if (isValid ()) {
      const cPtr_abstractFileGeneration * p = (cPtr_abstractFileGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractFileGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractFileGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractFileGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractFileGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum typeKind
//--------------------------------------------------------------------------------------------------

class GGS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_boolType,
    enum_integerType,
    enum_uint_33__32_Type,
    enum_doubleType,
    enum_stringType,
    enum_dataType,
    enum_dateType,
    enum_fontType,
    enum_colorType,
    enum_bezierPathType,
    enum_bezierPathArrayType,
    enum_enumType,
    enum_entityType,
    enum_classType,
    enum_transientPropertyExternType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GGS_string & out_enumTypeName,
                                                                 class GGS_enumConstantMap & out_constantMap,
                                                                 class GGS_enumFuncMap & out_funcMap) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_entityType (class GGS_string & out_entityName,
                                                                   class GGS_bool & out_graphic) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_classType (class GGS_string & out_className) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_transientPropertyExternType (class GGS_string & out_externTypeName) const ;

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
  public: static GGS_typeKind extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind class_func_bezierPathArrayType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_bezierPathType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_boolType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_classType (const class GGS_string & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_colorType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_dataType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_dateType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_doubleType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_entityType (const class GGS_string & inOperand0,
                                                           const class GGS_bool & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_enumType (const class GGS_string & inOperand0,
                                                         const class GGS_enumConstantMap & inOperand1,
                                                         const class GGS_enumFuncMap & inOperand2
                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_fontType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_integerType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_stringType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_transientPropertyExternType (const class GGS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_uint_33__32_Type (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractClassType (class GGS_string & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEntityType (class GGS_string & outArgument0,
                                                          class GGS_bool & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumType (class GGS_string & outArgument0,
                                                        class GGS_enumConstantMap & outArgument1,
                                                        class GGS_enumFuncMap & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractTransientPropertyExternType (class GGS_string & outArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_classType_3F_ getter_getClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_entityType_3F_ getter_getEntityType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_transientPropertyExternType_3F_ getter_getTransientPropertyExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBezierPathArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBezierPathType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isColorType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDataType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDateType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFontType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStringType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTransientPropertyExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUint_33__32_Type (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_classType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_className ;
  public: inline GGS_string readProperty_className (void) const {
    return mProperty_className ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setClassName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_className = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_classType (const GGS_string & in_className) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_classType (const GGS_typeKind_2E_classType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_classType & operator = (const GGS_typeKind_2E_classType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_classType init_21_ (const class GGS_string & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_classType extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_classType class_func_new (const class GGS_string & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_classType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.classType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_classType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_classType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_classType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_classType_3F_ (const GGS_typeKind_2E_classType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_classType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_classType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_classType_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_classType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_entityType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_entityType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_entityName ;
  public: inline GGS_string readProperty_entityName (void) const {
    return mProperty_entityName ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_entityType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_entityName = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_entityType (const GGS_string & in_entityName,
                                      const GGS_bool & in_graphic) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_entityType (const GGS_typeKind_2E_entityType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_entityType & operator = (const GGS_typeKind_2E_entityType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_entityType init_21__21_ (const class GGS_string & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_entityType extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_entityType class_func_new (const class GGS_string & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_entityType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.entityType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_entityType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_entityType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_entityType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_entityType_3F_ (const GGS_typeKind_2E_entityType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_entityType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_entityType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_entityType_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_entityType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_enumType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_enumTypeName ;
  public: inline GGS_string readProperty_enumTypeName (void) const {
    return mProperty_enumTypeName ;
  }

  public: GGS_enumConstantMap mProperty_constantMap ;
  public: inline GGS_enumConstantMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

  public: GGS_enumFuncMap mProperty_funcMap ;
  public: inline GGS_enumFuncMap readProperty_funcMap (void) const {
    return mProperty_funcMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumTypeName = inValue ;
  }

  public: inline void setter_setConstantMap (const GGS_enumConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

  public: inline void setter_setFuncMap (const GGS_enumFuncMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_funcMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_enumType (const GGS_string & in_enumTypeName,
                                    const GGS_enumConstantMap & in_constantMap,
                                    const GGS_enumFuncMap & in_funcMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_enumType (const GGS_typeKind_2E_enumType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_enumType & operator = (const GGS_typeKind_2E_enumType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_enumType init_21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_enumConstantMap & inOperand1,
                                                            const class GGS_enumFuncMap & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_enumType extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_enumType class_func_new (const class GGS_string & inOperand0,
                                                                const class GGS_enumConstantMap & inOperand1,
                                                                const class GGS_enumFuncMap & inOperand2,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.enumType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_enumType_3F_ (const GGS_typeKind_2E_enumType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_enumType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_enumType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_enumType_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_transientPropertyExternType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_transientPropertyExternType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_externTypeName ;
  public: inline GGS_string readProperty_externTypeName (void) const {
    return mProperty_externTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_transientPropertyExternType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExternTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_externTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_transientPropertyExternType (const GGS_string & in_externTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_transientPropertyExternType (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_transientPropertyExternType & operator = (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_transientPropertyExternType init_21_ (const class GGS_string & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_transientPropertyExternType extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_transientPropertyExternType class_func_new (const class GGS_string & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_transientPropertyExternType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.transientPropertyExternType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_transientPropertyExternType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_transientPropertyExternType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_transientPropertyExternType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_transientPropertyExternType_3F_ (const GGS_typeKind_2E_transientPropertyExternType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_transientPropertyExternType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_transientPropertyExternType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_transientPropertyExternType_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_transientPropertyExternType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_atomicClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_atomicClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicClassDeclarationAST (const class cPtr_atomicClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_typeKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_typeKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicClassDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_typeKind & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicClassDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicClassDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_typeKind & inOperand1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicClassDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_atomicClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicClassDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_typeKind & inOperand1,
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
  public: GGS_typeKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_atomicClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicClassDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_typeKind & in_mKind,
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
// Phase 1: @atomicClassDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_atomicClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicClassDeclarationAST_2E_weak (const class GGS_atomicClassDeclarationAST & inSource) ;

  public: GGS_atomicClassDeclarationAST_2E_weak & operator = (const class GGS_atomicClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicClassDeclarationAST_2E_weak init_nil (void) {
    GGS_atomicClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicClassDeclarationAST bang_atomicClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_atomicClassDeclarationAST unwrappedValue (void) const {
    GGS_atomicClassDeclarationAST result ;
    if (isValid ()) {
      const cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_atomicClassDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @simpleStoredPropertyList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_simpleStoredPropertyList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mPropertyTypeName ;
  public: inline GGS_lstring readProperty_mPropertyTypeName (void) const {
    return mProperty_mPropertyTypeName ;
  }

  public: GGS_lstring mProperty_mPropertyName ;
  public: inline GGS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_abstractDefaultValue mProperty_mDefaultValue ;
  public: inline GGS_abstractDefaultValue readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_simpleStoredPropertyList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeName = inValue ;
  }

  public: inline void setter_setMPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_simpleStoredPropertyList_2E_element (const GGS_lstring & in_mPropertyTypeName,
                                                   const GGS_lstring & in_mPropertyName,
                                                   const GGS_abstractDefaultValue & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_simpleStoredPropertyList_2E_element (const GGS_simpleStoredPropertyList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_simpleStoredPropertyList_2E_element & operator = (const GGS_simpleStoredPropertyList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_simpleStoredPropertyList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_abstractDefaultValue & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_simpleStoredPropertyList_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_simpleStoredPropertyList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_abstractDefaultValue & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_entityDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_entityDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_entityDeclarationAST_2E_weak (const class GGS_entityDeclarationAST & inSource) ;

  public: GGS_entityDeclarationAST_2E_weak & operator = (const class GGS_entityDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_entityDeclarationAST_2E_weak init_nil (void) {
    GGS_entityDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_entityDeclarationAST bang_entityDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_entityDeclarationAST unwrappedValue (void) const {
    GGS_entityDeclarationAST result ;
    if (isValid ()) {
      const cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_entityDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_propertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_propertyGeneration (const class cPtr_propertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGeneration init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGeneration extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @propertyGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_propertyGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void propertyGeneration_init_21_ (const class GGS_string & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension getter bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter objectAccessibilityCodeForSaveOperation
  public: virtual class GGS_string getter_objectAccessibilityCodeForSaveOperation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter populateExplorerWindowCode
  public: virtual class GGS_string getter_populateExplorerWindowCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter resetToManyRelationships
  public: virtual class GGS_string getter_resetToManyRelationships (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter setupRelationshipFromDictionaryCode
  public: virtual class GGS_string getter_setupRelationshipFromDictionaryCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GGS_string mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_propertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_propertyGeneration (const GGS_string & in_mPropertyName,
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
// Phase 1: @propertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_propertyGeneration mProperty_mProperty ;
  public: inline GGS_propertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_propertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGenerationList_2E_element (const GGS_propertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_propertyGenerationList_2E_element (const GGS_propertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyGenerationList_2E_element & operator = (const GGS_propertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGenerationList_2E_element init_21_ (const class GGS_propertyGeneration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGenerationList_2E_element class_func_new (const class GGS_propertyGeneration & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_entityForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_entityForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_entityForGeneration (const class cPtr_entityForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEntityName (void) const ;

  public: class GGS_string readProperty_mSuperEntityName (void) const ;

  public: class GGS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const ;

  public: class GGS_stringset readProperty_mSignatureSet (void) const ;

  public: class GGS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_stringset readProperty_mOverridenTransients (void) const ;

  public: class GGS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GGS_bool readProperty_mHasSubEntity (void) const ;

  public: class GGS_bool readProperty_mCanCopyAndPaste_5F_option (void) const ;

  public: class GGS_bool readProperty_mCannotBeDeleted_5F_option (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_bool & inOperand2,
                                                                                               const class GGS_propertyGenerationList & inOperand3,
                                                                                               const class GGS_stringset & inOperand4,
                                                                                               const class GGS_bool & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_stringset & inOperand7,
                                                                                               const class GGS_externSwiftDelegateList & inOperand8,
                                                                                               const class GGS_bool & inOperand9,
                                                                                               const class GGS_bool & inOperand10,
                                                                                               const class GGS_bool & inOperand11,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityForGeneration extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityForGeneration class_func_new (const class GGS_string & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_propertyGenerationList & inOperand3,
                                                               const class GGS_stringset & inOperand4,
                                                               const class GGS_bool & inOperand5,
                                                               const class GGS_bool & inOperand6,
                                                               const class GGS_stringset & inOperand7,
                                                               const class GGS_externSwiftDelegateList & inOperand8,
                                                               const class GGS_bool & inOperand9,
                                                               const class GGS_bool & inOperand10,
                                                               const class GGS_bool & inOperand11,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_bool & inOperand2,
                                                                                         const class GGS_propertyGenerationList & inOperand3,
                                                                                         const class GGS_stringset & inOperand4,
                                                                                         const class GGS_bool & inOperand5,
                                                                                         const class GGS_bool & inOperand6,
                                                                                         const class GGS_stringset & inOperand7,
                                                                                         const class GGS_externSwiftDelegateList & inOperand8,
                                                                                         const class GGS_bool & inOperand9,
                                                                                         const class GGS_bool & inOperand10,
                                                                                         const class GGS_bool & inOperand11,
                                                                                         Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mEntityName ;
  public: GGS_string mProperty_mSuperEntityName ;
  public: GGS_bool mProperty_mHandlingOpposite ;
  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: GGS_stringset mProperty_mSignatureSet ;
  public: GGS_bool mProperty_mIsGraphicEntity ;
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_stringset mProperty_mOverridenTransients ;
  public: GGS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GGS_bool mProperty_mHasSubEntity ;
  public: GGS_bool mProperty_mCanCopyAndPaste_5F_option ;
  public: GGS_bool mProperty_mCannotBeDeleted_5F_option ;


//--- Default constructor
  public: cPtr_entityForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_entityForGeneration (const GGS_string & in_mEntityName,
                                    const GGS_string & in_mSuperEntityName,
                                    const GGS_bool & in_mHandlingOpposite,
                                    const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GGS_stringset & in_mSignatureSet,
                                    const GGS_bool & in_mIsGraphicEntity,
                                    const GGS_bool & in_mIsAbstract,
                                    const GGS_stringset & in_mOverridenTransients,
                                    const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                    const GGS_bool & in_mHasSubEntity,
                                    const GGS_bool & in_mCanCopyAndPaste_5F_option,
                                    const GGS_bool & in_mCannotBeDeleted_5F_option,
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
// Phase 1: @entityForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_entityForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_entityForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_entityForGeneration_2E_weak (const class GGS_entityForGeneration & inSource) ;

  public: GGS_entityForGeneration_2E_weak & operator = (const class GGS_entityForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_entityForGeneration_2E_weak init_nil (void) {
    GGS_entityForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_entityForGeneration bang_entityForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_entityForGeneration unwrappedValue (void) const {
    GGS_entityForGeneration result ;
    if (isValid ()) {
      const cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_entityForGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_entityListForGeneratingEBManagedObjectContext final : public cGenericAbstractEnumerator {
  public: DownEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_entityListForGeneratingEBManagedObjectContext final : public cGenericAbstractEnumerator {
  public: UpEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext list
//--------------------------------------------------------------------------------------------------

class GGS_entityListForGeneratingEBManagedObjectContext : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext (void) ;

//--------------------------------- List constructor by graph
  public: GGS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mEntityName,
                                                 const class GGS_lstringlist & in_mObsoleteEntityNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityListForGeneratingEBManagedObjectContext init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityListForGeneratingEBManagedObjectContext extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityListForGeneratingEBManagedObjectContext class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_entityListForGeneratingEBManagedObjectContext class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                   const class GGS_lstringlist & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_entityListForGeneratingEBManagedObjectContext add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntityNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNamesAtIndex (class GGS_lstringlist constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEntityNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mObsoleteEntityNamesAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityListForGeneratingEBManagedObjectContext getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityListForGeneratingEBManagedObjectContext getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_entityListForGeneratingEBManagedObjectContext getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_entityListForGeneratingEBManagedObjectContext ;
  friend class DownEnumerator_entityListForGeneratingEBManagedObjectContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_entityListForGeneratingEBManagedObjectContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEntityName ;
  public: inline GGS_string readProperty_mEntityName (void) const {
    return mProperty_mEntityName ;
  }

  public: GGS_lstringlist mProperty_mObsoleteEntityNames ;
  public: inline GGS_lstringlist readProperty_mObsoleteEntityNames (void) const {
    return mProperty_mObsoleteEntityNames ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityName = inValue ;
  }

  public: inline void setter_setMObsoleteEntityNames (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObsoleteEntityNames = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_string & in_mEntityName,
                                                                        const GGS_lstringlist & in_mObsoleteEntityNames) ;

//--------------------------------- Copy constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element & operator = (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityListForGeneratingEBManagedObjectContext_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                            const class GGS_lstringlist & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityListForGeneratingEBManagedObjectContext_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_entityListForGeneratingEBManagedObjectContext_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                    const class GGS_lstringlist & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletTypeName ;
  public: inline GGS_lstring readProperty_mOutletTypeName (void) const {
    return mProperty_mOutletTypeName ;
  }

  public: GGS_lstring mProperty_mOutletName ;
  public: inline GGS_lstring readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GGS_tableValueBinding mProperty_mTableValueBindingDescriptor ;
  public: inline GGS_tableValueBinding readProperty_mTableValueBindingDescriptor (void) const {
    return mProperty_mTableValueBindingDescriptor ;
  }

  public: GGS_runActionDescriptor mProperty_mRunDescriptor ;
  public: inline GGS_runActionDescriptor readProperty_mRunDescriptor (void) const {
    return mProperty_mRunDescriptor ;
  }

  public: GGS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: inline GGS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const {
    return mProperty_mEnabledBindingDescriptor ;
  }

  public: GGS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: inline GGS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const {
    return mProperty_mHiddenBindingDescriptor ;
  }

  public: GGS_regularBindingList mProperty_mRegularBindingList ;
  public: inline GGS_regularBindingList readProperty_mRegularBindingList (void) const {
    return mProperty_mRegularBindingList ;
  }

  public: GGS_graphicController mProperty_mGraphicController ;
  public: inline GGS_graphicController readProperty_mGraphicController (void) const {
    return mProperty_mGraphicController ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletTypeName = inValue ;
  }

  public: inline void setter_setMOutletName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMTableValueBindingDescriptor (const GGS_tableValueBinding & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingDescriptor = inValue ;
  }

  public: inline void setter_setMRunDescriptor (const GGS_runActionDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunDescriptor = inValue ;
  }

  public: inline void setter_setMEnabledBindingDescriptor (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnabledBindingDescriptor = inValue ;
  }

  public: inline void setter_setMHiddenBindingDescriptor (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHiddenBindingDescriptor = inValue ;
  }

  public: inline void setter_setMRegularBindingList (const GGS_regularBindingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularBindingList = inValue ;
  }

  public: inline void setter_setMGraphicController (const GGS_graphicController & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphicController = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletDeclarationList_2E_element (const GGS_lstring & in_mOutletTypeName,
                                                const GGS_lstring & in_mOutletName,
                                                const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                const GGS_runActionDescriptor & in_mRunDescriptor,
                                                const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                const GGS_regularBindingList & in_mRegularBindingList,
                                                const GGS_graphicController & in_mGraphicController) ;

//--------------------------------- Copy constructor
  public: GGS_outletDeclarationList_2E_element (const GGS_outletDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletDeclarationList_2E_element & operator = (const GGS_outletDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletDeclarationList_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_tableValueBinding & inOperand2,
                                                                                            const class GGS_runActionDescriptor & inOperand3,
                                                                                            const class GGS_multipleBindingDescriptor & inOperand4,
                                                                                            const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                            const class GGS_regularBindingList & inOperand6,
                                                                                            const class GGS_graphicController & inOperand7,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_tableValueBinding & inOperand2,
                                                                            const class GGS_runActionDescriptor & inOperand3,
                                                                            const class GGS_multipleBindingDescriptor & inOperand4,
                                                                            const class GGS_multipleBindingDescriptor & inOperand5,
                                                                            const class GGS_regularBindingList & inOperand6,
                                                                            const class GGS_graphicController & inOperand7,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerBindingListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: inline GGS_lstring readProperty_mControllerName (void) const {
    return mProperty_mControllerName ;
  }

  public: GGS_multipleBindingDescriptor mProperty_mHiddenSelectionViewBindingDescriptor ;
  public: inline GGS_multipleBindingDescriptor readProperty_mHiddenSelectionViewBindingDescriptor (void) const {
    return mProperty_mHiddenSelectionViewBindingDescriptor ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_arrayControllerBindingListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerName = inValue ;
  }

  public: inline void setter_setMHiddenSelectionViewBindingDescriptor (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHiddenSelectionViewBindingDescriptor = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_arrayControllerBindingListAST_2E_element (const GGS_lstring & in_mControllerName,
                                                        const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor) ;

//--------------------------------- Copy constructor
  public: GGS_arrayControllerBindingListAST_2E_element (const GGS_arrayControllerBindingListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_arrayControllerBindingListAST_2E_element & operator = (const GGS_arrayControllerBindingListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBindingListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_multipleBindingDescriptor & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerBindingListAST_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBindingListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_multipleBindingDescriptor & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astViewDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mViewName ;
  public: inline GGS_lstring readProperty_mViewName (void) const {
    return mProperty_mViewName ;
  }

  public: GGS_astAbstractViewDeclaration mProperty_mView ;
  public: inline GGS_astAbstractViewDeclaration readProperty_mView (void) const {
    return mProperty_mView ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astViewDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMViewName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewName = inValue ;
  }

  public: inline void setter_setMView (const GGS_astAbstractViewDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mView = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astViewDeclarationList_2E_element (const GGS_lstring & in_mViewName,
                                                 const GGS_astAbstractViewDeclaration & in_mView) ;

//--------------------------------- Copy constructor
  public: GGS_astViewDeclarationList_2E_element (const GGS_astViewDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astViewDeclarationList_2E_element & operator = (const GGS_astViewDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewDeclarationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_astAbstractViewDeclaration & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_astAbstractViewDeclaration & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutOutletLinkerList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinkerList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLinkerName ;
  public: inline GGS_lstring readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS_lstringlist mProperty_mOutletNameList ;
  public: inline GGS_lstringlist readProperty_mOutletNameList (void) const {
    return mProperty_mOutletNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_lstring & in_mLinkerName,
                                                        const GGS_lstringlist & in_mOutletNameList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutOutletLinkerList_2E_element & operator = (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutOutletLinkerList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstringlist & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutOutletLinkerList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutOutletLinkerList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak (const class GGS_autoLayoutDocumentDeclarationAST & inSource) ;

  public: GGS_autoLayoutDocumentDeclarationAST_2E_weak & operator = (const class GGS_autoLayoutDocumentDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDocumentDeclarationAST_2E_weak init_nil (void) {
    GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentDeclarationAST bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_autoLayoutDocumentDeclarationAST unwrappedValue (void) const {
    GGS_autoLayoutDocumentDeclarationAST result ;
    if (isValid ()) {
      const cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutDocumentDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutOutletLinkerGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutOutletLinkerGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletLinkerGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mLinkerName,
                                                 const class GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletLinkerGenerationList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletLinkerGenerationList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletLinkerGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutOutletLinkerGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS__32_stringlist & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_autoLayoutOutletLinkerGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS__32_stringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutOutletLinkerGenerationList add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS__32_stringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS__32_stringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS__32_stringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS__32_stringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS__32_stringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLinkerNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAndTypeNameListAtIndex (class GGS__32_stringlist constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS__32_stringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS__32_stringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mOutletNameAndTypeNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletLinkerGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutOutletLinkerGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutOutletLinkerGenerationList ;
  friend class DownEnumerator_autoLayoutOutletLinkerGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLinkerName ;
  public: inline GGS_string readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS__32_stringlist mProperty_mOutletNameAndTypeNameList ;
  public: inline GGS__32_stringlist readProperty_mOutletNameAndTypeNameList (void) const {
    return mProperty_mOutletNameAndTypeNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameAndTypeNameList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameAndTypeNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_string & in_mLinkerName,
                                                               const GGS__32_stringlist & in_mOutletNameAndTypeNameList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element & operator = (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletLinkerGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                   const class GGS__32_stringlist & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletLinkerGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletLinkerGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                           const class GGS__32_stringlist & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedOutletMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_decoratedOutletMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_decoratedOutletMap (const class GGS_decoratedOutletMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedOutletMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_decoratedOutletMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_decoratedOutletMap (const class GGS_decoratedOutletMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedOutletMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedOutletMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_decoratedOutletMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_decoratedOutletMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_decoratedOutletMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_decoratedOutletMap (void) ;

//--------------------------------- Handle copy
  public: GGS_decoratedOutletMap (const GGS_decoratedOutletMap & inSource) ;
  public: GGS_decoratedOutletMap & operator = (const GGS_decoratedOutletMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedOutletMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedOutletMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedOutletMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_decoratedOutletMap class_func_mapWithMapToOverride (const class GGS_decoratedOutletMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_decoratedOutletMap add_operation (const GGS_decoratedOutletMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletTypeNameForKey (class GGS_string constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedOutletMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_decoratedOutletMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_decoratedOutletMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_decoratedOutletMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_decoratedOutletMap ;
  friend class DownEnumerator_decoratedOutletMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@decoratedOutletMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_decoratedOutletMap : public cMapElement {
//--- Map attributes
  public: GGS_string mProperty_mOutletTypeName ;

//--- Constructors
  public: cMapElement_decoratedOutletMap (const GGS_decoratedOutletMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_decoratedOutletMap (const GGS_lstring & inKey,
                                          const GGS_string & in_mOutletTypeName
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
// Phase 1: @decoratedOutletMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_decoratedOutletMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mOutletTypeName ;
  public: inline GGS_string readProperty_mOutletTypeName (void) const {
    return mProperty_mOutletTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_decoratedOutletMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_decoratedOutletMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_string & in_mOutletTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_decoratedOutletMap_2E_element (const GGS_decoratedOutletMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_decoratedOutletMap_2E_element & operator = (const GGS_decoratedOutletMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedOutletMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedOutletMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedOutletMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_string & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: decoratedOutletMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedOutletMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_decoratedOutletMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_decoratedOutletMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_decoratedOutletMap_2E_element_3F_ (const GGS_decoratedOutletMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_decoratedOutletMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_decoratedOutletMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_decoratedOutletMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutOutletMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutOutletMap (const class GGS_autoLayoutOutletMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mOutletIsArray (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutOutletMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutOutletMap (const class GGS_autoLayoutOutletMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mOutletIsArray (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutOutletMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutOutletMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletMap (void) ;

//--------------------------------- Handle copy
  public: GGS_autoLayoutOutletMap (const GGS_autoLayoutOutletMap & inSource) ;
  public: GGS_autoLayoutOutletMap & operator = (const GGS_autoLayoutOutletMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutOutletMap class_func_mapWithMapToOverride (const class GGS_autoLayoutOutletMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutOutletMap add_operation (const GGS_autoLayoutOutletMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletTypeNameForKey (class GGS_string constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletIsArrayForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAutoLayoutOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mOutletIsArrayForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutOutletMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutOutletMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutOutletMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutOutletMap ;
  friend class DownEnumerator_autoLayoutOutletMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutOutletMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutOutletMap : public cMapElement {
//--- Map attributes
  public: GGS_string mProperty_mAutoLayoutOutletTypeName ;
  public: GGS_bool mProperty_mOutletIsArray ;

//--- Constructors
  public: cMapElement_autoLayoutOutletMap (const GGS_autoLayoutOutletMap_2E_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_autoLayoutOutletMap (const GGS_lstring & inKey,
                                           const GGS_string & in_mAutoLayoutOutletTypeName,
                                           const GGS_bool & in_mOutletIsArray
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
// Phase 1: @autoLayoutOutletMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mAutoLayoutOutletTypeName ;
  public: inline GGS_string readProperty_mAutoLayoutOutletTypeName (void) const {
    return mProperty_mAutoLayoutOutletTypeName ;
  }

  public: GGS_bool mProperty_mOutletIsArray ;
  public: inline GGS_bool readProperty_mOutletIsArray (void) const {
    return mProperty_mOutletIsArray ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAutoLayoutOutletTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutOutletTypeName = inValue ;
  }

  public: inline void setter_setMOutletIsArray (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletIsArray = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutOutletMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_string & in_mAutoLayoutOutletTypeName,
                                              const GGS_bool & in_mOutletIsArray) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutOutletMap_2E_element (const GGS_autoLayoutOutletMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutOutletMap_2E_element & operator = (const GGS_autoLayoutOutletMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_bool & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutOutletMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_bool & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: autoLayoutOutletMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutOutletMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutOutletMap_2E_element_3F_ (const GGS_autoLayoutOutletMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutOutletMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutOutletMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autoLayoutOutletMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionBindingListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_actionBindingListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_actionBindingListForGeneration (const class GGS_actionBindingListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mActionName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actionBindingListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actionBindingListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_actionBindingListForGeneration (const class GGS_actionBindingListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mActionName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actionBindingListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionBindingListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_actionBindingListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_actionBindingListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mOutletName,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mActionName,
                                                 const class GGS_string & in_mTargetTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionBindingListForGeneration init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionBindingListForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionBindingListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_actionBindingListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_actionBindingListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actionBindingListForGeneration add_operation (const GGS_actionBindingListForGeneration & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActionNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetTypeNameAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mActionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actionBindingListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actionBindingListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actionBindingListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actionBindingListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_actionBindingListForGeneration ;
  friend class DownEnumerator_actionBindingListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionBindingListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actionBindingListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOutletName ;
  public: inline GGS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mActionName ;
  public: inline GGS_string readProperty_mActionName (void) const {
    return mProperty_mActionName ;
  }

  public: GGS_string mProperty_mTargetTypeName ;
  public: inline GGS_string readProperty_mTargetTypeName (void) const {
    return mProperty_mTargetTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actionBindingListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMActionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionName = inValue ;
  }

  public: inline void setter_setMTargetTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actionBindingListForGeneration_2E_element (const GGS_string & in_mOutletName,
                                                         const GGS_string & in_mTargetName,
                                                         const GGS_string & in_mActionName,
                                                         const GGS_string & in_mTargetTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_actionBindingListForGeneration_2E_element (const GGS_actionBindingListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actionBindingListForGeneration_2E_element & operator = (const GGS_actionBindingListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionBindingListForGeneration_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_string & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionBindingListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionBindingListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_string & inOperand3,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingsGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_regularBindingsGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_regularBindingsGenerationList (const class GGS_regularBindingsGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_regularBindingsGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_regularBindingsGenerationList (const class GGS_regularBindingsGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingsGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_regularBindingsGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mOutletName,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_boundObjectList & in_mBoundObjectList,
                                                 const class GGS_string & in_mBindingOptionsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingsGenerationList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularBindingsGenerationList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularBindingsGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_regularBindingsGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_boundObjectList & inOperand2,
                                                                                   const class GGS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_regularBindingsGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_boundObjectList & inOperand2,
                                                     const class GGS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_regularBindingsGenerationList add_operation (const GGS_regularBindingsGenerationList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_boundObjectList constinArgument2,
                                               class GGS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_boundObjectList constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_boundObjectList & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_boundObjectList & outArgument2,
                                                class GGS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_boundObjectList & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GGS_boundObjectList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_boundObjectList & outArgument2,
                                              class GGS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_boundObjectList & outArgument2,
                                             class GGS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingOptionsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_boundObjectList getter_mBoundObjectListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingsGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingsGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_regularBindingsGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_regularBindingsGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_regularBindingsGenerationList ;
  friend class DownEnumerator_regularBindingsGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boundObjectList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_boundObjectList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_boundObjectList (const class GGS_boundObjectList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mBoundObjectString (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_boundObjectList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_boundObjectList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_boundObjectList (const class GGS_boundObjectList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mBoundObjectString (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_boundObjectList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boundObjectList list
//--------------------------------------------------------------------------------------------------

class GGS_boundObjectList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_boundObjectList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_boundObjectList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mBoundObjectString,
                                                 const class GGS_propertyKind & in_mKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boundObjectList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boundObjectList extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boundObjectList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_boundObjectList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                     const class GGS_propertyKind & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_boundObjectList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_propertyKind & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_boundObjectList add_operation (const GGS_boundObjectList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_propertyKind constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_propertyKind constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_propertyKind & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_propertyKind & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_propertyKind & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectStringAtIndex (class GGS_string constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GGS_propertyKind constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_propertyKind & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_propertyKind & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundObjectStringAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_boundObjectList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_boundObjectList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_boundObjectList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_boundObjectList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_boundObjectList ;
  friend class DownEnumerator_boundObjectList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingsGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingsGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOutletName ;
  public: inline GGS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GGS_string mProperty_mBindingName ;
  public: inline GGS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_boundObjectList mProperty_mBoundObjectList ;
  public: inline GGS_boundObjectList readProperty_mBoundObjectList (void) const {
    return mProperty_mBoundObjectList ;
  }

  public: GGS_string mProperty_mBindingOptionsString ;
  public: inline GGS_string readProperty_mBindingOptionsString (void) const {
    return mProperty_mBindingOptionsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_regularBindingsGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectList (const GGS_boundObjectList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectList = inValue ;
  }

  public: inline void setter_setMBindingOptionsString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionsString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_regularBindingsGenerationList_2E_element (const GGS_string & in_mOutletName,
                                                        const GGS_string & in_mBindingName,
                                                        const GGS_boundObjectList & in_mBoundObjectList,
                                                        const GGS_string & in_mBindingOptionsString) ;

//--------------------------------- Copy constructor
  public: GGS_regularBindingsGenerationList_2E_element (const GGS_regularBindingsGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_regularBindingsGenerationList_2E_element & operator = (const GGS_regularBindingsGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingsGenerationList_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_boundObjectList & inOperand2,
                                                                                    const class GGS_string & inOperand3,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularBindingsGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularBindingsGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_boundObjectList & inOperand2,
                                                                                    const class GGS_string & inOperand3,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_multipleBindingGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_multipleBindingGenerationList (const class GGS_multipleBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_multipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_multipleBindingGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_multipleBindingGenerationList (const class GGS_multipleBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_multipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_multipleBindingGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mOutletName,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multipleBindingGenerationList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingGenerationList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_multipleBindingGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_multipleBindingGenerationList add_operation (const GGS_multipleBindingGenerationList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_multipleBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_multipleBindingGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_multipleBindingGenerationList ;
  friend class DownEnumerator_multipleBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBooleanMultipleBindingExpressionForGeneration init (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBooleanMultipleBindingExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBooleanMultipleBindingExpressionForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter expressionString
  public: virtual class GGS_string getter_expressionString (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOutletName ;
  public: inline GGS_string readProperty_mOutletName (void) const {
    return mProperty_mOutletName ;
  }

  public: GGS_string mProperty_mBindingName ;
  public: inline GGS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBoundObjectExpression (void) const {
    return mProperty_mBoundObjectExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_multipleBindingGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectExpression (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_multipleBindingGenerationList_2E_element (const GGS_string & in_mOutletName,
                                                        const GGS_string & in_mBindingName,
                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//--------------------------------- Copy constructor
  public: GGS_multipleBindingGenerationList_2E_element (const GGS_multipleBindingGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_multipleBindingGenerationList_2E_element & operator = (const GGS_multipleBindingGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multipleBindingGenerationList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableViewBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_tableViewBindingGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_tableViewBindingGenerationList (const class GGS_tableViewBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_tableViewBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_tableViewBindingGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_tableViewBindingGenerationList (const class GGS_tableViewBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_tableViewBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableViewBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_tableViewBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_tableViewBindingGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTableValueBindingOutletName,
                                                 const class GGS_string & in_mTableValueBindingControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tableViewBindingGenerationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableViewBindingGenerationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableViewBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_tableViewBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_tableViewBindingGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_tableViewBindingGenerationList add_operation (const GGS_tableViewBindingGenerationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingControllerNameAtIndex (class GGS_string constinArgument0,
                                                                                   class GGS_uint constinArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBindingOutletNameAtIndex (class GGS_string constinArgument0,
                                                                               class GGS_uint constinArgument1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTableValueBindingControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTableValueBindingOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_tableViewBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_tableViewBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_tableViewBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_tableViewBindingGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_tableViewBindingGenerationList ;
  friend class DownEnumerator_tableViewBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableViewBindingGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_tableViewBindingGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTableValueBindingOutletName ;
  public: inline GGS_string readProperty_mTableValueBindingOutletName (void) const {
    return mProperty_mTableValueBindingOutletName ;
  }

  public: GGS_string mProperty_mTableValueBindingControllerName ;
  public: inline GGS_string readProperty_mTableValueBindingControllerName (void) const {
    return mProperty_mTableValueBindingControllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_tableViewBindingGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTableValueBindingOutletName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingOutletName = inValue ;
  }

  public: inline void setter_setMTableValueBindingControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTableValueBindingControllerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_tableViewBindingGenerationList_2E_element (const GGS_string & in_mTableValueBindingOutletName,
                                                         const GGS_string & in_mTableValueBindingControllerName) ;

//--------------------------------- Copy constructor
  public: GGS_tableViewBindingGenerationList_2E_element (const GGS_tableViewBindingGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_tableViewBindingGenerationList_2E_element & operator = (const GGS_tableViewBindingGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tableViewBindingGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableViewBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableViewBindingGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                     const class GGS_string & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ebViewGraphicControllerBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ebViewGraphicControllerBindingGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_ebViewGraphicControllerBindingGenerationList (const class GGS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ebViewGraphicControllerBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ebViewGraphicControllerBindingGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_ebViewGraphicControllerBindingGenerationList (const class GGS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ebViewGraphicControllerBindingGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ebViewGraphicControllerBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_ebViewGraphicControllerBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ebViewGraphicControllerBindingGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mEBViewOutletName,
                                                 const class GGS_string & in_mArrayControllerControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ebViewGraphicControllerBindingGenerationList init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ebViewGraphicControllerBindingGenerationList extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ebViewGraphicControllerBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ebViewGraphicControllerBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                  const class GGS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ebViewGraphicControllerBindingGenerationList add_operation (const GGS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerControllerNameAtIndex (class GGS_string constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewOutletNameAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mArrayControllerControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEBViewOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ebViewGraphicControllerBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ebViewGraphicControllerBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ebViewGraphicControllerBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_ebViewGraphicControllerBindingGenerationList ;
  friend class DownEnumerator_ebViewGraphicControllerBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ebViewGraphicControllerBindingGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ebViewGraphicControllerBindingGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEBViewOutletName ;
  public: inline GGS_string readProperty_mEBViewOutletName (void) const {
    return mProperty_mEBViewOutletName ;
  }

  public: GGS_string mProperty_mArrayControllerControllerName ;
  public: inline GGS_string readProperty_mArrayControllerControllerName (void) const {
    return mProperty_mArrayControllerControllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEBViewOutletName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEBViewOutletName = inValue ;
  }

  public: inline void setter_setMArrayControllerControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArrayControllerControllerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_string & in_mEBViewOutletName,
                                                                       const GGS_string & in_mArrayControllerControllerName) ;

//--------------------------------- Copy constructor
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element & operator = (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ebViewGraphicControllerBindingGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                           const class GGS_string & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ebViewGraphicControllerBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ebViewGraphicControllerBindingGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                   const class GGS_string & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @viewGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_viewGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_viewGenerationList (const class GGS_viewGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_abstractViewGeneration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_viewGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_viewGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_viewGenerationList (const class GGS_viewGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_abstractViewGeneration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_viewGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @viewGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_viewGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_viewGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_viewGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mViewName,
                                                 const class GGS_abstractViewGeneration & in_mView
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_viewGenerationList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_viewGenerationList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_viewGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_viewGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                        const class GGS_abstractViewGeneration & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_viewGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_abstractViewGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_viewGenerationList add_operation (const GGS_viewGenerationList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_abstractViewGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_abstractViewGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_abstractViewGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_abstractViewGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_abstractViewGeneration & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewAtIndex (class GGS_abstractViewGeneration constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_abstractViewGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_abstractViewGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractViewGeneration getter_mViewAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_viewGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_viewGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_viewGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_viewGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_viewGenerationList ;
  friend class DownEnumerator_viewGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractViewGeneration (const class cPtr_abstractViewGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractViewGeneration init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractViewGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractViewGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractViewGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractViewGeneration_init (Compiler * inCompiler) ;


//--- Extension getter generateViewBuilder
  public: virtual class GGS_string getter_generateViewBuilder (const class GGS_bool inPreferences,
           const class GGS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractViewGeneration (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @viewGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_viewGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mViewName ;
  public: inline GGS_string readProperty_mViewName (void) const {
    return mProperty_mViewName ;
  }

  public: GGS_abstractViewGeneration mProperty_mView ;
  public: inline GGS_abstractViewGeneration readProperty_mView (void) const {
    return mProperty_mView ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_viewGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMViewName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewName = inValue ;
  }

  public: inline void setter_setMView (const GGS_abstractViewGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mView = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_viewGenerationList_2E_element (const GGS_string & in_mViewName,
                                             const GGS_abstractViewGeneration & in_mView) ;

//--------------------------------- Copy constructor
  public: GGS_viewGenerationList_2E_element (const GGS_viewGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_viewGenerationList_2E_element & operator = (const GGS_viewGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_viewGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                 const class GGS_abstractViewGeneration & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_viewGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_viewGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                         const class GGS_abstractViewGeneration & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_implicitViewFunctionGenerationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_implicitViewFunctionGenerationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_implicitViewFunctionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_implicitViewFunctionGenerationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_implicitViewFunctionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitViewFunctionGenerationList init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitViewFunctionGenerationList extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitViewFunctionGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_implicitViewFunctionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_implicitViewFunctionGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_implicitViewFunctionGenerationList add_operation (const GGS_implicitViewFunctionGenerationList & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractViewInstructionGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractViewInstructionGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractViewInstructionGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_implicitViewFunctionGenerationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_implicitViewFunctionGenerationList ;
  friend class DownEnumerator_implicitViewFunctionGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewInstructionGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractViewInstructionGeneration (const class cPtr_abstractViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractViewInstructionGeneration init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractViewInstructionGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractViewInstructionGeneration_init (Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractViewInstructionGeneration (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitViewFunctionGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GGS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitViewFunctionGenerationList_2E_element & operator = (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitViewFunctionGenerationList_2E_element init_21_ (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitViewFunctionGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitViewFunctionGenerationList_2E_element class_func_new (const class GGS_abstractViewInstructionGeneration & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutConfiguratorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutConfiguratorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutConfiguratorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutConfiguratorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutConfiguratorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutConfiguratorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_autoLayoutConfiguratorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inSource) ;
  public: GGS_autoLayoutConfiguratorMap & operator = (const GGS_autoLayoutConfiguratorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutConfiguratorMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutConfiguratorMap class_func_mapWithMapToOverride (const class GGS_autoLayoutConfiguratorMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutConfiguratorMap add_operation (const GGS_autoLayoutConfiguratorMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletTypeNameForKey (class GGS_string constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAutoLayoutOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutConfiguratorMap getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutConfiguratorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutConfiguratorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GGS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_autoLayoutConfiguratorMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutConfiguratorMap ;
  friend class DownEnumerator_autoLayoutConfiguratorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutConfiguratorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutConfiguratorMap : public cMapElement {
//--- Map attributes
  public: GGS_string mProperty_mAutoLayoutOutletTypeName ;

//--- Constructors
  public: cMapElement_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap_2E_element & inValue
                                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_autoLayoutConfiguratorMap (const GGS_lstring & inKey,
                                                 const GGS_string & in_mAutoLayoutOutletTypeName
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
// Phase 1: @autoLayoutConfiguratorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mAutoLayoutOutletTypeName ;
  public: inline GGS_string readProperty_mAutoLayoutOutletTypeName (void) const {
    return mProperty_mAutoLayoutOutletTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAutoLayoutOutletTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutOutletTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_string & in_mAutoLayoutOutletTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutConfiguratorMap_2E_element & operator = (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutConfiguratorMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_string & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: autoLayoutConfiguratorMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutConfiguratorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutConfiguratorMap_2E_element_3F_ (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutConfiguratorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutConfiguratorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autoLayoutConfiguratorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentFileGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDocumentFileGeneration (const class cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mDocumentName (void) const ;

  public: class GGS_string readProperty_mRootEntityName (void) const ;

  public: class GGS_string readProperty_mMainViewName (void) const ;

  public: class GGS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewDeclarationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList readProperty_mOutletLinkerGenerationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentFileGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                            const class GGS_string & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_propertyGenerationList & inOperand3,
                                                                                                                            const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                            const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                            const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                            const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                            const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                            const class GGS_viewGenerationList & inOperand11,
                                                                                                                            const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                            const class GGS_string & inOperand14,
                                                                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentFileGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentFileGeneration class_func_new (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            const class GGS_propertyGenerationList & inOperand3,
                                                                            const class GGS_decoratedOutletMap & inOperand4,
                                                                            const class GGS_autoLayoutOutletMap & inOperand5,
                                                                            const class GGS_actionBindingListForGeneration & inOperand6,
                                                                            const class GGS_regularBindingsGenerationList & inOperand7,
                                                                            const class GGS_multipleBindingGenerationList & inOperand8,
                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                            const class GGS_viewGenerationList & inOperand11,
                                                                            const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                            const class GGS_string & inOperand14,
                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                      const class GGS_string & inOperand1,
                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                      const class GGS_propertyGenerationList & inOperand3,
                                                                                                                      const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                      const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                      const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                      const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                      const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                      const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                      const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                      const class GGS_viewGenerationList & inOperand11,
                                                                                                                      const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                      const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                      const class GGS_string & inOperand14,
                                                                                                                      const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mDocumentName ;
  public: GGS_string mProperty_mRootEntityName ;
  public: GGS_string mProperty_mMainViewName ;
  public: GGS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GGS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GGS_string & in_mDocumentName,
                                                 const GGS_string & in_mRootEntityName,
                                                 const GGS_string & in_mMainViewName,
                                                 const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GGS_decoratedOutletMap & in_mOutletMap,
                                                 const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GGS_viewGenerationList & in_mViewDeclarationList,
                                                 const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
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
// Phase 1: @autoLayoutDocumentFileGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

  public: GGS_autoLayoutDocumentFileGeneration_2E_weak & operator = (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDocumentFileGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_autoLayoutDocumentFileGeneration unwrappedValue (void) const {
    GGS_autoLayoutDocumentFileGeneration result ;
    if (isValid ()) {
      const cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_autoLayoutDocumentFileGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentFileGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentFileGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibDescriptorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mainXibLineDescriptorList mProperty_mLine ;
  public: inline GGS_mainXibLineDescriptorList readProperty_mLine (void) const {
    return mProperty_mLine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLine (const GGS_mainXibLineDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLine = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibDescriptorList_2E_element (const GGS_mainXibLineDescriptorList & in_mLine) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibDescriptorList_2E_element (const GGS_mainXibDescriptorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibDescriptorList_2E_element & operator = (const GGS_mainXibDescriptorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibDescriptorList_2E_element init_21_ (const class GGS_mainXibLineDescriptorList & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibDescriptorList_2E_element class_func_new (const class GGS_mainXibLineDescriptorList & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefsDeclarationAST (const class cPtr_prefsDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_prefDeclaration readProperty_mDeclaration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefsDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_prefDeclaration & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_prefDeclaration & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_prefDeclaration & inOperand1,
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
  public: GGS_prefDeclaration mProperty_mDeclaration ;


//--- Default constructor
  public: cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_prefDeclaration & in_mDeclaration,
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
// Phase 1: @prefsDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsDeclarationAST_2E_weak (const class GGS_prefsDeclarationAST & inSource) ;

  public: GGS_prefsDeclarationAST_2E_weak & operator = (const class GGS_prefsDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsDeclarationAST_2E_weak init_nil (void) {
    GGS_prefsDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsDeclarationAST bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_prefsDeclarationAST unwrappedValue (void) const {
    GGS_prefsDeclarationAST result ;
    if (isValid ()) {
      const cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_prefsDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @preferencesForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_preferencesForGeneration (const class cPtr_preferencesForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_propertyGenerationList readProperty_mPropertyListForGeneration (void) const ;

  public: class GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mActionBindingListForGeneration (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewGenerationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_preferencesForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                        const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                        const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                        const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                        const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                        const class GGS_decoratedOutletMap & inOperand5,
                                                                                                        const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                        const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                        const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                        const class GGS_viewGenerationList & inOperand9,
                                                                                                        const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                        const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                        const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_preferencesForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration class_func_new (const class GGS_propertyGenerationList & inOperand0,
                                                                    const class GGS_mainXibDescriptorList & inOperand1,
                                                                    const class GGS_regularBindingsGenerationList & inOperand2,
                                                                    const class GGS_multipleBindingGenerationList & inOperand3,
                                                                    const class GGS_actionBindingListForGeneration & inOperand4,
                                                                    const class GGS_decoratedOutletMap & inOperand5,
                                                                    const class GGS_externSwiftFunctionList & inOperand6,
                                                                    const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                    const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                    const class GGS_viewGenerationList & inOperand9,
                                                                    const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                    const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                    const class GGS_autoLayoutOutletMap & inOperand12,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @preferencesForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                  const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                  const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                  const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                  const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                  const class GGS_decoratedOutletMap & inOperand5,
                                                                                                  const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                  const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                  const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                  const class GGS_viewGenerationList & inOperand9,
                                                                                                  const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                  const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                  const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                  Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewGenerationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;


//--- Default constructor
  public: cPtr_preferencesForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                         const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                         const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                         const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                         const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                         const GGS_decoratedOutletMap & in_mOutletMap,
                                         const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                         const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                         const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                         const GGS_viewGenerationList & in_mViewGenerationList,
                                         const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                         const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                         const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
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
// Phase 1: @preferencesForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_preferencesForGeneration_2E_weak (const class GGS_preferencesForGeneration & inSource) ;

  public: GGS_preferencesForGeneration_2E_weak & operator = (const class GGS_preferencesForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_preferencesForGeneration_2E_weak init_nil (void) {
    GGS_preferencesForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_preferencesForGeneration bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_preferencesForGeneration unwrappedValue (void) const {
    GGS_preferencesForGeneration result ;
    if (isValid ()) {
      const cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_preferencesForGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_preferencesForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                       const GGS_autoLayoutClassParameterType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameterList_2E_element & operator = (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_autoLayoutClassParameterType & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;

