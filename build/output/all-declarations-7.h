#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyMap-element isAbstract' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isAbstract (const class GALGAS_propertyMap_2D_element & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_sortProperties (const class GALGAS_string constinArgument0,
                             const class GALGAS_declarationListAST constinArgument1,
                             class GALGAS_declarationListAST & outArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                const class GALGAS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn (class GALGAS_declarationListAST & ioArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildActionMap (const class GALGAS_lstringlist constinArgument0,
                             class GALGAS_actionMap & outArgument1,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                        const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                        const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                        const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                        const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                        const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_bool & in_HAS_5F_SUB_5F_ENTITY
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                              const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                              const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                              const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                              const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                              const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                              const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                              const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                              const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                             const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                             const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                             const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                             const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                             const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                             const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                             const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                             const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext (const class GALGAS_entityListForGeneratingEBManagedObjectContext constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOutlets (const class GALGAS_bool constinArgument0,
                             const class GALGAS_propertyMap constinArgument1,
                             const class GALGAS_propertyMap constinArgument2,
                             const class GALGAS_string constinArgument3,
                             const class GALGAS_semanticContext constinArgument4,
                             const class GALGAS_outletDeclarationList constinArgument5,
                             const class GALGAS_propertyMap constinArgument6,
                             const class GALGAS_actionMap constinArgument7,
                             const class GALGAS_string constinArgument8,
                             class GALGAS_generationStruct & ioArgument9,
                             class GALGAS_regularBindingsGenerationList & outArgument10,
                             class GALGAS_multipleBindingGenerationList & outArgument11,
                             class GALGAS_actionBindingListForGeneration & outArgument12,
                             class GALGAS_decoratedOutletMap & outArgument13,
                             class GALGAS_tableViewBindingGenerationList & outArgument14,
                             class GALGAS_ebViewGraphicControllerBindingGenerationList & outArgument15,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xibDocumentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_xibDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_xibDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_xibDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_xibDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_xibDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_xibDocumentGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xibDocumentGenerationTemplate documentImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xibDocumentGenerationTemplate_documentImplementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                                        const class GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                        const class GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                        const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                        const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                        const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                        const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                        const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                        const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedXibDocumentSwift'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateEBManagedXibDocumentSwift (const class GALGAS_string constinArgument0,
                                                class GALGAS_stringset & ioArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'swift_sources'
//
//----------------------------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_63_swift_5F_sources ;
extern const char * gWrapperFileContent_35_swift_5F_sources ;
extern const char * gWrapperFileContent_31_swift_5F_sources ;
extern const char * gWrapperFileContent_28_swift_5F_sources ;
extern const char * gWrapperFileContent_78_swift_5F_sources ;
extern const char * gWrapperFileContent_92_swift_5F_sources ;
extern const char * gWrapperFileContent_64_swift_5F_sources ;
extern const char * gWrapperFileContent_106_swift_5F_sources ;
extern const char * gWrapperFileContent_42_swift_5F_sources ;
extern const char * gWrapperFileContent_51_swift_5F_sources ;
extern const char * gWrapperFileContent_65_swift_5F_sources ;
extern const char * gWrapperFileContent_116_swift_5F_sources ;
extern const char * gWrapperFileContent_6_swift_5F_sources ;
extern const char * gWrapperFileContent_12_swift_5F_sources ;
extern const char * gWrapperFileContent_84_swift_5F_sources ;
extern const char * gWrapperFileContent_39_swift_5F_sources ;
extern const char * gWrapperFileContent_93_swift_5F_sources ;
extern const char * gWrapperFileContent_77_swift_5F_sources ;
extern const char * gWrapperFileContent_7_swift_5F_sources ;
extern const char * gWrapperFileContent_115_swift_5F_sources ;
extern const char * gWrapperFileContent_16_swift_5F_sources ;
extern const char * gWrapperFileContent_99_swift_5F_sources ;
extern const char * gWrapperFileContent_52_swift_5F_sources ;
extern const char * gWrapperFileContent_68_swift_5F_sources ;
extern const char * gWrapperFileContent_13_swift_5F_sources ;
extern const char * gWrapperFileContent_70_swift_5F_sources ;
extern const char * gWrapperFileContent_73_swift_5F_sources ;
extern const char * gWrapperFileContent_118_swift_5F_sources ;
extern const char * gWrapperFileContent_4_swift_5F_sources ;
extern const char * gWrapperFileContent_86_swift_5F_sources ;
extern const char * gWrapperFileContent_60_swift_5F_sources ;
extern const char * gWrapperFileContent_53_swift_5F_sources ;
extern const char * gWrapperFileContent_1_swift_5F_sources ;
extern const char * gWrapperFileContent_38_swift_5F_sources ;
extern const char * gWrapperFileContent_3_swift_5F_sources ;
extern const char * gWrapperFileContent_108_swift_5F_sources ;
extern const char * gWrapperFileContent_41_swift_5F_sources ;
extern const char * gWrapperFileContent_0_swift_5F_sources ;
extern const char * gWrapperFileContent_97_swift_5F_sources ;
extern const char * gWrapperFileContent_79_swift_5F_sources ;
extern const char * gWrapperFileContent_30_swift_5F_sources ;
extern const char * gWrapperFileContent_8_swift_5F_sources ;
extern const char * gWrapperFileContent_90_swift_5F_sources ;
extern const char * gWrapperFileContent_98_swift_5F_sources ;
extern const char * gWrapperFileContent_46_swift_5F_sources ;
extern const char * gWrapperFileContent_88_swift_5F_sources ;
extern const char * gWrapperFileContent_72_swift_5F_sources ;
extern const char * gWrapperFileContent_23_swift_5F_sources ;
extern const char * gWrapperFileContent_27_swift_5F_sources ;
extern const char * gWrapperFileContent_59_swift_5F_sources ;
extern const char * gWrapperFileContent_19_swift_5F_sources ;
extern const char * gWrapperFileContent_67_swift_5F_sources ;
extern const char * gWrapperFileContent_22_swift_5F_sources ;
extern const char * gWrapperFileContent_107_swift_5F_sources ;
extern const char * gWrapperFileContent_71_swift_5F_sources ;
extern const char * gWrapperFileContent_112_swift_5F_sources ;
extern const char * gWrapperFileContent_26_swift_5F_sources ;
extern const char * gWrapperFileContent_5_swift_5F_sources ;
extern const char * gWrapperFileContent_101_swift_5F_sources ;
extern const char * gWrapperFileContent_14_swift_5F_sources ;
extern const char * gWrapperFileContent_85_swift_5F_sources ;
extern const char * gWrapperFileContent_121_swift_5F_sources ;
extern const char * gWrapperFileContent_120_swift_5F_sources ;
extern const char * gWrapperFileContent_29_swift_5F_sources ;
extern const char * gWrapperFileContent_117_swift_5F_sources ;
extern const char * gWrapperFileContent_58_swift_5F_sources ;
extern const char * gWrapperFileContent_24_swift_5F_sources ;
extern const char * gWrapperFileContent_49_swift_5F_sources ;
extern const char * gWrapperFileContent_33_swift_5F_sources ;
extern const char * gWrapperFileContent_17_swift_5F_sources ;
extern const char * gWrapperFileContent_56_swift_5F_sources ;
extern const char * gWrapperFileContent_111_swift_5F_sources ;
extern const char * gWrapperFileContent_66_swift_5F_sources ;
extern const char * gWrapperFileContent_96_swift_5F_sources ;
extern const char * gWrapperFileContent_76_swift_5F_sources ;
extern const char * gWrapperFileContent_119_swift_5F_sources ;
extern const char * gWrapperFileContent_37_swift_5F_sources ;
extern const char * gWrapperFileContent_81_swift_5F_sources ;
extern const char * gWrapperFileContent_55_swift_5F_sources ;
extern const char * gWrapperFileContent_74_swift_5F_sources ;
extern const char * gWrapperFileContent_103_swift_5F_sources ;
extern const char * gWrapperFileContent_48_swift_5F_sources ;
extern const char * gWrapperFileContent_62_swift_5F_sources ;
extern const char * gWrapperFileContent_61_swift_5F_sources ;
extern const char * gWrapperFileContent_114_swift_5F_sources ;
extern const char * gWrapperFileContent_40_swift_5F_sources ;
extern const char * gWrapperFileContent_21_swift_5F_sources ;
extern const char * gWrapperFileContent_89_swift_5F_sources ;
extern const char * gWrapperFileContent_110_swift_5F_sources ;
extern const char * gWrapperFileContent_80_swift_5F_sources ;
extern const char * gWrapperFileContent_83_swift_5F_sources ;
extern const char * gWrapperFileContent_75_swift_5F_sources ;
extern const char * gWrapperFileContent_95_swift_5F_sources ;
extern const char * gWrapperFileContent_94_swift_5F_sources ;
extern const char * gWrapperFileContent_102_swift_5F_sources ;
extern const char * gWrapperFileContent_109_swift_5F_sources ;
extern const char * gWrapperFileContent_18_swift_5F_sources ;
extern const char * gWrapperFileContent_15_swift_5F_sources ;
extern const char * gWrapperFileContent_113_swift_5F_sources ;
extern const char * gWrapperFileContent_44_swift_5F_sources ;
extern const char * gWrapperFileContent_82_swift_5F_sources ;
extern const char * gWrapperFileContent_50_swift_5F_sources ;
extern const char * gWrapperFileContent_57_swift_5F_sources ;
extern const char * gWrapperFileContent_25_swift_5F_sources ;
extern const char * gWrapperFileContent_20_swift_5F_sources ;
extern const char * gWrapperFileContent_34_swift_5F_sources ;
extern const char * gWrapperFileContent_11_swift_5F_sources ;
extern const char * gWrapperFileContent_36_swift_5F_sources ;
extern const char * gWrapperFileContent_100_swift_5F_sources ;
extern const char * gWrapperFileContent_45_swift_5F_sources ;
extern const char * gWrapperFileContent_69_swift_5F_sources ;
extern const char * gWrapperFileContent_2_swift_5F_sources ;
extern const char * gWrapperFileContent_87_swift_5F_sources ;
extern const char * gWrapperFileContent_10_swift_5F_sources ;
extern const char * gWrapperFileContent_54_swift_5F_sources ;
extern const char * gWrapperFileContent_105_swift_5F_sources ;
extern const char * gWrapperFileContent_104_swift_5F_sources ;
extern const char * gWrapperFileContent_91_swift_5F_sources ;
extern const char * gWrapperFileContent_32_swift_5F_sources ;
extern const char * gWrapperFileContent_9_swift_5F_sources ;
extern const char * gWrapperFileContent_47_swift_5F_sources ;
extern const char * gWrapperFileContent_43_swift_5F_sources ;

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_1_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_2_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_3_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_4_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_5_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_6_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_7_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_8_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_9_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_10_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_11_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_12_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_13_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_14_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_15_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_16_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_17_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_18_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_19_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_20_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_21_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_22_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_23_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_24_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_25_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_26_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_27_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_28_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_29_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_30_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_31_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_32_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_33_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_34_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_35_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_36_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_37_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_38_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_39_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_40_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_41_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_42_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_43_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_44_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_45_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_46_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_47_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_48_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_49_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_50_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_51_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_52_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_53_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_54_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_55_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_56_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_57_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_58_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_59_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_60_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_61_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_62_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_63_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_64_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_65_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_66_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_67_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_68_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_69_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_70_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_71_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_72_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_73_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_74_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_75_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_76_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_77_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_78_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_79_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_80_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_81_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_82_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_83_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_84_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_85_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_86_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_87_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_88_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_89_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_90_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_91_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_92_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_93_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_94_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_95_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_96_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_97_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_98_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_99_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_100_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_101_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_102_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_103_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_104_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_105_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_106_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_107_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_108_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_109_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_110_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_111_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_112_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_113_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_114_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_115_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_116_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_117_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_118_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_119_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_120_swift_5F_sources ;
extern const cRegularFileWrapper gWrapperFile_121_swift_5F_sources ;

//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_swift_5F_sources ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_autoLayoutDocumentGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_autoLayoutDocumentGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                               const class GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                               const class GALGAS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                               const class GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                               const class GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                               const class GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                               const class GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                                               const class GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                                               const class GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const class GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const class GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const class GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                               const class GALGAS_autoLayoutToolbarItemGenerationList & in_TOOLBAR_5F_ITEM_5F_LIST,
                                                                                               const class GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                               const class GALGAS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                               const class GALGAS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (class C_Compiler * inCompiler,
                                                                                                                 const class GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                                 const class GALGAS_string & in_OUTLET_5F_NAME,
                                                                                                                 const class GALGAS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                   const class GALGAS_string & in_LINKER_5F_NAME,
                                                                                                   const class GALGAS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateAutoLayoutManagedDocumentSwift'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAutoLayoutManagedDocumentSwift (const class GALGAS_string constinArgument0,
                                                     class GALGAS_stringset & ioArgument1,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

