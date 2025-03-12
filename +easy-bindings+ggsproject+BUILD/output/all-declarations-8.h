#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyMap.element isAbstract' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isAbstract (const class GGS_propertyMap_2E_element & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const class GGS_string constinArgument0,
                                         const class GGS_declarationListAST constinArgument1,
                                         class GGS_declarationListAST & outArgument2,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class Compiler * inCompiler,
                                                                             const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const class GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const class GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const class GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const class GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (class GGS_declarationListAST & ioArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const class GGS_lstringlist constinArgument0,
                                     class GGS_actionMap & outArgument1,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class Compiler * inCompiler,
                                                                                     const class GGS_string & in_ENTITY_5F_NAME,
                                                                                     const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const class GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const class GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const class GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (class Compiler * inCompiler,
                                                                                           const class GGS_string & in_ENTITY_5F_NAME,
                                                                                           const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                           const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                           const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                           const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                           const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                           const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (class Compiler * inCompiler,
                                                                                          const class GGS_string & in_ENTITY_5F_NAME,
                                                                                          const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                          const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const class GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                          const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                          const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                          const class GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (class Compiler * inCompiler,
                                                                              const class GGS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const class GGS_entityListForGeneratingEBManagedObjectContext constinArgument0,
                                                         const class GGS_string constinArgument1,
                                                         class GGS_stringset & ioArgument2,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

