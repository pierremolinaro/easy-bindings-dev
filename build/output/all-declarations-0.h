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
  public: GGS__32_lstringlist (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS__32_lstringlist inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
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

  public: void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
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

  public: class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractClassType (class GGS_string & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractEntityType (class GGS_string & outArgument0,
                                         class GGS_bool & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: void method_extractEnumType (class GGS_string & outArgument0,
                                       class GGS_enumConstantMap & outArgument1,
                                       class GGS_enumFuncMap & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractTransientPropertyExternType (class GGS_string & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_typeKind_2E_classType_3F_ getter_getClassType (LOCATION_ARGS) const ;

  public: class GGS_typeKind_2E_entityType_3F_ getter_getEntityType (LOCATION_ARGS) const ;

  public: class GGS_typeKind_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: class GGS_typeKind_2E_transientPropertyExternType_3F_ getter_getTransientPropertyExternType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBezierPathArrayType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBezierPathType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isColorType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDataType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDateType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFontType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStringType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTransientPropertyExternType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUint_33__32_Type (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.classType? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_entityType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.entityType? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantMap final {

  public: DownEnumerator_enumConstantMap (const class GGS_enumConstantMap & inMap) ;

  public: ~ DownEnumerator_enumConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumConstantMap (const DownEnumerator_enumConstantMap &) = delete ;
  private: DownEnumerator_enumConstantMap & operator = (const DownEnumerator_enumConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantMap final {
  public: UpEnumerator_enumConstantMap (const class GGS_enumConstantMap & inMap)  ;

  public: ~ UpEnumerator_enumConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_enumConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumConstantMap (const UpEnumerator_enumConstantMap &) = delete ;
  private: UpEnumerator_enumConstantMap & operator = (const UpEnumerator_enumConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_enumConstantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_enumConstantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_enumConstantMap (void) ;

//--- Handle copy
  public: GGS_enumConstantMap (const GGS_enumConstantMap & inSource) ;
  public: GGS_enumConstantMap & operator = (const GGS_enumConstantMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Compare
  public: ComparisonResult objectCompare (const GGS_enumConstantMap & inOperand) const ;



//--- performInsert
  protected: void performInsert (const class GGS_enumConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_enumConstantMap class_func_mapWithMapToOverride (const class GGS_enumConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumConstantMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_enumConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumConstantMap ;
  friend class DownEnumerator_enumConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumFuncMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumFuncMap final {

  public: DownEnumerator_enumFuncMap (const class GGS_enumFuncMap & inMap) ;

  public: ~ DownEnumerator_enumFuncMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;

  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumFuncMap (const DownEnumerator_enumFuncMap &) = delete ;
  private: DownEnumerator_enumFuncMap & operator = (const DownEnumerator_enumFuncMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumFuncMap final {
  public: UpEnumerator_enumFuncMap (const class GGS_enumFuncMap & inMap)  ;

  public: ~ UpEnumerator_enumFuncMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
  public: class GGS_enumFuncMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumFuncMap (const UpEnumerator_enumFuncMap &) = delete ;
  private: UpEnumerator_enumFuncMap & operator = (const UpEnumerator_enumFuncMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_enumFuncMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_enumFuncMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_enumFuncMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_enumFuncMap (void) ;

//--- Handle copy
  public: GGS_enumFuncMap (const GGS_enumFuncMap & inSource) ;
  public: GGS_enumFuncMap & operator = (const GGS_enumFuncMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Compare
  public: ComparisonResult objectCompare (const GGS_enumFuncMap & inOperand) const ;



//--- performInsert
  protected: void performInsert (const class GGS_enumFuncMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_enumFuncMap class_func_mapWithMapToOverride (const class GGS_enumFuncMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_enumFunAssociationSortedList constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAssociationSortedListForKey (class GGS_enumFunAssociationSortedList constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_enumFunAssociationSortedList & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumFunAssociationSortedList getter_mAssociationSortedListForKey (const class GGS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumFuncMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_enumFuncMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumFuncMap ;
  friend class DownEnumerator_enumFuncMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.enumType? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_transientPropertyExternType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.transientPropertyExternType? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_typeKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind isGraphic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isGraphic (const class GGS_typeKind & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeKindList final {
  public: DownEnumerator_typeKindList (const class GGS_typeKindList & inList) ;

  public: ~ DownEnumerator_typeKindList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeKindList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeKindList (const DownEnumerator_typeKindList &) = delete ;
  private: DownEnumerator_typeKindList & operator = (const DownEnumerator_typeKindList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeKindList final {
  public: UpEnumerator_typeKindList (const class GGS_typeKindList & inList)  ;

  public: ~ UpEnumerator_typeKindList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeKindList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeKindList (const UpEnumerator_typeKindList &) = delete ;
  private: UpEnumerator_typeKindList & operator = (const UpEnumerator_typeKindList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @typeKindList list
//--------------------------------------------------------------------------------------------------

class GGS_typeKindList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_typeKindList_2E_element> mArray ;

//--- Default constructor
  public: GGS_typeKindList (void) ;

//--- Destructor
  public: virtual ~ GGS_typeKindList (void) = default ;

//--- Copy
  public: GGS_typeKindList (const GGS_typeKindList &) = default ;
  public: GGS_typeKindList & operator = (const GGS_typeKindList &) = default ;

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
  public : inline GenericArray <GGS_typeKindList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_typeKindList subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_typeKindList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindList class_func_listWithValue (const class GGS_typeKind & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_typeKindList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_typeKind & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_typeKindList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_typeKindList add_operation (const GGS_typeKindList & inOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typeKind constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_typeKind & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_typeKind & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeAtIndex (class GGS_typeKind constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_typeKind & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_typeKind & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_typeKind getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_typeKindList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeKindList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeKindList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeKindList ;
  friend class DownEnumerator_typeKindList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKindList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mType ;
  public: inline GGS_typeKind readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindList_2E_element (const GGS_typeKind & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_typeKindList_2E_element (const GGS_typeKindList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKindList_2E_element & operator = (const GGS_typeKindList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindList_2E_element init_21_ (const class GGS_typeKind & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList_2E_element ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayController (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractProperty (class GGS_typeKind & outArgument0,
                                       class GGS_propertyAccessibility & outArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelectionController (class GGS_string & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: void method_extractToMany (class GGS_lstring & outArgument0,
                                     class GGS_propertyAccessibility & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_toManyRelationshipOptionAST & outArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractToOne (class GGS_lstring & outArgument0,
                                    class GGS_propertyAccessibility & outArgument1,
                                    class GGS_bool & outArgument2,
                                    class GGS_toOneOppositeRelationship & outArgument3,
                                    class GGS_bool & outArgument4,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_propertyKind_2E_arrayController_3F_ getter_getArrayController (LOCATION_ARGS) const ;

  public: class GGS_propertyKind_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: class GGS_propertyKind_2E_selectionController_3F_ getter_getSelectionController (LOCATION_ARGS) const ;

  public: class GGS_propertyKind_2E_toMany_3F_ getter_getToMany (LOCATION_ARGS) const ;

  public: class GGS_propertyKind_2E_toOne_3F_ getter_getToOne (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isToMany (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isToOne (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_arrayController struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_arrayController : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_arrayController (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_arrayController (const GGS_lstring & in_typeName,
                                               const GGS_bool & in_graphic) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_arrayController (const GGS_propertyKind_2E_arrayController & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_arrayController & operator = (const GGS_propertyKind_2E_arrayController & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_arrayController init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_arrayController extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.arrayController? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_arrayController_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_arrayController mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_arrayController_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_arrayController_3F_ (const GGS_propertyKind_2E_arrayController & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_arrayController_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_arrayController unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_arrayController_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum propertyAccessibility
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyAccessibility (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_stored,
    enum_computed,
    enum_transient
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_transient (class GGS_bool & out_isAbstract) const ;

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
  public: static GGS_propertyAccessibility extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyAccessibility class_func_computed (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_stored (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_transient (const class GGS_bool & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractTransient (class GGS_bool & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_propertyAccessibility_2E_transient_3F_ getter_getTransient (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isComputed (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStored (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_type ;
  public: inline GGS_typeKind readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_property (const GGS_typeKind & in_type,
                                        const GGS_propertyAccessibility & in_accessibility) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_property (const GGS_propertyKind_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_property & operator = (const GGS_propertyKind_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_property init_21__21_ (const class GGS_typeKind & inOperand0,
                                                            const class GGS_propertyAccessibility & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_property extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_property_3F_ (const GGS_propertyKind_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_property unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_property_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_selectionController struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_selectionController : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_typeName ;
  public: inline GGS_string readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_selectionController (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_selectionController (const GGS_string & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_selectionController (const GGS_propertyKind_2E_selectionController & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_selectionController & operator = (const GGS_propertyKind_2E_selectionController & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_selectionController init_21_ (const class GGS_string & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_selectionController extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.selectionController? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_selectionController_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_selectionController mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_selectionController_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_selectionController_3F_ (const GGS_propertyKind_2E_selectionController & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_selectionController_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_selectionController unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_selectionController_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractHasDependance (class GGS_lstring & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractHasOpposite (class GGS_lstring & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ getter_getHasDependance (LOCATION_ARGS) const ;

  public: class GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ getter_getHasOpposite (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_toMany struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toMany : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

  public: GGS_toManyRelationshipOptionAST mProperty_optionKind ;
  public: inline GGS_toManyRelationshipOptionAST readProperty_optionKind (void) const {
    return mProperty_optionKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toMany (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

  public: inline void setter_setOptionKind (const GGS_toManyRelationshipOptionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_toMany (const GGS_lstring & in_typeName,
                                      const GGS_propertyAccessibility & in_accessibility,
                                      const GGS_bool & in_graphic,
                                      const GGS_toManyRelationshipOptionAST & in_optionKind) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_toMany (const GGS_propertyKind_2E_toMany & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_toMany & operator = (const GGS_propertyKind_2E_toMany & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_toMany init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_propertyAccessibility & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_toManyRelationshipOptionAST & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_toMany extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.toMany? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toMany_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_toMany mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toMany_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_toMany_3F_ (const GGS_propertyKind_2E_toMany & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_toMany_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_toMany unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_toMany_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractOppositeIsToMany (class GGS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractOppositeIsToOne (class GGS_lstring & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ getter_getOppositeIsToMany (LOCATION_ARGS) const ;

  public: class GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ getter_getOppositeIsToOne (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKind_2E_toOne struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toOne : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_propertyAccessibility mProperty_accessibility ;
  public: inline GGS_propertyAccessibility readProperty_accessibility (void) const {
    return mProperty_accessibility ;
  }

  public: GGS_bool mProperty_graphic ;
  public: inline GGS_bool readProperty_graphic (void) const {
    return mProperty_graphic ;
  }

  public: GGS_toOneOppositeRelationship mProperty_opposite ;
  public: inline GGS_toOneOppositeRelationship readProperty_opposite (void) const {
    return mProperty_opposite ;
  }

  public: GGS_bool mProperty_isWeak ;
  public: inline GGS_bool readProperty_isWeak (void) const {
    return mProperty_isWeak ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toOne (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setAccessibility (const GGS_propertyAccessibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessibility = inValue ;
  }

  public: inline void setter_setGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_graphic = inValue ;
  }

  public: inline void setter_setOpposite (const GGS_toOneOppositeRelationship & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_opposite = inValue ;
  }

  public: inline void setter_setIsWeak (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isWeak = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKind_2E_toOne (const GGS_lstring & in_typeName,
                                     const GGS_propertyAccessibility & in_accessibility,
                                     const GGS_bool & in_graphic,
                                     const GGS_toOneOppositeRelationship & in_opposite,
                                     const GGS_bool & in_isWeak) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKind_2E_toOne (const GGS_propertyKind_2E_toOne & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKind_2E_toOne & operator = (const GGS_propertyKind_2E_toOne & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKind_2E_toOne init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_propertyAccessibility & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_toOneOppositeRelationship & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKind_2E_toOne extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKind.toOne? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKind_2E_toOne_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKind_2E_toOne mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKind_2E_toOne_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKind_2E_toOne_3F_ (const GGS_propertyKind_2E_toOne & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKind_2E_toOne_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKind_2E_toOne unwrappedValue (void) const {
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
  public: static GGS_propertyKind_2E_toOne_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_propertyKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_typeKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isTransient' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isTransient (const class GGS_propertyKind & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEntityType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEntityType (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind isEnumType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEnumType (const class GGS_propertyKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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
  public: GGS_externSwiftDelegateList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_externSwiftDelegateList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_externSwiftDelegateList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_externSwiftDelegateList add_operation (const GGS_externSwiftDelegateList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExternSwiftDelegateNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mExternSwiftDelegateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_externSwiftDelegateList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_externSwiftDelegateList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_externSwiftDelegateList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST final {
  public: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST & operator = (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST final {
  public: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mColumnParameterListAST (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST & operator = (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerBoundColumnListAST list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerBoundColumnListAST (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST &) = default ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListAST &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerBoundColumnListAST subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListAST class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                     const class GGS_lstring & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_bool & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                   const class GGS_lstring & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_bool constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                              class GGS_lstring constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_bool constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_astAutoLayoutViewInstructionParameterList constinArgument2,
                                     class GGS_lstring constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_bool & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                class GGS_lstring & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_bool & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                               class GGS_lstring & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_bool & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                                     class GGS_lstring & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMColumnParameterListASTAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMSortPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_bool & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                             class GGS_lstring & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_bool & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_astAutoLayoutViewInstructionParameterList & outArgument2,
                            class GGS_lstring & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_mColumnParameterListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
  friend class DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewInstructionParameterList final {
  public: DownEnumerator_astAutoLayoutViewInstructionParameterList (const class GGS_astAutoLayoutViewInstructionParameterList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutViewInstructionParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewInstructionParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewInstructionParameterList (const DownEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
  private: DownEnumerator_astAutoLayoutViewInstructionParameterList & operator = (const DownEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewInstructionParameterList final {
  public: UpEnumerator_astAutoLayoutViewInstructionParameterList (const class GGS_astAutoLayoutViewInstructionParameterList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutViewInstructionParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewInstructionParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewInstructionParameterList (const UpEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
  private: UpEnumerator_astAutoLayoutViewInstructionParameterList & operator = (const UpEnumerator_astAutoLayoutViewInstructionParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutViewInstructionParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutViewInstructionParameterList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList &) = default ;
  public: GGS_astAutoLayoutViewInstructionParameterList & operator = (const GGS_astAutoLayoutViewInstructionParameterList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutViewInstructionParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutViewInstructionParameterList subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutViewInstructionParameterList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_astAutoLayoutViewInstructionParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                               const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_autoLayoutClassParameterType & inOperand1,
                                   const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astAutoLayoutViewInstructionParameterList add_operation (const GGS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_autoLayoutClassParameterType constinArgument1,
                              class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_autoLayoutClassParameterType constinArgument1,
                                     class GGS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_autoLayoutClassParameterType & outArgument1,
                                class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_autoLayoutClassParameterType & outArgument1,
                               class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_autoLayoutClassParameterType & outArgument1,
                                     class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterAtIndex (class GGS_astAutoLayoutViewInstructionParameterValue constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_autoLayoutClassParameterType & outArgument1,
                             class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_autoLayoutClassParameterType & outArgument1,
                            class GGS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterValue getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewInstructionParameterList ;
  friend class DownEnumerator_astAutoLayoutViewInstructionParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mEditable ;
  public: inline GGS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GGS_lstring mProperty_mPropertyName ;
  public: inline GGS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mColumnParameterListAST ;
  public: inline GGS_astAutoLayoutViewInstructionParameterList readProperty_mColumnParameterListAST (void) const {
    return mProperty_mColumnParameterListAST ;
  }

  public: GGS_lstring mProperty_mSortPropertyName ;
  public: inline GGS_lstring readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMColumnParameterListAST (const GGS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnParameterListAST = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_bool & in_mEditable,
                                                                          const GGS_lstring & in_mPropertyName,
                                                                          const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                          const GGS_lstring & in_mSortPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractEntity (class GGS_lstring & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractEnumFunc (class GGS_lstring & outArgument0,
                                       class GGS_lstring & outArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractMenuItem (class GGS_string & outArgument0,
                                       class GGS_runActionDescriptor & outArgument1,
                                       class GGS_multipleBindingDescriptor & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractString (class GGS_string & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractViewFunc (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ getter_getEntity (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ getter_getEnumFunc (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ getter_getMenuItem (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ getter_getViewFunc (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEnumFunc (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isViewFunc (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractTypeEnum (class GGS_lstring & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ getter_getTypeEnum (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEntity (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMenuItem (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeBool (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeEnum (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeInt (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeString (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeStringArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTypeView (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterValue mProperty_mParameter ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

  public: inline void setter_setMParameter (const GGS_astAutoLayoutViewInstructionParameterValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                                    const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                    const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element & operator = (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                            const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerAttributListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerAttributListAST final {
  public: DownEnumerator_autoLayoutTableViewControllerAttributListAST (const class GGS_autoLayoutTableViewControllerAttributListAST & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerAttributListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerAttributListAST (const DownEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerAttributListAST & operator = (const DownEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerAttributListAST final {
  public: UpEnumerator_autoLayoutTableViewControllerAttributListAST (const class GGS_autoLayoutTableViewControllerAttributListAST & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerAttributListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerAttributListAST (const UpEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerAttributListAST & operator = (const UpEnumerator_autoLayoutTableViewControllerAttributListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerAttributListAST list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerAttributListAST (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST &) = default ;
  public: GGS_autoLayoutTableViewControllerAttributListAST & operator = (const GGS_autoLayoutTableViewControllerAttributListAST &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerAttributListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerAttributListAST subList (const int32_t inStart,
                                                                     const int32_t inLength,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerAttributListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutTableViewControllerAttributListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_abstractDefaultValue & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_abstractDefaultValue & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutTableViewControllerAttributListAST add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_abstractDefaultValue constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_abstractDefaultValue constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_abstractDefaultValue & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_abstractDefaultValue & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_abstractDefaultValue & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_abstractDefaultValue & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_abstractDefaultValue & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractDefaultValue getter_mAttributeValueAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerAttributListAST ;
  friend class DownEnumerator_autoLayoutTableViewControllerAttributListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDefaultValue : public AbstractStrongPtrClass {

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
// Phase 1: @autoLayoutTableViewControllerAttributListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_abstractDefaultValue mProperty_mAttributeValue ;
  public: inline GGS_abstractDefaultValue readProperty_mAttributeValue (void) const {
    return mProperty_mAttributeValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_lstring & in_mAttributeName,
                                                                       const GGS_abstractDefaultValue & in_mAttributeValue) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element & operator = (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerAttributListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_abstractDefaultValue & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerAttributListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDeclarationAST : public AbstractStrongPtrClass {

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @propertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_propertyGeneration : public AbstractStrongPtrClass {

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutTableViewControllerModelKind
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerModelKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_entityArray,
    enum_transientArray
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
  public: static GGS_autoLayoutTableViewControllerModelKind extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_entityArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractFileGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractFileGeneration : public AbstractStrongPtrClass {

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
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final {
  public: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final {
  public: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerBoundColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration &) = default ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration subList (const int32_t inStart,
                                                                                  const int32_t inLength,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_bool & in_mEditable,
                                                 const class GGS_string & in_mSortPropertyName,
                                                 const class GGS_string & in_mDisplayedPropertyName,
                                                 const class GGS_string & in_mColumnObjectTypeName,
                                                 const class GGS_string & in_mRunAction,
                                                 const class GGS__32_stringlist & in_mActualParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration init (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                               const class GGS_string & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_string & inOperand3,
                                                                                                               const class GGS_string & inOperand4,
                                                                                                               const class GGS__32_stringlist & inOperand5
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_bool & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3,
                                   const class GGS_string & inOperand4,
                                   const class GGS__32_stringlist & inOperand5
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_bool constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_string constinArgument3,
                              class GGS_string constinArgument4,
                              class GGS__32_stringlist constinArgument5,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_bool constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_string constinArgument4,
                                     class GGS__32_stringlist constinArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_bool & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_string & outArgument4,
                                class GGS__32_stringlist & outArgument5,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_bool & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_string & outArgument3,
                               class GGS_string & outArgument4,
                               class GGS__32_stringlist & outArgument5,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_bool & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_string & outArgument4,
                                     class GGS__32_stringlist & outArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMActualParameterListAtIndex (class GGS__32_stringlist constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMColumnObjectTypeNameAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMDisplayedPropertyNameAtIndex (class GGS_string constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMRunActionAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSortPropertyNameAtIndex (class GGS_string constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_bool & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_string & outArgument3,
                             class GGS_string & outArgument4,
                             class GGS__32_stringlist & outArgument5,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_bool & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_string & outArgument3,
                            class GGS_string & outArgument4,
                            class GGS__32_stringlist & outArgument5,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__32_stringlist getter_mActualParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mColumnObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mDisplayedPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mRunActionAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mEditable ;
  public: inline GGS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GGS_string mProperty_mSortPropertyName ;
  public: inline GGS_string readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

  public: GGS_string mProperty_mDisplayedPropertyName ;
  public: inline GGS_string readProperty_mDisplayedPropertyName (void) const {
    return mProperty_mDisplayedPropertyName ;
  }

  public: GGS_string mProperty_mColumnObjectTypeName ;
  public: inline GGS_string readProperty_mColumnObjectTypeName (void) const {
    return mProperty_mColumnObjectTypeName ;
  }

  public: GGS_string mProperty_mRunAction ;
  public: inline GGS_string readProperty_mRunAction (void) const {
    return mProperty_mRunAction ;
  }

  public: GGS__32_stringlist mProperty_mActualParameterList ;
  public: inline GGS__32_stringlist readProperty_mActualParameterList (void) const {
    return mProperty_mActualParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

  public: inline void setter_setMDisplayedPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayedPropertyName = inValue ;
  }

  public: inline void setter_setMColumnObjectTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnObjectTypeName = inValue ;
  }

  public: inline void setter_setMRunAction (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunAction = inValue ;
  }

  public: inline void setter_setMActualParameterList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_bool & in_mEditable,
                                                                                    const GGS_string & in_mSortPropertyName,
                                                                                    const GGS_string & in_mDisplayedPropertyName,
                                                                                    const GGS_string & in_mColumnObjectTypeName,
                                                                                    const GGS_string & in_mRunAction,
                                                                                    const GGS__32_stringlist & in_mActualParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                        const class GGS_string & inOperand1,
                                                                                                                        const class GGS_string & inOperand2,
                                                                                                                        const class GGS_string & inOperand3,
                                                                                                                        const class GGS_string & inOperand4,
                                                                                                                        const class GGS__32_stringlist & inOperand5,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final {
  public: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final {
  public: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerSortedColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration &) = default ;
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration subList (const int32_t inStart,
                                                                                   const int32_t inLength,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mColumnName,
                                                 const class GGS_propertyKind & in_mSortPropertyKind,
                                                 const class GGS_string & in_mObservablePropertyForSorting
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration init (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                                const class GGS_propertyKind & inOperand1,
                                                                                                                const class GGS_string & inOperand2
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_propertyKind & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_propertyKind constinArgument1,
                              class GGS_string constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_propertyKind constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_propertyKind & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_propertyKind & outArgument1,
                               class GGS_string & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_propertyKind & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMColumnNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMObservablePropertyForSortingAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMSortPropertyKindAtIndex (class GGS_propertyKind constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_propertyKind & outArgument1,
                             class GGS_string & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_propertyKind & outArgument1,
                            class GGS_string & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mColumnNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mObservablePropertyForSortingAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyKind getter_mSortPropertyKindAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mColumnName ;
  public: inline GGS_string readProperty_mColumnName (void) const {
    return mProperty_mColumnName ;
  }

  public: GGS_propertyKind mProperty_mSortPropertyKind ;
  public: inline GGS_propertyKind readProperty_mSortPropertyKind (void) const {
    return mProperty_mSortPropertyKind ;
  }

  public: GGS_string mProperty_mObservablePropertyForSorting ;
  public: inline GGS_string readProperty_mObservablePropertyForSorting (void) const {
    return mProperty_mObservablePropertyForSorting ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMColumnName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnName = inValue ;
  }

  public: inline void setter_setMSortPropertyKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyKind = inValue ;
  }

  public: inline void setter_setMObservablePropertyForSorting (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyForSorting = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_string & in_mColumnName,
                                                                                     const GGS_propertyKind & in_mSortPropertyKind,
                                                                                     const GGS_string & in_mObservablePropertyForSorting) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                                             const class GGS_propertyKind & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ;

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
  public: GGS_mainXibDescriptorList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_mainXibDescriptorList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_mainXibLineDescriptorList & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_mainXibDescriptorList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_mainXibDescriptorList add_operation (const GGS_mainXibDescriptorList & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_mainXibLineDescriptorList constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_mainXibLineDescriptorList constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_mainXibLineDescriptorList & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_mainXibLineDescriptorList & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_mainXibLineDescriptorList & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLineAtIndex (class GGS_mainXibLineDescriptorList constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_mainXibLineDescriptorList & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_mainXibLineDescriptorList & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_mainXibLineDescriptorList getter_mLineAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_mainXibDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: GGS_mainXibLineDescriptorList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_mainXibLineDescriptorList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_mainXibElement & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_mainXibLineDescriptorList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_mainXibLineDescriptorList add_operation (const GGS_mainXibLineDescriptorList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_mainXibElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_mainXibElement constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_mainXibElement & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_mainXibElement & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_mainXibElement & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMElementAtIndex (class GGS_mainXibElement constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_mainXibElement & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_mainXibElement & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_mainXibElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_mainXibLineDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibLineDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibLineDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractOutlet (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractText (class GGS_lstring & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_mainXibElement_2E_outlet_3F_ getter_getOutlet (LOCATION_ARGS) const ;

  public: class GGS_mainXibElement_2E_text_3F_ getter_getText (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibLineDescriptorList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibElement & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibLineDescriptorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibLineDescriptorList_2E_element & operator = (const GGS_mainXibLineDescriptorList_2E_element & inSource) ;

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

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibElement_2E_outlet struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_outlet : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_outletType ;
  public: inline GGS_lstring readProperty_outletType (void) const {
    return mProperty_outletType ;
  }

  public: GGS_lstring mProperty_outletName ;
  public: inline GGS_lstring readProperty_outletName (void) const {
    return mProperty_outletName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_outlet (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOutletType (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_outletType = inValue ;
  }

  public: inline void setter_setOutletName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_outletName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibElement_2E_outlet (const GGS_lstring & in_outletType,
                                        const GGS_lstring & in_outletName) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibElement_2E_outlet (const GGS_mainXibElement_2E_outlet & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibElement_2E_outlet & operator = (const GGS_mainXibElement_2E_outlet & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibElement_2E_outlet init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibElement_2E_outlet extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet ;

//--------------------------------------------------------------------------------------------------
// Phase 1: mainXibElement.outlet? optional
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_outlet_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_mainXibElement_2E_outlet mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_outlet_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_mainXibElement_2E_outlet_3F_ (const GGS_mainXibElement_2E_outlet & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_mainXibElement_2E_outlet_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_mainXibElement_2E_outlet unwrappedValue (void) const {
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
  public: static GGS_mainXibElement_2E_outlet_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibElement_2E_text struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_text : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_text ;
  public: inline GGS_lstring readProperty_text (void) const {
    return mProperty_text ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_text (void) ;

//--------------------------------- Property setters
  public: inline void setter_setText (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_text = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibElement_2E_text (const GGS_lstring & in_text) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibElement_2E_text (const GGS_mainXibElement_2E_text & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibElement_2E_text & operator = (const GGS_mainXibElement_2E_text & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibElement_2E_text init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibElement_2E_text extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text ;

//--------------------------------------------------------------------------------------------------
// Phase 1: mainXibElement.text? optional
//--------------------------------------------------------------------------------------------------

class GGS_mainXibElement_2E_text_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_mainXibElement_2E_text mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_mainXibElement_2E_text_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_mainXibElement_2E_text_3F_ (const GGS_mainXibElement_2E_text & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_mainXibElement_2E_text_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_mainXibElement_2E_text unwrappedValue (void) const {
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
  public: static GGS_mainXibElement_2E_text_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mainXibDescriptorList generateCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_generateCode (const class GGS_mainXibDescriptorList & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

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
// Phase 1: @validationStubRoutineListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_validationStubRoutineListForGeneration final {
  public: DownEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inList) ;

  public: ~ DownEnumerator_validationStubRoutineListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_validationStubRoutineListForGeneration (const DownEnumerator_validationStubRoutineListForGeneration &) = delete ;
  private: DownEnumerator_validationStubRoutineListForGeneration & operator = (const DownEnumerator_validationStubRoutineListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_validationStubRoutineListForGeneration final {
  public: UpEnumerator_validationStubRoutineListForGeneration (const class GGS_validationStubRoutineListForGeneration & inList)  ;

  public: ~ UpEnumerator_validationStubRoutineListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelName (LOCATION_ARGS) const ;
  public: class GGS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_validationStubRoutineListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_validationStubRoutineListForGeneration (const UpEnumerator_validationStubRoutineListForGeneration &) = delete ;
  private: UpEnumerator_validationStubRoutineListForGeneration & operator = (const UpEnumerator_validationStubRoutineListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @validationStubRoutineListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_validationStubRoutineListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_validationStubRoutineListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_validationStubRoutineListForGeneration (void) = default ;

//--- Copy
  public: GGS_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration &) = default ;
  public: GGS_validationStubRoutineListForGeneration & operator = (const GGS_validationStubRoutineListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_validationStubRoutineListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_validationStubRoutineListForGeneration subList (const int32_t inStart,
                                                               const int32_t inLength,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_validationStubRoutineListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mObjectTypeName,
                                                 const class GGS_string & in_mModelName,
                                                 const class GGS_string & in_mModelTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_validationStubRoutineListForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_validationStubRoutineListForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_validationStubRoutineListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                            const class GGS_string & inOperand1,
                                                                                            const class GGS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_validationStubRoutineListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_validationStubRoutineListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_validationStubRoutineListForGeneration add_operation (const GGS_validationStubRoutineListForGeneration & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelNameAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelTypeNameAtIndex (class GGS_string constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMObjectTypeNameAtIndex (class GGS_string constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mModelNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_validationStubRoutineListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_validationStubRoutineListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_validationStubRoutineListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_validationStubRoutineListForGeneration ;
  friend class DownEnumerator_validationStubRoutineListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @validationStubRoutineListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_validationStubRoutineListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mObjectTypeName ;
  public: inline GGS_string readProperty_mObjectTypeName (void) const {
    return mProperty_mObjectTypeName ;
  }

  public: GGS_string mProperty_mModelName ;
  public: inline GGS_string readProperty_mModelName (void) const {
    return mProperty_mModelName ;
  }

  public: GGS_string mProperty_mModelTypeName ;
  public: inline GGS_string readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObjectTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectTypeName = inValue ;
  }

  public: inline void setter_setMModelName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelName = inValue ;
  }

  public: inline void setter_setMModelTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (const GGS_string & in_mObjectTypeName,
                                                                 const GGS_string & in_mModelName,
                                                                 const GGS_string & in_mModelTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_validationStubRoutineListForGeneration_2E_element (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_validationStubRoutineListForGeneration_2E_element & operator = (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_validationStubRoutineListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_validationStubRoutineListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionAST_2E_hasDependance struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasDependance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_masterPropertyName ;
  public: inline GGS_lstring readProperty_masterPropertyName (void) const {
    return mProperty_masterPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMasterPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_lstring & in_masterPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance & operator = (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance init_21_ (const class GGS_lstring & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionAST.hasDependance? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionAST_2E_hasDependance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionAST_2E_hasDependance unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionAST_2E_hasOpposite struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasOpposite : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_oppositeName ;
  public: inline GGS_lstring readProperty_oppositeName (void) const {
    return mProperty_oppositeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_lstring & in_oppositeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite & operator = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite init_21_ (const class GGS_lstring & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionAST.hasOpposite? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionAST_2E_hasOpposite mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionAST_2E_hasOpposite unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyRelationshipAST class
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyRelationshipAST_2E_weak (const class GGS_toManyRelationshipAST & inSource) ;

  public: GGS_toManyRelationshipAST_2E_weak & operator = (const class GGS_toManyRelationshipAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyRelationshipAST_2E_weak init_nil (void) {
    GGS_toManyRelationshipAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyRelationshipAST bang_toManyRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyRelationshipAST unwrappedValue (void) const ;

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
  public: static GGS_toManyRelationshipAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyRelationshipAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum toManyRelationshipOptionGeneration
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasOpposite (class GGS_string & out_oppositeName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_hasDependance (class GGS_string & out_masterPropertyName,
                                                                      class GGS_string & out_masterPropertySwiftTypeName) const ;

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
  public: static GGS_toManyRelationshipOptionGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasDependance (const class GGS_string & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasOpposite (const class GGS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractHasDependance (class GGS_string & outArgument0,
                                            class GGS_string & outArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractHasOpposite (class GGS_string & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ getter_getHasDependance (LOCATION_ARGS) const ;

  public: class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ getter_getHasOpposite (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionGeneration_2E_hasDependance struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasDependance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_masterPropertyName ;
  public: inline GGS_string readProperty_masterPropertyName (void) const {
    return mProperty_masterPropertyName ;
  }

  public: GGS_string mProperty_masterPropertySwiftTypeName ;
  public: inline GGS_string readProperty_masterPropertySwiftTypeName (void) const {
    return mProperty_masterPropertySwiftTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMasterPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertyName = inValue ;
  }

  public: inline void setter_setMasterPropertySwiftTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_masterPropertySwiftTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_string & in_masterPropertyName,
                                                                   const GGS_string & in_masterPropertySwiftTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance & operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance init_21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionGeneration.hasDependance? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionGeneration_2E_hasDependance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionGeneration_2E_hasDependance unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyRelationshipOptionGeneration_2E_hasOpposite struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_oppositeName ;
  public: inline GGS_string readProperty_oppositeName (void) const {
    return mProperty_oppositeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (void) ;

//--------------------------------- Property setters
  public: inline void setter_setOppositeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_oppositeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_string & in_oppositeName) ;

//--------------------------------- Copy constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite init_21_ (const class GGS_string & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ;

//--------------------------------------------------------------------------------------------------
// Phase 1: toManyRelationshipOptionGeneration.hasOpposite? optional
//--------------------------------------------------------------------------------------------------

class GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_toManyRelationshipOptionGeneration_2E_hasOpposite unwrappedValue (void) const {
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
  public: static GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_toManyPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyPropertyGeneration (const class cPtr_toManyPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mGenerateDirectAccess (void) const ;

  public: class GGS_bool readProperty_mGenerateDirectRead (void) const ;

  public: class GGS_propertyKind readProperty_mRelationshipType (void) const ;

  public: class GGS_toManyRelationshipOptionGeneration readProperty_mOption (void) const ;

  public: class GGS_bool readProperty_mInPreferences (void) const ;

  public: class GGS_bool readProperty_mCustomStore (void) const ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_propertyKind & inOperand3,
                                                                                    const class GGS_toManyRelationshipOptionGeneration & inOperand4,
                                                                                    const class GGS_bool & inOperand5,
                                                                                    const class GGS_bool & inOperand6,
                                                                                    const class GGS_bool & inOperand7,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_toManyPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyPropertyGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_propertyKind & inOperand3,
                                                                              const class GGS_toManyRelationshipOptionGeneration & inOperand4,
                                                                              const class GGS_bool & inOperand5,
                                                                              const class GGS_bool & inOperand6,
                                                                              const class GGS_bool & inOperand7,
                                                                              Compiler * inCompiler) ;


//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_mGenerateDirectAccess ;
  public: GGS_bool mProperty_mGenerateDirectRead ;
  public: GGS_propertyKind mProperty_mRelationshipType ;
  public: GGS_toManyRelationshipOptionGeneration mProperty_mOption ;
  public: GGS_bool mProperty_mInPreferences ;
  public: GGS_bool mProperty_mCustomStore ;
  public: GGS_bool mProperty_mUsedForSignature ;


//--- Default constructor
  public: cPtr_toManyPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyPropertyGeneration (const GGS_string & in_mPropertyName,
                                         const GGS_bool & in_mGenerateDirectAccess,
                                         const GGS_bool & in_mGenerateDirectRead,
                                         const GGS_propertyKind & in_mRelationshipType,
                                         const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                         const GGS_bool & in_mInPreferences,
                                         const GGS_bool & in_mCustomStore,
                                         const GGS_bool & in_mUsedForSignature,
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
// Phase 1: @toManyPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyPropertyGeneration_2E_weak (const class GGS_toManyPropertyGeneration & inSource) ;

  public: GGS_toManyPropertyGeneration_2E_weak & operator = (const class GGS_toManyPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyPropertyGeneration_2E_weak init_nil (void) {
    GGS_toManyPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyPropertyGeneration bang_toManyPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_toManyPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyPropertyGenerationList final {
  public: DownEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inList) ;

  public: ~ DownEnumerator_toManyPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_toManyPropertyGenerationList (const DownEnumerator_toManyPropertyGenerationList &) = delete ;
  private: DownEnumerator_toManyPropertyGenerationList & operator = (const DownEnumerator_toManyPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyPropertyGenerationList final {
  public: UpEnumerator_toManyPropertyGenerationList (const class GGS_toManyPropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_toManyPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_toManyPropertyGenerationList (const UpEnumerator_toManyPropertyGenerationList &) = delete ;
  private: UpEnumerator_toManyPropertyGenerationList & operator = (const UpEnumerator_toManyPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @toManyPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_toManyPropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_toManyPropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_toManyPropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList &) = default ;
  public: GGS_toManyPropertyGenerationList & operator = (const GGS_toManyPropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_toManyPropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_toManyPropertyGenerationList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_toManyPropertyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_toManyPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGenerationList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyPropertyGenerationList class_func_listWithValue (const class GGS_toManyPropertyGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_toManyPropertyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_toManyPropertyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_toManyPropertyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_toManyPropertyGenerationList add_operation (const GGS_toManyPropertyGenerationList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_toManyPropertyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_toManyPropertyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_toManyPropertyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_toManyPropertyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_toManyPropertyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_toManyPropertyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_toManyPropertyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_toManyPropertyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_toManyPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_toManyPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_toManyPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_toManyPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toManyPropertyGenerationList ;
  friend class DownEnumerator_toManyPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_toManyPropertyGeneration mProperty_mProperty ;
  public: inline GGS_toManyPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_toManyPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyPropertyGenerationList_2E_element & operator = (const GGS_toManyPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyPropertyGenerationList_2E_element init_21_ (const class GGS_toManyPropertyGeneration & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ;

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
  public: GGS_outletDeclarationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_outletDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_tableValueBinding & inOperand2,
                                   const class GGS_runActionDescriptor & inOperand3,
                                   const class GGS_multipleBindingDescriptor & inOperand4,
                                   const class GGS_multipleBindingDescriptor & inOperand5,
                                   const class GGS_regularBindingList & inOperand6,
                                   const class GGS_graphicController & inOperand7
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_outletDeclarationList add_operation (const GGS_outletDeclarationList & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_tableValueBinding constinArgument2,
                              class GGS_runActionDescriptor constinArgument3,
                              class GGS_multipleBindingDescriptor constinArgument4,
                              class GGS_multipleBindingDescriptor constinArgument5,
                              class GGS_regularBindingList constinArgument6,
                              class GGS_graphicController constinArgument7,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
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

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_tableValueBinding & outArgument2,
                                class GGS_runActionDescriptor & outArgument3,
                                class GGS_multipleBindingDescriptor & outArgument4,
                                class GGS_multipleBindingDescriptor & outArgument5,
                                class GGS_regularBindingList & outArgument6,
                                class GGS_graphicController & outArgument7,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_tableValueBinding & outArgument2,
                               class GGS_runActionDescriptor & outArgument3,
                               class GGS_multipleBindingDescriptor & outArgument4,
                               class GGS_multipleBindingDescriptor & outArgument5,
                               class GGS_regularBindingList & outArgument6,
                               class GGS_graphicController & outArgument7,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
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

  public: void setter_setMEnabledBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMGraphicControllerAtIndex (class GGS_graphicController constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMHiddenBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegularBindingListAtIndex (class GGS_regularBindingList constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMRunDescriptorAtIndex (class GGS_runActionDescriptor constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMTableValueBindingDescriptorAtIndex (class GGS_tableValueBinding constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_tableValueBinding & outArgument2,
                             class GGS_runActionDescriptor & outArgument3,
                             class GGS_multipleBindingDescriptor & outArgument4,
                             class GGS_multipleBindingDescriptor & outArgument5,
                             class GGS_regularBindingList & outArgument6,
                             class GGS_graphicController & outArgument7,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
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
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_multipleBindingDescriptor getter_mEnabledBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_graphicController getter_mGraphicControllerAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_multipleBindingDescriptor getter_mHiddenBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBindingList getter_mRegularBindingListAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_runActionDescriptor getter_mRunDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_tableValueBinding getter_mTableValueBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_outletDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractDefined (class GGS_lstring & outArgument0,
                                      class GGS_lstring & outArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_graphicController_2E_defined_3F_ getter_getDefined (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDefined (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_multipleBindingDescriptor_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractAction (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_runActionDescriptor_2E_action_3F_ getter_getAction (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAction (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoAction (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractTableValueBinding (class GGS_lstring & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_tableValueBinding_2E_tableValueBinding_3F_ getter_getTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTableValueBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding ;

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
  public: GGS_regularBindingList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_regularBindingList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_observablePropertyList & inOperand1,
                                   const class GGS_bindingOptionList & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_regularBindingList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_regularBindingList add_operation (const GGS_regularBindingList & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_observablePropertyList constinArgument1,
                              class GGS_bindingOptionList constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_observablePropertyList constinArgument1,
                                     class GGS_bindingOptionList constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_observablePropertyList & outArgument1,
                                class GGS_bindingOptionList & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_observablePropertyList & outArgument1,
                               class GGS_bindingOptionList & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_observablePropertyList & outArgument1,
                                     class GGS_bindingOptionList & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingOptionListAtIndex (class GGS_bindingOptionList constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMObservablePropertyListAtIndex (class GGS_observablePropertyList constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_observablePropertyList & outArgument1,
                             class GGS_bindingOptionList & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_observablePropertyList & outArgument1,
                            class GGS_bindingOptionList & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_observablePropertyList getter_mObservablePropertyListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_regularBindingList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBindingList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBindingList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_regularBindingList ;
  friend class DownEnumerator_regularBindingList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerBindingListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_arrayControllerBindingListAST final {
  public: DownEnumerator_arrayControllerBindingListAST (const class GGS_arrayControllerBindingListAST & inList) ;

  public: ~ DownEnumerator_arrayControllerBindingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arrayControllerBindingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_arrayControllerBindingListAST (const DownEnumerator_arrayControllerBindingListAST &) = delete ;
  private: DownEnumerator_arrayControllerBindingListAST & operator = (const DownEnumerator_arrayControllerBindingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_arrayControllerBindingListAST final {
  public: UpEnumerator_arrayControllerBindingListAST (const class GGS_arrayControllerBindingListAST & inList)  ;

  public: ~ UpEnumerator_arrayControllerBindingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arrayControllerBindingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_arrayControllerBindingListAST (const UpEnumerator_arrayControllerBindingListAST &) = delete ;
  private: UpEnumerator_arrayControllerBindingListAST & operator = (const UpEnumerator_arrayControllerBindingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @arrayControllerBindingListAST list
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_arrayControllerBindingListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_arrayControllerBindingListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_arrayControllerBindingListAST (void) = default ;

//--- Copy
  public: GGS_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST &) = default ;
  public: GGS_arrayControllerBindingListAST & operator = (const GGS_arrayControllerBindingListAST &) = default ;

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
  public : inline GenericArray <GGS_arrayControllerBindingListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_arrayControllerBindingListAST subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_arrayControllerBindingListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_arrayControllerBindingListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_multipleBindingDescriptor & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_arrayControllerBindingListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_multipleBindingDescriptor & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_arrayControllerBindingListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_arrayControllerBindingListAST add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_multipleBindingDescriptor constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_multipleBindingDescriptor constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_multipleBindingDescriptor & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_multipleBindingDescriptor & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_multipleBindingDescriptor & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMControllerNameAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMHiddenSelectionViewBindingDescriptorAtIndex (class GGS_multipleBindingDescriptor constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_multipleBindingDescriptor & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_multipleBindingDescriptor & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mControllerNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_multipleBindingDescriptor getter_mHiddenSelectionViewBindingDescriptorAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_arrayControllerBindingListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_arrayControllerBindingListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_arrayControllerBindingListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_arrayControllerBindingListAST ;
  friend class DownEnumerator_arrayControllerBindingListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;

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

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ;

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
  public: GGS_astViewDeclarationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_astViewDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_astAbstractViewDeclaration & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astViewDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astViewDeclarationList add_operation (const GGS_astViewDeclarationList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_astAbstractViewDeclaration constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_astAbstractViewDeclaration constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_astAbstractViewDeclaration & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_astAbstractViewDeclaration & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_astAbstractViewDeclaration & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMViewAtIndex (class GGS_astAbstractViewDeclaration constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMViewNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_astAbstractViewDeclaration & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_astAbstractViewDeclaration & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAbstractViewDeclaration getter_mViewAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewDeclaration : public AbstractStrongPtrClass {

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutOutletLinkerList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutOutletLinkerList final {
  public: DownEnumerator_astAutoLayoutOutletLinkerList (const class GGS_astAutoLayoutOutletLinkerList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutOutletLinkerList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutOutletLinkerList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutOutletLinkerList (const DownEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
  private: DownEnumerator_astAutoLayoutOutletLinkerList & operator = (const DownEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutOutletLinkerList final {
  public: UpEnumerator_astAutoLayoutOutletLinkerList (const class GGS_astAutoLayoutOutletLinkerList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutOutletLinkerList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mOutletNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutOutletLinkerList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutOutletLinkerList (const UpEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
  private: UpEnumerator_astAutoLayoutOutletLinkerList & operator = (const UpEnumerator_astAutoLayoutOutletLinkerList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutOutletLinkerList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinkerList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutOutletLinkerList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutOutletLinkerList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList &) = default ;
  public: GGS_astAutoLayoutOutletLinkerList & operator = (const GGS_astAutoLayoutOutletLinkerList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutOutletLinkerList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutOutletLinkerList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutOutletLinkerList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_astAutoLayoutOutletLinkerList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstringlist & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astAutoLayoutOutletLinkerList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstringlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astAutoLayoutOutletLinkerList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astAutoLayoutOutletLinkerList add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLinkerNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletNameListAtIndex (class GGS_lstringlist constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mOutletNameListAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutOutletLinkerList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutOutletLinkerList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutOutletLinkerList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutOutletLinkerList ;
  friend class DownEnumerator_astAutoLayoutOutletLinkerList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;

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

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentDeclarationAST_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentDeclarationAST bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDocumentDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutOutletLinkerGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutOutletLinkerGenerationList final {
  public: DownEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutOutletLinkerGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutOutletLinkerGenerationList (const DownEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutOutletLinkerGenerationList & operator = (const DownEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutOutletLinkerGenerationList final {
  public: UpEnumerator_autoLayoutOutletLinkerGenerationList (const class GGS_autoLayoutOutletLinkerGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutOutletLinkerGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mLinkerName (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mOutletNameAndTypeNameList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutOutletLinkerGenerationList (const UpEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutOutletLinkerGenerationList & operator = (const UpEnumerator_autoLayoutOutletLinkerGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutOutletLinkerGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutOutletLinkerGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutOutletLinkerGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList &) = default ;
  public: GGS_autoLayoutOutletLinkerGenerationList & operator = (const GGS_autoLayoutOutletLinkerGenerationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutOutletLinkerGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutOutletLinkerGenerationList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutOutletLinkerGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutOutletLinkerGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS__32_stringlist & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS__32_stringlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutOutletLinkerGenerationList add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS__32_stringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS__32_stringlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS__32_stringlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS__32_stringlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS__32_stringlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLinkerNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletNameAndTypeNameListAtIndex (class GGS__32_stringlist constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS__32_stringlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS__32_stringlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mLinkerNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_stringlist getter_mOutletNameAndTypeNameListAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutOutletLinkerGenerationList ;
  friend class DownEnumerator_autoLayoutOutletLinkerGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;

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

//--------------------------------- Implementation of getter 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ;

