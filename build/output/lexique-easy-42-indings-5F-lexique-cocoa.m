//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-easy-42-indings-5F-lexique-cocoa.h"
#import "PMDebug.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@implementation OC_Lexique_easyBindings_lexique

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) indexingDirectory {
  return @"" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Key words table 'lowerCaseKeyWordList'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_cocoa_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [42] = {
  {"no", easyBindings_lexique_1_no},
  {"to", easyBindings_lexique_1_to},
  {"all", easyBindings_lexique_1_all},
  {"yes", easyBindings_lexique_1_yes},
  {"copy", easyBindings_lexique_1_copy},
  {"enum", easyBindings_lexique_1_enum},
  {"root", easyBindings_lexique_1_root},
  {"self", easyBindings_lexique_1_self},
  {"sort", easyBindings_lexique_1_sort},
  {"array", easyBindings_lexique_1_array},
  {"class", easyBindings_lexique_1_class},
  {"prefs", easyBindings_lexique_1_prefs},
  {"toOne", easyBindings_lexique_1_toOne},
  {"action", easyBindings_lexique_1_action},
  {"column", easyBindings_lexique_1_column},
  {"entity", easyBindings_lexique_1_entity},
  {"extern", easyBindings_lexique_1_extern},
  {"filter", easyBindings_lexique_1_filter},
  {"outlet", easyBindings_lexique_1_outlet},
  {"struct", easyBindings_lexique_1_struct},
  {"toMany", easyBindings_lexique_1_toMany},
  {"binding", easyBindings_lexique_1_binding},
  {"default", easyBindings_lexique_1_default},
  {"include", easyBindings_lexique_1_include},
  {"inverse", easyBindings_lexique_1_inverse},
  {"mainxib", easyBindings_lexique_1_mainxib},
  {"version", easyBindings_lexique_1_version},
  {"calledBy", easyBindings_lexique_1_calledBy},
  {"document", easyBindings_lexique_1_document},
  {"property", easyBindings_lexique_1_property},
  {"signature", easyBindings_lexique_1_signature},
  {"transient", easyBindings_lexique_1_transient},
  {"validates", easyBindings_lexique_1_validates},
  {"externFunc", easyBindings_lexique_1_externFunc},
  {"dependsFrom", easyBindings_lexique_1_dependsFrom},
  {"xcodeproject", easyBindings_lexique_1_xcodeproject},
  {"classForSwift", easyBindings_lexique_1_classForSwift},
  {"externDelegate", easyBindings_lexique_1_externDelegate},
  {"arrayController", easyBindings_lexique_1_arrayController},
  {"selectionController", easyBindings_lexique_1_selectionController},
  {"versionShouldChange", easyBindings_lexique_1_versionShouldChange},
  {"customObjectController", easyBindings_lexique_1_customObjectController}
} ;

static NSInteger search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, 42) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Key words table 'reservedBindingNameKeyWordList'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_cocoa_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [4] = {
  {"run", easyBindings_lexique_1_run},
  {"hidden", easyBindings_lexique_1_hidden},
  {"enabled", easyBindings_lexique_1_enabled},
  {"tableValue", easyBindings_lexique_1_tableValue}
} ;

