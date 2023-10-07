//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-easy-42-indings-5F-lexique-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_easyBindings_lexique

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_floatValue = 0.0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//----------------------------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'lowerCaseKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [64] = {
  {"no", easyBindings_lexique_1_no},
  {"all", easyBindings_lexique_1_all},
  {"one", easyBindings_lexique_1_one},
  {"yes", easyBindings_lexique_1_yes},
  {"enum", easyBindings_lexique_1_enum},
  {"func", easyBindings_lexique_1_func},
  {"none", easyBindings_lexique_1_none},
  {"root", easyBindings_lexique_1_root},
  {"self", easyBindings_lexique_1_self},
  {"view", easyBindings_lexique_1_view},
  {"weak", easyBindings_lexique_1_weak},
  {"class", easyBindings_lexique_1_class},
  {"prefs", easyBindings_lexique_1_prefs},
  {"proxy", easyBindings_lexique_1_proxy},
  {"space", easyBindings_lexique_1_space},
  {"super", easyBindings_lexique_1_super},
  {"toOne", easyBindings_lexique_1_toOne},
  {"action", easyBindings_lexique_1_action},
  {"column", easyBindings_lexique_1_column},
  {"entity", easyBindings_lexique_1_entity},
  {"extern", easyBindings_lexique_1_extern},
  {"hStack", easyBindings_lexique_1_hStack},
  {"linker", easyBindings_lexique_1_linker},
  {"outlet", easyBindings_lexique_1_outlet},
  {"struct", easyBindings_lexique_1_struct},
  {"toMany", easyBindings_lexique_1_toMany},
  {"vStack", easyBindings_lexique_1_vStack},
  {"binding", easyBindings_lexique_1_binding},
  {"default", easyBindings_lexique_1_default},
  {"divider", easyBindings_lexique_1_divider},
  {"graphic", easyBindings_lexique_1_graphic},
  {"include", easyBindings_lexique_1_include},
  {"inverse", easyBindings_lexique_1_inverse},
  {"mainxib", easyBindings_lexique_1_mainxib},
  {"newView", easyBindings_lexique_1_newView},
  {"sortkey", easyBindings_lexique_1_sortkey},
  {"version", easyBindings_lexique_1_version},
  {"abstract", easyBindings_lexique_1_abstract},
  {"calledBy", easyBindings_lexique_1_calledBy},
  {"computed", easyBindings_lexique_1_computed},
  {"graphviz", easyBindings_lexique_1_graphviz},
  {"menuItem", easyBindings_lexique_1_menuItem},
  {"override", easyBindings_lexique_1_override},
  {"property", easyBindings_lexique_1_property},
  {"typeView", easyBindings_lexique_1_typeView},
  {"separator", easyBindings_lexique_1_separator},
  {"signature", easyBindings_lexique_1_signature},
  {"stackView", easyBindings_lexique_1_stackView},
  {"transient", easyBindings_lexique_1_transient},
  {"autolayout", easyBindings_lexique_1_autolayout},
  {"externFunc", easyBindings_lexique_1_externFunc},
  {"dependsFrom", easyBindings_lexique_1_dependsFrom},
  {"outletArray", easyBindings_lexique_1_outletArray},
  {"configurator", easyBindings_lexique_1_configurator},
  {"xcodeproject", easyBindings_lexique_1_xcodeproject},
  {"classForSwift", easyBindings_lexique_1_classForSwift},
  {"editableColumn", easyBindings_lexique_1_editableColumn},
  {"externDelegate", easyBindings_lexique_1_externDelegate},
  {"arrayController", easyBindings_lexique_1_arrayController},
  {"handlingOpposite", easyBindings_lexique_1_handlingOpposite},
  {"autoLayoutDocument", easyBindings_lexique_1_autoLayoutDocument},
  {"selectionController", easyBindings_lexique_1_selectionController},
  {"tableViewController", easyBindings_lexique_1_tableViewController},
  {"versionShouldChange", easyBindings_lexique_1_versionShouldChange}
} ;

static NSInteger search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, 64) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'reservedBindingNameKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [5] = {
  {"run", easyBindings_lexique_1_run},
  {"hidden", easyBindings_lexique_1_hidden},
  {"enabled", easyBindings_lexique_1_enabled},
  {"tableValue", easyBindings_lexique_1_tableValue},
  {"graphicController", easyBindings_lexique_1_graphicController}
} ;

