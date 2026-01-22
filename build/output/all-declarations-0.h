#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator__32_lstringlist final {
  public: DownEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList) ;

  public: ~ DownEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator__32_lstringlist (const DownEnumerator__32_lstringlist &) = delete ;
  private: DownEnumerator__32_lstringlist & operator = (const DownEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__32_lstringlist final {
  public: UpEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList)  ;

  public: ~ UpEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator__32_lstringlist (const UpEnumerator__32_lstringlist &) = delete ;
  private: UpEnumerator__32_lstringlist & operator = (const UpEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @2lstringlist list
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;

//--- Default constructor
  public: GGS__32_lstringlist (void) ;

//--- Destructor
  public: virtual ~ GGS__32_lstringlist (void) = default ;

//--- Copy
  public: GGS__32_lstringlist (const GGS__32_lstringlist &) = default ;
  public: GGS__32_lstringlist & operator = (const GGS__32_lstringlist &) = default ;

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
  public : inline GenericArray <GGS__32_lstringlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS__32_lstringlist subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS__32_lstringlist inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__32_lstringlist ;
  friend class DownEnumerator__32_lstringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstringlist_2E_element & operator = (const GGS__32_lstringlist_2E_element & inSource) ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_regularBindingList final {
  public: DownEnumerator_regularBindingList (const class GGS_regularBindingList & inList) ;

  public: ~ DownEnumerator_regularBindingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public: class GGS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_regularBindingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_regularBindingList (const DownEnumerator_regularBindingList &) = delete ;
  private: DownEnumerator_regularBindingList & operator = (const DownEnumerator_regularBindingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_regularBindingList final {
  public: UpEnumerator_regularBindingList (const class GGS_regularBindingList & inList)  ;

  public: ~ UpEnumerator_regularBindingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public: class GGS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_regularBindingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_regularBindingList (const UpEnumerator_regularBindingList &) = delete ;
  private: UpEnumerator_regularBindingList & operator = (const UpEnumerator_regularBindingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @regularBindingList list
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_regularBindingList_2E_element> mArray ;

//--- Default constructor
  public: GGS_regularBindingList (void) ;

//--- Destructor
  public: virtual ~ GGS_regularBindingList (void) = default ;

//--- Copy
  public: GGS_regularBindingList (const GGS_regularBindingList &) = default ;
  public: GGS_regularBindingList & operator = (const GGS_regularBindingList &) = default ;

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
  public : inline GenericArray <GGS_regularBindingList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_regularBindingList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_regularBindingList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_regularBindingList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_observablePropertyList & inOperand1,
                                                                        const class GGS_bindingOptionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_regularBindingList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_observablePropertyList & inOperand1,
                                                    const class GGS_bindingOptionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_regularBindingList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyList getter_mObservablePropertyListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_regularBindingList ;
  friend class DownEnumerator_regularBindingList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingOptionList final {
  public: DownEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList) ;

  public: ~ DownEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingOptionList (const DownEnumerator_bindingOptionList &) = delete ;
  private: DownEnumerator_bindingOptionList & operator = (const DownEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingOptionList final {
  public: UpEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList)  ;

  public: ~ UpEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingOptionList (const UpEnumerator_bindingOptionList &) = delete ;
  private: UpEnumerator_bindingOptionList & operator = (const UpEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @bindingOptionList list
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_bindingOptionList (void) ;

//--- Destructor
  public: virtual ~ GGS_bindingOptionList (void) = default ;

//--- Copy
  public: GGS_bindingOptionList (const GGS_bindingOptionList &) = default ;
  public: GGS_bindingOptionList & operator = (const GGS_bindingOptionList &) = default ;

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
  public : inline GenericArray <GGS_bindingOptionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_bindingOptionList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_bindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_bindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_bindingOptionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_abstractDefaultValue & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_bindingOptionList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mOptionValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingOptionList ;
  friend class DownEnumerator_bindingOptionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_observablePropertyList final {
  public: DownEnumerator_observablePropertyList (const class GGS_observablePropertyList & inList) ;

  public: ~ DownEnumerator_observablePropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_observablePropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_observablePropertyList (const DownEnumerator_observablePropertyList &) = delete ;
  private: DownEnumerator_observablePropertyList & operator = (const DownEnumerator_observablePropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_observablePropertyList final {
  public: UpEnumerator_observablePropertyList (const class GGS_observablePropertyList & inList)  ;

  public: ~ UpEnumerator_observablePropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_observablePropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_observablePropertyList (const UpEnumerator_observablePropertyList &) = delete ;
  private: UpEnumerator_observablePropertyList & operator = (const UpEnumerator_observablePropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @observablePropertyList list
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;

//--- Default constructor
  public: GGS_observablePropertyList (void) ;

//--- Destructor
  public: virtual ~ GGS_observablePropertyList (void) = default ;

//--- Copy
  public: GGS_observablePropertyList (const GGS_observablePropertyList &) = default ;
  public: GGS_observablePropertyList & operator = (const GGS_observablePropertyList &) = default ;

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
  public : inline GenericArray <GGS_observablePropertyList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_observablePropertyList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_observablePropertyList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_observablePropertyList class_func_listWithValue (const class GGS_observablePropertyAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_observablePropertyList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_observablePropertyAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_observablePropertyList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_observablePropertyAST getter_mObservablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_observablePropertyList ;
  friend class DownEnumerator_observablePropertyList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_observablePropertyList mProperty_mObservablePropertyList ;
  public: inline GGS_observablePropertyList readProperty_mObservablePropertyList (void) const {
    return mProperty_mObservablePropertyList ;
  }

  public: GGS_bindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_bindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_regularBindingList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMObservablePropertyList (const GGS_observablePropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_bindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_regularBindingList_2E_element (const GGS_lstring & in_mBindingName,
                                             const GGS_observablePropertyList & in_mObservablePropertyList,
                                             const GGS_bindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_regularBindingList_2E_element (const GGS_regularBindingList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_regularBindingList_2E_element & operator = (const GGS_regularBindingList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_observablePropertyList & inOperand1,
                                                                     const class GGS_bindingOptionList & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularBindingList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_observablePropertyAST mProperty_mObservableProperty ;
  public: inline GGS_observablePropertyAST readProperty_mObservableProperty (void) const {
    return mProperty_mObservableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObservableProperty (const GGS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyAST & in_mObservableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyList_2E_element & operator = (const GGS_observablePropertyList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyList_2E_element init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDefaultValue reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDefaultValue class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GGS_abstractDefaultValue mProperty_mOptionValue ;
  public: inline GGS_abstractDefaultValue readProperty_mOptionValue (void) const {
    return mProperty_mOptionValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingOptionList_2E_element (const GGS_lstring & in_mOptionName,
                                            const GGS_abstractDefaultValue & in_mOptionValue) ;

//--------------------------------- Copy constructor
  public: GGS_bindingOptionList_2E_element (const GGS_bindingOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingOptionList_2E_element & operator = (const GGS_bindingOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_abstractDefaultValue & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletDeclarationList final {
  public: DownEnumerator_outletDeclarationList (const class GGS_outletDeclarationList & inList) ;

  public: ~ DownEnumerator_outletDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

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

  private: GenericArray <GGS_outletDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletDeclarationList (const DownEnumerator_outletDeclarationList &) = delete ;
  private: DownEnumerator_outletDeclarationList & operator = (const DownEnumerator_outletDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletDeclarationList final {
  public: UpEnumerator_outletDeclarationList (const class GGS_outletDeclarationList & inList)  ;

  public: ~ UpEnumerator_outletDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

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

  private: GenericArray <GGS_outletDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletDeclarationList (const UpEnumerator_outletDeclarationList &) = delete ;
  private: UpEnumerator_outletDeclarationList & operator = (const UpEnumerator_outletDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_outletDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletDeclarationList (void) = default ;

//--- Copy
  public: GGS_outletDeclarationList (const GGS_outletDeclarationList &) = default ;
  public: GGS_outletDeclarationList & operator = (const GGS_outletDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_outletDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletDeclarationList subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_outletDeclarationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_tableValueBinding & inOperand2,
                                                    const class GGS_runActionDescriptor & inOperand3,
                                                    const class GGS_multipleBindingDescriptor & inOperand4,
                                                    const class GGS_multipleBindingDescriptor & inOperand5,
                                                    const class GGS_regularBindingList & inOperand6,
                                                    const class GGS_graphicController & inOperand7
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_outletDeclarationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

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

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletDeclarationList ;
  friend class DownEnumerator_outletDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @simpleStoredPropertyList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_simpleStoredPropertyList final {
  public: DownEnumerator_simpleStoredPropertyList (const class GGS_simpleStoredPropertyList & inList) ;

  public: ~ DownEnumerator_simpleStoredPropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_simpleStoredPropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_simpleStoredPropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_simpleStoredPropertyList (const DownEnumerator_simpleStoredPropertyList &) = delete ;
  private: DownEnumerator_simpleStoredPropertyList & operator = (const DownEnumerator_simpleStoredPropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_simpleStoredPropertyList final {
  public: UpEnumerator_simpleStoredPropertyList (const class GGS_simpleStoredPropertyList & inList)  ;

  public: ~ UpEnumerator_simpleStoredPropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_simpleStoredPropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_simpleStoredPropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_simpleStoredPropertyList (const UpEnumerator_simpleStoredPropertyList &) = delete ;
  private: UpEnumerator_simpleStoredPropertyList & operator = (const UpEnumerator_simpleStoredPropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @simpleStoredPropertyList list
//--------------------------------------------------------------------------------------------------

class GGS_simpleStoredPropertyList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_simpleStoredPropertyList_2E_element> mArray ;

//--- Default constructor
  public: GGS_simpleStoredPropertyList (void) ;

//--- Destructor
  public: virtual ~ GGS_simpleStoredPropertyList (void) = default ;

//--- Copy
  public: GGS_simpleStoredPropertyList (const GGS_simpleStoredPropertyList &) = default ;
  public: GGS_simpleStoredPropertyList & operator = (const GGS_simpleStoredPropertyList &) = default ;

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
  public : inline GenericArray <GGS_simpleStoredPropertyList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_simpleStoredPropertyList subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_simpleStoredPropertyList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_abstractDefaultValue & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_simpleStoredPropertyList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_abstractDefaultValue & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_simpleStoredPropertyList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDefaultValue getter_mDefaultValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mPropertyTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_simpleStoredPropertyList ;
  friend class DownEnumerator_simpleStoredPropertyList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2E_element ;

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
  public: GGS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_externSwiftFunctionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externSwiftFunctionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externSwiftFunctionList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mCallerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mExternSwiftFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externSwiftFunctionList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibDescriptorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_mainXibDescriptorList final {
  public: DownEnumerator_mainXibDescriptorList (const class GGS_mainXibDescriptorList & inList) ;

  public: ~ DownEnumerator_mainXibDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mainXibDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_mainXibDescriptorList (const DownEnumerator_mainXibDescriptorList &) = delete ;
  private: DownEnumerator_mainXibDescriptorList & operator = (const DownEnumerator_mainXibDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mainXibDescriptorList final {
  public: UpEnumerator_mainXibDescriptorList (const class GGS_mainXibDescriptorList & inList)  ;

  public: ~ UpEnumerator_mainXibDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mainXibDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_mainXibDescriptorList (const UpEnumerator_mainXibDescriptorList &) = delete ;
  private: UpEnumerator_mainXibDescriptorList & operator = (const UpEnumerator_mainXibDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @mainXibDescriptorList list
//--------------------------------------------------------------------------------------------------

class GGS_mainXibDescriptorList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_mainXibDescriptorList_2E_element> mArray ;

//--- Default constructor
  public: GGS_mainXibDescriptorList (void) ;

//--- Destructor
  public: virtual ~ GGS_mainXibDescriptorList (void) = default ;

//--- Copy
  public: GGS_mainXibDescriptorList (const GGS_mainXibDescriptorList &) = default ;
  public: GGS_mainXibDescriptorList & operator = (const GGS_mainXibDescriptorList &) = default ;

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
  public : inline GenericArray <GGS_mainXibDescriptorList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_mainXibDescriptorList subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_mainXibDescriptorList class_func_listWithValue (const class GGS_mainXibLineDescriptorList & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_mainXibDescriptorList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_mainXibLineDescriptorList & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_mainXibDescriptorList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibLineDescriptorList getter_mLineAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_mainXibDescriptorList ;
  friend class DownEnumerator_mainXibDescriptorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibLineDescriptorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_mainXibLineDescriptorList final {
  public: DownEnumerator_mainXibLineDescriptorList (const class GGS_mainXibLineDescriptorList & inList) ;

  public: ~ DownEnumerator_mainXibLineDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibLineDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mainXibLineDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_mainXibLineDescriptorList (const DownEnumerator_mainXibLineDescriptorList &) = delete ;
  private: DownEnumerator_mainXibLineDescriptorList & operator = (const DownEnumerator_mainXibLineDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mainXibLineDescriptorList final {
  public: UpEnumerator_mainXibLineDescriptorList (const class GGS_mainXibLineDescriptorList & inList)  ;

  public: ~ UpEnumerator_mainXibLineDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mainXibLineDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mainXibLineDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_mainXibLineDescriptorList (const UpEnumerator_mainXibLineDescriptorList &) = delete ;
  private: UpEnumerator_mainXibLineDescriptorList & operator = (const UpEnumerator_mainXibLineDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @mainXibLineDescriptorList list
//--------------------------------------------------------------------------------------------------

class GGS_mainXibLineDescriptorList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_mainXibLineDescriptorList_2E_element> mArray ;

//--- Default constructor
  public: GGS_mainXibLineDescriptorList (void) ;

//--- Destructor
  public: virtual ~ GGS_mainXibLineDescriptorList (void) = default ;

//--- Copy
  public: GGS_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList &) = default ;
  public: GGS_mainXibLineDescriptorList & operator = (const GGS_mainXibLineDescriptorList &) = default ;

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
  public : inline GenericArray <GGS_mainXibLineDescriptorList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_mainXibLineDescriptorList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_mainXibLineDescriptorList class_func_listWithValue (const class GGS_mainXibElement & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_mainXibLineDescriptorList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_mainXibElement & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_mainXibLineDescriptorList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mainXibElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_mainXibLineDescriptorList ;
  friend class DownEnumerator_mainXibLineDescriptorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astViewDeclarationList final {
  public: DownEnumerator_astViewDeclarationList (const class GGS_astViewDeclarationList & inList) ;

  public: ~ DownEnumerator_astViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_astAbstractViewDeclaration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astViewDeclarationList (const DownEnumerator_astViewDeclarationList &) = delete ;
  private: DownEnumerator_astViewDeclarationList & operator = (const DownEnumerator_astViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astViewDeclarationList final {
  public: UpEnumerator_astViewDeclarationList (const class GGS_astViewDeclarationList & inList)  ;

  public: ~ UpEnumerator_astViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_astAbstractViewDeclaration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astViewDeclarationList (const UpEnumerator_astViewDeclarationList &) = delete ;
  private: UpEnumerator_astViewDeclarationList & operator = (const UpEnumerator_astViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astViewDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_astViewDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astViewDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astViewDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_astViewDeclarationList (void) = default ;

//--- Copy
  public: GGS_astViewDeclarationList (const GGS_astViewDeclarationList &) = default ;
  public: GGS_astViewDeclarationList & operator = (const GGS_astViewDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_astViewDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astViewDeclarationList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_astViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_astAbstractViewDeclaration & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_astViewDeclarationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_astAbstractViewDeclaration & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_astViewDeclarationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_astAbstractViewDeclaration getter_mViewAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astViewDeclarationList ;
  friend class DownEnumerator_astViewDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewDeclaration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewDeclaration class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDeclarationAST reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDeclarationAST class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDeclarationAST_2E_weak weak reference class
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
  public: GGS_abstractDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractFileGeneration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractFileGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractFileGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractFileGeneration_init (Compiler * inCompiler) ;


//--- Extension method generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyGenerationList final {
  public: DownEnumerator_propertyGenerationList (const class GGS_propertyGenerationList & inList) ;

  public: ~ DownEnumerator_propertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyGenerationList (const DownEnumerator_propertyGenerationList &) = delete ;
  private: DownEnumerator_propertyGenerationList & operator = (const DownEnumerator_propertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyGenerationList final {
  public: UpEnumerator_propertyGenerationList (const class GGS_propertyGenerationList & inList)  ;

  public: ~ UpEnumerator_propertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyGenerationList (const UpEnumerator_propertyGenerationList &) = delete ;
  private: UpEnumerator_propertyGenerationList & operator = (const UpEnumerator_propertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @propertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_propertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_propertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_propertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_propertyGenerationList (void) = default ;

//--- Copy
  public: GGS_propertyGenerationList (const GGS_propertyGenerationList &) = default ;
  public: GGS_propertyGenerationList & operator = (const GGS_propertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_propertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_propertyGenerationList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_propertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_propertyGenerationList class_func_listWithValue (const class GGS_propertyGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_propertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_propertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_propertyGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyGenerationList ;
  friend class DownEnumerator_propertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGeneration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @propertyGeneration class
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

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingsGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_regularBindingsGenerationList final {
  public: DownEnumerator_regularBindingsGenerationList (const class GGS_regularBindingsGenerationList & inList) ;

  public: ~ DownEnumerator_regularBindingsGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_regularBindingsGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_regularBindingsGenerationList (const DownEnumerator_regularBindingsGenerationList &) = delete ;
  private: DownEnumerator_regularBindingsGenerationList & operator = (const DownEnumerator_regularBindingsGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_regularBindingsGenerationList final {
  public: UpEnumerator_regularBindingsGenerationList (const class GGS_regularBindingsGenerationList & inList)  ;

  public: ~ UpEnumerator_regularBindingsGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_regularBindingsGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_regularBindingsGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_regularBindingsGenerationList (const UpEnumerator_regularBindingsGenerationList &) = delete ;
  private: UpEnumerator_regularBindingsGenerationList & operator = (const UpEnumerator_regularBindingsGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @regularBindingsGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingsGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_regularBindingsGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_regularBindingsGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_regularBindingsGenerationList (void) = default ;

//--- Copy
  public: GGS_regularBindingsGenerationList (const GGS_regularBindingsGenerationList &) = default ;
  public: GGS_regularBindingsGenerationList & operator = (const GGS_regularBindingsGenerationList &) = default ;

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
  public : inline GenericArray <GGS_regularBindingsGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_regularBindingsGenerationList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_regularBindingsGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_boundObjectList & inOperand2,
                                                                                   const class GGS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_regularBindingsGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_boundObjectList & inOperand2,
                                                    const class GGS_string & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_regularBindingsGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

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

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_regularBindingsGenerationList ;
  friend class DownEnumerator_regularBindingsGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boundObjectList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_boundObjectList final {
  public: DownEnumerator_boundObjectList (const class GGS_boundObjectList & inList) ;

  public: ~ DownEnumerator_boundObjectList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBoundObjectString (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_boundObjectList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_boundObjectList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_boundObjectList (const DownEnumerator_boundObjectList &) = delete ;
  private: DownEnumerator_boundObjectList & operator = (const DownEnumerator_boundObjectList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_boundObjectList final {
  public: UpEnumerator_boundObjectList (const class GGS_boundObjectList & inList)  ;

  public: ~ UpEnumerator_boundObjectList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBoundObjectString (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_boundObjectList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_boundObjectList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_boundObjectList (const UpEnumerator_boundObjectList &) = delete ;
  private: UpEnumerator_boundObjectList & operator = (const UpEnumerator_boundObjectList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @boundObjectList list
//--------------------------------------------------------------------------------------------------

class GGS_boundObjectList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_boundObjectList_2E_element> mArray ;

//--- Default constructor
  public: GGS_boundObjectList (void) ;

//--- Destructor
  public: virtual ~ GGS_boundObjectList (void) = default ;

//--- Copy
  public: GGS_boundObjectList (const GGS_boundObjectList &) = default ;
  public: GGS_boundObjectList & operator = (const GGS_boundObjectList &) = default ;

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
  public : inline GenericArray <GGS_boundObjectList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_boundObjectList subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_boundObjectList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_boundObjectList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                     const class GGS_propertyKind & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_boundObjectList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_propertyKind & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_boundObjectList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundObjectStringAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_boundObjectList ;
  friend class DownEnumerator_boundObjectList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_multipleBindingGenerationList final {
  public: DownEnumerator_multipleBindingGenerationList (const class GGS_multipleBindingGenerationList & inList) ;

  public: ~ DownEnumerator_multipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_multipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_multipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_multipleBindingGenerationList (const DownEnumerator_multipleBindingGenerationList &) = delete ;
  private: DownEnumerator_multipleBindingGenerationList & operator = (const DownEnumerator_multipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_multipleBindingGenerationList final {
  public: UpEnumerator_multipleBindingGenerationList (const class GGS_multipleBindingGenerationList & inList)  ;

  public: ~ UpEnumerator_multipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_multipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_multipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_multipleBindingGenerationList (const UpEnumerator_multipleBindingGenerationList &) = delete ;
  private: UpEnumerator_multipleBindingGenerationList & operator = (const UpEnumerator_multipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @multipleBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_multipleBindingGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_multipleBindingGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_multipleBindingGenerationList (void) = default ;

//--- Copy
  public: GGS_multipleBindingGenerationList (const GGS_multipleBindingGenerationList &) = default ;
  public: GGS_multipleBindingGenerationList & operator = (const GGS_multipleBindingGenerationList &) = default ;

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
  public : inline GenericArray <GGS_multipleBindingGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_multipleBindingGenerationList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_multipleBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_multipleBindingGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_multipleBindingGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_multipleBindingGenerationList ;
  friend class DownEnumerator_multipleBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBooleanMultipleBindingExpressionForGeneration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionBindingListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_actionBindingListForGeneration final {
  public: DownEnumerator_actionBindingListForGeneration (const class GGS_actionBindingListForGeneration & inList) ;

  public: ~ DownEnumerator_actionBindingListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mActionName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actionBindingListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_actionBindingListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_actionBindingListForGeneration (const DownEnumerator_actionBindingListForGeneration &) = delete ;
  private: DownEnumerator_actionBindingListForGeneration & operator = (const DownEnumerator_actionBindingListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actionBindingListForGeneration final {
  public: UpEnumerator_actionBindingListForGeneration (const class GGS_actionBindingListForGeneration & inList)  ;

  public: ~ UpEnumerator_actionBindingListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOutletName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mActionName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actionBindingListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_actionBindingListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_actionBindingListForGeneration (const UpEnumerator_actionBindingListForGeneration &) = delete ;
  private: UpEnumerator_actionBindingListForGeneration & operator = (const UpEnumerator_actionBindingListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @actionBindingListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_actionBindingListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_actionBindingListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_actionBindingListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_actionBindingListForGeneration (void) = default ;

//--- Copy
  public: GGS_actionBindingListForGeneration (const GGS_actionBindingListForGeneration &) = default ;
  public: GGS_actionBindingListForGeneration & operator = (const GGS_actionBindingListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_actionBindingListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_actionBindingListForGeneration subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_actionBindingListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_actionBindingListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_actionBindingListForGeneration_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

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

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actionBindingListForGeneration ;
  friend class DownEnumerator_actionBindingListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedOutletMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_decoratedOutletMap final {

  public: DownEnumerator_decoratedOutletMap (const class GGS_decoratedOutletMap & inMap) ;

  public: ~ DownEnumerator_decoratedOutletMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mOutletTypeName (LOCATION_ARGS) const ;

  public: class GGS_decoratedOutletMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_decoratedOutletMap (const DownEnumerator_decoratedOutletMap &) = delete ;
  private: DownEnumerator_decoratedOutletMap & operator = (const DownEnumerator_decoratedOutletMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_decoratedOutletMap final {
  public: UpEnumerator_decoratedOutletMap (const class GGS_decoratedOutletMap & inMap)  ;

  public: ~ UpEnumerator_decoratedOutletMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_decoratedOutletMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_decoratedOutletMap (const UpEnumerator_decoratedOutletMap &) = delete ;
  private: UpEnumerator_decoratedOutletMap & operator = (const UpEnumerator_decoratedOutletMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_decoratedOutletMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_decoratedOutletMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_decoratedOutletMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_decoratedOutletMap (void) ;

//--- Handle copy
  public: GGS_decoratedOutletMap (const GGS_decoratedOutletMap & inSource) ;
  public: GGS_decoratedOutletMap & operator = (const GGS_decoratedOutletMap & inSource) ;

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
  protected: void performInsert (const class GGS_decoratedOutletMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_decoratedOutletMap class_func_mapWithMapToOverride (const class GGS_decoratedOutletMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_decoratedOutletMap ;
  friend class DownEnumerator_decoratedOutletMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: decoratedOutletMap.element? optional
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ;

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
  public: GGS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_tableViewBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_tableViewBindingGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_tableViewBindingGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTableValueBindingControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTableValueBindingOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableViewBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_ebViewGraphicControllerBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                  const class GGS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mArrayControllerControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEBViewOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ebViewGraphicControllerBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @viewGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_viewGenerationList final {
  public: DownEnumerator_viewGenerationList (const class GGS_viewGenerationList & inList) ;

  public: ~ DownEnumerator_viewGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_abstractViewGeneration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_viewGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_viewGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_viewGenerationList (const DownEnumerator_viewGenerationList &) = delete ;
  private: DownEnumerator_viewGenerationList & operator = (const DownEnumerator_viewGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_viewGenerationList final {
  public: UpEnumerator_viewGenerationList (const class GGS_viewGenerationList & inList)  ;

  public: ~ UpEnumerator_viewGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mViewName (LOCATION_ARGS) const ;
  public: class GGS_abstractViewGeneration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_viewGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_viewGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_viewGenerationList (const UpEnumerator_viewGenerationList &) = delete ;
  private: UpEnumerator_viewGenerationList & operator = (const UpEnumerator_viewGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @viewGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_viewGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_viewGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_viewGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_viewGenerationList (void) = default ;

//--- Copy
  public: GGS_viewGenerationList (const GGS_viewGenerationList &) = default ;
  public: GGS_viewGenerationList & operator = (const GGS_viewGenerationList &) = default ;

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
  public : inline GenericArray <GGS_viewGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_viewGenerationList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_viewGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_viewGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                        const class GGS_abstractViewGeneration & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_viewGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_abstractViewGeneration & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_viewGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractViewGeneration getter_mViewAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_viewGenerationList ;
  friend class DownEnumerator_viewGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_viewGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewGeneration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractViewGeneration class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_viewGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_implicitViewFunctionGenerationList final {
  public: DownEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inList) ;

  public: ~ DownEnumerator_implicitViewFunctionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_implicitViewFunctionGenerationList (const DownEnumerator_implicitViewFunctionGenerationList &) = delete ;
  private: DownEnumerator_implicitViewFunctionGenerationList & operator = (const DownEnumerator_implicitViewFunctionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_implicitViewFunctionGenerationList final {
  public: UpEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inList)  ;

  public: ~ UpEnumerator_implicitViewFunctionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_implicitViewFunctionGenerationList (const UpEnumerator_implicitViewFunctionGenerationList &) = delete ;
  private: UpEnumerator_implicitViewFunctionGenerationList & operator = (const UpEnumerator_implicitViewFunctionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @implicitViewFunctionGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_implicitViewFunctionGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_implicitViewFunctionGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_implicitViewFunctionGenerationList (void) = default ;

//--- Copy
  public: GGS_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList &) = default ;
  public: GGS_implicitViewFunctionGenerationList & operator = (const GGS_implicitViewFunctionGenerationList &) = default ;

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
  public : inline GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_implicitViewFunctionGenerationList subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_implicitViewFunctionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_implicitViewFunctionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_implicitViewFunctionGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_implicitViewFunctionGenerationList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_implicitViewFunctionGenerationList ;
  friend class DownEnumerator_implicitViewFunctionGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewInstructionGeneration reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractViewInstructionGeneration class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap class_func_mapWithMapToOverride (const class GGS_autoLayoutConfiguratorMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutOutletMap final {

  public: DownEnumerator_autoLayoutOutletMap (const class GGS_autoLayoutOutletMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutOutletMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mOutletIsArray (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutOutletMap (const DownEnumerator_autoLayoutOutletMap &) = delete ;
  private: DownEnumerator_autoLayoutOutletMap & operator = (const DownEnumerator_autoLayoutOutletMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutOutletMap final {
  public: UpEnumerator_autoLayoutOutletMap (const class GGS_autoLayoutOutletMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutOutletMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mOutletIsArray (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutOutletMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutOutletMap (const UpEnumerator_autoLayoutOutletMap &) = delete ;
  private: UpEnumerator_autoLayoutOutletMap & operator = (const UpEnumerator_autoLayoutOutletMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutOutletMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutOutletMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutOutletMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutOutletMap (const GGS_autoLayoutOutletMap & inSource) ;
  public: GGS_autoLayoutOutletMap & operator = (const GGS_autoLayoutOutletMap & inSource) ;

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
  protected: void performInsert (const class GGS_autoLayoutOutletMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_autoLayoutOutletMap class_func_mapWithMapToOverride (const class GGS_autoLayoutOutletMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutOutletMap ;
  friend class DownEnumerator_autoLayoutOutletMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutOutletMap.element? optional
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractFileGeneration_2E_weak weak reference class
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
  public: GGS_abstractFileGeneration unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externSwiftDelegateList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externSwiftDelegateList final {
  public: DownEnumerator_externSwiftDelegateList (const class GGS_externSwiftDelegateList & inList) ;

  public: ~ DownEnumerator_externSwiftDelegateList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftDelegateList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externSwiftDelegateList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externSwiftDelegateList (const DownEnumerator_externSwiftDelegateList &) = delete ;
  private: DownEnumerator_externSwiftDelegateList & operator = (const DownEnumerator_externSwiftDelegateList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externSwiftDelegateList final {
  public: UpEnumerator_externSwiftDelegateList (const class GGS_externSwiftDelegateList & inList)  ;

  public: ~ UpEnumerator_externSwiftDelegateList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externSwiftDelegateList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externSwiftDelegateList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externSwiftDelegateList (const UpEnumerator_externSwiftDelegateList &) = delete ;
  private: UpEnumerator_externSwiftDelegateList & operator = (const UpEnumerator_externSwiftDelegateList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externSwiftDelegateList list
//--------------------------------------------------------------------------------------------------

class GGS_externSwiftDelegateList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externSwiftDelegateList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externSwiftDelegateList (void) ;

//--- Destructor
  public: virtual ~ GGS_externSwiftDelegateList (void) = default ;

//--- Copy
  public: GGS_externSwiftDelegateList (const GGS_externSwiftDelegateList &) = default ;
  public: GGS_externSwiftDelegateList & operator = (const GGS_externSwiftDelegateList &) = default ;

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
  public : inline GenericArray <GGS_externSwiftDelegateList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externSwiftDelegateList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_externSwiftDelegateList class_func_listWithValue (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externSwiftDelegateList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externSwiftDelegateList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mExternSwiftDelegateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externSwiftDelegateList ;
  friend class DownEnumerator_externSwiftDelegateList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @entityDeclarationAST class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityDeclarationAST_2E_weak weak reference class
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
  public: GGS_entityDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ;

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
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
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
  public: class GGS_lstringlist current_mObsoleteEntityNames (LOCATION_ARGS) const ;
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
  public: GGS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_entityListForGeneratingEBManagedObjectContext class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                   const class GGS_lstringlist & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_lstringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEntityNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mObsoleteEntityNamesAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_entityListForGeneratingEBManagedObjectContext ;
  friend class DownEnumerator_entityListForGeneratingEBManagedObjectContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityForGeneration reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @entityForGeneration class
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


//--- Extension method generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityForGeneration_2E_weak weak reference class
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
  public: GGS_entityForGeneration unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectionControllerDeclarationAST class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectionControllerDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectionControllerDeclarationAST_2E_weak (const class GGS_selectionControllerDeclarationAST & inSource) ;

  public: GGS_selectionControllerDeclarationAST_2E_weak & operator = (const class GGS_selectionControllerDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectionControllerDeclarationAST_2E_weak init_nil (void) {
    GGS_selectionControllerDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectionControllerDeclarationAST bang_selectionControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectionControllerDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_selectionControllerDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_propertyGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_propertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_propertyGeneration_2E_weak (const class GGS_propertyGeneration & inSource) ;

  public: GGS_propertyGeneration_2E_weak & operator = (const class GGS_propertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_propertyGeneration_2E_weak init_nil (void) {
    GGS_propertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_propertyGeneration bang_propertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_propertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_propertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_selectionControllerForGeneration final {
  public: DownEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inList) ;

  public: ~ DownEnumerator_selectionControllerForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOwnerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_selectionControllerForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_selectionControllerForGeneration (const DownEnumerator_selectionControllerForGeneration &) = delete ;
  private: DownEnumerator_selectionControllerForGeneration & operator = (const DownEnumerator_selectionControllerForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_selectionControllerForGeneration final {
  public: UpEnumerator_selectionControllerForGeneration (const class GGS_selectionControllerForGeneration & inList)  ;

  public: ~ UpEnumerator_selectionControllerForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mOwnerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public: class GGS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
  public: class GGS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_selectionControllerForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_selectionControllerForGeneration (const UpEnumerator_selectionControllerForGeneration &) = delete ;
  private: UpEnumerator_selectionControllerForGeneration & operator = (const UpEnumerator_selectionControllerForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @selectionControllerForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_selectionControllerForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_selectionControllerForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_selectionControllerForGeneration (void) = default ;

//--- Copy
  public: GGS_selectionControllerForGeneration (const GGS_selectionControllerForGeneration &) = default ;
  public: GGS_selectionControllerForGeneration & operator = (const GGS_selectionControllerForGeneration &) = default ;

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
  public : inline GenericArray <GGS_selectionControllerForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_selectionControllerForGeneration subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mOwnerName,
                                                 const class GGS_string & in_mSelectionControllerName,
                                                 const class GGS_string & in_mBoundControllerName,
                                                 const class GGS_string & in_mBoundControllerPropertyName,
                                                 const class GGS_string & in_mBaseTypeName,
                                                 const class GGS_string & in_mSelectionTypeName,
                                                 const class GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                 const class GGS_propertyGenerationList & in_mPropertyGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectionControllerForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                      const class GGS_string & inOperand1,
                                                                                      const class GGS_string & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      const class GGS_string & inOperand4,
                                                                                      const class GGS_string & inOperand5,
                                                                                      const class GGS_propertyMap & inOperand6,
                                                                                      const class GGS_propertyGenerationList & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_selectionControllerForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_string & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_propertyMap & inOperand6,
                                                    const class GGS_propertyGenerationList & inOperand7
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_selectionControllerForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_selectionControllerForGeneration add_operation (const GGS_selectionControllerForGeneration & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_propertyMap constinArgument6,
                                               class GGS_propertyGenerationList constinArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_propertyMap constinArgument6,
                                                      class GGS_propertyGenerationList constinArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_propertyMap & outArgument6,
                                                 class GGS_propertyGenerationList & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_propertyMap & outArgument6,
                                                class GGS_propertyGenerationList & outArgument7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_propertyMap & outArgument6,
                                                      class GGS_propertyGenerationList & outArgument7,
                                                      class GGS_uint constinArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBaseTypeNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerNameAtIndex (class GGS_string constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundControllerPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                               class GGS_uint constinArgument1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListAtIndex (class GGS_propertyGenerationList constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionControllerNameAtIndex (class GGS_string constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionObservablePropertyMapAtIndex (class GGS_propertyMap constinArgument0,
                                                                                  class GGS_uint constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionTypeNameAtIndex (class GGS_string constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_propertyMap & outArgument6,
                                              class GGS_propertyGenerationList & outArgument7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_string & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_propertyMap & outArgument6,
                                             class GGS_propertyGenerationList & outArgument7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBaseTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBoundControllerPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOwnerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGenerationList getter_mPropertyGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectionControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_selectionControllerForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_selectionControllerForGeneration ;
  friend class DownEnumerator_selectionControllerForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyMap ;
  friend class DownEnumerator_propertyMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOwnerName ;
  public: inline GGS_string readProperty_mOwnerName (void) const {
    return mProperty_mOwnerName ;
  }

  public: GGS_string mProperty_mSelectionControllerName ;
  public: inline GGS_string readProperty_mSelectionControllerName (void) const {
    return mProperty_mSelectionControllerName ;
  }

  public: GGS_string mProperty_mBoundControllerName ;
  public: inline GGS_string readProperty_mBoundControllerName (void) const {
    return mProperty_mBoundControllerName ;
  }

  public: GGS_string mProperty_mBoundControllerPropertyName ;
  public: inline GGS_string readProperty_mBoundControllerPropertyName (void) const {
    return mProperty_mBoundControllerPropertyName ;
  }

  public: GGS_string mProperty_mBaseTypeName ;
  public: inline GGS_string readProperty_mBaseTypeName (void) const {
    return mProperty_mBaseTypeName ;
  }

  public: GGS_string mProperty_mSelectionTypeName ;
  public: inline GGS_string readProperty_mSelectionTypeName (void) const {
    return mProperty_mSelectionTypeName ;
  }

  public: GGS_propertyMap mProperty_mSelectionObservablePropertyMap ;
  public: inline GGS_propertyMap readProperty_mSelectionObservablePropertyMap (void) const {
    return mProperty_mSelectionObservablePropertyMap ;
  }

  public: GGS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: inline GGS_propertyGenerationList readProperty_mPropertyGenerationList (void) const {
    return mProperty_mPropertyGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_selectionControllerForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOwnerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOwnerName = inValue ;
  }

  public: inline void setter_setMSelectionControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerName = inValue ;
  }

  public: inline void setter_setMBoundControllerPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundControllerPropertyName = inValue ;
  }

  public: inline void setter_setMBaseTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseTypeName = inValue ;
  }

  public: inline void setter_setMSelectionTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionTypeName = inValue ;
  }

  public: inline void setter_setMSelectionObservablePropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionObservablePropertyMap = inValue ;
  }

  public: inline void setter_setMPropertyGenerationList (const GGS_propertyGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyGenerationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_selectionControllerForGeneration_2E_element (const GGS_string & in_mOwnerName,
                                                           const GGS_string & in_mSelectionControllerName,
                                                           const GGS_string & in_mBoundControllerName,
                                                           const GGS_string & in_mBoundControllerPropertyName,
                                                           const GGS_string & in_mBaseTypeName,
                                                           const GGS_string & in_mSelectionTypeName,
                                                           const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                           const GGS_propertyGenerationList & in_mPropertyGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_selectionControllerForGeneration_2E_element (const GGS_selectionControllerForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_selectionControllerForGeneration_2E_element & operator = (const GGS_selectionControllerForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerForGeneration_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                       const class GGS_string & inOperand1,
                                                                                                       const class GGS_string & inOperand2,
                                                                                                       const class GGS_string & inOperand3,
                                                                                                       const class GGS_string & inOperand4,
                                                                                                       const class GGS_string & inOperand5,
                                                                                                       const class GGS_propertyMap & inOperand6,
                                                                                                       const class GGS_propertyGenerationList & inOperand7,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum propertyKind
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_property,
    enum_toMany,
    enum_toOne,
    enum_arrayController,
    enum_selectionController
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_property (class GGS_typeKind & out_type,
                                                                 class GGS_propertyAccessibility & out_accessibility) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_toMany (class GGS_lstring & out_typeName,
                                                               class GGS_propertyAccessibility & out_accessibility,
                                                               class GGS_bool & out_graphic,
                                                               class GGS_toManyRelationshipOptionAST & out_optionKind) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_toOne (class GGS_lstring & out_typeName,
                                                              class GGS_propertyAccessibility & out_accessibility,
                                                              class GGS_bool & out_graphic,
                                                              class GGS_toOneOppositeRelationship & out_opposite,
                                                              class GGS_bool & out_isWeak) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayController (class GGS_lstring & out_typeName,
                                                                        class GGS_bool & out_graphic) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectionController (class GGS_string & out_typeName) const ;

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
  public: static GGS_propertyKind extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyKind class_func_arrayController (const class GGS_lstring & inOperand0,
                                                                    const class GGS_bool & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyKind class_func_property (const class GGS_typeKind & inOperand0,
                                                             const class GGS_propertyAccessibility & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyKind class_func_selectionController (const class GGS_string & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyKind class_func_toMany (const class GGS_lstring & inOperand0,
                                                           const class GGS_propertyAccessibility & inOperand1,
                                                           const class GGS_bool & inOperand2,
                                                           const class GGS_toManyRelationshipOptionAST & inOperand3
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyKind class_func_toOne (const class GGS_lstring & inOperand0,
                                                          const class GGS_propertyAccessibility & inOperand1,
                                                          const class GGS_bool & inOperand2,
                                                          const class GGS_toOneOppositeRelationship & inOperand3,
                                                          const class GGS_bool & inOperand4
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayController (class GGS_lstring & outArgument0,
                                                               class GGS_bool & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProperty (class GGS_typeKind & outArgument0,
                                                        class GGS_propertyAccessibility & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSelectionController (class GGS_string & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractToMany (class GGS_lstring & outArgument0,
                                                      class GGS_propertyAccessibility & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_toManyRelationshipOptionAST & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractToOne (class GGS_lstring & outArgument0,
                                                     class GGS_propertyAccessibility & outArgument1,
                                                     class GGS_bool & outArgument2,
                                                     class GGS_toOneOppositeRelationship & outArgument3,
                                                     class GGS_bool & outArgument4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyKind_2E_arrayController_3F_ getter_getArrayController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind_2E_selectionController_3F_ getter_getSelectionController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind_2E_toMany_3F_ getter_getToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind_2E_toOne_3F_ getter_getToOne (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isToOne (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionMap extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionMap class_func_mapWithMapToOverride (const class GGS_actionMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;


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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actionMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_actionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actionMap ;
  friend class DownEnumerator_actionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyKind mProperty_mKind ;
  public: inline GGS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_actionMap mProperty_mActionMap ;
  public: inline GGS_actionMap readProperty_mActionMap (void) const {
    return mProperty_mActionMap ;
  }

  public: GGS_bool mProperty_mIsOverriding ;
  public: inline GGS_bool readProperty_mIsOverriding (void) const {
    return mProperty_mIsOverriding ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMActionMap (const GGS_actionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionMap = inValue ;
  }

  public: inline void setter_setMIsOverriding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsOverriding = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_propertyKind & in_mKind,
                                      const GGS_actionMap & in_mActionMap,
                                      const GGS_bool & in_mIsOverriding) ;

//--------------------------------- Copy constructor
  public: GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyMap_2E_element & operator = (const GGS_propertyMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyKind & inOperand1,
                                                                  const class GGS_actionMap & inOperand2,
                                                                  const class GGS_bool & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_propertyMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

