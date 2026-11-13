#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


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
    enum_canariAngleType,
    enum_canariLengthType,
    enum_canariLengthUnitType,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind class_func_bezierPathArrayType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_bezierPathType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_boolType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_canariAngleType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_canariLengthType (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_canariLengthUnitType (LOCATION_ARGS) ;

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

//--------------------------------- Implementation of func 'description'
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

  public: class GGS_bool getter_isCanariAngleType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCanariLengthType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCanariLengthUnitType (LOCATION_ARGS) const ;

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
//--------------------------------- Implementation of func 'description'
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
//--------------------------------- Implementation of func 'description'
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
//--------------------------------- Implementation of func 'description'
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
//--------------------------------- Implementation of func 'description'
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
//Extension func '@typeKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_typeKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@typeKind isGraphic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isGraphic (const class GGS_typeKind & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Implementation of func 'description'
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
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyAccessibility class_func_computed (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_stored (LOCATION_ARGS) ;

  public: static class GGS_propertyAccessibility class_func_transient (const class GGS_bool & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionAST class_func_hasDependance (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_hasOpposite (const class GGS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionAST class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
//--------------------------------- GALGAS class functions
  public: static class GGS_toOneOppositeRelationship class_func_none (LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToMany (const class GGS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_toOneOppositeRelationship class_func_oppositeIsToOne (const class GGS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
//Extension func '@propertyKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_propertyKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@typeKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_typeKind & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@propertyKind isTransient' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isTransient (const class GGS_propertyKind & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@propertyKind isComparable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isComparable (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@propertyKind isEntityType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEntityType (const class GGS_propertyKind & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@propertyKind isEnumType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEnumType (const class GGS_propertyKind & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Implementation of func 'description'
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

//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ;

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


//--- Extension proc analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS__5B_typeKind_5D_ arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GGS_lstring arg__inNode,
           class GGS_declarationPrecedenceGraph & arg__ioGraph,
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
// Phase 1: [autoLayoutTableViewControllerBoundColumnAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (const class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (const DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & operator = (const DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnAST current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerBoundColumnAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerBoundColumnAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (const class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (const UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & operator = (const UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnAST current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerBoundColumnAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerBoundColumnAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ (const GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inSource) ;
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & operator = (const GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ init (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ add_operation (const GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutTableViewControllerBoundColumnAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutTableViewControllerBoundColumnAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutTableViewControllerBoundColumnAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutTableViewControllerBoundColumnAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutTableViewControllerBoundColumnAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutTableViewControllerBoundColumnAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnAST getter_first (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnAST getter_last (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                        const class GGS_uint & constinOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutTableViewControllerBoundColumnAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ ;
  friend class DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnAST struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnAST : public AC_GALGAS_root {
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
  public: GGS_autoLayoutTableViewControllerBoundColumnAST (void) ;

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
  public: GGS_autoLayoutTableViewControllerBoundColumnAST (const GGS_bool & in_mEditable,
                                                           const GGS_lstring & in_mPropertyName,
                                                           const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                           const GGS_lstring & in_mSortPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnAST (const GGS_autoLayoutTableViewControllerBoundColumnAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnAST & operator = (const GGS_autoLayoutTableViewControllerBoundColumnAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnAST init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutTableViewControllerAttributeAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ (const class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ (const DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ & operator = (const DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerAttributeAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ (const class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ (const UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ & operator = (const UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerAttributeAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerAttributeAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ (const GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inSource) ;
  public: GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & operator = (const GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ init (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerAttributeAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ add_operation (const GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutTableViewControllerAttributeAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutTableViewControllerAttributeAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutTableViewControllerAttributeAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutTableViewControllerAttributeAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutTableViewControllerAttributeAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutTableViewControllerAttributeAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerAttributeAST getter_first (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerAttributeAST getter_last (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                      const class GGS_uint & constinOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutTableViewControllerAttributeAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ ;
  friend class DownEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutTableViewControllerAttributeAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerAttributeAST struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerAttributeAST : public AC_GALGAS_root {
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
  public: GGS_autoLayoutTableViewControllerAttributeAST (void) ;

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
  public: GGS_autoLayoutTableViewControllerAttributeAST (const GGS_lstring & in_mAttributeName,
                                                         const GGS_abstractDefaultValue & in_mAttributeValue) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerAttributeAST (const GGS_autoLayoutTableViewControllerAttributeAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerAttributeAST & operator = (const GGS_autoLayoutTableViewControllerAttributeAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerAttributeAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_abstractDefaultValue & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributeAST ;

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


//--- Extension func nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg__ioSemanticContext,
           class GGS_generationStruct & arg__ioGeneration,
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
// Phase 1: [arrayControllerBindingAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_arrayControllerBindingAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_arrayControllerBindingAST_5D_ (const class GGS__5B_arrayControllerBindingAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_arrayControllerBindingAST_5D_ (const DownEnumerator__5B_arrayControllerBindingAST_5D_ &) = delete ;
  private: DownEnumerator__5B_arrayControllerBindingAST_5D_ & operator = (const DownEnumerator__5B_arrayControllerBindingAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_arrayControllerBindingAST current (LOCATION_ARGS) const ;
  public: class GGS_arrayControllerBindingAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_arrayControllerBindingAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_arrayControllerBindingAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_arrayControllerBindingAST_5D_ (const class GGS__5B_arrayControllerBindingAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_arrayControllerBindingAST_5D_ (const UpEnumerator__5B_arrayControllerBindingAST_5D_ &) = delete ;
  private: UpEnumerator__5B_arrayControllerBindingAST_5D_ & operator = (const UpEnumerator__5B_arrayControllerBindingAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_arrayControllerBindingAST current (LOCATION_ARGS) const ;
  public: class GGS_arrayControllerBindingAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_arrayControllerBindingAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_arrayControllerBindingAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_arrayControllerBindingAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_arrayControllerBindingAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_arrayControllerBindingAST_5D_ (const GGS__5B_arrayControllerBindingAST_5D_ & inSource) ;
  public: GGS__5B_arrayControllerBindingAST_5D_ & operator = (const GGS__5B_arrayControllerBindingAST_5D_ & inSource) ;

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
  public: static GGS__5B_arrayControllerBindingAST_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_arrayControllerBindingAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_arrayControllerBindingAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_arrayControllerBindingAST_5D_ add_operation (const GGS__5B_arrayControllerBindingAST_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_arrayControllerBindingAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_arrayControllerBindingAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_arrayControllerBindingAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_arrayControllerBindingAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_arrayControllerBindingAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_arrayControllerBindingAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_arrayControllerBindingAST getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_arrayControllerBindingAST getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_arrayControllerBindingAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_arrayControllerBindingAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_arrayControllerBindingAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_arrayControllerBindingAST_5D_ ;
  friend class DownEnumerator__5B_arrayControllerBindingAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_arrayControllerBindingAST_5D_ ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingDescriptor class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_multipleBindingDescriptor class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
// Phase 1: @arrayControllerBindingAST struct
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBindingAST : public AC_GALGAS_root {
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
  public: GGS_arrayControllerBindingAST (void) ;

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
  public: GGS_arrayControllerBindingAST (const GGS_lstring & in_mControllerName,
                                         const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor) ;

//--------------------------------- Copy constructor
  public: GGS_arrayControllerBindingAST (const GGS_arrayControllerBindingAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_arrayControllerBindingAST & operator = (const GGS_arrayControllerBindingAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerBindingAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_multipleBindingDescriptor & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [typeKind] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_typeKind_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_typeKind_5D_ (const class GGS__5B_typeKind_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_typeKind_5D_ (const DownEnumerator__5B_typeKind_5D_ &) = delete ;
  private: DownEnumerator__5B_typeKind_5D_ & operator = (const DownEnumerator__5B_typeKind_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typeKind current (LOCATION_ARGS) const ;
  public: class GGS_typeKind current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_typeKind> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_typeKind_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_typeKind_5D_ (const class GGS__5B_typeKind_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_typeKind_5D_ (const UpEnumerator__5B_typeKind_5D_ &) = delete ;
  private: UpEnumerator__5B_typeKind_5D_ & operator = (const UpEnumerator__5B_typeKind_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typeKind current (LOCATION_ARGS) const ;
  public: class GGS_typeKind current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_typeKind> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_typeKind_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_typeKind> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_typeKind_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_typeKind_5D_ (const GGS__5B_typeKind_5D_ & inSource) ;
  public: GGS__5B_typeKind_5D_ & operator = (const GGS__5B_typeKind_5D_ & inSource) ;

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
  public: static GGS__5B_typeKind_5D_ init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_typeKind_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_typeKind & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_typeKind_5D_ add_operation (const GGS__5B_typeKind_5D_ & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typeKind constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_typeKind constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_typeKind & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_typeKind & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_typeKind & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_typeKind constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_typeKind getter_first (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeKind getter_last (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typeKind_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typeKind_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                     const class GGS_uint & constinOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_typeKind readSubscript__3F_ (const class GGS_uint & in0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_typeKind_5D_ ;
  friend class DownEnumerator__5B_typeKind_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_typeKind_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [2string] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__32_string_5D_ final {
//--- Constructor
  public: DownEnumerator__5B__32_string_5D_ (const class GGS__5B__32_string_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__32_string_5D_ (const DownEnumerator__5B__32_string_5D_ &) = delete ;
  private: DownEnumerator__5B__32_string_5D_ & operator = (const DownEnumerator__5B__32_string_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_string current (LOCATION_ARGS) const ;
  public: class GGS__32_string current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__32_string> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__32_string_5D_ final {
//--- Constructor
  public: UpEnumerator__5B__32_string_5D_ (const class GGS__5B__32_string_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__32_string_5D_ (const UpEnumerator__5B__32_string_5D_ &) = delete ;
  private: UpEnumerator__5B__32_string_5D_ & operator = (const UpEnumerator__5B__32_string_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_string current (LOCATION_ARGS) const ;
  public: class GGS__32_string current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__32_string> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__32_string_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__32_string> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__32_string_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__32_string_5D_ (const GGS__5B__32_string_5D_ & inSource) ;
  public: GGS__5B__32_string_5D_ & operator = (const GGS__5B__32_string_5D_ & inSource) ;

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
  public: static GGS__5B__32_string_5D_ init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B__32_string_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS__32_string & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__32_string_5D_ add_operation (const GGS__5B__32_string_5D_ & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__32_string constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__32_string constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__32_string & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__32_string & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__32_string & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS__32_string constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__32_string getter_first (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_string getter_last (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_string_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_string_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                       const class GGS_uint & constinOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS__32_string readSubscript__3F_ (const class GGS_uint & in0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__32_string_5D_ ;
  friend class DownEnumerator__5B__32_string_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__32_string_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_string struct
//--------------------------------------------------------------------------------------------------

class GGS__32_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mValue_30_ ;
  public: inline GGS_string readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_string mProperty_mValue_31_ ;
  public: inline GGS_string readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_string (const GGS_string & in_mValue_30_,
                          const GGS_string & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_string (const GGS__32_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_string & operator = (const GGS__32_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_string init_21__21_ (const class GGS_string & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutTableViewControllerBoundColumnForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (const class GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (const DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & operator = (const DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerBoundColumnForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (const class GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (const UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & operator = (const UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerBoundColumnForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ (const GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & inSource) ;
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & operator = (const GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ init (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ add_operation (const GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutTableViewControllerBoundColumnForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration getter_first (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration getter_last (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                                  const class GGS_uint & constinOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutTableViewControllerBoundColumnForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ ;
  friend class DownEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnForGeneration : public AC_GALGAS_root {
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

  public: GGS__5B__32_string_5D_ mProperty_mActualParameterList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mActualParameterList (void) const {
    return mProperty_mActualParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnForGeneration (void) ;

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

  public: inline void setter_setMActualParameterList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnForGeneration (const GGS_bool & in_mEditable,
                                                                     const GGS_string & in_mSortPropertyName,
                                                                     const GGS_string & in_mDisplayedPropertyName,
                                                                     const GGS_string & in_mColumnObjectTypeName,
                                                                     const GGS_string & in_mRunAction,
                                                                     const GGS__5B__32_string_5D_ & in_mActualParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnForGeneration & operator = (const GGS_autoLayoutTableViewControllerBoundColumnForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnForGeneration init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                         const class GGS_string & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_string & inOperand3,
                                                                                                         const class GGS_string & inOperand4,
                                                                                                         const class GGS__5B__32_string_5D_ & inOperand5,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutTableViewControllerSortedColumnForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (const class GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (const DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & operator = (const DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerSortedColumnForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (const class GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (const UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & operator = (const UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutTableViewControllerSortedColumnForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ (const GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & inSource) ;
  public: GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & operator = (const GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ init (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ add_operation (const GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutTableViewControllerSortedColumnForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration getter_first (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration getter_last (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                                   const class GGS_uint & constinOperand1,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutTableViewControllerSortedColumnForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ ;
  friend class DownEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnForGeneration : public AC_GALGAS_root {
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
  public: GGS_autoLayoutTableViewControllerSortedColumnForGeneration (void) ;

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
  public: GGS_autoLayoutTableViewControllerSortedColumnForGeneration (const GGS_string & in_mColumnName,
                                                                      const GGS_propertyKind & in_mSortPropertyKind,
                                                                      const GGS_string & in_mObservablePropertyForSorting) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerSortedColumnForGeneration & operator = (const GGS_autoLayoutTableViewControllerSortedColumnForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnForGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_propertyKind & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutClassParameter] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutClassParameter_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutClassParameter_5D_ (const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutClassParameter_5D_ (const DownEnumerator__5B_autoLayoutClassParameter_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutClassParameter_5D_ & operator = (const DownEnumerator__5B_autoLayoutClassParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutClassParameter current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameter current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutClassParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutClassParameter_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutClassParameter_5D_ (const class GGS__5B_autoLayoutClassParameter_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutClassParameter_5D_ (const UpEnumerator__5B_autoLayoutClassParameter_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutClassParameter_5D_ & operator = (const UpEnumerator__5B_autoLayoutClassParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutClassParameter current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameter current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutClassParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutClassParameter_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutClassParameter> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutClassParameter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutClassParameter_5D_ (const GGS__5B_autoLayoutClassParameter_5D_ & inSource) ;
  public: GGS__5B_autoLayoutClassParameter_5D_ & operator = (const GGS__5B_autoLayoutClassParameter_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutClassParameter_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutClassParameter_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutClassParameter & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutClassParameter_5D_ add_operation (const GGS__5B_autoLayoutClassParameter_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutClassParameter constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutClassParameter constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutClassParameter & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutClassParameter & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutClassParameter & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutClassParameter constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameter getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameter getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutClassParameter_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                     const class GGS_uint & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutClassParameter readSubscript__3F_ (const class GGS_uint & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutClassParameter_5D_ ;
  friend class DownEnumerator__5B_autoLayoutClassParameter_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutClassParameter_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameter struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameter : public AC_GALGAS_root {
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
  public: GGS_autoLayoutClassParameter (void) ;

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
  public: GGS_autoLayoutClassParameter (const GGS_lstring & in_mParameterName,
                                        const GGS_autoLayoutClassParameterType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameter (const GGS_autoLayoutClassParameter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameter & operator = (const GGS_autoLayoutClassParameter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameter init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_autoLayoutClassParameterType & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameter ;

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


//--- Extension func bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func propertyDeclarationCode
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
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_entityArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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


//--- Extension proc generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc generateCodePhase2
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
// Phase 1: [mainXibElement] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_mainXibElement_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_mainXibElement_5D_ (const class GGS__5B_mainXibElement_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_mainXibElement_5D_ (const DownEnumerator__5B_mainXibElement_5D_ &) = delete ;
  private: DownEnumerator__5B_mainXibElement_5D_ & operator = (const DownEnumerator__5B_mainXibElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_mainXibElement current (LOCATION_ARGS) const ;
  public: class GGS_mainXibElement current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_mainXibElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_mainXibElement_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_mainXibElement_5D_ (const class GGS__5B_mainXibElement_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_mainXibElement_5D_ (const UpEnumerator__5B_mainXibElement_5D_ &) = delete ;
  private: UpEnumerator__5B_mainXibElement_5D_ & operator = (const UpEnumerator__5B_mainXibElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_mainXibElement current (LOCATION_ARGS) const ;
  public: class GGS_mainXibElement current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_mainXibElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_mainXibElement_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_mainXibElement> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_mainXibElement_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_mainXibElement_5D_ (const GGS__5B_mainXibElement_5D_ & inSource) ;
  public: GGS__5B_mainXibElement_5D_ & operator = (const GGS__5B_mainXibElement_5D_ & inSource) ;

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
  public: static GGS__5B_mainXibElement_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_mainXibElement_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_mainXibElement & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_mainXibElement_5D_ add_operation (const GGS__5B_mainXibElement_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_mainXibElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_mainXibElement constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_mainXibElement & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_mainXibElement & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_mainXibElement & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_mainXibElement constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_mainXibElement getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibElement getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_mainXibElement_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_mainXibElement_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                           const class GGS_uint & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_mainXibElement readSubscript__3F_ (const class GGS_uint & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_mainXibElement_5D_ ;
  friend class DownEnumerator__5B_mainXibElement_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_mainXibElement_5D_ ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibElement class_func_outlet (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_mainXibElement class_func_text (const class GGS_lstring & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
// Phase 1: @mainXibDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_mainXibElement_5D_ mProperty_mLine ;
  public: inline GGS__5B_mainXibElement_5D_ readProperty_mLine (void) const {
    return mProperty_mLine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLine (const GGS__5B_mainXibElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLine = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibDescriptor (const GGS__5B_mainXibElement_5D_ & in_mLine) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibDescriptor (const GGS_mainXibDescriptor & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibDescriptor & operator = (const GGS_mainXibDescriptor & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibDescriptor init_21_ (const class GGS__5B_mainXibElement_5D_ & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptor ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [mainXibDescriptor] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_mainXibDescriptor_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_mainXibDescriptor_5D_ (const class GGS__5B_mainXibDescriptor_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_mainXibDescriptor_5D_ (const DownEnumerator__5B_mainXibDescriptor_5D_ &) = delete ;
  private: DownEnumerator__5B_mainXibDescriptor_5D_ & operator = (const DownEnumerator__5B_mainXibDescriptor_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_mainXibDescriptor current (LOCATION_ARGS) const ;
  public: class GGS_mainXibDescriptor current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_mainXibDescriptor> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_mainXibDescriptor_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_mainXibDescriptor_5D_ (const class GGS__5B_mainXibDescriptor_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_mainXibDescriptor_5D_ (const UpEnumerator__5B_mainXibDescriptor_5D_ &) = delete ;
  private: UpEnumerator__5B_mainXibDescriptor_5D_ & operator = (const UpEnumerator__5B_mainXibDescriptor_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_mainXibDescriptor current (LOCATION_ARGS) const ;
  public: class GGS_mainXibDescriptor current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_mainXibDescriptor> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_mainXibDescriptor_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_mainXibDescriptor> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_mainXibDescriptor_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_mainXibDescriptor_5D_ (const GGS__5B_mainXibDescriptor_5D_ & inSource) ;
  public: GGS__5B_mainXibDescriptor_5D_ & operator = (const GGS__5B_mainXibDescriptor_5D_ & inSource) ;

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
  public: static GGS__5B_mainXibDescriptor_5D_ init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_mainXibDescriptor_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_mainXibDescriptor & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_mainXibDescriptor_5D_ add_operation (const GGS__5B_mainXibDescriptor_5D_ & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_mainXibDescriptor constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_mainXibDescriptor constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_mainXibDescriptor & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_mainXibDescriptor & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_mainXibDescriptor & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_mainXibDescriptor constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_mainXibDescriptor getter_first (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_mainXibDescriptor getter_last (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_mainXibDescriptor_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_mainXibDescriptor_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                              const class GGS_uint & constinOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_mainXibDescriptor readSubscript__3F_ (const class GGS_uint & in0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_mainXibDescriptor_5D_ ;
  friend class DownEnumerator__5B_mainXibDescriptor_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_mainXibDescriptor_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[mainXibDescriptor] generateCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_generateCode (const class GGS__5B_mainXibDescriptor_5D_ & inObject,
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
  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static proc
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
//--------------------------------- GALGAS class functions
  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasDependance (const class GGS_string & inOperand0,
                                                                                        const class GGS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_hasOpposite (const class GGS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_toManyRelationshipOptionGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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


//--- Extension func configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
// Phase 1: [outletDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_outletDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_outletDeclarationAST_5D_ (const class GGS__5B_outletDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_outletDeclarationAST_5D_ (const DownEnumerator__5B_outletDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_outletDeclarationAST_5D_ & operator = (const DownEnumerator__5B_outletDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_outletDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_outletDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_outletDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_outletDeclarationAST_5D_ (const class GGS__5B_outletDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_outletDeclarationAST_5D_ (const UpEnumerator__5B_outletDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_outletDeclarationAST_5D_ & operator = (const UpEnumerator__5B_outletDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_outletDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_outletDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_outletDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_outletDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_outletDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_outletDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_outletDeclarationAST_5D_ (const GGS__5B_outletDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_outletDeclarationAST_5D_ & operator = (const GGS__5B_outletDeclarationAST_5D_ & inSource) ;

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
  public: static GGS__5B_outletDeclarationAST_5D_ init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_outletDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_outletDeclarationAST_5D_ add_operation (const GGS__5B_outletDeclarationAST_5D_ & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_outletDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_outletDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_outletDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_outletDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_outletDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_outletDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_outletDeclarationAST getter_first (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletDeclarationAST getter_last (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_outletDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                 const class GGS_uint & constinOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_outletDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_outletDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [regularBinding] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_regularBinding_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_regularBinding_5D_ (const class GGS__5B_regularBinding_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_regularBinding_5D_ (const DownEnumerator__5B_regularBinding_5D_ &) = delete ;
  private: DownEnumerator__5B_regularBinding_5D_ & operator = (const DownEnumerator__5B_regularBinding_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_regularBinding current (LOCATION_ARGS) const ;
  public: class GGS_regularBinding current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_regularBinding> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_regularBinding_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_regularBinding_5D_ (const class GGS__5B_regularBinding_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_regularBinding_5D_ (const UpEnumerator__5B_regularBinding_5D_ &) = delete ;
  private: UpEnumerator__5B_regularBinding_5D_ & operator = (const UpEnumerator__5B_regularBinding_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_regularBinding current (LOCATION_ARGS) const ;
  public: class GGS_regularBinding current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_regularBinding> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_regularBinding_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_regularBinding> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_regularBinding_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_regularBinding_5D_ (const GGS__5B_regularBinding_5D_ & inSource) ;
  public: GGS__5B_regularBinding_5D_ & operator = (const GGS__5B_regularBinding_5D_ & inSource) ;

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
  public: static GGS__5B_regularBinding_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_regularBinding_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_regularBinding & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_regularBinding_5D_ add_operation (const GGS__5B_regularBinding_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_regularBinding constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_regularBinding constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_regularBinding & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_regularBinding & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_regularBinding & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_regularBinding constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_regularBinding getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBinding getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_regularBinding_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_regularBinding_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                           const class GGS_uint & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_regularBinding readSubscript__3F_ (const class GGS_uint & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_regularBinding_5D_ ;
  friend class DownEnumerator__5B_regularBinding_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_regularBinding_5D_ ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_graphicController class_func_defined (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_graphicController class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
//--------------------------------- GALGAS class functions
  public: static class GGS_runActionDescriptor class_func_action (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_runActionDescriptor class_func_noAction (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
//--------------------------------- GALGAS class functions
  public: static class GGS_tableValueBinding class_func_noTableValueBinding (LOCATION_ARGS) ;

  public: static class GGS_tableValueBinding class_func_tableValueBinding (const class GGS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
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
// Phase 1: @outletDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_outletDeclarationAST : public AC_GALGAS_root {
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

  public: GGS__5B_regularBinding_5D_ mProperty_mRegularBindingList ;
  public: inline GGS__5B_regularBinding_5D_ readProperty_mRegularBindingList (void) const {
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
  public: GGS_outletDeclarationAST (void) ;

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

  public: inline void setter_setMRegularBindingList (const GGS__5B_regularBinding_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularBindingList = inValue ;
  }

  public: inline void setter_setMGraphicController (const GGS_graphicController & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphicController = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletDeclarationAST (const GGS_lstring & in_mOutletTypeName,
                                    const GGS_lstring & in_mOutletName,
                                    const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                    const GGS_runActionDescriptor & in_mRunDescriptor,
                                    const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                    const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                    const GGS__5B_regularBinding_5D_ & in_mRegularBindingList,
                                    const GGS_graphicController & in_mGraphicController) ;

//--------------------------------- Copy constructor
  public: GGS_outletDeclarationAST (const GGS_outletDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletDeclarationAST & operator = (const GGS_outletDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletDeclarationAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_tableValueBinding & inOperand2,
                                                                                const class GGS_runActionDescriptor & inOperand3,
                                                                                const class GGS_multipleBindingDescriptor & inOperand4,
                                                                                const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                const class GGS__5B_regularBinding_5D_ & inOperand6,
                                                                                const class GGS_graphicController & inOperand7,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [astViewDeclaration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_astViewDeclaration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_astViewDeclaration_5D_ (const class GGS__5B_astViewDeclaration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_astViewDeclaration_5D_ (const DownEnumerator__5B_astViewDeclaration_5D_ &) = delete ;
  private: DownEnumerator__5B_astViewDeclaration_5D_ & operator = (const DownEnumerator__5B_astViewDeclaration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_astViewDeclaration current (LOCATION_ARGS) const ;
  public: class GGS_astViewDeclaration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_astViewDeclaration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_astViewDeclaration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_astViewDeclaration_5D_ (const class GGS__5B_astViewDeclaration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_astViewDeclaration_5D_ (const UpEnumerator__5B_astViewDeclaration_5D_ &) = delete ;
  private: UpEnumerator__5B_astViewDeclaration_5D_ & operator = (const UpEnumerator__5B_astViewDeclaration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_astViewDeclaration current (LOCATION_ARGS) const ;
  public: class GGS_astViewDeclaration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_astViewDeclaration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_astViewDeclaration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_astViewDeclaration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_astViewDeclaration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_astViewDeclaration_5D_ (const GGS__5B_astViewDeclaration_5D_ & inSource) ;
  public: GGS__5B_astViewDeclaration_5D_ & operator = (const GGS__5B_astViewDeclaration_5D_ & inSource) ;

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
  public: static GGS__5B_astViewDeclaration_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_astViewDeclaration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astViewDeclaration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_astViewDeclaration_5D_ add_operation (const GGS__5B_astViewDeclaration_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_astViewDeclaration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_astViewDeclaration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_astViewDeclaration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_astViewDeclaration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_astViewDeclaration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_astViewDeclaration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astViewDeclaration getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewDeclaration getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_astViewDeclaration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_astViewDeclaration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                               const class GGS_uint & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_astViewDeclaration readSubscript__3F_ (const class GGS_uint & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_astViewDeclaration_5D_ ;
  friend class DownEnumerator__5B_astViewDeclaration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_astViewDeclaration_5D_ ;

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
// Phase 1: @astViewDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_astViewDeclaration : public AC_GALGAS_root {
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
  public: GGS_astViewDeclaration (void) ;

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
  public: GGS_astViewDeclaration (const GGS_lstring & in_mViewName,
                                  const GGS_astAbstractViewDeclaration & in_mView) ;

//--------------------------------- Copy constructor
  public: GGS_astViewDeclaration (const GGS_astViewDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astViewDeclaration & operator = (const GGS_astViewDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewDeclaration init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_astAbstractViewDeclaration & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [astAutoLayoutOutletLinker] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ (const class GGS__5B_astAutoLayoutOutletLinker_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ (const DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ &) = delete ;
  private: DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ & operator = (const DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_astAutoLayoutOutletLinker current (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutOutletLinker current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_astAutoLayoutOutletLinker> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ (const class GGS__5B_astAutoLayoutOutletLinker_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ (const UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ &) = delete ;
  private: UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ & operator = (const UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_astAutoLayoutOutletLinker current (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutOutletLinker current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_astAutoLayoutOutletLinker> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_astAutoLayoutOutletLinker_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_astAutoLayoutOutletLinker> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_astAutoLayoutOutletLinker_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_astAutoLayoutOutletLinker_5D_ (const GGS__5B_astAutoLayoutOutletLinker_5D_ & inSource) ;
  public: GGS__5B_astAutoLayoutOutletLinker_5D_ & operator = (const GGS__5B_astAutoLayoutOutletLinker_5D_ & inSource) ;

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
  public: static GGS__5B_astAutoLayoutOutletLinker_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_astAutoLayoutOutletLinker_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astAutoLayoutOutletLinker & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_astAutoLayoutOutletLinker_5D_ add_operation (const GGS__5B_astAutoLayoutOutletLinker_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_astAutoLayoutOutletLinker constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_astAutoLayoutOutletLinker constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_astAutoLayoutOutletLinker & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_astAutoLayoutOutletLinker & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_astAutoLayoutOutletLinker & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_astAutoLayoutOutletLinker constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutOutletLinker getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutOutletLinker getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_astAutoLayoutOutletLinker_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_astAutoLayoutOutletLinker_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_astAutoLayoutOutletLinker readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ ;
  friend class DownEnumerator__5B_astAutoLayoutOutletLinker_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_astAutoLayoutOutletLinker_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutOutletLinker struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutOutletLinker : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLinkerName ;
  public: inline GGS_lstring readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS__5B_lstring_5D_ mProperty_mOutletNameList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mOutletNameList (void) const {
    return mProperty_mOutletNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutOutletLinker (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutOutletLinker (const GGS_lstring & in_mLinkerName,
                                         const GGS__5B_lstring_5D_ & in_mOutletNameList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutOutletLinker (const GGS_astAutoLayoutOutletLinker & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutOutletLinker & operator = (const GGS_astAutoLayoutOutletLinker & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutOutletLinker init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS__5B_lstring_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinker ;

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

  public: class GGS__5B_outletDeclarationAST_5D_ readProperty_mOutletDeclarationList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mActionDeclarationList (void) const ;

  public: class GGS__5B_arrayControllerBindingAST_5D_ readProperty_mArrayControllerBindingListAST (void) const ;

  public: class GGS__5B_astViewDeclaration_5D_ readProperty_mViewDeclarationList (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS__5B_astAutoLayoutOutletLinker_5D_ readProperty_mOutletLinkerList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS__5B_outletDeclarationAST_5D_ & inOperand3,
                                                                                                const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                                const class GGS__5B_arrayControllerBindingAST_5D_ & inOperand5,
                                                                                                const class GGS__5B_astViewDeclaration_5D_ & inOperand6,
                                                                                                const class GGS_string & inOperand7,
                                                                                                const class GGS__5B_astAutoLayoutOutletLinker_5D_ & inOperand8,
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
                                                                                          const class GGS__5B_outletDeclarationAST_5D_ & inOperand3,
                                                                                          const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                          const class GGS__5B_arrayControllerBindingAST_5D_ & inOperand5,
                                                                                          const class GGS__5B_astViewDeclaration_5D_ & inOperand6,
                                                                                          const class GGS_string & inOperand7,
                                                                                          const class GGS__5B_astAutoLayoutOutletLinker_5D_ & inOperand8,
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
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mMainViewName ;
  public: GGS__5B_outletDeclarationAST_5D_ mProperty_mOutletDeclarationList ;
  public: GGS__5B_lstring_5D_ mProperty_mActionDeclarationList ;
  public: GGS__5B_arrayControllerBindingAST_5D_ mProperty_mArrayControllerBindingListAST ;
  public: GGS__5B_astViewDeclaration_5D_ mProperty_mViewDeclarationList ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS__5B_astAutoLayoutOutletLinker_5D_ mProperty_mOutletLinkerList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (const GGS_lstring & in_mClassName,
                                                 const GGS_lstring & in_mRootEntityName,
                                                 const GGS_lstring & in_mMainViewName,
                                                 const GGS__5B_outletDeclarationAST_5D_ & in_mOutletDeclarationList,
                                                 const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                                                 const GGS__5B_arrayControllerBindingAST_5D_ & in_mArrayControllerBindingListAST,
                                                 const GGS__5B_astViewDeclaration_5D_ & in_mViewDeclarationList,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS__5B_astAutoLayoutOutletLinker_5D_ & in_mOutletLinkerList,
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
// Phase 1: @autoLayoutOutletLinkerGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutOutletLinkerGeneration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLinkerName ;
  public: inline GGS_string readProperty_mLinkerName (void) const {
    return mProperty_mLinkerName ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mOutletNameAndTypeNameList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mOutletNameAndTypeNameList (void) const {
    return mProperty_mOutletNameAndTypeNameList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutOutletLinkerGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLinkerName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerName = inValue ;
  }

  public: inline void setter_setMOutletNameAndTypeNameList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletNameAndTypeNameList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutOutletLinkerGeneration (const GGS_string & in_mLinkerName,
                                                const GGS__5B__32_string_5D_ & in_mOutletNameAndTypeNameList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutOutletLinkerGeneration (const GGS_autoLayoutOutletLinkerGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutOutletLinkerGeneration & operator = (const GGS_autoLayoutOutletLinkerGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutOutletLinkerGeneration init_21__21_ (const class GGS_string & inOperand0,
                                                                    const class GGS__5B__32_string_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [multipleBindingGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_multipleBindingGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_multipleBindingGeneration_5D_ (const class GGS__5B_multipleBindingGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_multipleBindingGeneration_5D_ (const DownEnumerator__5B_multipleBindingGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_multipleBindingGeneration_5D_ & operator = (const DownEnumerator__5B_multipleBindingGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_multipleBindingGeneration current (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_multipleBindingGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_multipleBindingGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_multipleBindingGeneration_5D_ (const class GGS__5B_multipleBindingGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_multipleBindingGeneration_5D_ (const UpEnumerator__5B_multipleBindingGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_multipleBindingGeneration_5D_ & operator = (const UpEnumerator__5B_multipleBindingGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_multipleBindingGeneration current (LOCATION_ARGS) const ;
  public: class GGS_multipleBindingGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_multipleBindingGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_multipleBindingGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_multipleBindingGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_multipleBindingGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_multipleBindingGeneration_5D_ (const GGS__5B_multipleBindingGeneration_5D_ & inSource) ;
  public: GGS__5B_multipleBindingGeneration_5D_ & operator = (const GGS__5B_multipleBindingGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_multipleBindingGeneration_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_multipleBindingGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_multipleBindingGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_multipleBindingGeneration_5D_ add_operation (const GGS__5B_multipleBindingGeneration_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_multipleBindingGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_multipleBindingGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_multipleBindingGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_multipleBindingGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_multipleBindingGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_multipleBindingGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_multipleBindingGeneration getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_multipleBindingGeneration getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_multipleBindingGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_multipleBindingGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_multipleBindingGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_multipleBindingGeneration_5D_ ;
  friend class DownEnumerator__5B_multipleBindingGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_multipleBindingGeneration_5D_ ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingGeneration : public AC_GALGAS_root {
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
  public: GGS_multipleBindingGeneration (void) ;

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
  public: GGS_multipleBindingGeneration (const GGS_string & in_mOutletName,
                                         const GGS_string & in_mBindingName,
                                         const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//--------------------------------- Copy constructor
  public: GGS_multipleBindingGeneration (const GGS_multipleBindingGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_multipleBindingGeneration & operator = (const GGS_multipleBindingGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multipleBindingGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [autoLayoutOutletLinkerGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ (const class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ (const DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ & operator = (const DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutOutletLinkerGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_autoLayoutOutletLinkerGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ (const class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ (const UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ & operator = (const UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_autoLayoutOutletLinkerGeneration current (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutOutletLinkerGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_autoLayoutOutletLinkerGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_autoLayoutOutletLinkerGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_autoLayoutOutletLinkerGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_autoLayoutOutletLinkerGeneration_5D_ (const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inSource) ;
  public: GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & operator = (const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_autoLayoutOutletLinkerGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutOutletLinkerGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_autoLayoutOutletLinkerGeneration_5D_ add_operation (const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_autoLayoutOutletLinkerGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_autoLayoutOutletLinkerGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_autoLayoutOutletLinkerGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_autoLayoutOutletLinkerGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_autoLayoutOutletLinkerGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_autoLayoutOutletLinkerGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletLinkerGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletLinkerGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_autoLayoutOutletLinkerGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutOutletLinkerGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ ;
  friend class DownEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutOutletLinkerGeneration_5D_ ;

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
  public: GGS_propertyGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_propertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGenerationList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGenerationList class_func_listWithValue (const class GGS_propertyGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_propertyGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_propertyGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_propertyGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_propertyGenerationList add_operation (const GGS_propertyGenerationList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_propertyGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_propertyGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_propertyGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_propertyGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_propertyGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyAtIndex (class GGS_propertyGeneration constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_propertyGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_propertyGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_propertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyGenerationList ;
  friend class DownEnumerator_propertyGenerationList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedOutletMap class_func_mapWithMapToOverride (const class GGS_decoratedOutletMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletTypeNameForKey (class GGS_string constinArgument0,
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

  public: class GGS_string getter_mOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_decoratedOutletMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_decoratedOutletMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutOutletMap class_func_mapWithMapToOverride (const class GGS_autoLayoutOutletMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoLayoutOutletTypeNameForKey (class GGS_string constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletIsArrayForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_string & outArgument1,
                                 class GGS_bool & outArgument2,
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

  public: class GGS_bool getter_mOutletIsArrayForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutOutletMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutOutletMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ;

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
  public: GGS_actionBindingListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mOutletName,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mActionName,
                                                 const class GGS_string & in_mTargetTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionBindingListForGeneration init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_actionBindingListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_actionBindingListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_actionBindingListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_actionBindingListForGeneration add_operation (const GGS_actionBindingListForGeneration & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_string constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_string & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMActionNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMTargetTypeNameAtIndex (class GGS_string constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_string & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_string & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mActionNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTargetTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_actionBindingListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_actionBindingListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_actionBindingListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ;

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
  public: GGS_regularBindingsGenerationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mOutletName,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_boundObjectList & in_mBoundObjectList,
                                                 const class GGS_string & in_mBindingOptionsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingsGenerationList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_regularBindingsGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_boundObjectList & inOperand2,
                                                                                   const class GGS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_regularBindingsGenerationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_boundObjectList & inOperand2,
                                   const class GGS_string & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_regularBindingsGenerationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_regularBindingsGenerationList add_operation (const GGS_regularBindingsGenerationList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_boundObjectList constinArgument2,
                              class GGS_string constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_boundObjectList constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_boundObjectList & outArgument2,
                                class GGS_string & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_boundObjectList & outArgument2,
                               class GGS_string & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_boundObjectList & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingOptionsStringAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundObjectListAtIndex (class GGS_boundObjectList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_boundObjectList & outArgument2,
                             class GGS_string & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_boundObjectList & outArgument2,
                            class GGS_string & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBindingOptionsStringAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_boundObjectList getter_mBoundObjectListAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mOutletNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_regularBindingsGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBindingsGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_regularBindingsGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: GGS_boundObjectList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mBoundObjectString,
                                                 const class GGS_propertyKind & in_mKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boundObjectList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_boundObjectList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                     const class GGS_propertyKind & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_boundObjectList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_propertyKind & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_boundObjectList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_boundObjectList add_operation (const GGS_boundObjectList & inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_propertyKind constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_propertyKind constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_propertyKind & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_propertyKind & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_propertyKind & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoundObjectStringAtIndex (class GGS_string constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindAtIndex (class GGS_propertyKind constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_propertyKind & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_propertyKind & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBoundObjectStringAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyKind getter_mKindAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_boundObjectList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_boundObjectList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_boundObjectList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ;

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