static NSInteger search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, 4) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    mLexicalAttribute_floatValue = 0.0 ;
    [mLexicalAttribute_tokenString setString:@""] ;
    mLexicalAttribute_uint32value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    if (scanningOk && ([self testForInputFromChar:97 toChar:122])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (mTokenCode == 0) {
        mTokenCode = search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if (mTokenCode == 0) {
        mTokenCode = easyBindings_lexique_1_identifier ;
      }
    }else if (scanningOk && ([self testForInputFromChar:65 toChar:90])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      mTokenCode = easyBindings_lexique_1_Identifier ;
    }else if (scanningOk && ([self testForInputChar:36])) {
      do {
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (mTokenCode == 0) {
        mTokenCode = search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if (mTokenCode == 0) {
        mTokenCode = easyBindings_lexique_1_bindingName ;
      }
    }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:46])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
        do {
          if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          }else if (scanningOk && ([self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
        mTokenCode = easyBindings_lexique_1_literal_5F_double ;
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
        mTokenCode = easyBindings_lexique_1_literal_5F_integer ;
      }
    }else if (scanningOk && ([self testForInputChar:34])) {
      do {
        if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:34])) {
        mTokenCode = easyBindings_lexique_1_literal_5F_string ;
      }else{
        scanningOk = NO ;
      }
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
    }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
      mTokenCode = easyBindings_lexique_1__3C_ ;
    }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
      mTokenCode = easyBindings_lexique_1__3B_ ;
    }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
      mTokenCode = easyBindings_lexique_1__3A_ ;
    }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
      mTokenCode = easyBindings_lexique_1__2E_ ;
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
    }else if (scanningOk && ([self testForInputChar:35])) {
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      mTokenCode = easyBindings_lexique_1_comment ;
    }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
    }else if ([self testForInputChar:'\0']) { // End of source text ? 
      mTokenCode = easyBindings_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      scanningOk = NO ;
      [self advance] ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) terminalVocabularyCount {
  return 69 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) styleCount {
  return 11 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (BOOL) isTemplateLexique {
  return NO ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [70] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1_bindingName */,
    6 /* easyBindings_lexique_1_literal_5F_integer */,
    7 /* easyBindings_lexique_1_literal_5F_double */,
    8 /* easyBindings_lexique_1_literal_5F_string */,
    10 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_array */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_copy */,
    1 /* easyBindings_lexique_1_customObjectController */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_document */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_filter */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_prefs */,
    1 /* easyBindings_lexique_1_property */,
    1 /* easyBindings_lexique_1_root */,
    1 /* easyBindings_lexique_1_selectionController */,
    1 /* easyBindings_lexique_1_self */,
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sort */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_to */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_validates */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    5 /* easyBindings_lexique_1_enabled */,
    5 /* easyBindings_lexique_1_hidden */,
    5 /* easyBindings_lexique_1_tableValue */,
    5 /* easyBindings_lexique_1_run */,
    9 /* easyBindings_lexique_1__3A_ */,
    9 /* easyBindings_lexique_1__2C_ */,
    9 /* easyBindings_lexique_1__3B_ */,
    9 /* easyBindings_lexique_1__21_ */,
    9 /* easyBindings_lexique_1__5B_ */,
    9 /* easyBindings_lexique_1__5D_ */,
    9 /* easyBindings_lexique_1__7B_ */,
    9 /* easyBindings_lexique_1__7D_ */,
    9 /* easyBindings_lexique_1__28_ */,
    9 /* easyBindings_lexique_1__29_ */,
    9 /* easyBindings_lexique_1__2E_ */,
    9 /* easyBindings_lexique_1__7C_ */,
    9 /* easyBindings_lexique_1__26_ */,
    9 /* easyBindings_lexique_1__3C_ */,
    9 /* easyBindings_lexique_1__3E_ */,
    9 /* easyBindings_lexique_1__5E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [70] = {NO,
    YES /* easyBindings_lexique_1_identifier */,
    YES /* easyBindings_lexique_1_Identifier */,
    YES /* easyBindings_lexique_1_bindingName */,
    YES /* easyBindings_lexique_1_literal_5F_integer */,
    YES /* easyBindings_lexique_1_literal_5F_double */,
    NO /* easyBindings_lexique_1_literal_5F_string */,
    NO /* easyBindings_lexique_1_comment */,
    YES /* easyBindings_lexique_1_action */,
    YES /* easyBindings_lexique_1_all */,
    YES /* easyBindings_lexique_1_array */,
    YES /* easyBindings_lexique_1_arrayController */,
    YES /* easyBindings_lexique_1_binding */,
    YES /* easyBindings_lexique_1_calledBy */,
    YES /* easyBindings_lexique_1_class */,
    YES /* easyBindings_lexique_1_classForSwift */,
    YES /* easyBindings_lexique_1_column */,
    YES /* easyBindings_lexique_1_copy */,
    YES /* easyBindings_lexique_1_customObjectController */,
    YES /* easyBindings_lexique_1_default */,
    YES /* easyBindings_lexique_1_dependsFrom */,
    YES /* easyBindings_lexique_1_document */,
    YES /* easyBindings_lexique_1_enum */,
    YES /* easyBindings_lexique_1_entity */,
    YES /* easyBindings_lexique_1_extern */,
    YES /* easyBindings_lexique_1_externDelegate */,
    YES /* easyBindings_lexique_1_externFunc */,
    YES /* easyBindings_lexique_1_filter */,
    YES /* easyBindings_lexique_1_include */,
    YES /* easyBindings_lexique_1_inverse */,
    YES /* easyBindings_lexique_1_mainxib */,
    YES /* easyBindings_lexique_1_no */,
    YES /* easyBindings_lexique_1_outlet */,
    YES /* easyBindings_lexique_1_prefs */,
    YES /* easyBindings_lexique_1_property */,
    YES /* easyBindings_lexique_1_root */,
    YES /* easyBindings_lexique_1_selectionController */,
    YES /* easyBindings_lexique_1_self */,
    YES /* easyBindings_lexique_1_signature */,
    YES /* easyBindings_lexique_1_sort */,
    YES /* easyBindings_lexique_1_struct */,
    YES /* easyBindings_lexique_1_to */,
    YES /* easyBindings_lexique_1_toMany */,
    YES /* easyBindings_lexique_1_toOne */,
    YES /* easyBindings_lexique_1_transient */,
    YES /* easyBindings_lexique_1_validates */,
    YES /* easyBindings_lexique_1_version */,
    YES /* easyBindings_lexique_1_versionShouldChange */,
    YES /* easyBindings_lexique_1_xcodeproject */,
    YES /* easyBindings_lexique_1_yes */,
    YES /* easyBindings_lexique_1_enabled */,
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
    YES /* easyBindings_lexique_1__5E_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 11)) {
    NSString * kStyleArray [11] = {
      @"Default Style",
      @"Keywords",
      @"identifiers",
      @"Identifiers",
      @"Binding Names",
      @"Reserved binding names",
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 11)) {
    NSString * kStyleArray [11] = {
      @"easyBindings_lexique",
      @"easyBindings_lexique-keywordsStyle",
      @"easyBindings_lexique-idfStyle",
      @"easyBindings_lexique-IdfStyle",
      @"easyBindings_lexique-bindingNameStyle",
      @"easyBindings_lexique-reservedBindingNameStyle",
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) lexiqueIdentifier {
  return @"easyBindings_lexique" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