static NSInteger search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, 5) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mLexicalAttribute_floatValue = 0.0 ;
  [mLexicalAttribute_tokenString setString:@""] ;
  mLexicalAttribute_uint32value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  if (scanningOk && ([self testForInputFromChar:97 toChar:122])) {
    BOOL loop1612 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
      }else{
        loop1612 = NO ;
      }
    }while (loop1612 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (mLexicalAttribute_tokenString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = easyBindings_lexique_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputFromChar:65 toChar:90])) {
    BOOL loop1814 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop1814 = NO ;
      }
    }while (loop1814 && scanningOk) ;
    mTokenCode = easyBindings_lexique_1_Identifier ;
  }else if (scanningOk && ([self testForInputChar:64])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57])) {
      BOOL loop2397 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:46])) {
        }else{
          loop2397 = NO ;
        }
      }while (loop2397 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = easyBindings_lexique_1__40_attribute ;
  }else if (scanningOk && ([self testForInputChar:36])) {
    BOOL loop3233 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop3233 = NO ;
      }
    }while (loop3233 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (mLexicalAttribute_tokenString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = easyBindings_lexique_1_bindingName ;
    }
  }else if (scanningOk && ([self testForInputChar:35])) {
    BOOL loop3851 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop3851 = NO ;
      }
    }while (loop3851 && scanningOk) ;
    mTokenCode = easyBindings_lexique_1_controllerName ;
  }else if (scanningOk && ([self testForInputChar:92])) {
    BOOL loop4377 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop4377 = NO ;
      }
    }while (loop4377 && scanningOk) ;
    mTokenCode = easyBindings_lexique_1_viewName ;
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
    BOOL loop5286 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop5286 = NO ;
      }
    }while (loop5286 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:46])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
      BOOL loop5460 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop5460 = NO ;
        }
      }while (loop5460 && scanningOk) ;
      scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
      mTokenCode = easyBindings_lexique_1_literal_5F_double ;
    }else{
      scanner_cocoa_routine_convertDecimalStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
      mTokenCode = easyBindings_lexique_1_literal_5F_integer ;
    }
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop6309 = YES ;
    do {
      if (scanningOk && ([self testForInputString:@"\\n" advance:YES])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 10) ;
      }else if (scanningOk && ([self testForInputString:@"\\\"" advance:YES])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 34) ;
      }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputFromChar:65536 toChar:1114111])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop6309 = NO ;
      }
    }while (loop6309 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = easyBindings_lexique_1_literal_5F_string ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<=" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3C_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = easyBindings_lexique_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = easyBindings_lexique_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__26_ ;
  }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
    mTokenCode = easyBindings_lexique_1__21_ ;
  }else if (scanningOk && ([self testForInputString:@"//" advance:YES])) {
    BOOL loop7783 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
      }else{
        loop7783 = NO ;
      }
    }while (loop7783 && scanningOk) ;
    mTokenCode = easyBindings_lexique_1_comment ;
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = easyBindings_lexique_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 101 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 14 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [102] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_controllerName */,
    8 /* easyBindings_lexique_1_viewName */,
    9 /* easyBindings_lexique_1_literal_5F_integer */,
    10 /* easyBindings_lexique_1_literal_5F_double */,
    11 /* easyBindings_lexique_1_literal_5F_string */,
    13 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_abstract */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_autolayout */,
    1 /* easyBindings_lexique_1_autoLayoutDocument */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_computed */,
    1 /* easyBindings_lexique_1_configurator */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_divider */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_editableColumn */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_func */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_graphviz */,
    1 /* easyBindings_lexique_1_handlingOpposite */,
    1 /* easyBindings_lexique_1_hStack */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_linker */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_menuItem */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_newView */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_one */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_outletArray */,
    1 /* easyBindings_lexique_1_override */,
    1 /* easyBindings_lexique_1_prefs */,
    1 /* easyBindings_lexique_1_property */,
    1 /* easyBindings_lexique_1_proxy */,
    1 /* easyBindings_lexique_1_root */,
    1 /* easyBindings_lexique_1_selectionController */,
    1 /* easyBindings_lexique_1_self */,
    1 /* easyBindings_lexique_1_separator */,
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sortkey */,
    1 /* easyBindings_lexique_1_space */,
    1 /* easyBindings_lexique_1_stackView */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_super */,
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_typeView */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_vStack */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_view */,
    1 /* easyBindings_lexique_1_weak */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_graphicController */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    12 /* easyBindings_lexique_1__3A_ */,
    12 /* easyBindings_lexique_1__2C_ */,
    12 /* easyBindings_lexique_1__3B_ */,
    12 /* easyBindings_lexique_1__21_ */,
    12 /* easyBindings_lexique_1__5B_ */,
    12 /* easyBindings_lexique_1__5D_ */,
    12 /* easyBindings_lexique_1__7B_ */,
    12 /* easyBindings_lexique_1__7D_ */,
    12 /* easyBindings_lexique_1__28_ */,
    12 /* easyBindings_lexique_1__29_ */,
    12 /* easyBindings_lexique_1__2E_ */,
    12 /* easyBindings_lexique_1__7C_ */,
    12 /* easyBindings_lexique_1__26_ */,
    12 /* easyBindings_lexique_1__3C_ */,
    12 /* easyBindings_lexique_1__3E_ */,
    12 /* easyBindings_lexique_1__3C__3D_ */,
    12 /* easyBindings_lexique_1__3E__3D_ */,
    12 /* easyBindings_lexique_1__21__3D_ */,
    12 /* easyBindings_lexique_1__3D__3D_ */,
    12 /* easyBindings_lexique_1__5E_ */,
    12 /* easyBindings_lexique_1__2D_ */,
    12 /* easyBindings_lexique_1__3D_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [102] = {NO,
    YES /* easyBindings_lexique_1_identifier */,
    YES /* easyBindings_lexique_1_Identifier */,
    YES /* easyBindings_lexique_1__40_attribute */,
    YES /* easyBindings_lexique_1_bindingName */,
    YES /* easyBindings_lexique_1_controllerName */,
    YES /* easyBindings_lexique_1_viewName */,
    YES /* easyBindings_lexique_1_literal_5F_integer */,
    YES /* easyBindings_lexique_1_literal_5F_double */,
    NO /* easyBindings_lexique_1_literal_5F_string */,
    NO /* easyBindings_lexique_1_comment */,
    YES /* easyBindings_lexique_1_abstract */,
    YES /* easyBindings_lexique_1_action */,
    YES /* easyBindings_lexique_1_all */,
    YES /* easyBindings_lexique_1_arrayController */,
    YES /* easyBindings_lexique_1_autolayout */,
    YES /* easyBindings_lexique_1_autoLayoutDocument */,
    YES /* easyBindings_lexique_1_binding */,
    YES /* easyBindings_lexique_1_calledBy */,
    YES /* easyBindings_lexique_1_class */,
    YES /* easyBindings_lexique_1_classForSwift */,
    YES /* easyBindings_lexique_1_column */,
    YES /* easyBindings_lexique_1_computed */,
    YES /* easyBindings_lexique_1_configurator */,
    YES /* easyBindings_lexique_1_default */,
    YES /* easyBindings_lexique_1_dependsFrom */,
    YES /* easyBindings_lexique_1_divider */,
    YES /* easyBindings_lexique_1_enum */,
    YES /* easyBindings_lexique_1_editableColumn */,
    YES /* easyBindings_lexique_1_entity */,
    YES /* easyBindings_lexique_1_extern */,
    YES /* easyBindings_lexique_1_externDelegate */,
    YES /* easyBindings_lexique_1_externFunc */,
    YES /* easyBindings_lexique_1_func */,
    YES /* easyBindings_lexique_1_graphic */,
    YES /* easyBindings_lexique_1_graphviz */,
    YES /* easyBindings_lexique_1_handlingOpposite */,
    YES /* easyBindings_lexique_1_hStack */,
    YES /* easyBindings_lexique_1_include */,
    YES /* easyBindings_lexique_1_inverse */,
    YES /* easyBindings_lexique_1_linker */,
    YES /* easyBindings_lexique_1_mainxib */,
    YES /* easyBindings_lexique_1_menuItem */,
    YES /* easyBindings_lexique_1_no */,
    YES /* easyBindings_lexique_1_newView */,
    YES /* easyBindings_lexique_1_none */,
    YES /* easyBindings_lexique_1_one */,
    YES /* easyBindings_lexique_1_outlet */,
    YES /* easyBindings_lexique_1_outletArray */,
    YES /* easyBindings_lexique_1_override */,
    YES /* easyBindings_lexique_1_prefs */,
    YES /* easyBindings_lexique_1_property */,
    YES /* easyBindings_lexique_1_proxy */,
    YES /* easyBindings_lexique_1_root */,
    YES /* easyBindings_lexique_1_selectionController */,
    YES /* easyBindings_lexique_1_self */,
    YES /* easyBindings_lexique_1_separator */,
    YES /* easyBindings_lexique_1_signature */,
    YES /* easyBindings_lexique_1_sortkey */,
    YES /* easyBindings_lexique_1_space */,
    YES /* easyBindings_lexique_1_stackView */,
    YES /* easyBindings_lexique_1_struct */,
    YES /* easyBindings_lexique_1_super */,
    YES /* easyBindings_lexique_1_tableViewController */,
    YES /* easyBindings_lexique_1_toMany */,
    YES /* easyBindings_lexique_1_toOne */,
    YES /* easyBindings_lexique_1_transient */,
    YES /* easyBindings_lexique_1_typeView */,
    YES /* easyBindings_lexique_1_version */,
    YES /* easyBindings_lexique_1_vStack */,
    YES /* easyBindings_lexique_1_versionShouldChange */,
    YES /* easyBindings_lexique_1_view */,
    YES /* easyBindings_lexique_1_weak */,
    YES /* easyBindings_lexique_1_xcodeproject */,
    YES /* easyBindings_lexique_1_yes */,
    YES /* easyBindings_lexique_1_enabled */,
    YES /* easyBindings_lexique_1_graphicController */,
    YES /* easyBindings_lexique_1_hidden */,
    YES /* easyBindings_lexique_1_tableValue */,
    YES /* easyBindings_lexique_1_run */,
    YES /* easyBindings_lexique_1__3A_ */,
    YES /* easyBindings_lexique_1__2C_ */,
    YES /* easyBindings_lexique_1__3B_ */,
    YES /* easyBindings_lexique_1__21_ */,
    YES /* easyBindings_lexique_1__5B_ */,
    YES /* easyBindings_lexique_1__5D_ */,
    YES /* easyBindings_lexique_1__7B_ */,
    YES /* easyBindings_lexique_1__7D_ */,
    YES /* easyBindings_lexique_1__28_ */,
    YES /* easyBindings_lexique_1__29_ */,
    YES /* easyBindings_lexique_1__2E_ */,
    YES /* easyBindings_lexique_1__7C_ */,
    YES /* easyBindings_lexique_1__26_ */,
    YES /* easyBindings_lexique_1__3C_ */,
    YES /* easyBindings_lexique_1__3E_ */,
    YES /* easyBindings_lexique_1__3C__3D_ */,
    YES /* easyBindings_lexique_1__3E__3D_ */,
    YES /* easyBindings_lexique_1__21__3D_ */,
    YES /* easyBindings_lexique_1__3D__3D_ */,
    YES /* easyBindings_lexique_1__5E_ */,
    YES /* easyBindings_lexique_1__2D_ */,
    YES /* easyBindings_lexique_1__3D_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 14)) {
    NSString * kStyleArray [14] = {
      @"Default Style",
      @"Keywords",
      @"identifiers",
      @"Identifiers",
      @"Attributes",
      @"Binding Names",
      @"Reserved binding names",
      @"Controller Names",
      @"View Names",
      @"Integer Constants",
      @"Floating Point Constants",
      @"String Constants",
      @"Delimiters",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 14)) {
    NSString * kStyleArray [14] = {
      @"easyBindings_lexique",
      @"easyBindings_lexique-keywordsStyle",
      @"easyBindings_lexique-idfStyle",
      @"easyBindings_lexique-IdfStyle",
      @"easyBindings_lexique-attributeStyle",
      @"easyBindings_lexique-bindingNameStyle",
      @"easyBindings_lexique-reservedBindingNameStyle",
      @"easyBindings_lexique-controllerNameStyle",
      @"easyBindings_lexique-viewNameStyle",
      @"easyBindings_lexique-integerStyle",
      @"easyBindings_lexique-floatStyle",
      @"easyBindings_lexique-stringStyle",
      @"easyBindings_lexique-delimitersStyle",
      @"easyBindings_lexique-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"easyBindings_lexique" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


