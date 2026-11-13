#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableViewBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_tableViewBindingGenerationList final {
  public: DownEnumerator_tableViewBindingGenerationList (const class GGS_tableViewBindingGenerationList & inList) ;

  public: ~ DownEnumerator_tableViewBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_tableViewBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_tableViewBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_tableViewBindingGenerationList (const DownEnumerator_tableViewBindingGenerationList &) = delete ;
  private: DownEnumerator_tableViewBindingGenerationList & operator = (const DownEnumerator_tableViewBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_tableViewBindingGenerationList final {
  public: UpEnumerator_tableViewBindingGenerationList (const class GGS_tableViewBindingGenerationList & inList)  ;

  public: ~ UpEnumerator_tableViewBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTableValueBindingOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTableValueBindingControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_tableViewBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_tableViewBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_tableViewBindingGenerationList (const UpEnumerator_tableViewBindingGenerationList &) = delete ;
  private: UpEnumerator_tableViewBindingGenerationList & operator = (const UpEnumerator_tableViewBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @tableViewBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_tableViewBindingGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_tableViewBindingGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_tableViewBindingGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_tableViewBindingGenerationList (void) = default ;

//--- Copy
  public: GGS_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList &) = default ;
  public: GGS_tableViewBindingGenerationList & operator = (const GGS_tableViewBindingGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_tableViewBindingGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_tableViewBindingGenerationList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_tableViewBindingGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mTableValueBindingOutletName,
                                                 const class GGS_string & in_mTableValueBindingControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tableViewBindingGenerationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_tableViewBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_tableViewBindingGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_tableViewBindingGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_tableViewBindingGenerationList add_operation (const GGS_tableViewBindingGenerationList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMTableValueBindingControllerNameAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMTableValueBindingOutletNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mTableValueBindingControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTableValueBindingOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_tableViewBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_tableViewBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_tableViewBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_tableViewBindingGenerationList ;
  friend class DownEnumerator_tableViewBindingGenerationList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ebViewGraphicControllerBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ebViewGraphicControllerBindingGenerationList final {
  public: DownEnumerator_ebViewGraphicControllerBindingGenerationList (const class GGS_ebViewGraphicControllerBindingGenerationList & inList) ;

  public: ~ DownEnumerator_ebViewGraphicControllerBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ebViewGraphicControllerBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ebViewGraphicControllerBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ebViewGraphicControllerBindingGenerationList (const DownEnumerator_ebViewGraphicControllerBindingGenerationList &) = delete ;
  private: DownEnumerator_ebViewGraphicControllerBindingGenerationList & operator = (const DownEnumerator_ebViewGraphicControllerBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ebViewGraphicControllerBindingGenerationList final {
  public: UpEnumerator_ebViewGraphicControllerBindingGenerationList (const class GGS_ebViewGraphicControllerBindingGenerationList & inList)  ;

  public: ~ UpEnumerator_ebViewGraphicControllerBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEBViewOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mArrayControllerControllerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ebViewGraphicControllerBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ebViewGraphicControllerBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ebViewGraphicControllerBindingGenerationList (const UpEnumerator_ebViewGraphicControllerBindingGenerationList &) = delete ;
  private: UpEnumerator_ebViewGraphicControllerBindingGenerationList & operator = (const UpEnumerator_ebViewGraphicControllerBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ebViewGraphicControllerBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_ebViewGraphicControllerBindingGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ebViewGraphicControllerBindingGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ebViewGraphicControllerBindingGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_ebViewGraphicControllerBindingGenerationList (void) = default ;

//--- Copy
  public: GGS_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList &) = default ;
  public: GGS_ebViewGraphicControllerBindingGenerationList & operator = (const GGS_ebViewGraphicControllerBindingGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_ebViewGraphicControllerBindingGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ebViewGraphicControllerBindingGenerationList subList (const int32_t inStart,
                                                                     const int32_t inLength,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ebViewGraphicControllerBindingGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mEBViewOutletName,
                                                 const class GGS_string & in_mArrayControllerControllerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ebViewGraphicControllerBindingGenerationList init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_ebViewGraphicControllerBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                  const class GGS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ebViewGraphicControllerBindingGenerationList add_operation (const GGS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMArrayControllerControllerNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMEBViewOutletNameAtIndex (class GGS_string constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mArrayControllerControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mEBViewOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ebViewGraphicControllerBindingGenerationList ;
  friend class DownEnumerator_ebViewGraphicControllerBindingGenerationList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutConfiguratorMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutConfiguratorMap final {

  public: DownEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutConfiguratorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutConfiguratorMap (const DownEnumerator_autoLayoutConfiguratorMap &) = delete ;
  private: DownEnumerator_autoLayoutConfiguratorMap & operator = (const DownEnumerator_autoLayoutConfiguratorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutConfiguratorMap final {
  public: UpEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutConfiguratorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutConfiguratorMap (const UpEnumerator_autoLayoutConfiguratorMap &) = delete ;
  private: UpEnumerator_autoLayoutConfiguratorMap & operator = (const UpEnumerator_autoLayoutConfiguratorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutConfiguratorMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutConfiguratorMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutConfiguratorMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inSource) ;
  public: GGS_autoLayoutConfiguratorMap & operator = (const GGS_autoLayoutConfiguratorMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutConfiguratorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutConfiguratorMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap class_func_mapWithMapToOverride (const class GGS_autoLayoutConfiguratorMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoLayoutOutletTypeNameForKey (class GGS_string constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_string & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mAutoLayoutOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutConfiguratorMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutConfiguratorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutConfiguratorMap ;
  friend class DownEnumerator_autoLayoutConfiguratorMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutConfiguratorMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentFileGeneration reference class
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

  public: class GGS__5B_multipleBindingGeneration_5D_ readProperty_multipleBindingGenerationList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS__5B_viewGeneration_5D_ readProperty_mViewDeclarationList (void) const ;

  public: class GGS__5B_abstractViewInstructionGeneration_5D_ readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ readProperty_mOutletLinkerGenerationList (void) const ;

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
                                                                                                                            const class GGS__5B_multipleBindingGeneration_5D_ & inOperand8,
                                                                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                            const class GGS__5B_viewGeneration_5D_ & inOperand11,
                                                                                                                            const class GGS__5B_abstractViewInstructionGeneration_5D_ & inOperand12,
                                                                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                            const class GGS_string & inOperand14,
                                                                                                                            const class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inOperand15,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
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
                                                                                                                      const class GGS__5B_multipleBindingGeneration_5D_ & inOperand8,
                                                                                                                      const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                      const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                      const class GGS__5B_viewGeneration_5D_ & inOperand11,
                                                                                                                      const class GGS__5B_abstractViewInstructionGeneration_5D_ & inOperand12,
                                                                                                                      const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                      const class GGS_string & inOperand14,
                                                                                                                      const class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inOperand15,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension proc generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
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
  public: GGS__5B_multipleBindingGeneration_5D_ mProperty_multipleBindingGenerationList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS__5B_viewGeneration_5D_ mProperty_mViewDeclarationList ;
  public: GGS__5B_abstractViewInstructionGeneration_5D_ mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS__5B_autoLayoutOutletLinkerGeneration_5D_ mProperty_mOutletLinkerGenerationList ;


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
                                                 const GGS__5B_multipleBindingGeneration_5D_ & in_multipleBindingGenerationList,
                                                 const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GGS__5B_viewGeneration_5D_ & in_mViewDeclarationList,
                                                 const GGS__5B_abstractViewInstructionGeneration_5D_ & in_mImplicitViewFunctionGenerationList,
                                                 const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & in_mOutletLinkerGenerationList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentFileGeneration_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDocumentFileGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [simpleStoredProperty] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_simpleStoredProperty_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_simpleStoredProperty_5D_ (const class GGS__5B_simpleStoredProperty_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_simpleStoredProperty_5D_ (const DownEnumerator__5B_simpleStoredProperty_5D_ &) = delete ;
  private: DownEnumerator__5B_simpleStoredProperty_5D_ & operator = (const DownEnumerator__5B_simpleStoredProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_simpleStoredProperty current (LOCATION_ARGS) const ;
  public: class GGS_simpleStoredProperty current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_simpleStoredProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_simpleStoredProperty_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_simpleStoredProperty_5D_ (const class GGS__5B_simpleStoredProperty_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_simpleStoredProperty_5D_ (const UpEnumerator__5B_simpleStoredProperty_5D_ &) = delete ;
  private: UpEnumerator__5B_simpleStoredProperty_5D_ & operator = (const UpEnumerator__5B_simpleStoredProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_simpleStoredProperty current (LOCATION_ARGS) const ;
  public: class GGS_simpleStoredProperty current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_simpleStoredProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_simpleStoredProperty_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_simpleStoredProperty> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_simpleStoredProperty_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_simpleStoredProperty_5D_ (const GGS__5B_simpleStoredProperty_5D_ & inSource) ;
  public: GGS__5B_simpleStoredProperty_5D_ & operator = (const GGS__5B_simpleStoredProperty_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_simpleStoredProperty_5D_ init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_simpleStoredProperty_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_simpleStoredProperty & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_simpleStoredProperty_5D_ add_operation (const GGS__5B_simpleStoredProperty_5D_ & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_simpleStoredProperty constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_simpleStoredProperty constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_simpleStoredProperty & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_simpleStoredProperty & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_simpleStoredProperty & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_simpleStoredProperty constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_simpleStoredProperty getter_first (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_simpleStoredProperty getter_last (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_simpleStoredProperty_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_simpleStoredProperty_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                 const class GGS_uint & constinOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_simpleStoredProperty readSubscript__3F_ (const class GGS_uint & in0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_simpleStoredProperty_5D_ ;
  friend class DownEnumerator__5B_simpleStoredProperty_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_simpleStoredProperty_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @simpleStoredProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_simpleStoredProperty : public AC_GALGAS_root {
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
  public: GGS_simpleStoredProperty (void) ;

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
  public: GGS_simpleStoredProperty (const GGS_lstring & in_mPropertyTypeName,
                                    const GGS_lstring & in_mPropertyName,
                                    const GGS_abstractDefaultValue & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_simpleStoredProperty (const GGS_simpleStoredProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_simpleStoredProperty & operator = (const GGS_simpleStoredProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_simpleStoredProperty init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_abstractDefaultValue & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleStoredProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externSwiftFunctionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externSwiftFunctionList final {
  public: DownEnumerator_externSwiftFunctionList (const class GGS_externSwiftFunctionList & inList) ;

  public: ~ DownEnumerator_externSwiftFunctionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftFunctionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externSwiftFunctionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externSwiftFunctionList (const DownEnumerator_externSwiftFunctionList &) = delete ;
  private: DownEnumerator_externSwiftFunctionList & operator = (const DownEnumerator_externSwiftFunctionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externSwiftFunctionList final {
  public: UpEnumerator_externSwiftFunctionList (const class GGS_externSwiftFunctionList & inList)  ;

  public: ~ UpEnumerator_externSwiftFunctionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftFunctionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externSwiftFunctionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externSwiftFunctionList (const UpEnumerator_externSwiftFunctionList &) = delete ;
  private: UpEnumerator_externSwiftFunctionList & operator = (const UpEnumerator_externSwiftFunctionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externSwiftFunctionList list
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftFunctionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externSwiftFunctionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externSwiftFunctionList (void) ;

//--- Destructor
  public: virtual ~ GGS_externSwiftFunctionList (void) = default ;

//--- Copy
  public: GGS_externSwiftFunctionList (const GGS_externSwiftFunctionList &) = default ;
  public: GGS_externSwiftFunctionList & operator = (const GGS_externSwiftFunctionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_externSwiftFunctionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externSwiftFunctionList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externSwiftFunctionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mExternSwiftFunctionName,
                                                 const class GGS_lstring & in_mCallerName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externSwiftFunctionList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_externSwiftFunctionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_externSwiftFunctionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_externSwiftFunctionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_externSwiftFunctionList add_operation (const GGS_externSwiftFunctionList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCallerNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMExternSwiftFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mCallerNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mExternSwiftFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_externSwiftFunctionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_externSwiftFunctionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_externSwiftFunctionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externSwiftFunctionList ;
  friend class DownEnumerator_externSwiftFunctionList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsDeclarationAST reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_outletDeclarationAST_5D_ mProperty_mOutletDeclarationList ;
  public: inline GGS__5B_outletDeclarationAST_5D_ readProperty_mOutletDeclarationList (void) const {
    return mProperty_mOutletDeclarationList ;
  }

  public: GGS__5B_simpleStoredProperty_5D_ mProperty_mSimpleStoredAttributeList ;
  public: inline GGS__5B_simpleStoredProperty_5D_ readProperty_mSimpleStoredAttributeList (void) const {
    return mProperty_mSimpleStoredAttributeList ;
  }

  public: GGS__5B_lstring_5D_ mProperty_mActionDeclarationList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mActionDeclarationList (void) const {
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

  public: GGS__5B_mainXibDescriptor_5D_ mProperty_mMainXibDescriptorList ;
  public: inline GGS__5B_mainXibDescriptor_5D_ readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GGS__5B_astViewDeclaration_5D_ mProperty_mViewDeclarationList ;
  public: inline GGS__5B_astViewDeclaration_5D_ readProperty_mViewDeclarationList (void) const {
    return mProperty_mViewDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_prefDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletDeclarationList (const GGS__5B_outletDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletDeclarationList = inValue ;
  }

  public: inline void setter_setMSimpleStoredAttributeList (const GGS__5B_simpleStoredProperty_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleStoredAttributeList = inValue ;
  }

  public: inline void setter_setMActionDeclarationList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionDeclarationList = inValue ;
  }

  public: inline void setter_setMExternSwiftFunctionList (const GGS_externSwiftFunctionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionList = inValue ;
  }

  public: inline void setter_setMSignatureList (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureList = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GGS__5B_mainXibDescriptor_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMViewDeclarationList (const GGS__5B_astViewDeclaration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mViewDeclarationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prefDeclaration (const GGS__5B_outletDeclarationAST_5D_ & in_mOutletDeclarationList,
                               const GGS__5B_simpleStoredProperty_5D_ & in_mSimpleStoredAttributeList,
                               const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                               const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                               const GGS_stringset & in_mSignatureList,
                               const GGS__5B_mainXibDescriptor_5D_ & in_mMainXibDescriptorList,
                               const GGS__5B_astViewDeclaration_5D_ & in_mViewDeclarationList) ;

//--------------------------------- Copy constructor
  public: GGS_prefDeclaration (const GGS_prefDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_prefDeclaration & operator = (const GGS_prefDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefDeclaration init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_prefDeclaration & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsDeclarationAST_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsDeclarationAST bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefsDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @preferencesForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_preferencesForGeneration (const class cPtr_preferencesForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_propertyGenerationList readProperty_mPropertyListForGeneration (void) const ;

  public: class GGS__5B_mainXibDescriptor_5D_ readProperty_mMainXibDescriptorList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS__5B_multipleBindingGeneration_5D_ readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mActionBindingListForGeneration (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS__5B_viewGeneration_5D_ readProperty_mViewGenerationList (void) const ;

  public: class GGS__5B_abstractViewInstructionGeneration_5D_ readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_preferencesForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                        const class GGS__5B_mainXibDescriptor_5D_ & inOperand1,
                                                                                                        const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                        const class GGS__5B_multipleBindingGeneration_5D_ & inOperand3,
                                                                                                        const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                        const class GGS_decoratedOutletMap & inOperand5,
                                                                                                        const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                        const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                        const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                        const class GGS__5B_viewGeneration_5D_ & inOperand9,
                                                                                                        const class GGS__5B_abstractViewInstructionGeneration_5D_ & inOperand10,
                                                                                                        const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                        const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @preferencesForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                  const class GGS__5B_mainXibDescriptor_5D_ & inOperand1,
                                                                                                  const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                  const class GGS__5B_multipleBindingGeneration_5D_ & inOperand3,
                                                                                                  const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                  const class GGS_decoratedOutletMap & inOperand5,
                                                                                                  const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                  const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                  const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                  const class GGS__5B_viewGeneration_5D_ & inOperand9,
                                                                                                  const class GGS__5B_abstractViewInstructionGeneration_5D_ & inOperand10,
                                                                                                  const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                  const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                  Compiler * inCompiler) ;


//--- Extension proc generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public: GGS__5B_mainXibDescriptor_5D_ mProperty_mMainXibDescriptorList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS__5B_multipleBindingGeneration_5D_ mProperty_mMultipleBindingGenerationList ;
  public: GGS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS__5B_viewGeneration_5D_ mProperty_mViewGenerationList ;
  public: GGS__5B_abstractViewInstructionGeneration_5D_ mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;


//--- Default constructor
  public: cPtr_preferencesForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                         const GGS__5B_mainXibDescriptor_5D_ & in_mMainXibDescriptorList,
                                         const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                         const GGS__5B_multipleBindingGeneration_5D_ & in_mMultipleBindingGenerationList,
                                         const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                         const GGS_decoratedOutletMap & in_mOutletMap,
                                         const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                         const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                         const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                         const GGS__5B_viewGeneration_5D_ & in_mViewGenerationList,
                                         const GGS__5B_abstractViewInstructionGeneration_5D_ & in_mImplicitViewFunctionGenerationList,
                                         const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                         const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @preferencesForGeneration_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_preferencesForGeneration bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_preferencesForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroup struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroup : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mGroupReference ;
  public: inline GGS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GGS_string mProperty_mGroupName ;
  public: inline GGS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_string mProperty_mGroupPath ;
  public: inline GGS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GGS__5B_string_5D_ mProperty_mChildrenRefs ;
  public: inline GGS__5B_string_5D_ readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroup (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroup (const GGS_string & in_mGroupReference,
                          const GGS_string & in_mGroupName,
                          const GGS_string & in_mGroupPath,
                          const GGS__5B_string_5D_ & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroup (const GGS_XCodeGroup & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroup & operator = (const GGS_XCodeGroup & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroup init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                      const class GGS_string & inOperand1,
                                                      const class GGS_string & inOperand2,
                                                      const class GGS__5B_string_5D_ & inOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroup ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTarget struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTarget : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS__5B_string_5D_ mProperty_mBuildPhaseRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mBuildConfigurationSettingList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mFrameworksFileRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeToolTarget (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTarget (const GGS_string & in_mTargetRef,
                               const GGS_string & in_mTargetName,
                               const GGS_string & in_mProductFileReference,
                               const GGS_string & in_mProductFileName,
                               const GGS__5B_string_5D_ & in_mBuildPhaseRefList,
                               const GGS_string & in_mBuildPhaseRef,
                               const GGS_string & in_mBuildConfigurationListRef,
                               const GGS__5B_string_5D_ & in_mBuildConfigurationSettingList,
                               const GGS_string & in_mBuildConfigurationRef,
                               const GGS__5B_string_5D_ & in_mFrameworksFileRefList,
                               const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTarget (const GGS_XCodeToolTarget & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTarget & operator = (const GGS_XCodeToolTarget & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTarget init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS__5B_string_5D_ & inOperand4,
                                                                                       const class GGS_string & inOperand5,
                                                                                       const class GGS_string & inOperand6,
                                                                                       const class GGS__5B_string_5D_ & inOperand7,
                                                                                       const class GGS_string & inOperand8,
                                                                                       const class GGS__5B_string_5D_ & inOperand9,
                                                                                       const class GGS_string & inOperand10,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTarget ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTarget struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTarget : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS__5B_string_5D_ mProperty_mBuildPhaseRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mBuildConfigurationSettingList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mFrameworksFileRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mDependentTargets ;
  public: inline GGS__5B__32_string_5D_ readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GGS_string mProperty_mResourceBuildRef ;
  public: inline GGS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mResourceFileBuildRefs ;
  public: inline GGS__5B_string_5D_ readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

  public: GGS_string mProperty_mInfoPListFile ;
  public: inline GGS_string readProperty_mInfoPListFile (void) const {
    return mProperty_mInfoPListFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeAppTarget (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

  public: inline void setter_setMInfoPListFile (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPListFile = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeAppTarget (const GGS_string & in_mTargetRef,
                              const GGS_string & in_mTargetName,
                              const GGS_string & in_mProductFileReference,
                              const GGS_string & in_mProductFileName,
                              const GGS__5B_string_5D_ & in_mBuildPhaseRefList,
                              const GGS_string & in_mBuildPhaseRef,
                              const GGS_string & in_mBuildConfigurationListRef,
                              const GGS__5B_string_5D_ & in_mBuildConfigurationSettingList,
                              const GGS_string & in_mBuildConfigurationRef,
                              const GGS__5B_string_5D_ & in_mFrameworksFileRefList,
                              const GGS_string & in_mFrameworkBuildPhaseRef,
                              const GGS__5B__32_string_5D_ & in_mDependentTargets,
                              const GGS_string & in_mResourceBuildRef,
                              const GGS__5B_string_5D_ & in_mResourceFileBuildRefs,
                              const GGS_string & in_mInfoPListFile) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeAppTarget (const GGS_XCodeAppTarget & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeAppTarget & operator = (const GGS_XCodeAppTarget & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTarget init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS__5B_string_5D_ & inOperand4,
                                                                                                      const class GGS_string & inOperand5,
                                                                                                      const class GGS_string & inOperand6,
                                                                                                      const class GGS__5B_string_5D_ & inOperand7,
                                                                                                      const class GGS_string & inOperand8,
                                                                                                      const class GGS__5B_string_5D_ & inOperand9,
                                                                                                      const class GGS_string & inOperand10,
                                                                                                      const class GGS__5B__32_string_5D_ & inOperand11,
                                                                                                      const class GGS_string & inOperand12,
                                                                                                      const class GGS__5B_string_5D_ & inOperand13,
                                                                                                      const class GGS_string & inOperand14,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTarget ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFile struct
//--------------------------------------------------------------------------------------------------

class GGS_BuildFile : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFileReference ;
  public: inline GGS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GGS_string mProperty_mFileName ;
  public: inline GGS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GGS_string mProperty_mBuildReference ;
  public: inline GGS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_BuildFile (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFile (const GGS_string & in_mFileReference,
                         const GGS_string & in_mFileName,
                         const GGS_string & in_mBuildReference) ;

//--------------------------------- Copy constructor
  public: GGS_BuildFile (const GGS_BuildFile & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_BuildFile & operator = (const GGS_BuildFile & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFile init_21__21__21_ (const class GGS_string & inOperand0,
                                                 const class GGS_string & inOperand1,
                                                 const class GGS_string & inOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFile ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeGroup] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeGroup_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeGroup_5D_ (const class GGS__5B_XCodeGroup_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeGroup_5D_ (const DownEnumerator__5B_XCodeGroup_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeGroup_5D_ & operator = (const DownEnumerator__5B_XCodeGroup_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeGroup current (LOCATION_ARGS) const ;
  public: class GGS_XCodeGroup current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeGroup_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeGroup_5D_ (const class GGS__5B_XCodeGroup_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeGroup_5D_ (const UpEnumerator__5B_XCodeGroup_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeGroup_5D_ & operator = (const UpEnumerator__5B_XCodeGroup_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeGroup current (LOCATION_ARGS) const ;
  public: class GGS_XCodeGroup current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeGroup_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeGroup_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeGroup_5D_ (const GGS__5B_XCodeGroup_5D_ & inSource) ;
  public: GGS__5B_XCodeGroup_5D_ & operator = (const GGS__5B_XCodeGroup_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_XCodeGroup_5D_ init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_XCodeGroup_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_XCodeGroup & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeGroup_5D_ add_operation (const GGS__5B_XCodeGroup_5D_ & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeGroup constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeGroup constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeGroup & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeGroup & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeGroup & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_XCodeGroup constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeGroup getter_first (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeGroup getter_last (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeGroup_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeGroup_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                       const class GGS_uint & constinOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_XCodeGroup readSubscript__3F_ (const class GGS_uint & in0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeGroup_5D_ ;
  friend class DownEnumerator__5B_XCodeGroup_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeGroup_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeToolTarget] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeToolTarget_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeToolTarget_5D_ (const class GGS__5B_XCodeToolTarget_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeToolTarget_5D_ (const DownEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeToolTarget_5D_ & operator = (const DownEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeToolTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeToolTarget current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeToolTarget_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeToolTarget_5D_ (const class GGS__5B_XCodeToolTarget_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeToolTarget_5D_ (const UpEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeToolTarget_5D_ & operator = (const UpEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeToolTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeToolTarget current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeToolTarget_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeToolTarget_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeToolTarget_5D_ (const GGS__5B_XCodeToolTarget_5D_ & inSource) ;
  public: GGS__5B_XCodeToolTarget_5D_ & operator = (const GGS__5B_XCodeToolTarget_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_XCodeToolTarget_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_XCodeToolTarget_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_XCodeToolTarget & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeToolTarget_5D_ add_operation (const GGS__5B_XCodeToolTarget_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeToolTarget constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeToolTarget constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeToolTarget & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeToolTarget & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeToolTarget & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_XCodeToolTarget constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTarget getter_first (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTarget getter_last (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeToolTarget_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeToolTarget_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                            const class GGS_uint & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_XCodeToolTarget readSubscript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeToolTarget_5D_ ;
  friend class DownEnumerator__5B_XCodeToolTarget_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeToolTarget_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeAppTarget] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeAppTarget_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeAppTarget_5D_ (const class GGS__5B_XCodeAppTarget_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeAppTarget_5D_ (const DownEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeAppTarget_5D_ & operator = (const DownEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeAppTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeAppTarget current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeAppTarget_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeAppTarget_5D_ (const class GGS__5B_XCodeAppTarget_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeAppTarget_5D_ (const UpEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeAppTarget_5D_ & operator = (const UpEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeAppTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeAppTarget current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeAppTarget_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeAppTarget_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeAppTarget_5D_ (const GGS__5B_XCodeAppTarget_5D_ & inSource) ;
  public: GGS__5B_XCodeAppTarget_5D_ & operator = (const GGS__5B_XCodeAppTarget_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_XCodeAppTarget_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_XCodeAppTarget_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_XCodeAppTarget & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeAppTarget_5D_ add_operation (const GGS__5B_XCodeAppTarget_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeAppTarget constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeAppTarget constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeAppTarget & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeAppTarget & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeAppTarget & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_XCodeAppTarget constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeAppTarget getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeAppTarget getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeAppTarget_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeAppTarget_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                           const class GGS_uint & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_XCodeAppTarget readSubscript__3F_ (const class GGS_uint & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeAppTarget_5D_ ;
  friend class DownEnumerator__5B_XCodeAppTarget_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeAppTarget_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [BuildFile] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_BuildFile_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_BuildFile_5D_ (const class GGS__5B_BuildFile_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_BuildFile_5D_ (const DownEnumerator__5B_BuildFile_5D_ &) = delete ;
  private: DownEnumerator__5B_BuildFile_5D_ & operator = (const DownEnumerator__5B_BuildFile_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_BuildFile current (LOCATION_ARGS) const ;
  public: class GGS_BuildFile current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_BuildFile> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_BuildFile_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_BuildFile_5D_ (const class GGS__5B_BuildFile_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_BuildFile_5D_ (const UpEnumerator__5B_BuildFile_5D_ &) = delete ;
  private: UpEnumerator__5B_BuildFile_5D_ & operator = (const UpEnumerator__5B_BuildFile_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_BuildFile current (LOCATION_ARGS) const ;
  public: class GGS_BuildFile current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_BuildFile> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_BuildFile_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_BuildFile> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_BuildFile_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_BuildFile_5D_ (const GGS__5B_BuildFile_5D_ & inSource) ;
  public: GGS__5B_BuildFile_5D_ & operator = (const GGS__5B_BuildFile_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_BuildFile_5D_ init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_BuildFile_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_BuildFile & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_BuildFile_5D_ add_operation (const GGS__5B_BuildFile_5D_ & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_BuildFile constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_BuildFile constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_BuildFile & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_BuildFile & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_BuildFile & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_BuildFile constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_BuildFile getter_first (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_BuildFile getter_last (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_BuildFile_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_BuildFile_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                      const class GGS_uint & constinOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_BuildFile readSubscript__3F_ (const class GGS_uint & in0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_BuildFile_5D_ ;
  friend class DownEnumerator__5B_BuildFile_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_BuildFile_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassDeclarationAST reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outletClassDeclarationAST class
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


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_outletClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outletClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outletClassDeclarationAST_2E_weak (const class GGS_outletClassDeclarationAST & inSource) ;

  public: GGS_outletClassDeclarationAST_2E_weak & operator = (const class GGS_outletClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outletClassDeclarationAST_2E_weak init_nil (void) {
    GGS_outletClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outletClassDeclarationAST bang_outletClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_outletClassDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outletClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletClassMap final {

  public: DownEnumerator_outletClassMap (const class GGS_outletClassMap & inMap) ;

  public: ~ DownEnumerator_outletClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;

  public: class GGS_outletClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletClassMap (const DownEnumerator_outletClassMap &) = delete ;
  private: DownEnumerator_outletClassMap & operator = (const DownEnumerator_outletClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletClassMap final {
  public: UpEnumerator_outletClassMap (const class GGS_outletClassMap & inMap)  ;

  public: ~ UpEnumerator_outletClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS_outletClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletClassMap (const UpEnumerator_outletClassMap &) = delete ;
  private: UpEnumerator_outletClassMap & operator = (const UpEnumerator_outletClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_outletClassMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_outletClassMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_outletClassMap (void) ;

//--- Handle copy
  public: GGS_outletClassMap (const GGS_outletClassMap & inSource) ;
  public: GGS_outletClassMap & operator = (const GGS_outletClassMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_outletClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassMap class_func_mapWithMapToOverride (const class GGS_outletClassMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_bool constinArgument3,
                                 class GGS_bool constinArgument4,
                                 class GGS_bool constinArgument5,
                                 class GGS_bool constinArgument6,
                                 class GGS_bool constinArgument7,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
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
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassMap ;
  friend class DownEnumerator_outletClassMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassMap_2E_element struct
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

//--------------------------------- Copy constructor
  public: GGS_outletClassMap_2E_element (const GGS_outletClassMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassMap_2E_element & operator = (const GGS_outletClassMap_2E_element & inSource) ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: outletClassMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyDeclarationAST (const class cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPropertyTypeName (void) const ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;

  public: class GGS_abstractDefaultValue readProperty_mDefaultValue (void) const ;

  public: class GGS_bool readProperty_generateResetMethod (void) const ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
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


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc firstAnalysisPhase
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyDeclarationAST_2E_weak (const class GGS_atomicPropertyDeclarationAST & inSource) ;

  public: GGS_atomicPropertyDeclarationAST_2E_weak & operator = (const class GGS_atomicPropertyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyDeclarationAST_2E_weak init_nil (void) {
    GGS_atomicPropertyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyDeclarationAST bang_atomicPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicPropertyDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyGeneration (const class cPtr_atomicPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_generateResetMethod (void) const ;

  public: class GGS_bool readProperty_generateDirectRead (void) const ;

  public: class GGS_bool readProperty_generateDirectAccess (void) const ;

  public: class GGS_bool readProperty_standalone (void) const ;

  public: class GGS_typeKind readProperty_mType (void) const ;

  public: class GGS_bool readProperty_mIsProxy (void) const ;

  public: class GGS_string readProperty_mDefaultValueInSwift (void) const ;

  public: class GGS_bool readProperty_mInPreferences (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGeneration init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                           const class GGS_bool & inOperand1,
                                                                                                                                                           const class GGS_bool & inOperand2,
                                                                                                                                                           const class GGS_bool & inOperand3,
                                                                                                                                                           const class GGS_bool & inOperand4,
                                                                                                                                                           const class GGS_typeKind & inOperand5,
                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                           const class GGS_string & inOperand7,
                                                                                                                                                           const class GGS_bool & inOperand8,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicPropertyGeneration_init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                     const class GGS_bool & inOperand1,
                                                                                                                                                     const class GGS_bool & inOperand2,
                                                                                                                                                     const class GGS_bool & inOperand3,
                                                                                                                                                     const class GGS_bool & inOperand4,
                                                                                                                                                     const class GGS_typeKind & inOperand5,
                                                                                                                                                     const class GGS_bool & inOperand6,
                                                                                                                                                     const class GGS_string & inOperand7,
                                                                                                                                                     const class GGS_bool & inOperand8,
                                                                                                                                                     Compiler * inCompiler) ;


//--- Extension func bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_generateResetMethod ;
  public: GGS_bool mProperty_generateDirectRead ;
  public: GGS_bool mProperty_generateDirectAccess ;
  public: GGS_bool mProperty_standalone ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_bool mProperty_mIsProxy ;
  public: GGS_string mProperty_mDefaultValueInSwift ;
  public: GGS_bool mProperty_mInPreferences ;


//--- Default constructor
  public: cPtr_atomicPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicPropertyGeneration (const GGS_string & in_mPropertyName,
                                         const GGS_bool & in_generateResetMethod,
                                         const GGS_bool & in_generateDirectRead,
                                         const GGS_bool & in_generateDirectAccess,
                                         const GGS_bool & in_standalone,
                                         const GGS_typeKind & in_mType,
                                         const GGS_bool & in_mIsProxy,
                                         const GGS_string & in_mDefaultValueInSwift,
                                         const GGS_bool & in_mInPreferences,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyGeneration_2E_weak (const class GGS_atomicPropertyGeneration & inSource) ;

  public: GGS_atomicPropertyGeneration_2E_weak & operator = (const class GGS_atomicPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyGeneration_2E_weak init_nil (void) {
    GGS_atomicPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyGeneration bang_atomicPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicPropertyGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GGS_declarationPrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [abstractDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_abstractDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_abstractDeclarationAST_5D_ (const class GGS__5B_abstractDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_abstractDeclarationAST_5D_ (const DownEnumerator__5B_abstractDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_abstractDeclarationAST_5D_ & operator = (const DownEnumerator__5B_abstractDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_abstractDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_abstractDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_abstractDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_abstractDeclarationAST_5D_ (const class GGS__5B_abstractDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_abstractDeclarationAST_5D_ (const UpEnumerator__5B_abstractDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_abstractDeclarationAST_5D_ & operator = (const UpEnumerator__5B_abstractDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_abstractDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_abstractDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_abstractDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_abstractDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_abstractDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_abstractDeclarationAST_5D_ (const GGS__5B_abstractDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_abstractDeclarationAST_5D_ & operator = (const GGS__5B_abstractDeclarationAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_abstractDeclarationAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_abstractDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_abstractDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_abstractDeclarationAST_5D_ add_operation (const GGS__5B_abstractDeclarationAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_abstractDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_abstractDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_abstractDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_abstractDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_abstractDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractDeclarationAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractDeclarationAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_abstractDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_abstractDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_abstractDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_abstractDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationPrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_declarationPrecedenceGraph final : public AC_GALGAS_root {
//--- Private Data member
  private: class SharedGraph_declarationPrecedenceGraph * mSharedGraph ;

//--- Default constructor
  public: GGS_declarationPrecedenceGraph (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_declarationPrecedenceGraph (void) ;

//--- count
  public: uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return mSharedGraph != nullptr ;
  }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Handle copy
  public: GGS_declarationPrecedenceGraph (const GGS_declarationPrecedenceGraph & inSource) ;
  public: GGS_declarationPrecedenceGraph & operator = (const GGS_declarationPrecedenceGraph & inSource) ;

//--- Create a new list
  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_keyList (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_lkeyList (LOCATION_ARGS) const ;

  public: class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Setters
  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,
                               const class GGS_lstring & inTargetNodeKey
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_declarationPrecedenceGraph & inOperand) const ;

//--- Description
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Internal methods for handling graph
  protected: void reversedGraphFromGraph (const GGS_declarationPrecedenceGraph & inGraph
                                          COMMA_LOCATION_ARGS) ;

  protected: void subGraph (GGS_declarationPrecedenceGraph & outResultingGraph,
                            const class GGS__5B_lstring_5D_ & inStartNodes,
                            const class GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;


  protected: GGS__5B_abstractDeclarationAST_5D_ graph (void) const ;

  private: void insulateGraph (LOCATION_ARGS) ;

  protected: void internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_abstractDeclarationAST & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_noteNode (const GGS_lstring & inKey
                                COMMA_LOCATION_ARGS) ;

  public: GGS__5B_lstring_5D_ getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;

  protected: void internalTopologicalSort (GGS__5B_abstractDeclarationAST_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_abstractDeclarationAST_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  protected: void internalFindCircularities (GGS__5B_abstractDeclarationAST_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList
                                             COMMA_UNUSED_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoPredecessor (GGS__5B_abstractDeclarationAST_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                  COMMA_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoSuccessor (GGS__5B_abstractDeclarationAST_5D_ & outSortedList,
                                                GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                COMMA_LOCATION_ARGS) const ;


  protected: void internalDepthFirstTopologicalSort (GGS__5B_abstractDeclarationAST_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_abstractDeclarationAST_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;

  public: class GGS__32_stringlist getter_edges (UNUSED_LOCATION_ARGS) const ;

  friend class SharedGraph_declarationPrecedenceGraph ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationPrecedenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_abstractDeclarationAST inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS__5B_abstractDeclarationAST_5D_ & outArgument0,
                                     class GGS__5B_lstring_5D_ & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS__5B_abstractDeclarationAST_5D_ & outArgument0,
                                                 class GGS__5B_lstring_5D_ & outArgument1,
                                                 class GGS__5B_abstractDeclarationAST_5D_ & outArgument2,
                                                 class GGS__5B_lstring_5D_ & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS__5B_abstractDeclarationAST_5D_ & outArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS__5B_abstractDeclarationAST_5D_ & outArgument0,
                                            class GGS__5B_lstring_5D_ & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS__5B_abstractDeclarationAST_5D_ & outArgument0,
                                       class GGS__5B_lstring_5D_ & outArgument1,
                                       class GGS__5B_abstractDeclarationAST_5D_ & outArgument2,
                                       class GGS__5B_lstring_5D_ & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_lstring_5D_ getter_accessibleNodesFrom (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                const class GGS_stringset & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractDeclarationAST_5D_ getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_declarationPrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_declarationPrecedenceGraph getter_subgraphFromNodes (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                         const class GGS_stringset & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GGS_semanticContext & io_ioSemanticContext,
                                             class GGS_generationStruct & io_ioGeneration,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [selectionControllerForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_selectionControllerForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_selectionControllerForGeneration_5D_ (const class GGS__5B_selectionControllerForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_selectionControllerForGeneration_5D_ (const DownEnumerator__5B_selectionControllerForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_selectionControllerForGeneration_5D_ & operator = (const DownEnumerator__5B_selectionControllerForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_selectionControllerForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_selectionControllerForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_selectionControllerForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_selectionControllerForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_selectionControllerForGeneration_5D_ (const class GGS__5B_selectionControllerForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_selectionControllerForGeneration_5D_ (const UpEnumerator__5B_selectionControllerForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_selectionControllerForGeneration_5D_ & operator = (const UpEnumerator__5B_selectionControllerForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_selectionControllerForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_selectionControllerForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_selectionControllerForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_selectionControllerForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_selectionControllerForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_selectionControllerForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_selectionControllerForGeneration_5D_ (const GGS__5B_selectionControllerForGeneration_5D_ & inSource) ;
  public: GGS__5B_selectionControllerForGeneration_5D_ & operator = (const GGS__5B_selectionControllerForGeneration_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_selectionControllerForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_selectionControllerForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_selectionControllerForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_selectionControllerForGeneration_5D_ add_operation (const GGS__5B_selectionControllerForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_selectionControllerForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_selectionControllerForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_selectionControllerForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_selectionControllerForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_selectionControllerForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_selectionControllerForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_selectionControllerForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_selectionControllerForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_selectionControllerForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_selectionControllerForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_selectionControllerForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_selectionControllerForGeneration_5D_ ;
  friend class DownEnumerator__5B_selectionControllerForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_selectionControllerForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityListForGeneratingEBManagedObjectContext list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_entityListForGeneratingEBManagedObjectContext final {
  public: DownEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inList) ;

  public: ~ DownEnumerator_entityListForGeneratingEBManagedObjectContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS__5B_lstring_5D_ current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_entityListForGeneratingEBManagedObjectContext (const DownEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
  private: DownEnumerator_entityListForGeneratingEBManagedObjectContext & operator = (const DownEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_entityListForGeneratingEBManagedObjectContext final {
  public: UpEnumerator_entityListForGeneratingEBManagedObjectContext (const class GGS_entityListForGeneratingEBManagedObjectContext & inList)  ;

  public: ~ UpEnumerator_entityListForGeneratingEBManagedObjectContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mEntityName (LOCATION_ARGS) const ;
  public: class GGS__5B_lstring_5D_ current_mObsoleteEntityNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_entityListForGeneratingEBManagedObjectContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_entityListForGeneratingEBManagedObjectContext (const UpEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
  private: UpEnumerator_entityListForGeneratingEBManagedObjectContext & operator = (const UpEnumerator_entityListForGeneratingEBManagedObjectContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @entityListForGeneratingEBManagedObjectContext list
//--------------------------------------------------------------------------------------------------

class GGS_entityListForGeneratingEBManagedObjectContext : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> mArray ;

//--- Default constructor
  public: GGS_entityListForGeneratingEBManagedObjectContext (void) ;

//--- Destructor
  public: virtual ~ GGS_entityListForGeneratingEBManagedObjectContext (void) = default ;

//--- Copy
  public: GGS_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext &) = default ;
  public: GGS_entityListForGeneratingEBManagedObjectContext & operator = (const GGS_entityListForGeneratingEBManagedObjectContext &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_entityListForGeneratingEBManagedObjectContext_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_entityListForGeneratingEBManagedObjectContext subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_entityListForGeneratingEBManagedObjectContext (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mEntityName,
                                                 const class GGS__5B_lstring_5D_ & in_mObsoleteEntityNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityListForGeneratingEBManagedObjectContext init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_entityListForGeneratingEBManagedObjectContext class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                   const class GGS__5B_lstring_5D_ & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS__5B_lstring_5D_ & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_entityListForGeneratingEBManagedObjectContext add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS__5B_lstring_5D_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS__5B_lstring_5D_ constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS__5B_lstring_5D_ & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS__5B_lstring_5D_ & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS__5B_lstring_5D_ & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEntityNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMObsoleteEntityNamesAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS__5B_lstring_5D_ & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS__5B_lstring_5D_ & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mEntityNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_mObsoleteEntityNamesAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_entityListForGeneratingEBManagedObjectContext getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_entityListForGeneratingEBManagedObjectContext ;
  friend class DownEnumerator_entityListForGeneratingEBManagedObjectContext ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fileGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_fileGenerationList final {
  public: DownEnumerator_fileGenerationList (const class GGS_fileGenerationList & inList) ;

  public: ~ DownEnumerator_fileGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fileGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_fileGenerationList (const DownEnumerator_fileGenerationList &) = delete ;
  private: DownEnumerator_fileGenerationList & operator = (const DownEnumerator_fileGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_fileGenerationList final {
  public: UpEnumerator_fileGenerationList (const class GGS_fileGenerationList & inList)  ;

  public: ~ UpEnumerator_fileGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fileGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_fileGenerationList (const UpEnumerator_fileGenerationList &) = delete ;
  private: UpEnumerator_fileGenerationList & operator = (const UpEnumerator_fileGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @fileGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_fileGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_fileGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_fileGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_fileGenerationList (void) = default ;

//--- Copy
  public: GGS_fileGenerationList (const GGS_fileGenerationList &) = default ;
  public: GGS_fileGenerationList & operator = (const GGS_fileGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_fileGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_fileGenerationList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_fileGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fileGenerationList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_fileGenerationList class_func_listWithValue (const class GGS_abstractFileGeneration & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_fileGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractFileGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_fileGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_fileGenerationList add_operation (const GGS_fileGenerationList & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractFileGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractFileGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractFileGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractFileGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFileGenerationAtIndex (class GGS_abstractFileGeneration constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractFileGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractFileGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractFileGeneration getter_mFileGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_fileGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_fileGenerationList ;
  friend class DownEnumerator_fileGenerationList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientExternTypeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_transientExternTypeList final {
  public: DownEnumerator_transientExternTypeList (const class GGS_transientExternTypeList & inList) ;

  public: ~ DownEnumerator_transientExternTypeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientExternTypeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_transientExternTypeList (const DownEnumerator_transientExternTypeList &) = delete ;
  private: DownEnumerator_transientExternTypeList & operator = (const DownEnumerator_transientExternTypeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_transientExternTypeList final {
  public: UpEnumerator_transientExternTypeList (const class GGS_transientExternTypeList & inList)  ;

  public: ~ UpEnumerator_transientExternTypeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_transientExternTypeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_transientExternTypeList (const UpEnumerator_transientExternTypeList &) = delete ;
  private: UpEnumerator_transientExternTypeList & operator = (const UpEnumerator_transientExternTypeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @transientExternTypeList list
//--------------------------------------------------------------------------------------------------

class GGS_transientExternTypeList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_transientExternTypeList_2E_element> mArray ;

//--- Default constructor
  public: GGS_transientExternTypeList (void) ;

//--- Destructor
  public: virtual ~ GGS_transientExternTypeList (void) = default ;

//--- Copy
  public: GGS_transientExternTypeList (const GGS_transientExternTypeList &) = default ;
  public: GGS_transientExternTypeList & operator = (const GGS_transientExternTypeList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_transientExternTypeList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_transientExternTypeList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_transientExternTypeList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mTypeName,
                                                 const class GGS_bool & in_mIsClass
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientExternTypeList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_transientExternTypeList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                             const class GGS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_transientExternTypeList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_bool & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_transientExternTypeList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_transientExternTypeList add_operation (const GGS_transientExternTypeList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_bool constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_bool constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_bool & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_bool & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsClassAtIndex (class GGS_bool constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeNameAtIndex (class GGS_string constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_bool & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_bool & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsClassAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_transientExternTypeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_transientExternTypeList ;
  friend class DownEnumerator_transientExternTypeList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_generationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fileGenerationList mProperty_mFileGenerationList ;
  public: inline GGS_fileGenerationList readProperty_mFileGenerationList (void) const {
    return mProperty_mFileGenerationList ;
  }

  public: GGS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;
  public: inline GGS_entityListForGeneratingEBManagedObjectContext readProperty_mEntityListForGeneration (void) const {
    return mProperty_mEntityListForGeneration ;
  }

  public: GGS_bool mProperty_mGenerateEBManagedXibDocumentSwift ;
  public: inline GGS_bool readProperty_mGenerateEBManagedXibDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedXibDocumentSwift ;
  }

  public: GGS_bool mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  public: inline GGS_bool readProperty_mGenerateEBManagedAutoLayoutDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  }

  public: GGS_stringset mProperty_mNeededOutletClasses ;
  public: inline GGS_stringset readProperty_mNeededOutletClasses (void) const {
    return mProperty_mNeededOutletClasses ;
  }

  public: GGS__5B_mainXibDescriptor_5D_ mProperty_mMainXibDescriptorList ;
  public: inline GGS__5B_mainXibDescriptor_5D_ readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GGS_stringset mProperty_mToOneClassImplementations ;
  public: inline GGS_stringset readProperty_mToOneClassImplementations (void) const {
    return mProperty_mToOneClassImplementations ;
  }

  public: GGS_stringset mProperty_mToManyClassImplementations ;
  public: inline GGS_stringset readProperty_mToManyClassImplementations (void) const {
    return mProperty_mToManyClassImplementations ;
  }

  public: GGS__5B_selectionControllerForGeneration_5D_ mProperty_mSelectionControllerListForGeneration ;
  public: inline GGS__5B_selectionControllerForGeneration_5D_ readProperty_mSelectionControllerListForGeneration (void) const {
    return mProperty_mSelectionControllerListForGeneration ;
  }

  public: GGS__5B_string_5D_ mProperty_mPropertyClassList ;
  public: inline GGS__5B_string_5D_ readProperty_mPropertyClassList (void) const {
    return mProperty_mPropertyClassList ;
  }

  public: GGS_transientExternTypeList mProperty_mTransientPropertyTypeList ;
  public: inline GGS_transientExternTypeList readProperty_mTransientPropertyTypeList (void) const {
    return mProperty_mTransientPropertyTypeList ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_TransientArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  }

  public: GGS_stringset mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  public: inline GGS_stringset readProperty_mGenerateClass_5F_StoredArrayOf_5F_ (void) const {
    return mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileGenerationList (const GGS_fileGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileGenerationList = inValue ;
  }

  public: inline void setter_setMEntityListForGeneration (const GGS_entityListForGeneratingEBManagedObjectContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityListForGeneration = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedXibDocumentSwift (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedXibDocumentSwift = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedAutoLayoutDocumentSwift (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inValue ;
  }

  public: inline void setter_setMNeededOutletClasses (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeededOutletClasses = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GGS__5B_mainXibDescriptor_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMToOneClassImplementations (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToOneClassImplementations = inValue ;
  }

  public: inline void setter_setMToManyClassImplementations (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToManyClassImplementations = inValue ;
  }

  public: inline void setter_setMSelectionControllerListForGeneration (const GGS__5B_selectionControllerForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerListForGeneration = inValue ;
  }

  public: inline void setter_setMPropertyClassList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyClassList = inValue ;
  }

  public: inline void setter_setMTransientPropertyTypeList (const GGS_transientExternTypeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransientPropertyTypeList = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_PreferencesArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_ProxyArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_TransientArrayOfSuperOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_TransientArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = inValue ;
  }

  public: inline void setter_setMGenerateClass_5F_StoredArrayOf_5F_ (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationStruct (const GGS_fileGenerationList & in_mFileGenerationList,
                                const GGS_entityListForGeneratingEBManagedObjectContext & in_mEntityListForGeneration,
                                const GGS_bool & in_mGenerateEBManagedXibDocumentSwift,
                                const GGS_bool & in_mGenerateEBManagedAutoLayoutDocumentSwift,
                                const GGS_stringset & in_mNeededOutletClasses,
                                const GGS__5B_mainXibDescriptor_5D_ & in_mMainXibDescriptorList,
                                const GGS_stringset & in_mToOneClassImplementations,
                                const GGS_stringset & in_mToManyClassImplementations,
                                const GGS__5B_selectionControllerForGeneration_5D_ & in_mSelectionControllerListForGeneration,
                                const GGS__5B_string_5D_ & in_mPropertyClassList,
                                const GGS_transientExternTypeList & in_mTransientPropertyTypeList,
                                const GGS_stringset & in_mGenerateClass_5F_PreferencesArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_ProxyArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_TransientArrayOfSuperOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_TransientArrayOf_5F_,
                                const GGS_stringset & in_mGenerateClass_5F_StoredArrayOf_5F_) ;

//--------------------------------- Copy constructor
  public: GGS_generationStruct (const GGS_generationStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationStruct & operator = (const GGS_generationStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationStruct init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationStruct ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumerationFunctionListAST final {
  public: DownEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList) ;

  public: ~ DownEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__5B__32_lstring_5D_ current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumerationFunctionListAST (const DownEnumerator_enumerationFunctionListAST &) = delete ;
  private: DownEnumerator_enumerationFunctionListAST & operator = (const DownEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumerationFunctionListAST final {
  public: UpEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList)  ;

  public: ~ UpEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__5B__32_lstring_5D_ current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumerationFunctionListAST (const UpEnumerator_enumerationFunctionListAST &) = delete ;
  private: UpEnumerator_enumerationFunctionListAST & operator = (const UpEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumerationFunctionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumerationFunctionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_enumerationFunctionListAST (void) = default ;

//--- Copy
  public: GGS_enumerationFunctionListAST (const GGS_enumerationFunctionListAST &) = default ;
  public: GGS_enumerationFunctionListAST & operator = (const GGS_enumerationFunctionListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumerationFunctionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumerationFunctionListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumerationFunctionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mEnumName,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS__5B__32_lstring_5D_ & in_mAssociationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationFunctionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__5B__32_lstring_5D_ & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumerationFunctionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS__5B__32_lstring_5D_ & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumerationFunctionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_enumerationFunctionListAST add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS__5B__32_lstring_5D_ constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS__5B__32_lstring_5D_ constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS__5B__32_lstring_5D_ & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS__5B__32_lstring_5D_ & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS__5B__32_lstring_5D_ & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAssociationListAtIndex (class GGS__5B__32_lstring_5D_ constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMEnumNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS__5B__32_lstring_5D_ & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS__5B__32_lstring_5D_ & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B__32_lstring_5D_ getter_mAssociationListAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mEnumNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumerationFunctionListAST ;
  friend class DownEnumerator_enumerationFunctionListAST ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewFunctionMap final {

  public: DownEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap) ;

  public: ~ DownEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ current_mFomalParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewFunctionMap (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: DownEnumerator_astAutoLayoutViewFunctionMap & operator = (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewFunctionMap final {
  public: UpEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap)  ;

  public: ~ UpEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_autoLayoutClassParameter_5D_ current_mFomalParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewFunctionMap (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: UpEnumerator_astAutoLayoutViewFunctionMap & operator = (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Handle copy
  public: GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) ;
  public: GGS_astAutoLayoutViewFunctionMap & operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_astAutoLayoutViewFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionMap class_func_mapWithMapToOverride (const class GGS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_autoLayoutClassParameter_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFomalParameterListForKey (class GGS__5B_autoLayoutClassParameter_5D_ constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_autoLayoutClassParameter_5D_ & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ getter_mFomalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionMap ;
  friend class DownEnumerator_astAutoLayoutViewFunctionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutBindingSpecificationMap (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutBindingSpecificationMap (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutBindingSpecificationMap & operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingMapForKey (class GGS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutBindingSpecificationMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autolayoutViewClassMap final {

  public: DownEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap) ;

  public: ~ DownEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autolayoutViewClassMap (const DownEnumerator_autolayoutViewClassMap &) = delete ;
  private: DownEnumerator_autolayoutViewClassMap & operator = (const DownEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autolayoutViewClassMap final {
  public: UpEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap)  ;

  public: ~ UpEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS__5B_autoLayoutClassParameter_5D_ current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autolayoutViewClassMap (const UpEnumerator_autolayoutViewClassMap &) = delete ;
  private: UpEnumerator_autolayoutViewClassMap & operator = (const UpEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autolayoutViewClassMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autolayoutViewClassMap (void) ;

//--- Handle copy
  public: GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) ;
  public: GGS_autolayoutViewClassMap & operator = (const GGS_autolayoutViewClassMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autolayoutViewClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutViewClassMap class_func_mapWithMapToOverride (const class GGS_autolayoutViewClassMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_bool constinArgument3,
                                 class GGS_bool constinArgument4,
                                 class GGS_bool constinArgument5,
                                 class GGS_bool constinArgument6,
                                 class GGS_bool constinArgument7,
                                 class GGS__5B_autoLayoutClassParameter_5D_ constinArgument8,
                                 class GGS_astAutoLayoutViewFunctionMap constinArgument9,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoLayoutViewFunctionMapForKey (class GGS_astAutoLayoutViewFunctionMap constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListForKey (class GGS__5B_autoLayoutClassParameter_5D_ constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_bool & outArgument3,
                                 class GGS_bool & outArgument4,
                                 class GGS_bool & outArgument5,
                                 class GGS_bool & outArgument6,
                                 class GGS_bool & outArgument7,
                                 class GGS__5B_autoLayoutClassParameter_5D_ & outArgument8,
                                 class GGS_astAutoLayoutViewFunctionMap & outArgument9,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autolayoutViewClassMap getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autolayoutViewClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autolayoutViewClassMap ;
  friend class DownEnumerator_autolayoutViewClassMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingSpecificationMap final {

  public: DownEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingSpecificationMap (const DownEnumerator_bindingSpecificationMap &) = delete ;
  private: DownEnumerator_bindingSpecificationMap & operator = (const DownEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingSpecificationMap final {
  public: UpEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingSpecificationMap (const UpEnumerator_bindingSpecificationMap &) = delete ;
  private: UpEnumerator_bindingSpecificationMap & operator = (const UpEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) ;
  public: GGS_bindingSpecificationMap & operator = (const GGS_bindingSpecificationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_bindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_bindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_bindingSpecificationMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_outletBindingSpecificationMap constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_outletBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingMapForKey (class GGS_outletBindingSpecificationMap constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_outletBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_bindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingSpecificationMap ;
  friend class DownEnumerator_bindingSpecificationMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_classMap final {

  public: DownEnumerator_classMap (const class GGS_classMap & inMap) ;

  public: ~ DownEnumerator_classMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_classKind current_mClassKind (LOCATION_ARGS) const ;

  public: class GGS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;

  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;

  public: class GGS_classMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_classMap (const DownEnumerator_classMap &) = delete ;
  private: DownEnumerator_classMap & operator = (const DownEnumerator_classMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_classMap final {
  public: UpEnumerator_classMap (const class GGS_classMap & inMap)  ;

  public: ~ UpEnumerator_classMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_classKind current_mClassKind (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;
  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
  public: class GGS_classMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_classMap (const UpEnumerator_classMap &) = delete ;
  private: UpEnumerator_classMap & operator = (const UpEnumerator_classMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_classMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_classMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_classMap (void) ;

//--- Handle copy
  public: GGS_classMap (const GGS_classMap & inSource) ;
  public: GGS_classMap & operator = (const GGS_classMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_classMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_classMap class_func_mapWithMapToOverride (const class GGS_classMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_classKind constinArgument1,
                                 class GGS_propertyMap constinArgument2,
                                 class GGS_actionMap constinArgument3,
                                 class GGS_propertyGenerationList constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replace (class GGS_classMap_2E_element constinArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMActionMapForKey (class GGS_actionMap constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMClassKindForKey (class GGS_classKind constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyGenerationListForKey (class GGS_propertyGenerationList constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyMapForKey (class GGS_propertyMap constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_classKind & outArgument1,
                                 class GGS_propertyMap & outArgument2,
                                 class GGS_actionMap & outArgument3,
                                 class GGS_propertyGenerationList & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_actionMap getter_mActionMapForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_classKind getter_mClassKindForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList getter_mPropertyGenerationListForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMap getter_mPropertyMapForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_classMap getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_classMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_classMap_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_classMap ;
  friend class DownEnumerator_classMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticContext struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_classMap mProperty_mClassMap ;
  public: inline GGS_classMap readProperty_mClassMap (void) const {
    return mProperty_mClassMap ;
  }

  public: GGS_outletClassMap mProperty_mOutletClassMap ;
  public: inline GGS_outletClassMap readProperty_mOutletClassMap (void) const {
    return mProperty_mOutletClassMap ;
  }

  public: GGS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;
  public: inline GGS_bindingSpecificationMap readProperty_mBindingSpecificationMap (void) const {
    return mProperty_mBindingSpecificationMap ;
  }

  public: GGS_autolayoutViewClassMap mProperty_mAutolayoutViewClassMap ;
  public: inline GGS_autolayoutViewClassMap readProperty_mAutolayoutViewClassMap (void) const {
    return mProperty_mAutolayoutViewClassMap ;
  }

  public: GGS_autoLayoutBindingSpecificationMap mProperty_mAutoLayoutBindingSpecificationMap ;
  public: inline GGS_autoLayoutBindingSpecificationMap readProperty_mAutoLayoutBindingSpecificationMap (void) const {
    return mProperty_mAutoLayoutBindingSpecificationMap ;
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
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMClassMap (const GGS_classMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMap = inValue ;
  }

  public: inline void setter_setMOutletClassMap (const GGS_outletClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassMap = inValue ;
  }

  public: inline void setter_setMBindingSpecificationMap (const GGS_bindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutolayoutViewClassMap (const GGS_autolayoutViewClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutolayoutViewClassMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationMap = inValue ;
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_classMap & in_mClassMap,
                               const GGS_outletClassMap & in_mOutletClassMap,
                               const GGS_bindingSpecificationMap & in_mBindingSpecificationMap,
                               const GGS_autolayoutViewClassMap & in_mAutolayoutViewClassMap,
                               const GGS_autoLayoutBindingSpecificationMap & in_mAutoLayoutBindingSpecificationMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                               const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//--------------------------------- Copy constructor
  public: GGS_semanticContext (const GGS_semanticContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticContext & operator = (const GGS_semanticContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GGS_semanticContext & io__5F_ioSemanticContext,
                                              class GGS_generationStruct & io__5F_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GGS_semanticContext & io__5F_ioSemanticContext,
                                             class GGS_generationStruct & io__5F_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GGS_semanticContext & io__5F_ioSemanticContext,
                                              class GGS_generationStruct & io__5F_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractDefaultValue_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDefaultValue_2E_weak (const class GGS_abstractDefaultValue & inSource) ;

  public: GGS_abstractDefaultValue_2E_weak & operator = (const class GGS_abstractDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDefaultValue_2E_weak init_nil (void) {
    GGS_abstractDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDefaultValue bang_abstractDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolAsDefaultValue_init_21_ (const class GGS_lbool & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolAsDefaultValue_2E_weak (const class GGS_boolAsDefaultValue & inSource) ;

  public: GGS_boolAsDefaultValue_2E_weak & operator = (const class GGS_boolAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolAsDefaultValue_2E_weak init_nil (void) {
    GGS_boolAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolAsDefaultValue bang_boolAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_boolAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @doubleAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @doubleAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void doubleAsDefaultValue_init_21_ (const class GGS_ldouble & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @doubleAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_doubleAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_doubleAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_doubleAsDefaultValue_2E_weak (const class GGS_doubleAsDefaultValue & inSource) ;

  public: GGS_doubleAsDefaultValue_2E_weak & operator = (const class GGS_doubleAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_doubleAsDefaultValue_2E_weak init_nil (void) {
    GGS_doubleAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_doubleAsDefaultValue bang_doubleAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_doubleAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_doubleAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @integerAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerAsDefaultValue_init_21__21_ (const class GGS_luint & inOperand0,
                                                   const class GGS_bool & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerAsDefaultValue_2E_weak (const class GGS_integerAsDefaultValue & inSource) ;

  public: GGS_integerAsDefaultValue_2E_weak & operator = (const class GGS_integerAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerAsDefaultValue_2E_weak init_nil (void) {
    GGS_integerAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerAsDefaultValue bang_integerAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_integerAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_integerAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @stringAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_stringAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_stringAsDefaultValue_2E_weak (const class GGS_stringAsDefaultValue & inSource) ;

  public: GGS_stringAsDefaultValue_2E_weak & operator = (const class GGS_stringAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_stringAsDefaultValue_2E_weak init_nil (void) {
    GGS_stringAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_stringAsDefaultValue bang_stringAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_stringAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_stringAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @identifierAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @identifierAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void identifierAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @identifierAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_identifierAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_identifierAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_identifierAsDefaultValue_2E_weak (const class GGS_identifierAsDefaultValue & inSource) ;

  public: GGS_identifierAsDefaultValue_2E_weak & operator = (const class GGS_identifierAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_identifierAsDefaultValue_2E_weak init_nil (void) {
    GGS_identifierAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_identifierAsDefaultValue bang_identifierAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_identifierAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_identifierAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsAsDefaultValue reference class
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefsAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GGS_lstring arg__inNode,
           class GGS_declarationPrecedenceGraph & arg__ioGraph,
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsAsDefaultValue_2E_weak (const class GGS_prefsAsDefaultValue & inSource) ;

  public: GGS_prefsAsDefaultValue_2E_weak & operator = (const class GGS_prefsAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsAsDefaultValue_2E_weak init_nil (void) {
    GGS_prefsAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsAsDefaultValue bang_prefsAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefsAsDefaultValue unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_prefsAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (class cPtr_abstractDefaultValue * inObject,
                                                  const class GGS__5B_typeKind_5D_ constin_inAttributeActualTypeList,
                                                  const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                                  class GGS_string & out_outSwiftDefaultValueAsString,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyMap final {

  public: DownEnumerator_propertyMap (const class GGS_propertyMap & inMap) ;

  public: ~ DownEnumerator_propertyMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;

  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsOverriding (LOCATION_ARGS) const ;

  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyMap (const DownEnumerator_propertyMap &) = delete ;
  private: DownEnumerator_propertyMap & operator = (const DownEnumerator_propertyMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyMap final {
  public: UpEnumerator_propertyMap (const class GGS_propertyMap & inMap)  ;

  public: ~ UpEnumerator_propertyMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsOverriding (LOCATION_ARGS) const ;
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyMap (const UpEnumerator_propertyMap &) = delete ;
  private: UpEnumerator_propertyMap & operator = (const UpEnumerator_propertyMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyMap (void) ;

//--- Handle copy
  public: GGS_propertyMap (const GGS_propertyMap & inSource) ;
  public: GGS_propertyMap & operator = (const GGS_propertyMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertyMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_propertyKind constinArgument1,
                                 class GGS_actionMap constinArgument2,
                                 class GGS_bool constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMActionMapForKey (class GGS_actionMap constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsOverridingForKey (class GGS_bool constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindForKey (class GGS_propertyKind constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_propertyKind & outArgument1,
                                 class GGS_actionMap & outArgument2,
                                 class GGS_bool & outArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_actionMap getter_mActionMapForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsOverridingForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyKind getter_mKindForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_propertyMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyMap ;
  friend class DownEnumerator_propertyMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractDefaultValue enterDefaultValuePrecedence'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (class cPtr_abstractDefaultValue * inObject,
                                                      const class GGS_lstring constin__5F_inNode,
                                                      class GGS_declarationPrecedenceGraph & io__5F_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractAtomic (class GGS_typeKind & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractDocument (class GGS_lstring & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractEntity (class GGS_string & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_bool & outArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_classKind_2E_atomic_3F_ getter_getAtomic (LOCATION_ARGS) const ;

  public: class GGS_classKind_2E_document_3F_ getter_getDocument (LOCATION_ARGS) const ;

  public: class GGS_classKind_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAtomic (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDocument (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrefs (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_actionMap final {

  public: DownEnumerator_actionMap (const class GGS_actionMap & inMap) ;

  public: ~ DownEnumerator_actionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_actionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_actionMap (const DownEnumerator_actionMap &) = delete ;
  private: DownEnumerator_actionMap & operator = (const DownEnumerator_actionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actionMap final {
  public: UpEnumerator_actionMap (const class GGS_actionMap & inMap)  ;

  public: ~ UpEnumerator_actionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_actionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_actionMap (const UpEnumerator_actionMap &) = delete ;
  private: UpEnumerator_actionMap & operator = (const UpEnumerator_actionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_actionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_actionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_actionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_actionMap (void) ;

//--- Handle copy
  public: GGS_actionMap (const GGS_actionMap & inSource) ;
  public: GGS_actionMap & operator = (const GGS_actionMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_actionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionMap init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_actionMap class_func_mapWithMapToOverride (const class GGS_actionMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_actionMap getter_overriddenMap (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_actionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actionMap ;
  friend class DownEnumerator_actionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMap_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_classKind & in_mClassKind,
                                   const GGS_propertyMap & in_mPropertyMap,
                                   const GGS_actionMap & in_mActionMap,
                                   const GGS_propertyGenerationList & in_mPropertyGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_classMap_2E_element (const GGS_classMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classMap_2E_element & operator = (const GGS_classMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_classKind & inOperand1,
                                                                   const class GGS_propertyMap & inOperand2,
                                                                   const class GGS_actionMap & inOperand3,
                                                                   const class GGS_propertyGenerationList & inOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingSpecificationMap final {

  public: DownEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingSpecificationMap (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
  private: DownEnumerator_outletBindingSpecificationMap & operator = (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingSpecificationMap final {
  public: UpEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_outletBindingSpecificationModel_5D_ current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS__5B_controllerBindingOptionDecorated_5D_ current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingSpecificationMap (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
  private: UpEnumerator_outletBindingSpecificationMap & operator = (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_outletBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_outletBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) ;
  public: GGS_outletBindingSpecificationMap & operator = (const GGS_outletBindingSpecificationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_outletBindingSpecificationMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_outletBindingSpecificationModel_5D_ constinArgument1,
                                 class GGS__5B_controllerBindingOptionDecorated_5D_ constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMControllerBindingOptionListForKey (class GGS__5B_controllerBindingOptionDecorated_5D_ constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletBindingSpecificationModelListForKey (class GGS__5B_outletBindingSpecificationModel_5D_ constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_outletBindingSpecificationModel_5D_ & outArgument1,
                                 class GGS__5B_controllerBindingOptionDecorated_5D_ & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingSpecificationMap ;
  friend class DownEnumerator_outletBindingSpecificationMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_lstring & in_mOutletSuperClassName,
                                                  const GGS_outletBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingSpecificationMap_2E_element & operator = (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_outletBindingSpecificationMap & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bindingSpecificationMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap_2E_element struct
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

  public: GGS__5B_autoLayoutClassParameter_5D_ mProperty_mParameterList ;
  public: inline GGS__5B_autoLayoutClassParameter_5D_ readProperty_mParameterList (void) const {
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

  public: inline void setter_setMParameterList (const GGS__5B_autoLayoutClassParameter_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }

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
                                                 const GGS__5B_autoLayoutClassParameter_5D_ & in_mParameterList,
                                                 const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//--------------------------------- Copy constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autolayoutViewClassMap_2E_element & operator = (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

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
                                                                                                     const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autolayoutViewClassMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewBindingSpecificationMap (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_outletBindingSpecificationModel_5D_ current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS__5B_controllerBindingOptionDecorated_5D_ current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewBindingSpecificationMap (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutViewBindingSpecificationMap & operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutViewBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_outletBindingSpecificationModel_5D_ constinArgument1,
                                 class GGS__5B_controllerBindingOptionDecorated_5D_ constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMControllerBindingOptionListForKey (class GGS__5B_controllerBindingOptionDecorated_5D_ constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletBindingSpecificationModelListForKey (class GGS__5B_outletBindingSpecificationModel_5D_ constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_outletBindingSpecificationModel_5D_ & outArgument1,
                                 class GGS__5B_controllerBindingOptionDecorated_5D_ & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_controllerBindingOptionDecorated_5D_ getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletBindingSpecificationModel_5D_ getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutViewBindingSpecificationMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutBindingSpecificationMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_autoLayoutClassParameter_5D_ mProperty_mFomalParameterList ;
  public: inline GGS__5B_autoLayoutClassParameter_5D_ readProperty_mFomalParameterList (void) const {
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

  public: inline void setter_setMFomalParameterList (const GGS__5B_autoLayoutClassParameter_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFomalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS__5B_autoLayoutClassParameter_5D_ & in_mFomalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewFunctionMap_2E_element & operator = (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewFunctionMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [2lstring] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__32_lstring_5D_ final {
//--- Constructor
  public: DownEnumerator__5B__32_lstring_5D_ (const class GGS__5B__32_lstring_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__32_lstring_5D_ (const DownEnumerator__5B__32_lstring_5D_ &) = delete ;
  private: DownEnumerator__5B__32_lstring_5D_ & operator = (const DownEnumerator__5B__32_lstring_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_lstring current (LOCATION_ARGS) const ;
  public: class GGS__32_lstring current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__32_lstring> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__32_lstring_5D_ final {
//--- Constructor
  public: UpEnumerator__5B__32_lstring_5D_ (const class GGS__5B__32_lstring_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__32_lstring_5D_ (const UpEnumerator__5B__32_lstring_5D_ &) = delete ;
  private: UpEnumerator__5B__32_lstring_5D_ & operator = (const UpEnumerator__5B__32_lstring_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_lstring current (LOCATION_ARGS) const ;
  public: class GGS__32_lstring current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__32_lstring> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__32_lstring_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__32_lstring> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__32_lstring_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__32_lstring_5D_ (const GGS__5B__32_lstring_5D_ & inSource) ;
  public: GGS__5B__32_lstring_5D_ & operator = (const GGS__5B__32_lstring_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B__32_lstring_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B__32_lstring_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS__32_lstring & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__32_lstring_5D_ add_operation (const GGS__5B__32_lstring_5D_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__32_lstring constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__32_lstring constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__32_lstring & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__32_lstring & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__32_lstring & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS__32_lstring constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__32_lstring getter_first (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstring getter_last (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_lstring_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_lstring_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                        const class GGS_uint & constinOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS__32_lstring readSubscript__3F_ (const class GGS_uint & in0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__32_lstring_5D_ ;
  friend class DownEnumerator__5B__32_lstring_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__32_lstring_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST_2E_element struct
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

  public: GGS__5B__32_lstring_5D_ mProperty_mAssociationList ;
  public: inline GGS__5B__32_lstring_5D_ readProperty_mAssociationList (void) const {
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

  public: inline void setter_setMAssociationList (const GGS__5B__32_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & in_mEnumName,
                                                     const GGS_lstring & in_mFunctionName,
                                                     const GGS__5B__32_lstring_5D_ & in_mAssociationList) ;

//--------------------------------- Copy constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumerationFunctionListAST_2E_element & operator = (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__5B__32_lstring_5D_ & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [observablePropertyAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_observablePropertyAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_observablePropertyAST_5D_ (const class GGS__5B_observablePropertyAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_observablePropertyAST_5D_ (const DownEnumerator__5B_observablePropertyAST_5D_ &) = delete ;
  private: DownEnumerator__5B_observablePropertyAST_5D_ & operator = (const DownEnumerator__5B_observablePropertyAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_observablePropertyAST current (LOCATION_ARGS) const ;
  public: class GGS_observablePropertyAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_observablePropertyAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_observablePropertyAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_observablePropertyAST_5D_ (const class GGS__5B_observablePropertyAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_observablePropertyAST_5D_ (const UpEnumerator__5B_observablePropertyAST_5D_ &) = delete ;
  private: UpEnumerator__5B_observablePropertyAST_5D_ & operator = (const UpEnumerator__5B_observablePropertyAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_observablePropertyAST current (LOCATION_ARGS) const ;
  public: class GGS_observablePropertyAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_observablePropertyAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_observablePropertyAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_observablePropertyAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_observablePropertyAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_observablePropertyAST_5D_ (const GGS__5B_observablePropertyAST_5D_ & inSource) ;
  public: GGS__5B_observablePropertyAST_5D_ & operator = (const GGS__5B_observablePropertyAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_observablePropertyAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_observablePropertyAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_observablePropertyAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_observablePropertyAST_5D_ add_operation (const GGS__5B_observablePropertyAST_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_observablePropertyAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_observablePropertyAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_observablePropertyAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_observablePropertyAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_observablePropertyAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_observablePropertyAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_observablePropertyAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_observablePropertyAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                  const class GGS_uint & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_observablePropertyAST readSubscript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_observablePropertyAST_5D_ ;
  friend class DownEnumerator__5B_observablePropertyAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_observablePropertyAST_5D_ ;

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

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractPrefsProperty (class GGS_lstring & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractPrefsPropertyWithOption (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootProperty (class GGS_lstring & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyNone (class GGS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyRelationship (class GGS_lstring & outArgument0,
                                                       class GGS_lstring & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyWithOption (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerAllProperties (class GGS_lstring & outArgument0,
                                                          class GGS_lstring & outArgument1,
                                                          class GGS_lstring & outArgument2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerOneProperty (class GGS_lstring & outArgument0,
                                                        class GGS_lstring & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerProperty (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerSecondaryProperty (class GGS_lstring & outArgument0,
                                                              class GGS_lstring & outArgument1,
                                                              class GGS_lstring & outArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfProperty (class GGS_lstring & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyArray (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyNone (class GGS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyObject (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyWithOption (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfWithoutProperty (class GGS_location & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: void method_extractSignatureProperty (class GGS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractSuperProperty (class GGS_lstring & outArgument0,
                                            class GGS_lstring & outArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractSuperPropertyWithDefaultValue (class GGS_lstring & outArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class GGS_abstractDefaultValue & outArgument2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractVersionProperty (class GGS_location & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractVersionShouldChangeProperty (class GGS_location & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_observablePropertyAST_2E_prefsProperty_3F_ getter_getPrefsProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ getter_getPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootProperty_3F_ getter_getRootProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ getter_getRootPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ getter_getRootPropertyRelationship (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ getter_getRootPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ getter_getSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ getter_getSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ getter_getSelfControllerProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ getter_getSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfProperty_3F_ getter_getSelfProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ getter_getSelfPropertyArray (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ getter_getSelfPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ getter_getSelfPropertyObject (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ getter_getSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ getter_getSelfWithoutProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_signatureProperty_3F_ getter_getSignatureProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_superProperty_3F_ getter_getSuperProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ getter_getSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_versionProperty_3F_ getter_getVersionProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ getter_getVersionShouldChangeProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_lstring & in_propertyName,
                                                                const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsPropertyWithOption unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsProperty & operator = (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_lstring & in_relationshipName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyNone & operator = (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyNone unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyRelationship struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_lstring & in_relationshipName,
                                                                 const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship & operator = (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyRelationship? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyRelationship mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyRelationship unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyWithOption unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootProperty & operator = (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerAllProperties struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_lstring & in_controllerName,
                                                                    const GGS_lstring & in_propertyName,
                                                                    const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties & operator = (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerAllProperties? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerAllProperties mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerAllProperties unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerOneProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_lstring & in_controllerName,
                                                                  const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerOneProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerOneProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerOneProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_lstring & in_controllerName,
                                                               const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerSecondaryProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_lstring & in_controllerName,
                                                                        const GGS_lstring & in_propertyName,
                                                                        const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerSecondaryProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerSecondaryProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyArray struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_lstring & in_propertyName,
                                                          const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyArray & operator = (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyArray init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyArray unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyNone & operator = (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyNone unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyObject struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_lstring & in_propertyName,
                                                           const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyObject & operator = (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyObject init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyObject? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyObject mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyObject_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyObject unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyWithOption unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfProperty & operator = (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfWithoutProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_issueLocation ;
  public: inline GGS_location readProperty_issueLocation (void) const {
    return mProperty_issueLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIssueLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_issueLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_location & in_issueLocation) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfWithoutProperty & operator = (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty init_21_ (const class GGS_location & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfWithoutProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfWithoutProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfWithoutProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_signatureProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_signatureProperty & operator = (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_signatureProperty init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.signatureProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_signatureProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_signatureProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_signatureProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superPropertyWithDefaultValue struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_abstractDefaultValue mProperty_defaultValue ;
  public: inline GGS_abstractDefaultValue readProperty_defaultValue (void) const {
    return mProperty_defaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setDefaultValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_defaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_lstring & in_superEntityName,
                                                                      const GGS_lstring & in_propertyName,
                                                                      const GGS_abstractDefaultValue & in_defaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & operator = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              const class GGS_abstractDefaultValue & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superPropertyWithDefaultValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superPropertyWithDefaultValue unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_lstring & in_superEntityName,
                                                      const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superProperty & operator = (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionProperty & operator = (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionProperty init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionShouldChangeProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty & operator = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty init_21_ (const class GGS_location & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionShouldChangeProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionShouldChangeProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionShouldChangeProperty unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ;

